#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;

// SIMLACION DE UN FACTURERO SENCILLO 
/* **************************

	JOSE PIEDRA 

***************************** */


int main(){

    //primera parte del enunciado que me pida el nombre del producto y su precio
    int precio;
    string nombreprod;

    //suma total del precio de los articulos
    int sumtotal = 0;

    //cuenta el numero de articulos
    int numerodeart = 0;

    //guarda el nombre del producto mas caro
    string nombreprodmax;

    //se inicia en 0 para que asi se haga la comparacion y puedas obtener el mas caro de todos
    int preciomax = 0;

    //guarda el nombre del producto mas barato
    string nombreprodmin;

    // obedeciendo al enunciado de arriba se pone en el valir mas alto para que cuando se compare consiga al mas barato
    int preciomin = 999999;

    //variables auxiliares
    bool salir = false;


    while(salir == false ){

        //aqui pides el nombre del producto o sales del programa
        cout<<"ingrese la palabra salir para terminar el programa "<<endl;
        cout<<"ingrese el nombre del producto: ";
        cin>>nombreprod;

        if(nombreprod == "salir"){

            salir = true;

        }else{

            //aqui pides el precio
            cout<<"ingrese precio del producto: ";
            cin>>precio;

            //aqui se cuenta cada producto ingresado
            numerodeart++;

            if(precio > preciomax){

                preciomax = precio;
                nombreprodmax = nombreprod;
            }

            if(precio < preciomin){

                preciomin = precio;
                nombreprodmin = nombreprod;
            }

            sumtotal = sumtotal + precio;
        }




    }

    cout<<"el producto mas caro fue: "<<nombreprodmax<<" con valor de: "<<preciomax<<endl;
    cout<<"el producto mas barato fue: "<<nombreprodmin<<" con valor de: "<<preciomin<<endl;
    cout<<"el total de productos: "<<numerodeart<<" con valor de: "<<sumtotal<<endl;

    return 0;

}
