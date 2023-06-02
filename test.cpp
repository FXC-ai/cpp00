#include <iostream>
#include <string>
 
int main()
{
    std::string maChaine("Premier test");

	std::cout << maChaine <<std::endl;

	int size(maChaine.size());
	
	std::cout << size <<std::endl;

	std::string maChaine2(maChaine.substr(0,10));

	std::cout << maChaine2 <<std::endl;

    return 0;
}