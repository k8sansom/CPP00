#include <iostream>
//#include <cctype>

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	for (int i = 1; i < ac; i++)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
			std::cout << (char)std::toupper(av[i][j]);
	}
	std::cout << "\n";
	return (0);
}