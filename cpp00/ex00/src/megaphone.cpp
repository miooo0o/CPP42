#include <iostream>
#include <cctype>
#include <cstring>

typedef int (*f_trans_to)(int);

std::string	ft_transform(char *str, f_trans_to f)
{
	std::string	res(str);
	for (size_t i = 0; i < res.size() && i < std::strlen(str); i++)
		res[i] = f(str[i]);
	return (res);
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::cout << ft_transform(av[i], toupper);
			if (i < ac - 1)
				std::cout << ' ';
		}
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}