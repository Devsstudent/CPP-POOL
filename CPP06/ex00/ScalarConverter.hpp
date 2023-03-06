#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <limits>
#include <iomanip>


class  ScalarConverter {
    public:
       ScalarConverter(void);
       ScalarConverter(const ScalarConverter &a);
       ScalarConverter & operator = (const ScalarConverter &a);
       ~ScalarConverter(void);
       static void  convert(const std::string input);
};
