/// @file   AMateria.cpp
/// @author minakim
/// @date   23-Mar-2024

#include "AMateria.h"

/// @brief	constructor
AMateria::AMateria(void)
	: _type("non-elemental")
{
}

AMateria::AMateria(std::string const &type)
	:_type(type)
{
}

/// @brief	copy constructor
AMateria::AMateria(const AMateria &other)
{
	_type = other.getType();
}

/// @brief	destructor
AMateria::~AMateria(void)
{
}

/// @brief	operator
AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		_type = other.getType();
	}
	return (*this);
}
/// @brief	public
const std::string & AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria `" << getType() << "` used by " << target.getName() << std::endl;
}
