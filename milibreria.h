class Persona{
private: 
		 string cedula,nombres,apellidos;
		 float estatura, peso;
		 int dn, mn, an;
public:
		Persona()
		{
		}
	    Persona( ¿string c,string n,string a, int e, int p);
		{
			cedula=c;
			nombres=n;
			apellidos=a;
			estatura=e;
			peso=p;
		 } 
		 void ingresar ()
		 {
		 	cout<<"Ingrese los datos "<<endl;
		 	cout<<"Ingrese la cedula: "; getline(cin,cedula);
		 	cout<<"Ingrese los nombres: "; getline(cin,nombres);
		 	cout<<"Ingrese los apellidos: "; getline(cin,apellidos);
		 	cout<<"Ingrese la estatura: ";cin>>estatura;
		 	cout<<"Ingrese el peso: ";cin>>peso;
		 }
		 
		 void mostrar()
		 {
		 	cout<<"CEDULA"<<"\t";
		 	cout<<"APELLIDOS"<<"\t";
		 	cout<<"NOMBRES"<<"\t";
		 	cout<<"ESTATURA"<<"\t";
		 	cout<<"PESO"<<endl;
		 	
		 	cout<<cedula<<"\t";
		 	cout<<apellidos<<"\t";
		 	cout<<nombres<<"\t";
		 	cout<<estatura<<"\t";
		 	cout<<peso<<endl;
		}
}
