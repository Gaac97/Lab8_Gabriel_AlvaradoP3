#include "Persona.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
using std::string;
using std::endl;
using std::cout;
using std::string;


Persona::Persona(string Nombre,string Genero,string ColorCabello,string ColorOjos,string ColorPiel,bool Fertil){
	this->Nombre=Nombre;
	this->Genero=Genero;
	this->ColorCabello=ColorCabello;
	this->ColorOjos=ColorOjos;
	this->ColorPiel=ColorPiel;
	this->Fertil=Fertil;
}




/*Persona operator+(const Persona &a ,const Persona &b) {
	bool pa=false;
	bool pb=false;
	if(a->getGenero()!=b->getGenero()){
		pa=a->getFertil();
		pb=b->getFertil();
		string colorA;
		string colorB;
		string colorC;
		
		int NegroC=10;
		int RubioC=6;
		int RojoC=4;
		
		
		int NegroO=10;
		int CafeO=6;
		int azulesO=3;
		
		
		int Canela=10;
		int blanco=7;
		int negro=4;
	
		
			if(pa==pb){
						
			
			}
	
	}

}*/
//Condon
Persona* Persona::operator+(Persona p){
  int Proba;
  Proba= 1+rand()%100;
  cout<<"Con gorro no hay mocoso"<<endl;
  if (Proba ==1) {
    cout<<"Sin gorro ,GAME OVER"<<endl;
    return (*this) + (p);
  }

  return NULL;
}


