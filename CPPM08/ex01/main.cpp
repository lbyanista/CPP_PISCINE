#include "span.hpp"

template<class Iter> void func(Iter begin, Iter end)
{
    while(begin != end)
    {
        std::cout << *begin++ << std::endl;
    }
}


int main()
{
    Span sp = Span(5);
    Span sp2 = sp;
    
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;        
    }
    sp.addNumber(3);
    try
    {
       std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;        
    }
    sp.addNumber(5);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.addNumber(17);
    try
    {
        sp.addNumber(1999);// will throw an error > span has (5) place
    }
    catch(const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << sp.shortestSpan()<< std::endl;
    std::cout << sp.longestSpan() << std::endl;
    Span long_sp = Span(10000);
    std::vector<int> a;
    int i = -1;
    while (++i < 10000)
        a.push_back(rand() % 600000);
    long_sp.addNumber(a.begin(), a.end());
    try{
        long_sp.addNumber(a.begin(), a.end());
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}