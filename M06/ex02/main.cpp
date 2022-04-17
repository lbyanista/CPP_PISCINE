#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void){
    Base *b = NULL;
    srand(time(NULL));
    int i = (rand() % 3) + 1;
    switch (i)
    {
    case 1:
        b = new A();
        break;
    case 2:
        b = new B();
        break;
    case 3:
        b = new C();
        break;
    default:
        break;
    }
    return b;
}

void identify(Base* p){
    if (dynamic_cast<A*>(p))
        cout << "A" << ln;
    if(dynamic_cast<B*>(p))
        cout << "B" << ln;
    if(dynamic_cast<C*>(p))
        cout << "C" << ln;
}

void identify(Base& p)
{
  try
  {
    p = dynamic_cast<A&>(p);
    cout << "A" << ln;
  }
  catch(const std::bad_cast& e)
  {
    static_cast<void>(e);
  }
  try
  {
    p = dynamic_cast<B&>(p);
    cout << "B" << ln;
  }
  catch(const std::bad_cast& e)
  {
    static_cast<void>(e);
  }
  try
  {
    p = dynamic_cast<C&>(p);
    cout << "C" << ln;
  }
  catch(const std::bad_cast& e)
  {
    static_cast<void>(e);
  }  
}

int main(void){
    
  Base *p = generate();
  Base &p2 = *p;
  identify(p);
  identify(p2);
  delete p;
  return (0);
}