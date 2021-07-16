class persona{
	private:
		int aa,ma,da,an,mn,dn,a,m,d;
		string nombre, apellido;
		float p,h,MaC;
		public:
	void ingresar(){
		cout<<"ingrese el nombre de la persona";
		getline(cin,nombre);
		cout<<"ingrese el apellido de la persona";
		getline(cin,apellido);
	}
	void mostrar(){
		cout<<nombre;
		cout<<apellido;
	}
	void ed(){
		cout<<"Ingrese la fecha actual en formato (ano mes dia)"; cin>>aa>>ma>>da;
		cout<<"Ingrese la fecha que nacio en formato (ano mes dia)"; cin>>an>>mn>>dn;
		if(da>dn)
{
d=da-dn;
}else{
	ma=ma-1;
	da=da+30;
	d=da-dn;
}
if(ma>mn)
{
m=ma-mn;
}else{
	aa=aa-1;
	ma=ma+12;
m=ma-mn;
}
	a=aa-an ;

cout<< nombre << apellido <<" tiene "<< a << " anos "<< m << " meses " << d << " dias "<<endl;

	}
	void mc(){
		cout<<"3.-Mostrar el indice corporal \n";
			cout<<"ingrese el peso: "; cin>>p;
cout<<"Ingrese la altura: "; cin>>h;
MaC = p/(h*h); 
	cout<< "Tu indice de masa corporal es: " << MaC << endl;
    if (MaC<20)
    	{
    		cout<<"Tu indice de masa corporal esta por debajo de lo normal, sube de peso " << "\n";
		}
     else
    if (18.5<MaC&&MaC<=24.9)
 	   {
  		  	cout<< "¡FELICIDADES! Usted tiene el peso ideal." << "\n" ;
		}  
      else
    if (25<MaC&&MaC<29.0)
    	{
    		cout<< "Usted esta en sobre peso. Tomar medidas al respecto." << "\n"; 
		}
  	  else
    	{
    		cout<< "Usted se encuentra en un estado de obesidad. Le recomendamos comer sano, hacer ejercicio o acudir a un profesional." << "\n"; 	
		}

	}
	
		
};

