#include <iostream>
#include <string>
#include <cmath>


int calcule_seconds(int heures = 0, int minutes = 0, int secondes = 0)
{

	int total;

	total = heures * 3600;
	total += minutes * 60;
	total += secondes;

	return total;
}




int main ()
{
	int i;
	int	n1;
	int	n2;

	std::cout << "nb1 : ";
	std::cin >> n1;

	std::cout << "nb2 : ";
	std::cin >> n2;

	for (i = 0; n1 < n2; i++)
	{
		n1++;
		std::cout << n1 <<std::endl;
	}

	n2 = calcule_seconds(0,2,25);
	std::cout << n2 <<std::endl;


	return 0;
}