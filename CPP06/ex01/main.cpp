#include "Serializer.hpp"

int	main(void)
{
	Data		test;
	uintptr_t	buff;
	Data		*buff2;

	test.content = "12";
	buff = Serializer::serialize(&test);
	buff2 = Serializer::deserialize(buff);
	std::cout << buff2->content << std::endl;
}
