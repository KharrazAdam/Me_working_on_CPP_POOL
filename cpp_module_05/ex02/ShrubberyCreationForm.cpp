/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:00:27 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/18 06:17:11 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <ostream>
#include <fstream>

// constructors
ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "Default constructor call\n";
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string tree):target(tree)
{
	std::cout << "Parameter constructor call\n";
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
{
	std::cout << "copy constructor call\n";
	(*this) = obj;
}
// copy assignment operator
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	target = obj.target;
    return (*this);
}
// destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "destructor call\n";
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string file_name(target);
    file_name.append("_shrubbery");
	std::ofstream out(file_name);
	(void)executor; // to change later
	out << "                  _{\\ _{\\{\\/}/}/}__\n";
	out << "             {/{/\\}{/{/\\}(\\}{/\\} _\n";
	out << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n";
	out << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n";
	out << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n";
	out << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n";
	out << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n";
	out << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n";
	out << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n";
	out << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n";
	out << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n";
	out << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n";
	out << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n";
	out << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n";
	out << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n";
	out << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n";
	out << "             {/{\\{\\{\\/}/}{\\{\\}/}\n";
	out << "              {){/ {\\/}{\\/} \\}\\}\n";
	out << "              (_)  \\.-'.-/\n";
	out << "          __...--- |'-.-'| --...__\n";
	out << "   _...--\"   .-    |'-.-'|  ' -.  ""--..__\n";
	out << " -\"    ' .  . '    |.'-._| '  . .      \n";
	out << " .  '-  '    .--'  | '-.'|    .  '  . '\n";
	out << "          ' ..     |'-_.-|\n";
	out << "  .  '  .      _.- |-._ -|-._  .  '  .\n";
	out << "             .'    |'- .-|   '.\n";
	out << "  ..-'   ' . '.    `-._.-|   .'  '  - .\n";
	out << "   .-' '        '-._______.-'     '  .\n";
	out << "        .      ~,\n";
	out << "    .       .   |\\   .    ' '-.\n";
}