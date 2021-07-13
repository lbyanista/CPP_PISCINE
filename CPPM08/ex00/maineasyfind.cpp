#include "easyfind.hpp"

notFoundExeption::notFoundExeption(){};

notFoundExeption::~notFoundExeption() throw() {};

notFoundExeption::notFoundExeption(const notFoundExeption &ast)
{
    *this = ast;
};
notFoundExeption &notFoundExeption::operator = (const notFoundExeption &ic)
{
    (void)ic;
    return *this;
};
const char* notFoundExeption::what() const throw()
{
    return "Exception: number not found";
}
