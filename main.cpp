#include "./header/building.h"
#include "./header/matematica.h"
#include <iostream>
#include <stdio.h>



int main(){

    casa objeto_casa;

    matematica math1;

    objeto_casa.mudar_nome_da_casa("novela");

    std::cout << objeto_casa.get_casa_name();

    //std::cout << objeto_casa.nomedacasa;

    casa casa_matematica;

    std::cout << casa_matematica.multiply_number(20,30);

    return 0;
}