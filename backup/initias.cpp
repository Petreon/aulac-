#include "initias.h"
#include <iostream>


aloo::aloo(int num_input){
    number1 = num_input;
    std::cout << "constructor called\n";
}

aloo::~aloo(){

    std::cout << "destructor called\n";
}


void aloo::doing_stuff(int num1){
    //only printing the num1 x2
    int num_local = num1*2;
    std::cout << num_local << "\n";
}

int aloo::using_property(){

    number1 = number1*2;
    
    return number1;

}
