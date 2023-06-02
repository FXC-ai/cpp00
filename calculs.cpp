#include <iostream>
#include <string>
#include <cmath>

int main ()
{
	int	n1;
	int	const n2(42);
	int	result;

	std::cout << "nb1 : ";
	std::cin >> n1;

	result = n1 + n2;
	std::cout << "      addition = " << result <<std::endl;
	result = n1 - n2;
	std::cout << "  soustraction = " << result <<std::endl;
	result = n1 * n2;
	std::cout << "multiplication = " << result <<std::endl;
	result = n1 / n2;
	std::cout << "      division = " << result <<std::endl;
	result = n1 % n2;
	std::cout << "        modulo = " << result <<std::endl;
	result = sqrt(n1);
	std::cout << "  racine carre = " << result <<std::endl;
	result = pow(n1, 2);
	std::cout << "         carre = " << result <<std::endl;



	return 0;
}