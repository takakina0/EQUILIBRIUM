#pragma once

#include "Personaje.h"
#include <string>
#include <iostream>
#include <vector>

class Protagonista;

class Aliado {
protected:
    std::string nombre;

public:
    Aliado(std::string _nombre) : nombre(_nombre) {}
    virtual void ayudar(Protagonista& protagonista) = 0;
    std::string getNombre() const { return nombre; }
};
