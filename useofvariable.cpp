#include <iostream>
#include <string>


int main ()
{

	std::cout << "Exemple d'utilisation de CPP" <<std::endl;

	int	age;
	std::cout << "Quel est ton age ?";
	std::cin >> age;

	std::cin.ignore();

	std::string prenom;
	std::cout << "Quel est ton prenom ?";
	getline(std::cin, prenom);

	double pi;
	std::cout << "Combien vaut pi ?";
	std::cin >> pi;
	
	int& ptr_age(age);

	std::cout << "Hello " << prenom << " tu as " << ptr_age << " ans." <<std::endl;
	std::cout << "Tu pense que pi = " << pi <<std::endl;

	pi = 3.14159;

	std::cout << "En fait la vrai value de pi est " << pi <<std::endl;

	std::cout <<std::endl;
	std::cout << "Exemple d'affectations de CPP" <<std::endl;

    int a(4), b(5); //Déclaration de deux variables

    std::cout << "a vaut : " << a << " et b vaut : " << b <<std::endl;

    std::cout << "Affectation !" <<std::endl;
    a = b; //Affectation de la valeur de 'b' à 'a'.

    std::cout << "a vaut : " << a << " et b vaut : " << b << std::endl;

	b = 42;

    std::cout << "a vaut : " << a << " et b vaut : " << b << std::endl;
	

	return 0;

}