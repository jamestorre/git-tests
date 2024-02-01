#include <iostream>
#include "myclass.cpp"
#include "feature.cpp"

int main()
{
    std::cout<<"Version 16 - Organized"<<std::endl;
    MyClass mc;
    Feature f1;
    mc.message();
    f1.message();
    return 0;
}