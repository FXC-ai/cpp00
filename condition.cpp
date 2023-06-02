#include <iostream>
#include <string>
#include <cmath>

int main ()
{
	int	n1;
	int	n2;

	std::cout << "nb1 : ";
	std::cin >> n1;
	std::cout << "nb2 : ";
	std::cin >> n2;

	if (n1 >= 0)
	{
		std::cout << "POSITIF !! " << std::endl;
	}
	else
	{
		std::cout << "NEGATIF !! " << std::endl;
	}

	if (n1 < 0 or n2 < 0)
	{
		std::cout << "ONE NEGATIV !! " << std::endl;

	}


	return 0;
}