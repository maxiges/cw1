#include"librarys.h"
#include <list>

template<typename typ> void Drukuj(list<typ> lista)
{
	if (lista.size() > 0)//sprawdzanie czy lista jest wi�ksza od 0
	{
		cout << "{ ";
		list<typ>::iterator iter; //tworzenie iteratora 
		for (iter = lista.begin();iter != lista.end();++iter)
			cout << *iter << " ";
		cout << "}" << endl;
	}
	else
		cout << "Pusta lista" << endl;
}

void cww91(){
	list<int> lista1;
	lista1.push_back(3);//Dodaje nowy element na ko�cu kontenera listy
	lista1.push_front(0);//Dodaje nowy element na pocz�tku kontenera listy
	lista1.push_back(4);//Dodaje nowy element na ko�cu kontenera listy
	lista1.push_front(-1);//Dodaje nowy element na pocz�tku kontenera listy
	Drukuj(lista1);
	//--usuwanie z listy--
	lista1.pop_back();//usuwa element na ko�cu kontenera listy
	lista1.pop_front(); //usuwa element na pocz�tku kontenera listy
	Drukuj(lista1);
	//--------------iterator-------
	list<int>::iterator iter; //deklaracja iteratora
	iter = lista1.begin();//ustawienie iteratora na pocz�tek listy lisa1
	iter++; //przesuni�cie iteratora o 1 w prawo i tylko o jeden maksymalnie mo�na go przesuwa� w jednym cyklu nie dzia�a iter+=5;
	lista1.erase(iter); //usuwa sk�adnik w miejscu iteratora 
	Drukuj(lista1);
	
	for (int i = 0; i < 5; i++)
		lista1.push_front(i);
	Drukuj(lista1);
	list<int>::iterator iter2;
	iter2 = lista1.end();
	iter=lista1.begin();
	iter2--; iter2--;
	lista1.erase(iter, iter2); //usuwanie element�w pomi�dzy iteratorami 
	Drukuj(lista1);
}

bool ustal_male(int a, int b){ return(a > b); }
bool ustal_ros(int a, int b){ return(a < b); }

void cww92(){
	list<int> lista;
	list<int> lista2;
	list<int>::iterator iter;


	for (int i = 0; i < 5; i++)
		lista.push_front(i);
	for (int i = 7; i < 10; i++)
		lista2.push_front(i);
	iter = lista.begin(); iter++;

	Drukuj(lista); Drukuj(lista2);
	//--wstawianie do listy ---
	
	lista.insert(lista.begin(), 0);//wstawienie na pocz�tek 0
	Drukuj(lista);
	
	lista.insert(iter, lista2.begin(), lista2.end()); //wstawienie w miejsce w kt�re wskazuje iter od pocz�tku kontenera lista2 do ko�ca kontenera lista 2
	Drukuj(lista);
	cout << "----------sortowanie-----" << endl;
	lista.sort();
	Drukuj(lista);
	lista.sort(ustal_male);
	Drukuj(lista);
	lista.sort(ustal_ros);
	Drukuj(lista);
	

}




