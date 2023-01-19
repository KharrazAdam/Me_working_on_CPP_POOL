#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string target;
public:
	// constructors
	PresidentialPardonForm(/* args */);
	PresidentialPardonForm(std::string);
	PresidentialPardonForm(const PresidentialPardonForm&);
	// copy assignment operator
	PresidentialPardonForm& operator =(const PresidentialPardonForm&);
	// destructor
	~PresidentialPardonForm();
	// member public function
	void execute(Bureaucrat const & executor) const;
};

#endif // PRESIDENTIALPARDONFORM_HPP