//Sin condon
Persona* Persona::operator*(Persona& p) {
   Persona Envio;
   int Pelo1=1,Pelo2=1,Pelo3=1,Pelo4=1;
   int Piel1=1,Piel2=1,Piel3=1,Piel4=1;
   int Ojos1=1,Ojos2=1,Ojos3=1,Ojos4=1;
	
   string POjos1="";
   POjos1+=this->getColorOjos()[0];
   POjos1+= p.getColorOjos()[0];
   
   string POjos2;
   POjos2+=this->getColorOjos()[0];
   POjos2+= p.getColorOjos()[1];
  
   string POjos3;
   POjos3+=this->getColorOjos()[1];
   POjos3+= p.getColorOjos()[0];
   
   string POjos4;
   POjos4+=this->getColorOjos()[1];
   POjos4+= p.getColorOjos()[1];

     string adnpelo=p.getColorCabello();
     string adnpiel=p.getColorPiel();
     string adnojos=p.getColorOjos(); 
   
   string PROPelo1;
   PROPelo1+=this->getColorCabello()[0];
   PROPelo1+= p.getColorCabello()[0];

   string PROPelo2;
   PROPelo2+=this->getColorCabello()[0];
   PROPelo2+= p.getColorCabello()[1];

   string PROPelo3;
   PROPelo3+=this->getColorCabello()[1];
   PROPelo3+= p.getColorCabello()[0];

   string PROPelo4;
   PROPelo4+=this->getColorCabello()[1];
   PROPelo4+=p.getColorCabello()[1];

   string PROPiel1;
   PROPiel1+=this->getColorPiel()[0];
   PROPiel1+= p.getColorPiel()[0];
  
   string PROPiel2;
   PROPiel2=this->getColorPiel()[0];
   PROPiel2+= p.getColorPiel()[1];
  
   string PROPiel3;
   PROPiel3=this->getColorPiel()[1];
   PROPiel3+= p.getColorPiel()[0];
  
   string PROPiel4;
   PROPiel4=this->getColorPiel()[1];
   PROPiel4+= p.getColorPiel()[1];

   //Probabiliad de el color de ojos
   if (POjos1==POjos2){
      Ojos1++;
   }
   if (POjos1==POjos3){
      Ojos1++;
   }
   if (POjos1==POjos4){
      Ojos1++;
   }
   //ojos2
   if (POjos2==POjos1){
      Ojos2++;
   }
   if (POjos2==POjos2){
      Ojos2++;
   }
   if (POjos2==POjos4){
      Ojos2++;
   }
   //ojos3
   if (POjos3==POjos1){
      Ojos3++;
   }
   if (POjos3==POjos2){
      Ojos3++;
   }
   if (POjos3==POjos4){
      Ojos3++;
   }
   //ojos4
   if (POjos4==POjos1){
      Ojos4++;
   }
   if (POjos4==POjos2){
      Ojos4++;
   }
   if (POjos4==POjos3){
      Ojos4++;
   }
      //ojos1
   if (PROPiel1==PROPiel2){
      Piel1++;
   }
   if (PROPiel1==PROPiel3){
      Piel1++;
   }
   if (PROPiel1==PROPiel4){
      Piel1++;
   }
   //ojos2
   if (PROPiel2==PROPiel1){
      Piel2++;
   }
   if (PROPiel2==PROPiel3){
      Piel2++;
   }
   if (PROPiel2==PROPiel4){
      Piel2++;
   }
   //ojos3
   if (PROPiel3==PROPiel1){
      Piel3++;
   }
   if (PROPiel3==PROPiel2){
      Piel3++;
   }
   if (PROPiel3==PROPiel4){
      Piel3++;
   }
   //ojos4
   if (PROPiel4==PROPiel1){
      Piel4++;
   }
   if (PROPiel4==PROPiel2){
      Piel4++;
   }
   if (PROPiel4==PROPiel3){
      Piel4++;
   }

   //OJOS
   if (PROPelo1==PROPelo2){
      Pelo1++;
   }
   if (PROPelo1==PROPelo3){
      Pelo1++;
   }
   if (PROPelo1==PROPelo4){
      Pelo1++;
   }
   //ojos2
   if (PROPelo2==PROPelo1){
      Pelo2++;
   }
   if (PROPelo2==PROPelo3){
      Pelo2++;
   }
   if (PROPelo2==PROPelo4){
      Pelo2++;
   }
   //ojos3
   if (PROPelo3==PROPelo1){
      Pelo3++;
   }
   if (PROPelo3==PROPelo2){
      Pelo3++;
   }
   if (PROPelo3==PROPelo4){
      Pelo3++;
   }
  
   if (PROPelo4==PROPelo1){
      Pelo4++;
   }
   if (PROPelo4==PROPelo2){
      Pelo4++;
   }
   if (PROPelo4==PROPelo3){
      Pelo4++;
   }
//verifico el color de pelo

   if (Pelo1>Pelo2&&Pelo1>Pelo3&&Pelo1>Pelo4){
      adnpelo=PROPelo1;
   }
   if (Pelo2>Pelo1&&Pelo2>Pelo3&&Pelo2>Pelo4){
      adnpelo=PROPelo2;
   }
   if (Pelo3>Pelo2&&Pelo3>Pelo1&&Pelo3>Pelo4){
      adnpelo=PROPelo3;
   }
   if (Pelo4>Pelo1&&Pelo4>Pelo2&&Pelo4>Pelo3){
      adnpelo=PROPelo4;
   }   

 
   if (Ojos1>Ojos2&&Ojos1>Ojos3&&Ojos1>Ojos4){
      adnojos=POjos1;
   }
   if (Ojos2>Ojos1&&Ojos2>Ojos3&&Ojos2>Ojos4){
      adnojos=POjos2;
   }
   if (Ojos3>Ojos2&&Ojos3>Ojos1&&Ojos3>Ojos4){
      adnojos=POjos3;
   }
   if (Ojos4>Ojos1&&Ojos4>Ojos2&&Ojos4>Ojos3){
      adnojos=POjos4;
   }  

   //verifico el color de pelo
   if (Piel1>Piel2&&Piel1>Piel3&&Piel1>Piel4){
      adnpiel=PROPiel1;      
   }
   if (Piel2>Piel1&&Piel2>Piel3&&Piel2>Piel4){
      adnpiel=PROPiel2;
   }
   if (Piel3>Piel2&&Piel3>Piel1&&Piel3>Piel4){
      adnpiel=PROPiel3;
   }
   if (Piel4>Piel1&&Piel4>Piel2&&Piel4>Piel3){
      adnpiel=PROPiel4;
   }   
          string nombre; 
          cout<< "Ingrese el nombre del hijo"<<endl;
          cin>>nombre;
          string genero;
          string pelo;
          string ojos;
          string piel;
          bool fertil;
         
        int sex= rand()%10;
         
         if (sex<5){
            fertil=true;          
         }else{
            fertil=false;
         }
         if (sex>5){
            genero="Masculino";
         }else{
            genero="Femenino";
         }
          Persona* m = new Persona(nombre, genero, adnpelo, adnojos, adnpiel, fertil);
   return m;
}



Persona::Persona(){

}void Persona::setNombre(string Nombre){
   this-> Nombre=Nombre;
}
string Persona::getNombre(){
   return Nombre;
}
void Persona::setGenero(string Genero){
   this-> Genero=Genero;
}
string Persona::getGenero(){
   return Genero;
}
void Persona::setColorCabello(string ColorCabello){
   this-> ColorCabello=ColorCabello;
}
string Persona::getColorCabello(){
   return ColorCabello;
}
void Persona::setColorOjos(string ColorOjos){
   this-> ColorOjos=ColorOjos;
}
string Persona::getColorOjos(){
  if (ColorOjos=="Negro") {
    cout<<"Negro--AA"<<endl;
  }else if (ColorOjos=="Verdes") {
    cout<<"Verdes--Aa"<<endl;
  }else if(ColorOjos=="Cafe"){
    cout<<"Cafe--aa"<<endl;
  }
  return ColorOjos;
}

void Persona::setColorPiel(string ColorPiel){
   this-> ColorPiel=ColorPiel;
}
string Persona::getColorPiel(){
   return ColorPiel;
}
void Persona::setFertil(bool Fertil){
   this-> Fertil=Fertil;
}
bool Persona::getFertil(){
   return Fertil;
}
