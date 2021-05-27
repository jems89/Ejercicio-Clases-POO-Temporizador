#include "Temporizador.h"
#include <cstring>
#include <cstdio>
#include <iostream>
#include <stdlib.h>
using namespace std;



Temporizador::Temporizador(int segundos)
{
    if(segundos>0)
        {
         _minutos=segundos/60;
         _hora=segundos/3600;
         _segundos=segundos%60;
         }
    else{
         _hora=0;
         _minutos=0;
         _segundos=0;
         }
}

void Temporizador::set_hora(int hora){if(hora>=0)_hora=hora;}
void Temporizador::set_minutos(int minutos){if(minutos>0 && minutos<60) _minutos=minutos; else{_minutos=0;}}
void Temporizador::set_segundos(int segundos){if(segundos>0 && segundos<60)_segundos=segundos;else{_segundos=0;}}

void Temporizador::tic(){if(_segundos>0){_segundos--;}else{_segundos=0;}}


void Temporizador::mostrar()
{
    cout<<"hora / "<<"minutos / "<<"segundos"<<endl;
cout<<_hora<<" : "<<_minutos<<" : "<<_segundos<<endl;

}

int Temporizador::get_segundos(){

return _segundos;

}
int Temporizador::diferencia(Temporizador dos)
{
int aux1,DiferenciaAbsoluta;
if(_segundos>0){
aux1=dos.get_segundos();
DiferenciaAbsoluta=_segundos-aux1;

 return DiferenciaAbsoluta;
} else{return 0;}

}

void Temporizador::tac(){if(_segundos>0){_segundos--;}else{_segundos=0;}}




