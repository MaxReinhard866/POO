#include "persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {
	//atributos
	private : string nit;
	
	//constructor
	public :
	Cliente(){
	}
	
	Cliente(string nom,string ape,string dir,int tel,string n) : Persona(nom,ape,dir,tel){
	
		nit = n;
}
	
	
	
};
