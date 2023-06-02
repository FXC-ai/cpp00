#include <iostream>
#include <string>
#include <cmath>
#include <vector>


double calculate_mean(double tab[], int size)
{
	double total(0);
	int	i;


	for (i = 0; i < size ;++i)
	{
		total += tab[i];
		std::cout << i << std::endl;
	}

	return total / size;
}

double calculate_mean2(std::vector<int>& tableau)
{
	unsigned int i(0);
	int total(0);

	for (i = 0; i < tableau.size(); i++)
	{
		total += tableau[i];
	}

	total /= tableau.size();

	std::cout << "moyenne = " << total <<std::endl;

	return total;

}


int main ()
{
	double moyenne(0);
	double tab[5];
	int    i;

	i = 5;
	tab[0] = 3.14159;
	tab[1] = -1;
	tab[2] = 0;
	tab[3] = 1;
	tab[4] = 2.71828;

	moyenne = calculate_mean(tab, i);

	std::cout << moyenne <<std::endl;

	std::vector<int> tableau(5, 3);

	std::cout << "tableau[1] = " << tableau[1] <<std::endl;

	tableau.push_back(8);
	tableau.push_back(42000);
	tableau.push_back(8);

	std::cout << "tableau[5] = " << tableau[5] <<std::endl;

	int taille(tableau.size());
	std::cout << "size tableau = " << taille <<std::endl;
	tableau.pop_back();

	taille = tableau.size();
	std::cout << "size tableau = " << taille <<std::endl;

	calculate_mean2(tableau);

	return 0;
}