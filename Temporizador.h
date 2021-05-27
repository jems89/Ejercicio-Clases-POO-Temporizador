#ifndef TEMPORIZADOR_H
#define TEMPORIZADOR_H

class Temporizador
{
    private:
        int _hora;
        int _minutos;
        int _segundos;

    public:
        Temporizador(int);
        void set_hora(int);
        void set_minutos(int);
        void set_segundos(int);

        void tac();
        void tic();
        void mostrar();
        int diferencia(Temporizador);
        int get_segundos();

};





#endif // TEMPORIZADOR_H
