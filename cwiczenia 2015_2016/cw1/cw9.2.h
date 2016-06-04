#include "librarys.h"
#include <set>
#include <iostream>


typedef set<char, less<char>> maleje;
//Sortowanie w kolejnoœci malej¹cej
typedef set<char> rosnie;
//Sortowanie w kolejnoœci rosnacej


template<typename T> void Drukuj(T obiekt)
{
	if (obiekt.size() != 0)
	{
		T::iterator iter = obiekt.begin();
		while (iter != obiekt.end())
		{
			cout << " " << *iter;
			++iter;
		}
		cout << endl;
	}
	else
		cout << "Pusty obiekt\n";
}





void cwww91(){
	set <int> setInt;
	for (int i = 0; i < 10; i++)
		setInt.insert(i);
	Drukuj(setInt);
	maleje setchar;
	for (char i = 'a'; i < 'j'; i++)
		setchar.insert(i);
	Drukuj(setchar);
	maleje::iterator iterch=setchar.find('e');
	if (iterch != setchar.end()){
		int liczba = 1;
		maleje::iterator iterato2 = setchar.begin();
		while (iterato2 != iterch){ iterato2++; liczba++; }
		cout << "Znaleziono lite e na miejscu:" << liczba << endl;
	}
	else cout << "nie znaleziono elementy " << endl;
	//--- set pozwala na jeden typ tej samej danej 
	Drukuj(setchar);
	setchar.insert('c');
	setchar.insert('c');
	Drukuj(setchar);
	cout << "-----usuwanie litery--------" << endl;
	rosnie setchar2;
	setchar2.insert(setchar.begin(),setchar.end());//wstawienie pod kontener ca³ej zawartoœci kontenera setchar
	Drukuj(setchar2);
	setchar2.erase('b');
	Drukuj(setchar2); 
	cout << "-----usuwanie zawartoœci kontenera--------" << endl;
	setchar2.clear();
	Drukuj(setchar2);
	
	


}





void cwww92(){
	typedef multiset<char, less<char>> malejem;
	//Sortowanie w kolejnoœci malej¹cej
	typedef multiset<char> rosniem;
	//Sortowanie w kolejnoœci rosnacej

	set <int> setInt;
	for (int i = 0; i < 10; i++)
		setInt.insert(i);
	Drukuj(setInt);
	malejem setchar;
	for (char i = 'a'; i < 'j'; i++)
		setchar.insert(i);
	setchar.insert('e');
	setchar.insert('e');

	Drukuj(setchar);
	malejem::iterator iterch = setchar.find('e');
	if (iterch != setchar.end()){
		int liczba = 1;
		malejem::iterator iterato2 = setchar.begin();
		while (iterato2 != iterch){ iterato2++; liczba++; }
		cout << "Znaleziono lite e na miejscu:" << liczba << endl;
		cout << "liter e jest w iloœci " << setchar.count('e') << endl;
	
	}
	else cout << "nie znaleziono elementy " << endl;
	//--- set pozwala na jeden typ tej samej danej 
	Drukuj(setchar);
	setchar.insert('c');
	setchar.insert('c');
	Drukuj(setchar);
	cout << "-----usuwanie litery--------" << endl;
	rosniem setchar2;
	setchar2.insert(setchar.begin(), setchar.end());//wstawienie pod kontener ca³ej zawartoœci kontenera setchar
	Drukuj(setchar2);
	cout << "liter c by³o: " << setchar2.count('c') << endl;
	setchar2.erase('c');
	Drukuj(setchar2);
	cout << "-----usuwanie zawartoœci kontenera--------" << endl;
	setchar2.clear();
	Drukuj(setchar2);
}
//##########################################################

