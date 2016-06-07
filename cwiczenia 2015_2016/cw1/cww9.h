#include "librarys.h"
#include <vector>
//-----------------cw91----------
template<typename T> void Drukuj(vector<T> wektor)
{
	vector<T>::iterator it;
	cout << "[";
	for (it = wektor.begin(); it != wektor.end(); it++)
	{
		cout << *it << " ";
	}
	cout << "]" << endl;
}


//---------------------------------------
//######################################################

void cw91(){

	vector <int> wektor(3, 7); //deklaracja wektora o 3 razy numer  7 
	vector<int>::iterator iter; //inicjalizacja iterati=ora 
	Drukuj(wektor);	//druk wektora 
	iter = wektor.begin(); //ustawienie wektora na pocz�tek 
	iter += 2; //przesuni�cie iteratora o 2 w prawo 
	wektor.insert(iter, 3, 0); //wstawienie w miejsce iteratora trzech 0
	Drukuj(wektor); //wy�wietlenie wektora 
	iter = wektor.begin();//ustawienie iteratora na pocz�tek 
	iter += 4; //przesuni�cie iteratora o 4 w prawo 
	wektor.erase(iter, wektor.end());//usuni�cie wszystkiego od iteratora do ko�ca wektora 
	Drukuj(wektor);
	wektor.pop_back(); //Usuwa jeden element z kontenera vector, znajduj�cy si� na jego ko�cu
	Drukuj(wektor);
	vector <int> wektor1(wektor); //tworzenie wektora1 z warto�ciami wektora
	Drukuj(wektor1);
	vector <int> wektor2(8, 0); //tworzenie wektora2 z 8-ma zerami 
	for (int k = 0; k<7; k++)
	{
		wektor2[k] = 2 * k ; //wpisywanie do wektora 2 liczb o warto�ciach  0 2 4 6....12 a ostatnia 8 warto�� pozostaje bez zmian 
	}
	Drukuj(wektor2);

}
void cw92(){
	vector < char > dane;
	dane.push_back('a');//Dodaje nowy element na ko�cu kontenera vector
	dane.push_back('2');//Dodaje nowy element na ko�cu kontenera vector
	dane.push_back('A');
	for (size_t i = 0; i < dane.size(); i++)
		printf("%d, ", dane[i]); //wy�wietlenie danych z wektora jako warto�ci double 
	cout << endl;
	vector <char> danne2;
	cout << "kopiowanie danych :";
	danne2.assign(dane.begin(), dane.end()); //kopiowanie wektora dane 
	Drukuj(danne2);
	vector <char> danne3;
	cout << "kopiowanie danych bez 1 i ostatniego elementu :";
	danne3.assign(dane.begin()+1, dane.end()-1);
	Drukuj(danne3);

	//---------at
	cout << "----------opcja AT i operatora ------" << endl;
	danne3.push_back('A');
	danne3.push_back('A');
	cout << "dodanie do wektora na pozycji nr 2 litery B orginalnie :"; Drukuj(danne3); cout<< endl;
	danne3.at(2) = 'B';//wstawia 2 pole nr 2 czyli na 3 miejscu litere B uwaga program nie zadzia�a jak vektor nie bedzie mai� tylu sk�adowych
	Drukuj(danne3);
	danne3[2] = 'O';
	cout << "zamiana litery przez operator";
	Drukuj(danne3);
	cout << endl;
	//-------------pojemno�� wektora 
	vector <char> dane_poj;
	dane_poj.reserve(50); //rezerwuje 50 miejsc w wektorze dane_poj na warto�ci 
	dane_poj.push_back(5);

	printf("Kontener moze pomiescic obecnie %d elementow.\n", dane_poj.capacity());//capacity wskazuje pojemno�� kontenera
	printf("Liczba elementow w kontenerze: %d.\n", dane_poj.size());
	//usuwanie danych z kontenera
	dane.push_back(5);
	dane.push_back(2);
	dane.push_back(3);
	dane.push_back(1);
	cout << "ilo�� danych w kontenerze dane przed usunieciem :"; dane.size(); cout << endl;
	dane.clear();
	printf("Liczba elementow w kontenerze: %d po usuni�ciu \n", dane.size());
	//---------------sprawdzanie czy kontener jest pusty
	cout << "---------------sprawdzanie czy kontener jest pusty---------" << endl;
	if (dane.empty() == 1)
		cout << "jestem pusty" << endl;
	else cout << "nie jestem pusty " << endl;
	cout << "dodanie do kontenera dana" << endl;
	dane.push_back('a');
	if (dane.empty() == 1)
		cout << "jestem pusty" << endl;
	else cout << "nie jestem pusty " << endl;
	////-----resize
	cout << "----resize----" << endl;
	cout << "dane z wykorzystaniem resize , bez:" << dane.size() << endl;
	dane.resize(5); //zmiana wielko�ci kontenera 
	cout << "dane z wykorzystaniem resize , z:" << dane.size() << endl;

	
}
void cw93(){
	vector<string> vektor;
	vektor.push_back("kot");
	vektor.push_back("OWCA");
	Drukuj(vektor);
	vector<string>::iterator iter;
	iter = vektor.begin();
	cout << *iter << endl;

	vektor.erase(iter);
	Drukuj(vektor);

}


