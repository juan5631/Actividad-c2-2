#include<iostream>
#include<string.h>
using namespace std;
#include "milibreria.h"
int main()
{
	Persona motato, lucho("0804302040","Juan David","Valdivieso Aguilar",1.70,65);
	motato.ingresar();
	motato.mostrar(); 
	
	cout<<endl;
	lucho.mostrar();	
	return 0;
}
