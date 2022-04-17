#include "serial.hpp"

int main(void){
    Data *d =  new Data();
    Data *d1;
    uintptr_t t;

    d->j = 4;
    d->i = 5;
    cout << d->i << ln;
    cout << d->j << ln;
    t = serialize(d);
    cout << d << ln;

    d1 = deserialize(t);

    cout << "************" << ln;
    cout << d1 << ln;
    cout << d1->i << ln;
    cout << d1->j << ln;
    
    return 0;
}