#include "easyfind.hpp"

notFoundExeption::notFoundExeption(){};

notFoundExeption::~notFoundExeption() throw() {};

notFoundExeption::notFoundExeption(const notFoundExeption &nfe){
    *this = nfe;
};

notFoundExeption &notFoundExeption::operator = (const notFoundExeption &nfe){
    (void)nfe;
    return *this;
};

const char* notFoundExeption::what() const throw(){
    return "Exception: number not found";
}

int main()
{
	std::list<int> vec;
	try {
		std::list<int>::iterator it = easyFind(vec, 12);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	vec.push_back(10);
	vec.push_back(150);
	vec.push_back(180);
	vec.push_back(-9);
	vec.push_back(20);
	std::list<int>::iterator itr = easyFind(vec, 180);
	std::cout << *itr << std::endl;
	try {
		std::list<int>::iterator itr = easyFind(vec, 20);
		std::cout << *itr << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::vector<int> vec2;
	vec2.push_back(10);
	vec2.push_back(100);
	vec2.push_back(15);
	vec2.push_back(13);
	vec2.push_back(-10);
	std::cout << *easyFind(vec2, 15) << std::endl;
	try {
		std::vector<int>::iterator itr = easyFind(vec2, -100);
		std::cout << *itr << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
