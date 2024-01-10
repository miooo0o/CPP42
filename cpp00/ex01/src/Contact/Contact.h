#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <map>

using namespace std;

typedef enum ContactField {
	FirstName,
	LastName,
	NickName,
	PhoneNumber,
	DarkestSecret,
	InvalidField
}	ContactField;

/// It can store a maximum of 8 contacts.
/// If the user tries to add a 9th contact, replace the oldest one by the new one.
class Contact {
public:
	Contact();
	~Contact();

	bool	setIndex(const int index);
	bool	setField(ContactField field, const string input);

private:
	int		_index;
	string	_firstName;
	string	_lastName;
	string	_nickname;
	string	_phoneNumber;
	string	_darkestSecret;
	
	void initFieldMap();
};

#endif
