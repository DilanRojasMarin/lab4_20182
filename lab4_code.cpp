/* Practica de Laboratorio 4
*  Informatica 2 - 2018_2
*  Prof: Juan Camilo Correa Chica
*  Fecha: Octubre 1/2018 - Octubre 8/2018
*  Plazo máximo para enviar enlace para clonar el repositorio: 
*  Estudiante1: Dilan Rojas Marin
*  Estudiante2: Nombres y apellidos completos (Opcional, puede trabajar individualmente)
*  Fecha del ultimo Commit en GitHub: 14/10/2018 6:00pm

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
* 2. Implemente tres clases llamadas Mamifero, Alado, Acuatico. Para cada una de las clases debe definir por lo menos 4 atributos que
*    describan las caracteristicas mas sobresalientes. Ademas debe agregar por lo menos 4 metodos redefinibles que permitan interactuar con
*    y modificar esos atributos. Luego implemente las clases Murcielago, Ornitorrinco y Manatí que heredan de las clases construidas anteriormente.
*    Redefina los metodos en cada una de estas clases, recuerde que estas clases derivadas pueden heredar de varias clases al tiempo. En
*    las clases derivadas implemente los constructores de forma que a traves de ellos pueda inicializar también los constructores de las
*    clases bases (¡Si no se ha explicado, consulte como hacerlo!).
*/
//punto 1:
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
    
    //punto 2:
    //mamifero.h
    #ifndef MAMIFERO_H
#define MAMIFERO_H
using namespace std;


class Mamifero
{private:
    int *extremidades;
    char respiracion;
    char *especie;
    char reproduccion;
    bool vertebrado=true;


public:
    Mamifero();
       Mamifero(int *extre, char _respiracion,char* _especie,char _reproduccion);
        char devrespiracion();
       char devreproduccion();
       char *devespecie();
        int *devextremidades();
        bool vertebras();
        virtual void mostrarmamifero()=0;
        ~Mamifero();
};

#endif // MAMIFERO_H
//mamifero.cpp
    #include "mamifero.h"

    Mamifero::Mamifero(){
}

    Mamifero:: Mamifero(int *extre, char _respiracion,char* _especie,char _reproduccion){
        extre=extremidades;
        respiracion=_respiracion;
        _especie=especie;
        _reproduccion=reproduccion;
    }

    char Mamifero::devrespiracion(){
        return respiracion;
    }
      char Mamifero:: devreproduccion(){
        return reproduccion;
    }
    char *Mamifero:: devespecie(){
        return especie;

    }
    int *Mamifero:: devextremidades(){
        return extremidades;


    }
    bool Mamifero:: vertebras(){
        return vertebrado;

    }

//acuatico.h
    #ifndef ACUATICO_H
#define ACUATICO_H


class Acuatico
{private:
    char *respiracion;
    char *especie;
    int aletas;
    bool nadar=true;
public:
    Acuatico();
    Acuatico(char *respirar, char *_especie, int aleta);
    char *devrespiracion();
    char *devespecie();
    int numeroaletas();
    bool nadador();
    void virtual mostraracuatico()=0;
    ~Acuatico();


};

#endif // ACUATICO_H
//acuatico.cpp
    #include "acuatico.h"

Acuatico::Acuatico(){
}

    Acuatico::Acuatico(char *respirar, char *_especie, int aleta){
        respirar=respiracion;
        especie=_especie;
        aleta=aletas;

    }
      char *Acuatico:: devrespiracion(){
        return respiracion;
    }
    char *Acuatico:: devespecie(){
        return especie;

    }
    int Acuatico:: numeroaletas(){
        return aletas;

    }
    bool Acuatico::nadador(){
        return nadar;
    }
    //alado.h
    #ifndef ALADO_H
#define ALADO_H


class Alado
{private:
    int *alas;
    char *especie;
    bool volar=true;

 public:
    Alado();

        Alado(int *wings, char *_especie);
        int *devalas();
        char *devespecie();
         bool volador();
     virtual void mostraralado()=0;
         ~Alado();

};


#endif // ALADO_H
//alado.cpp
    #include "alado.h"

Alado::Alado(){}

   Alado::Alado( int *wings , char *_especie )
   {
        wings=alas;
        especie=_especie;

    }
   int *Alado:: devalas(){
       return alas;
   }
   char *Alado::devespecie(){
       return especie;
   }

   bool Alado::volador(){
       return volar;
   }
//murcielago.h
    #ifndef MURCIELAGO_H
#define MURCIELAGO_H



class Murcielago: public Mamifero, public Alado
{
  private:
    float peso;
    char alimentacion;
    int edad;
    char *especie;
  public:
    Murcielago();
    Murcielago(float weight, char alimento, int age, char* _especie);
    float devPeso();
    char devalimento();
    int devedad();
    char *devespecie();
    void mostrarmamifero();
    void mostraralado();

};

