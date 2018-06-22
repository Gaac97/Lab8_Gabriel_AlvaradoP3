#include <iostream>
#include <string>
#include "Persona.h"
#include <vector>

using namespace std;
using std::string;
using std::endl;
using std::cout;

vector<Persona*> Eliminar(vector<Persona*>,int);

int main(){
		
	vector<Persona*> ListPersona;
     char resp='s';
     int opcion;
     
     while(resp=='s'||resp=='S'){
     	cout<<"1.Ingresar Personas"<<endl;
     	cout <<"2.Listar Persona"<<endl;
     	cout <<"3.Eliminar Personas"<<endl;
     	cout <<"4.Simulacion"<<endl;
		cin>>opcion;
     	
     	
     	if(opcion==1){
	     	string nombre,genero,colorCabello,colorOjos,colorPiel;
	     	bool fertil;
	     	char  fer;
     	
	     	cout<<"Ingrese nombre "<<endl;
	     	cin>>nombre;
     	
	     	cout<<"Ingrese genero "<<endl;
   	  	cin>>genero;
     		cout<<"Ingrese colorCabello"<<endl;
    	 	cin>>colorCabello;
     	
    	 	cout<<"Ingrese colorOjos "<<endl;
			cin>>colorOjos;
		
			cout<<"Ingrese color de piel"<<endl;
			cin>>colorPiel;
			
			cout <<"Ingrese V si es fertil, F si es infertil"<<endl;
			cin>>fer;
		
				if(fer=='v'){
					fertil =true;
		
		
				}
		
				if(fer=='V'){
					fertil=true;
		
				}
   		  	if(fer=='f'){
     				fertil==false;
     	
     			}
				if(fer=='F'){
					fertil=false;
		
				}     	
     	
     	Persona* p= new Persona();
		p=new Persona(nombre,genero,colorCabello,colorOjos,colorPiel,fertil);     	
     	
     	ListPersona.push_back(p);
 	 	}
 	 	
 	 	
 			 	if(opcion==2){
 	 				for(int i=0;i<ListPersona.size();i++){
 	 				cout<<i <<"."<< ListPersona[i]->getNombre()<<endl;
 	 				cout<<endl;
 	 		
 				 	}
 	 	
 	 	
 	 	}
 	 	
 	 	if(opcion==3){
 	 		int pos;
			cout<<"Ingrese la posicion"<<endl;
			cin>>pos;
			Eliminar(ListPersona,pos); 	
 	 	
 	 	}
 	 	
 	 	    
     
     }//Fin
     
     return 0;
}





vector<Persona*> Eliminar(vector<Persona*> vec, int
pos)
{
   int last_pos = vec.size() - 1;
   vec[pos] = vec[last_pos];
   vec.pop_back();
	return vec;
	return vec;
}

