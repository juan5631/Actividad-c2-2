#include <stdlib.h>
#include <string>
using namespace std;
#include "class.cpp"
int main(){
	persona joel;

	
	int op;
		
		do{
			
			system("cls");
			cout<<"\n Datos personales"<<endl<<endl;
			cout<<"1.-Ingresar y mostrar los datos personales \n";
			cout<<"2.-Mostrar la edad de la persona \n";
			cout<<"3.-Mostrar el indice corporal \n";
			cout<<"4.-Guardar los datos de un archivo.txt \n";
			cout<<"5.-Recuperar los datos desde el archivo .txt y mostralospor pantalla \n";
			cout<<"0.- salir del menu \n";
			cout<<"Ingrese una opcion \n"; cin>>op;
			switch(op){
				case 1:
						joel.ingresar();
	                    joel.mostrar();
					break;
					case 2:
					joel.ed();
					break;
					case 3:
					joel.mc();
						break;
					}
			  
	}while(op=0);

	return(0);

}
