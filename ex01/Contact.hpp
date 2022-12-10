#if !defined(CONTACT_HPP)
#define CONTACT_HPP

// MACROS
	# define MAX_CONTACTS 8

// includes 
	# include <iostream>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		
	public :
		void		set(void);
		void		get(void);
};

#endif // CONTACT_HPP
