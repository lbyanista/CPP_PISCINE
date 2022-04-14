#include <iostream>

class A {
    public:
     void a() {
        std::cout <<"A\n";
    }
};

class B : public A {
    public:
    void a() {
        std::cout <<"B\n";
    }
};

int main(void){

    // A *a = new B();
    // a->a();

    B b;
    b.a();

    return 0;
}