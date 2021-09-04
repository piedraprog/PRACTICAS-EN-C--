#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

// Programa para recibir y contar los tipos de cedula 
/* **************************

	JOSE PIEDRA 

***************************** */
int main(){
	
	unsigned int cedve,cedex;
	
	int contve=0,contex=0,opc;
	
	bool salir;
	
	salir=true;
	
	
	while(salir==true){
		system ("cls");
		cout<<"\t \t REGISTRO DE CEDULA"<<endl;
		cout<<endl;
		cout<<"\t TIPO DE CEDULA"<<endl;	
		cout<<"\t 1. Venezolana"<<endl;
		cout<<"\t 2. Extranjera"<<endl;
		cout<<"\t 3. Mostrar la cantidad de cedulas introducidas"<<endl;
		cout<<"\t 4. SALIR"<<endl;
		cout<<endl;
		cin>>opc;
					
		switch(opc){

			case 1:
				cout<<"introduzca el numero de cedula:";
				cin>>cedve;
				contve++;
				break;
							
			case 2:
				cout<<"introduzca el numero de cedula:";
				cin>>cedex;
				contex++;
				break;			
			case 3:
				cout<<"la cantida de cedulas venezolanas:"<<contve<<endl;
				cout<<"la cantida de cedula extrajeras:"<<contex<<endl;
				getch(); 
				break;
						
			case 4: 
				salir=false;
				break;			
		}
	}
	return 0;
}

