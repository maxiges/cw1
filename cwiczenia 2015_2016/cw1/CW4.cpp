#include "CW4.h"


Car::Car(){ Marka = "Toyota"; Model = "corola"; VIN = 000; rok = 1994; przebieg = 300; cena = 5000; }

void Car::wypisz(Car* samoch)
{
	cout << "Mamochód podany to :" << this->Marka << "  " << this->Model << endl;
	cout << "Samochud jaki odczytujesz : " << samoch->Marka << "  " << samoch->Model << endl;
	cout << "Rok:" << samoch->rok <<"\nPrzebieg:"<<samoch->przebieg<<"\nCena:"<<samoch->cena<< endl;
}


void Car::zmien(string model, string marka)
{
	Marka = marka;
	Model = model;
}
void Car::zmien(string model, char* marka){
	Marka = model;
	Model = marka;
}
int Car::operator-(Car car2){
	int cenka=0;
	return( cenka - car2.cena);
	
}
int Car::operator++()
{
	return(cena *= 2);

}