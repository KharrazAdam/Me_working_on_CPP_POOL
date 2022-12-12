#if !defined(CONTACT_HPP)
#define CONTACT_HPP

// MACROS
enum ice_crem{
	MAX_CONTACTS = 2,
	PHONE_NUMBER   ,
    STRING         

};

// includes 
	# include <iostream>
    # include <cctype>

class Contact
{
	private:
        int         id;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	
	public :
		void		set(int);
		void		get(void);
        void        creat_table(void);
        void        display(void);
};

#endif // CONTACT_HPP
