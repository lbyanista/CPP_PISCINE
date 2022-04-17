#ifndef SERIAL_HPP
#define SERIAL_HPP

#include <iostream>

#define cout std::cout
#define ln std::endl
#define string std::string

typedef struct data
{
    int i;
    int j;
}Data;


uintptr_t serialize(Data* ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
    return (reinterpret_cast<Data*>(raw));
}

#endif