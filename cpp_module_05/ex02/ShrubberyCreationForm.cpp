/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:00:27 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/19 06:48:02 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <ostream>
#include <fstream>

// constructors
ShrubberyCreationForm::ShrubberyCreationForm(): AForm("the Shrubbery Creation Form", false, 137, 145), target("target")
{
	// std::cout << "Default constructor call\n";
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string tree):AForm("the Shrubbery Creation Form", false, 137, 145), target(tree)
{
	// std::cout << "Parameter constructor call\n";
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj): AForm("the Shrubbery Creation Form", false, 5, 25)
{
	// std::cout << "copy constructor call\n";
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
	// std::cout << "destructor call\n";
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (getIsSigned() == false)
		throw ("the form is not signed\n");
	if (executor.getGrade() > getExecuteGrade())
		throw ("the bureaucrate's grade isn't enough to execute the form\n");
	std::string file_name(target);
    file_name.append("_shrubbery");
	std::ofstream out(file_name);
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