void cw94(){

	string wyraz, cos;
	cout << "Podaj tekst: ";
	getline(cin, wyraz); //wczytywanie ���cucha znak�w 
	cout << "Wprowadziles: \"" << wyraz << "\"" << endl;
	cout << "D�ugosc wyrazu: " << wyraz.length() << endl;//odczytywanie d�ugosci wyrazu 
	cout << "Podaj tekst: ";
	getline(cin, wyraz);
	cos += wyraz;
	cout << cos << endl;
	cout << "Podaj tekst: ";
	getline(cin, wyraz);
	cos += wyraz; //doklejanie �a�cycha na koniec 
	cout << cos << endl;
	cout << "--- ��czenie tekst�w --- ";
	string  wyraz2, wynik;
	cout << "Podaj tekst: ";
	getline(cin, wyraz);

	cout << "Podaj drugi tekst: ";
	getline(cin, wyraz2);
	wynik = wyraz + " ale " + wyraz2; //��czenia tekst�w
	cout << "Polaczony tekst to: \"" << wynik << "\"" << endl; //wy�witlenie wyniku 
	cout << "D�ugosc tekstu: " << wynik.length() << endl; //odczytanie d�ugo�ci 
	cout << wynik[0] << "-pierwszy znak" << endl;
	string::iterator iter;
	iter =wynik.begin();
	iter += 4; //+4 bo od zera liczy 
	cout << "5 znak w tekscie to :" << *iter << endl;
	wynik.erase(iter);
	cout << wynik << "  :ups usuno�em znak" << endl;


	

		
	
	}
void cw95(){
	string wyraz;
	string str("Test string");
	for (unsigned int i = 0; i<str.length(); ++i)
	{
		cout << str.at(i); //wypisuje ca�e s�owo w p�tli 
	}
	cout << endl;

	for (unsigned int i = 0; i<str.length(); ++i)
	{
		cout << str[i]; //wypisuje ca�e s�owo w p�tli 
	}
	cout << endl;
	cout <<"Ostatnia znak " <<str.back() <<"  Pierwszy znak: "<<str.front()<< endl;//odczytywanie pierwszego i ostatniego znaku

	cout << wyraz.append(str, 2, 8) << endl << endl;;//Wy�wietlenie s�owa str ale do 2 do 8 znaku 
	wyraz = "wiesz co";
	cout << wyraz.append("TO S�OWO MA WI�CEJ NI� 5 ZNAK�W ", 8) << endl;;//wy�wietlenie tylko zawarto�ci wyraz + 8 znak�w z tekstu w nawiasie 
	//
	str.assign(wyraz);
	std::cout << str << '\n';//wy�wietlenie ca�ej zawarto�ci wyraz 

	str.assign(wyraz, 2, 6);//wklejenie 6 znak�w zawarto�ci wyraz od 2 znaku do 8 znaku  
	std::cout << str << '\n';  

	str.assign(" co to ma znaczy� ", 7);//wklejenie pod str 7 znak�w podanego zdania w nawiasie  
	std::cout << str << '\n';
}