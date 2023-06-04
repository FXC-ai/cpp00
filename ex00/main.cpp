#include <string>
#include <iostream>


int main (int argc, char **argv)
{
	int i(0);
	int j(0);

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << (char) std::toupper(argv[i][j]);
				j++;
			}
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}


	return 0;
}