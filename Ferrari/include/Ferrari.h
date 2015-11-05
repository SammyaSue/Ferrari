#ifndef FERRARI_H
#define FERRARI_H

#include "Carro.h"


class Ferrari : public Carro
{
    public:
        Ferrari(float = 100, bool = 0, bool = 0,const string &="", float=80, const string & = "Desconhecido");
        Ferrari(const Ferrari &);

        void conectarComputadorBordo();
        void ativarMotorTurbo();
        virtual ~Ferrari();

    protected:
        float velocidadeTurbo;
        bool motorTurbo;
        bool conectado;
        static string versaoControleBordo = "versao 1";
};

#endif // FERRARI_H
