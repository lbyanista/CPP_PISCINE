#include "span.hpp"
#include <vector>

template<class Iter> void func(Iter first, Iter last)
{
    while(first != last)
    {
        cout << *first++ << endl;
    }
}


int main()
{
    Span sp = Span(5);
    Span sp2 = sp;
    
    try
    {
        cout << sp.shortestSpan() << endl;
    }
    catch(const std::exception& ex)
    {
        cout << ex.what() << endl;        
    }
    sp.addNumber(3);
    try
    {
        cout << sp.longestSpan() << endl;
    }
    catch(const std::exception& ex)
    {
        cout << ex.what() << endl;        
    }
    sp.addNumber(5);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.addNumber(17);
    try
    {
        sp.addNumber(1221);// will throw an error
    }
    catch(const std::exception& ex)
    {
        cout << ex.what() << endl;
    }
    cout << sp.shortestSpan()<< endl;
    cout << sp.longestSpan() << endl;
    Span long_sp = Span(10000);
    std::vector<int> a;
    int i = -1;
    while (++i < 10000)
        a.push_back(rand() % 566666);
    long_sp.addNumber(a.begin(), a.end());
    try{
        long_sp.addNumber(a.begin(), a.end());
    }catch(std::exception &e){
        cout << e.what() << endl;
    }
}