#include "Carro.h"

Carro::Carro(const string & modelo, float velocidade, const string &passageiros)
{
    this->modelo = modelo;
    if( velocidade>0 )
        this-> velocidade = velocidade;
    else
        velocidade = 0;
    this-> passageiros = new string(passageiros);
}

Carro::Carro(const Carro &c)
{
    modelo = c.modelo;
    velocidade = c.velocidade;
    passageiros = new string[numAtualPassageiro];
    for( i = 0; i < NUMMAXPASSAGEIROS; i++ ){
       this->passageiros[i] = c.passageiros[i];
    }

}

Carro::~Carro()
{
    //dtor
}
