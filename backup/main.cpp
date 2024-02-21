#include <iostream>
#include "initias.h"
#include <stdio.h>


int main(){

    std::cout<<"Hello World\n";
    
    aloo objeto1;
    
    objeto1.doing_stuff(20);
    std::cout << objeto1.using_property() << "\n";

    aloo objetonovo(30);

    std::cout << objetonovo.using_property() << "\n";

    int numbs = 20;

    printf("%d\n",numbs);

    aloo *novo = &objeto1;

    std::cout << novo->using_property();

    return 0;
}