#include "PmergeMe.hpp"

template <class T> void sort_pair(T &a)
{
	for (typename T::iterator it = a.begin(); it != a.end(); it++)
	{
		if (it->second < it->first && it->second != -1)
		{
			int	tmp;
			tmp = it->second;
			it->second = it->first;
			it->first = tmp;
		}
	}
};

template <class T> bool	add(int ac, char **av, T &a)
{
	int			i = 1;
	long int	buff_val;
	std::pair<int, int>	buff_pair;

	while (i < ac)
	{
		std::string	buff = av[i];
		if (buff.length() > 11)
			return (false);
		else
		{
			buff_val = atol(av[i++]);
			if (buff_val > 2147483647 || buff_val < -2147483648)
				return (false);
			buff_pair.first = buff_val;
			if (i < ac)
			{
				buff_val = atol(av[i++]);
				if (buff_val > 2147483647 || buff_val < -2147483648)
					return (false);
				buff_pair.second = buff_val;
			}
			else
			{
				buff_pair.second = -1;
				a.push_back(buff_pair);
				break ;
			}
		}
		a.push_back(buff_pair);
	}
	return (true);
};

template <class T> void display_before(T &a)
{
	std::cout << "Before : ";
	for (typename T::iterator it = a.begin(); it != a.end(); it++)
	{
		std::cout << it->first << " ";
		if (it->second != -1)
			std::cout << it->second << " ";
	}
	std::cout << std::endl;
};

template <class T> void display_after(T &a)
{
	std::cout << "After : ";
	for (typename T::iterator it = a.begin(); it != a.end(); it++)
		std::cout << it->first << " ";
	std::cout << std::endl;
};

template <class T> int	binarySearch(T &a, int value, int L, int R)
{
	if (abs(L - R) <= 1)
		return (L);
	int	mid = (L + R) / 2 - 1;
	if (value > a[mid].first)
		return (binarySearch(a, value, mid + 1, R));
	else
		return (binarySearch(a, value, L, mid));
};

template <class T> void	insert(T &a, int value, int index)
{
	std::pair<int, int>	pair;

	pair.first = value;
	pair.second = -1;

	if (value > a[index].first)
	{
		if (a.begin() + index < a.end())
			a.insert(a.begin() + index + 1, pair);
		else
			a.insert(a.begin() + index, pair);
	}
	else
		a.insert(a.begin() + index, pair);
};

template <class T, class G> void	binaryInsertSort(T &a, G &toInsert)
{
	typename G::iterator elem;
	int	index;
	PmergeMe	jacob;
	while (!toInsert.empty())
	{
		elem = jacob.GetPos(toInsert);
		if (elem != toInsert.end())
		{
			index = binarySearch(a, *elem, 0, a.size());
			insert(a, *elem, index);
			toInsert.erase(elem);
		}
		else
		{
			index = binarySearch(a, *(toInsert.begin()), 0, a.size());
			insert(a, *(toInsert.begin()), index);
			toInsert.erase(toInsert.begin());
		}
	}
};

template <class T> void merge(T &a, int beg, int mid, int end)
{
	int	left = mid - beg + 1;
	int	right = end - mid;

	int	*half_left = new int[left];
	int	*half_right = new int[right];

	for (int i = 0; i < left; i++)
		half_left[i] = a[beg + i].first;
	for (int i = 0; i < right; i++)
		half_right[i] = a[mid + 1 + i].first;

	int i = 0;
	int j = 0;
	int k = beg;
	while ( i < left && j < right)
	{
		if (half_left[i] <= half_right[j])
		{
			a[k].first = half_left[i];
			i++;
		}
		else {
			a[k].first = half_right[j];
			j++;
		}
		k++;
	}
	while (i < left) {
		a[k].first = half_left[i];
		i++;
		k++;
	}
	while (j < right) {
		a[k].first = half_right[j];
		j++;
		k++;
	}
	delete[] half_left;
	delete[] half_right;
}

template <class T> void merge_sort(T &a, int beg, int end)
{
	if (beg < end)
	{
		int mid = (beg + end) / 2;
		merge_sort(a, beg, mid);
		merge_sort(a, mid + 1, end);
		merge(a, beg, mid, end);
	}
}
