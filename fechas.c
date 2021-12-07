#include <stdio.h>

#define DIA 1 
#define MES 2
#define ANNIO 3

struct struc_fecha
{
    int dia;
    int mes;
    int annio;
};

typedef struct struct_fecha Fecha;

int capturaFecha(Fecha *fecha);
Fecha sumaFecha(Fecha fecha, int tipo, int cantidadASumar);
Fecha restaFecha(Fecha fecha, int tipo, int cantidadARestar);
int conpararFechas(Fecha fecha1, Fecha fecha2);    
void imprimeFecha(Fecha fecha);

int main()
{
    Fecha fecha;

    fecha.dia=10;
    fecha.mes=3;
    fecha.annnio = 2021;

    sumaFecha(fecha, ANNIO, 10);
    
    return 0;
}

Fecha sumaFecha(Fecha fecha, int tipo, int cantidadASumar)
{
        Fecha nuevaFecha;

    if(tipo == ANNIO)
    {
        nuevaFecha.dia = fecha.dia;
        nuevaFecha.mes = fecha.mes;
        nuevaFecha.annio = fecha.annio + cantidadASumar;
    }
    else if(tipo == MES){
         nuevaFecha.dia = fecha.dia;
         nuevaFecha.annio = fecha.mes + cantidadASumar;

         if(nuevaFecha.mes > 12)
         {
             while()
         }
         else
         {
             nuevaFecha.annio = fecha.annio;
         }
    }
    else
    {
       
    }

    return nuevaFecha;
}

