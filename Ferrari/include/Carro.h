#ifndef CARRO_H
#define CARRO_H


class Carro
{
    public:
        Carro(const string &="", float = 80, const string & = "Desconhecido");
        Carro(const Carro &);

        void statusCarro();
        void quantidadePassageiros();

        virtual ~Carro();

    protected:

        string *passageiros;

    private:
        float velocidade;

        const static string NUMMAXPASSAGEIROS = 5;
        string modelo;


};

#endif // CARRO_H
