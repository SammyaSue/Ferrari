#include "Ferrari.h"

Ferrari::Ferrari(float velocidadeTurbo, bool motorTurbo, bool conectado)
:Carro(velocidade, modelo, numAtualPassageiro)
{
    if( velocidadeTurbo > 0 )
        this-> velocidadeTurbo = velocidadeTurbo;
    else
        velocidadeTurbo = 0;


    //ctor
}

Ferrari::~Ferrari()
{
    //dtor
}
