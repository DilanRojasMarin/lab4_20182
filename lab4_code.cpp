/* Practica de Laboratorio 4
*  Informatica 2 - 2018_2
*  Prof: Juan Camilo Correa Chica
*  Fecha: Octubre 1/2018 - Octubre 8/2018
*  Plazo máximo para enviar enlace para clonar el repositorio: 
*  Estudiante1: Dilan Rojas Marin
*  Estudiante2: Nombres y apellidos completos (Opcional, puede trabajar individualmente)
*  Fecha del ultimo Commit en GitHub: 5/10/2018 12:30 am

* 1.Implementar un sistema de reserva de tiquetes de un crucero, que tiene 3 alternativas de ubicación en los camarotes del buque: Clase Económica, 
*   clase Turística y clase Premium. Cada clase tiene el mismo número de camarotes disponibles: 50.
*	Implemente una clase llamada Reserva que tiene los atributos: un string para el nombre de quien reserva, un int para el número de documento de identidad, 
*   un int para la cantidad de equipaje (cuántos maletines) y un bool para marcar el camarote en cuestión como reservado.
*	Usando la clase Reserva usted debe implementar un sistema de reserva de tiquetes para el crucero. Por las restricciones de memoria del sistema usted tiene
*   como requerimiento el uso de apuntadores y de los operadores NEW y DELETE para el manejo dinámico de memoria del sistema.
*	El programa iniciará dando la bienvenida y ofrecerá la opción de reservar un camarote en el crucero y la opción de revisar la lista de reservas.
*	Si el usuario elige reservar un camarote se le preguntara en que clase desea viajar y el camarote que desea ocupar (de los 50 disponibles). Cuando el 
*   usuario escoja el camarote se debe revisar que no esté reservado previamente. Si el camarote está disponible se le preguntara el nombre, el número de
*   identificación y el equipaje total que va llevar. Recuerde que debe crear un objeto de la clase Reserva y almacenarlo en la ubicación correspondiente a
*   la clase viajera (Económica, Turística o Premium)  y al número de camarote.
*	Si el usuario elige ver la lista de Reserva entonces se debe pedir que introduzca un password (ya que está opción es solo para usuarios con permisos de
*   administrador, por seguridad), si el password es correcto entonces se debe mostrar en pantalla los camarotes reservados por cada clase viajera y el 
*   nombre de quien lo ha reservado y la cantidad de camarotes aún disponibles.
*
*/
#ifndef RESERVA_H
#define RESERVA_H


class Reserva
{ Private:
   private:
    char *nombre;
    int documento;
    int *equipaje;
    bool ocupado;
public:
    Reserva();
    void reservacion(char *name, int cc, int* baggage);
    char *devNombre();
    int devDocumento();
    int *devEquipaje();
    bool reservado();
    void reservar(bool ocupado);

};
#endif // RESERVA_H:

#include "reserva.h"

Reserva::Reserva()
{

{
  void Reserva:::reservacion(char *name, int cc, int* baggage)
{
    nombre = name;
    documento=cc;
   equipaje = baggage;
}
char *Reserva::devNombre()
{
    return nombre;
}
int Reserva::devDocumento()
{
    return documento;
}
int*Libro::devEquipaje()
{
    return equipaje;
}

bool Reserva::reservado()
{
    return ocupado;
}
void Reserva::reservar(bool out)
{
    if(out)
        ocupado = 1;
    else
        ocupado = 0;
}

}
  #include <iostream>
#include "reserva.h"
  using namespace std;

int main()
{    
 
  Reserva **dptr = new Reserva*[3]; 

    for(int i=0; i<3; ++i)
        *(dptr+i) = new Reserva[50]; 

    dptr[1][0].reservacion("Dilan Rojas Marin", 1007115033, 2);
    dptr[2][0].reservacion("Carlos Puerta Gil",70105620, 1);
    dptr[3][0].reservacion("Claudia Marin Rendon", 42961664, 4);

    dptr[0][0].reservar(1);

    cout<<dptr[1][0].devNombre()<<endl;
    cout<<dptr[2][0].devEquipaje()<<endl;
    cout<<dptr[3][0].reservado()<<endl;
      
  cout<<"Bienvenido al menú de Reserva del crucero"<<endl;
  cout<<"Se ofrecen 3 clases para la ubicacion del camarote: ">>endl;
  cout<<"selecciona la clase a reservar según el numeral"<<endl;
  cout<<"1)clase Económica"<<endl;
  cout<<"2)clase Turística"<<endl;
  cout<<"3)clase Premium"<<endl;
  cin>>Reserva*[]>>endl;
  cout<<"4) Ver lista de Reserva"<<endl;
  cin>>lista>>endl;
  if (lista=4){
    cout<<"Ingresa la contraseña"<<endl;
    cin>>password>>;
    if (password="clase"){
    cout<<dptr[1][0].devNombre()<<endl;
    cout<<dptr[2][0].devEquipaje()<<endl;
    cout<<dptr[3][0].reservado()<<endl;
      return 0;
      
}
~Reserva(){
  
  delete[]dptr
   
}
