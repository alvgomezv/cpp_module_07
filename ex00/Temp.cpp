#include<Temp.hpp>

Temp::Temp()
{
    // std::cout << "Default constructor called" << std::endl;
}

Temp::Temp(Temp const &other)
{
    *this = other;
    // std::cout << "Copy constructor called" << std::endl;
}

Temp &Temp::operator=(Temp const &other)
{
    // std::cout << "Assignation operator called" << std::endl;
    return *this;
}

Temp::~Temp()
{
    // std::cout << "Destructor called" << std::endl;
}

void    Temp::swap(T *a, T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
}

T const Temp::min(T const a, T const b)
{
    if (a <= b)
        return a;
    return b;    
}

T const Temp::max(T const a, T const b)
{
    if (b >= a)
        return b;
    return a;    
}