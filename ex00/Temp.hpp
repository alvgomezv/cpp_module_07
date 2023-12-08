#ifndef Temp_HPP
# define Temp_HPP

#include <iostream>
#include <string>

template<typename T>
class Temp 
{
    
    public:
        Temp(void);
        Temp(Temp const &other);
        Temp &operator=(Temp const &other);
        ~Temp(void);

        void    swap(T *a, T *b);
        T const min(T const a, T const b);
        T const max(T const a, T const b);
};

#endif
