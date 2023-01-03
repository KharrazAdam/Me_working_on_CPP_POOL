#include "Harl.hpp"

Harl::Harl()
{
	;
}

Harl::~Harl()
{
	;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << '\n';
}

void	Harl::info(void)
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << '\n';
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << '\n';
}

void	Harl::error( void )
{
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << '\n';   
}

void Harl::complain(std::string s)
{
	int index = ((s == "DEBUG") * 1 + (s == "INFO") * 2 + (s == "WARNING") * 3 + (s == "ERROR") * 4 ) - 1;
    
	void (Harl::*pointer_name[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    switch (index)
    {
    case 0:
        (this->*pointer_name[index++])();
    case 1:
        (this->*pointer_name[index++])();
    case 2:
        (this->*pointer_name[index++])();
    case 3:
        (this->*pointer_name[index])();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]\n";
        break ;
    }
}
