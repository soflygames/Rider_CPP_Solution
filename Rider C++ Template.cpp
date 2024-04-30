#include <iostream>
#include <stdlib.h>




int main()
{
    system("CLS");

    
    int var = 5;
    int*ptr = &var;
    
    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Derefferenced of *var: " << *ptr << std::endl;
    std::cout << "value of ptr: " << ptr << std::endl;
    std::cout << "value of &var " << &var << std::endl;
    std::cout << "value of &ptr " << &ptr << std::endl;
    //std::cout << "value of *var " << *var << std::endl;
}