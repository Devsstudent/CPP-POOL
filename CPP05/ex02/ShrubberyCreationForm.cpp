/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:44:40 by odessein          #+#    #+#             */
/*   Updated: 2023/02/28 18:47:06 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm(const std::string _target): AForm("ShrubberyCreationForm", 145, 137), target(_target) {
	std::cout << "ShrubberyCreationForm Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &a): AForm(a.getName(), a.getGradeSign(), a.getGradeExec()), target(a.target)
{
	std::cout << "ShrubberyCreationForm Constructor Called" << std::endl;
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm Destructor Called" << std::endl;
}


// Getters

// Setters

// Operators
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &a)
{

	return (*this);
}

// Methods
void	ShrubberyCreationForm::CreationForm(void)
{
std::ofstream	outfile;

outfile.open(target + "_shrubbery"); 
output << "              _{\ _{\{\/}/}/}__ " << std::endl;
output << "             {/{/\}{/{/\}(\}{/\} _ " << std::endl;
output << "            {/{/\}{/{/\}(_)\}{/{/\}  _ " << std::endl;
output << "         {\{/(\}\}{/{/\}\}{/){/\}\} /\} " << std::endl;
output << "        {/{/(_)/}{\{/)\}{\(_){/}/}/}/} " << std::endl;
output << "       _{\{/{/{\{/{/(_)/}/}/}{\(/}/}/} " << std::endl;
output << "      {/{/{\{\{\(/}{\{\/}/}{\}(_){\/}\} " << std::endl;
output << "      _{\{/{\{/(_)\}/}{/{/{/\}\})\}{/\} " << std::endl;
output << "     {/{/{\{\(/}{/{\{\{\/})/}{\(_)/}/}\} " << std::endl;
output << "      {\{\/}(_){\{\{\/}/}(_){\/}{\/}/})/} " << std::endl;
output << "       {/{\{\/}{/{\{\{\/}/}{\{\/}/}\}(_) " << std::endl;
output << "      {/{\{\/}{/){\{\{\/}/}{\{\(/}/}\}/}
output << "       {/{\{\/}(_){\{\{\(/}/}{\(_)/}/}\} " << std::endl;
output << "         {/({/{\{/{\{\/}(_){\/}/}\}/}(\} " << std::endl;
output << "          (_){/{\/}{\{\/}/}{\{\)/}/}(_) " << std::endl;
output << "            {/{/{\{\/}{/{\{\{\(_)/} " << std::endl;
output << "             {/{\{\{\/}/}{\{\\}/} " << std::endl;
output << "              {){/ {\/}{\/} \}\} " << std::endl;
output << "              (_)  \.-'.-/ " << std::endl;
output << "          __...--- |'-.-'| --...__ " << std::endl;
output << "   _...--"   .-'   |'-.-'|  ' -.  ""--..__ " << std::endl;
output << " -"    ' .  . '    |.'-._| '  . .  '   jro " << std::endl;
output << " .  '-  '    .--'  | '-.'|    .  '  . ' " << std::endl;
output << "          ' ..     |'-_.-|
output << "  .  '  .       _.-|-._ -|-._  .  '  . " << std::endl;
output << "              .'   |'- .-|   '. " << std::endl;
output << "  ..-'   ' .  '.   `-._.-�   .'  '  - . " << std::endl;
output << "   .-' '        '-._______.-'     '  . " << std::endl;
output << "        .      ~, " << std::endl;
output << "    .       .   |\   .    ' '-." << std::endl;
}