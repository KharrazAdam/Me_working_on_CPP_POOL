#if !defined(PHONEBOOK_HPP)
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact[MAX_CONTACTS];
	public:
		void	set(int);
		void	get(int);
        void    ask_contact_id(int i);
};

#endif // PHONEBOOK_HPP
