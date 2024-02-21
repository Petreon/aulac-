#include "../header/building.h"


void casa::mudar_nome_da_casa(std::string nomecasa){
    nomedacasa = nomecasa;

}

std::string casa::get_casa_name(){

    return nomedacasa;

}