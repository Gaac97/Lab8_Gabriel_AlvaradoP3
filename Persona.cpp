#include "Persona.h"
#include <iostream>
#include <string>

using namespace std;
using std::string;
using std::endl;


Persona::Persona(string Nombre,string Genero,string ColorCabello,string ColorOjos,string ColorPiel,bool Fertil){
	this->Nombre=Nombre;
	this->Genero=Genero;
	this->ColorCabello=ColorCabello;
	this->ColorOjos=ColorOjos;
	this->ColorPiel=ColorPiel;
	this->Fertil=Fertil;
}



//Sobrecarga de operadores, mediante funciones friend
Persona operator+(const Persona &a ,const Persona &b) {
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