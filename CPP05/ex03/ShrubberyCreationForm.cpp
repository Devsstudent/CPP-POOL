/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:44:40 by odessein          #+#    #+#             */
/*   Updated: 2023/03/01 14:15:29 by odessein         ###   ########.fr       */
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

// Methods
void	ShrubberyCreationForm::CreationForm(void) const
{
	std::ofstream	outfile;
	std::string		name;

	name.append(target);
	name.append("_shrubbery");
	outfile.open(name.c_str());
	if (!outfile)
		return ;
	outfile << "              _{\\ _{\\{\\/}/}/}__ " << std::endl;
	outfile << "             {/{/\\}{/{/\\}(\\}{/\\} _ " << std::endl;
	outfile << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _ " << std::endl;
	outfile << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\} " << std::endl;
	outfile << "        {/{/(_)/}{\\{/)\\}{\(_){/}/}/}/} " << std::endl;
	outfile << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/} " << std::endl;
	outfile << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\} " << std::endl;
	outfile << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\} " << std::endl;
	outfile << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\} " << std::endl;
	outfile << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/} " << std::endl;
	outfile << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_) " << std::endl;
	outfile << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/} " << std::endl;
	outfile << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\} " << std::endl;
	outfile << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\} " << std::endl;
	outfile << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_) " << std::endl;
	outfile << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/} " << std::endl;
	outfile << "             {/{\\{\\{\\/}/}{\\{\\}/} " << std::endl;
	outfile << "              {){/ {\\/}{\\/} \\}\\} " << std::endl;
	outfile << "              (_)  \\.-'.-/ " << std::endl;
	outfile << "          __...--- |'-.-'| --...__ " << std::endl;
	outfile << "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__ " << std::endl;
	outfile << " -\"    ' .  . '    |.'-._| '  . .  '   jro " << std::endl;
	outfile << " .  '-  '    .--'  | '-.'|    .  '  . ' " << std::endl;
	outfile << "          ' ..     |'-_.-| " << std::endl;
	outfile << "  .  '  .       _.-|-._ -|-._  .  '  . " << std::endl;
	outfile << "              .'   |'- .-|   '. " << std::endl;
	outfile << "  ..-'   ' .  '.   `-._.-�   .'  '  - . " << std::endl;
	outfile << "   .-' '        '-._______.-'     '  . " << std::endl;
	outfile << "        .      ~, " << std::endl;
	outfile << "    .       .   |\\   .    ' '-." << std::endl;
}
