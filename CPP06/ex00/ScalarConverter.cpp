#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
  
}

ScalarConverter::ScalarConverter(const ScalarConverter &a)
{
  (void) a;
}

ScalarConverter &ScalarConverter::operator = (const ScalarConverter &a)
{
  (void) a;
  return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
  
}
//function
  //check nan
  //check nanf
  //check -inf
  //check +inf

static void  ScalarConverter::convert(const std::string name)
{
  //convert  char
  //convert  int
  //convert  float
  //convert  double
}