#endif // MURCIELAGO_H
//murcielago.cpp
    #include "murcielago.h"
#include <iostream>
using namespace std;

Murcielago::Murcielago()
{}
Murcielago::Murcielago(float weight, char alimento, int age, char* _especie){
    peso=weight;
    alimentacion=alimento;
    edad=age;
    especie=_especie;
}

float Murcielago::devPeso(){
    return peso;
}
char Murcielago::devalimento(){
    return alimentacion;
}
int Murcielago::devedad(){
    return edad;
}
char *Murcielago::devespecie(){
    return especie;
}
void Murcielago::mostraralado(){
    cout<<"Murcielago es Alado"<<endl;
}
void Murcielago::mostrarmamifero(){
    cout<<"Murcielago es  Mamifero"<<endl;
}
//manati.h
    #ifndef MANATI_H
#define MANATI_H
#include <iostream>
using namespace std;



class Manati:public Mamifero, public Acuatico
{
private:
  float peso;
  char alimentacion;
  int edad;
  char *especie;
public:
    Manati();
    Manati(float weight, char alimento, int age, char* _especie);
  float devPeso();
  char devalimento();
  int devedad();
  char *devespecie();
  void mostrarmamifero();
  void mostraracuatico();


};

#endif // MANATI_H

    //manati.cpp
    Manati::Manati()
{}
Manati::Manati(float weight, char alimento, int age, char * _especie){
    peso=weight;
    alimento=alimentacion;
    edad=age;
    especie=_especie;

    }
    float Manati:: devPeso(){
        return peso;

    }
    char Manati:: devalimento(){
        return alimentacion;

    }

    int Manati:: devedad(){
        return edad;

    }
    char *Manati:: devespecie(){
        return especie;
    }
    void Manati::mostraracuatico(){
        cout<<"Manati es un Acuatico"<<endl;
    }
    void Manati::mostrarmamifero(){
        cout<<"Manati es un Mamifero"<<endl;
    }
    //ornitorrinco.h
    #ifndef ORNITORRINCO_H
#define ORNITORRINCO_H


class Ornitorrinco:public Acuatico,public Mamifero
{ private:
    float peso;
    char alimentacion;
    int edad;
    char *especie;
  public:
    Ornitorrinco();
    Ornitorrinco(float weight, char alimento, int age, char* _especie);
    float devPeso();
    char devalimento();
    int devedad();
    char *devespecie();
    void mostrarmamifero();
    void mostraracuatico();


};

#endif // ORNITORRINCO_H
//ornitorrinco.cpp
    #include "ornitorrinco.h"
#include<iostream>
using namespace std;
Ornitorrinco::Ornitorrinco()
{}

    Ornitorrinco::Ornitorrinco(float weight, char alimento, int age, char* _especie){
        peso=weight;
        alimento=alimentacion;
        edad=age;
        especie=_especie;

    }
    float Ornitorrinco::devPeso(){
        return peso;
    }

    char Ornitorrinco::devalimento(){
        return alimentacion;
    }

    int Ornitorrinco::devedad(){
        return edad;
    }
    char *Ornitorrinco::devespecie(){
        return especie;
    }
    void Ornitorrinco::mostrarmamifero(){
        cout<<"Ornitorrinco es Mamifero"<<endl;
    }
    void Ornitorrinco::mostraracuatico(){
        cout<<"Ornitorrinco es Acuatico"<<endl;
    }
    //main
    #include <iostream>
using namespace std;


int main() {
   Ornitorrinco perry ;
   cout<<"Perry es un: "<<perry.devespecie<<endl;
   cout <<  "el peso de Perry es: " << perry.devpeso() << endl;
   cout<<"Perry se alimenta de: "<<perry.devalimentacion()<<endl;
   cout<<"La edad de Perry es: "<<perry.devedad()<<endl;




   Murcielago drago ;
   cout<<"Drago es un: "<<drago.devespecie()<<endl;
   cout <<  "el peso de Drago es: " << drago.devpeso() << endl;
   cout<<"Drago se alimenta de: "<<drago.devalimentacion<<endl;
   cout<<"la edad de Drago es: "<<drago.devedad<<endl;

   Manati gordon ;
   cout<<"Gordon es un: "<<gordon.devespecie()<<endl;
   cout <<  "el peso de Gordon es: " << gordon.devpeso() << endl;
   cout<<"Gordon se alimenta de: "<<gordon.devalimentacion<<endl;
   cout<<"la edad de Gordon es: "<<gordon.devedad<<endl;


   return 0;

}









