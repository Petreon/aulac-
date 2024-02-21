#include <iostream>



int addnumber(int num1, int num2){

    int num3;

    num3 = num1 + num2;

    return num3;
}


void printar_alguma_coisa(){
    std::cout << "Hello World\n";
    
}


int main(){


    int num1 = 20;

    num1 = 30;

    //printar_alguma_coisa();

    //std::cout << "MUITAS COISAS\n";

    int numero_da_funcao = addnumber(10,20);

    std::cout << numero_da_funcao << std::endl;

    std::cout << addnumber(200 , 999);

    return 0;
}