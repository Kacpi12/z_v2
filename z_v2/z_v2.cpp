// z_v2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>



int Gora(int wielkosc)
{


	for (int i = 0; i < wielkosc; i++)
	{
		std::cout << "Z";
	}
	std::cout << "\n";
	return wielkosc;
}

int Srodek(int wielkosc)
{
	for (int gorne = 0; gorne < wielkosc; gorne++)
	{
		for (int spacje = 0; spacje < wielkosc; spacje++)
		{
			if (spacje < (wielkosc - 1) - gorne)
			{
				std::cout << " ";
			}
			else if (spacje == wielkosc - 1)
			{
				std::cout << "B";
			}
		}
		std::cout << "\n";
	}
	return wielkosc;
}


int Dol(int wielkosc)
{
	for (int i = 0; i < wielkosc; i++)
	{
		std::cout << "Z";
	}
	return wielkosc;
}

void wyswietl_napis()
{
	std::cout << "Witaj to jest program rysujacy litere 'Z'. \n";
	std::cout << "Podaj wielkosc litery: ";
}

int zapytanie(int wielkosc)
{
	std::cin >> wielkosc;
	return wielkosc;
} 


int main()
{
	int wielkosc_1;
	
	wyswietl_napis();

	std::cin >> wielkosc_1;

	Gora(wielkosc_1); //
	Srodek(wielkosc_1); // wywolania
	Dol(wielkosc_1); // 
	
}

