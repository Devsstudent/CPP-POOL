#include <iostream>
#include <string>


class  ScalarConverter {
    public:
       ScalarConverter(void);
       ScalarConverter(const ScalarConverter &a);
       ScalarConverter & operator = (const ScalarConverter &a);
       ~ScalarConverter(void);
       static void  convert(const std::string input);
};
