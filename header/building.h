#include <string>
#include "../header/matematica.h"
#pragma once

class casa : public matematica {
private:

    std::string nomedacasa;

public:

    void mudar_nome_da_casa(std::string nomecasa);

    std::string get_casa_name();

};