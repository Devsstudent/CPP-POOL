# include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(1);
	mstack.push(123);
	mstack.push(1234);
	mstack.push(12345);
	mstack.push(123456);
	mstack.push(1234567);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	while (!s.empty())
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}
}

// int main()
// {
// 	std::stack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << "last value: " << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << "size : " << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	while (!mstack.empty())
// 	{
// 		std::cout << mstack.top() << std::endl;
// 		mstack.pop();
// 	}
// 	//std::stack<int> s(mstack);
// 	return 0;
// }
