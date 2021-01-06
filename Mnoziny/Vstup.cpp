#include "Vstup.h"
#include <stdio.h>

Vstup::Vstup()
{
}

short Vstup::NacitajVelkost()
{
	short number = 0;

	scanf("%hd", &number);
	//printf("Zadana velkost: %hd\n", number);

	return number;
}

void Vstup::NacitajPrvky(Mnozina mnozina)
{
	//short cislo;
	short velkost = mnozina.getVelkost();
	switch (velkost)
	{
	case 1:
		printf("Zadajte %hd prvok:\n", velkost);
		break;
	case 2:
	case 3:
	case 4:
		printf("Zadajte %hd prvky po jednom:\n", velkost);
		break;
	default:
		printf("Zadajte %hd prvkov po jednom:\n", velkost);
		break;
	}
	

	for (int i= 0; i < velkost; i++)
	{
		mnozina.nacitajCislo(i);
	}
}

Vstup::~Vstup()
{
}
