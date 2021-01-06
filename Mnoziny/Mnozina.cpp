#include "Mnozina.h"
#include <iostream>

Mnozina::Mnozina()
{
}

Mnozina::Mnozina(short paVelkost)
{
	this->velkost = paVelkost;
	this->zoznam = new short* [paVelkost];
}

short Mnozina::getVelkost()
{
	return this->velkost;
}

short** Mnozina::getZoznam()
{
	return this->zoznam;
}

void Mnozina::VlozCislo(int pozicia, short* hodnota)
{
	if (0 <= pozicia || pozicia <= this->velkost)
	{
		/*if (lookup(hodnota))
		{
			VlozCislo();
		}*/
		this->zoznam[pozicia] = hodnota;
	}
}

void Mnozina::nacitajCislo(int i)
{
	short cislo;
	scanf("%hd", &cislo);
	if (this->lookup((short*)cislo))
	{
		printf("Zadane cislo sa uz v mnozine nachadza! Zadaje ine:\n");
		this->nacitajCislo(i);
	}
	else
	{
		this->VlozCislo(i, (short*)cislo);
	}
}

bool Mnozina::lookup(short* cislo)
{
	for (int i = 0; i < this->velkost; i++)
	{
		if (this->zoznam[i] == cislo)
			return true;
	}
	return false;
}

void Mnozina::Vypis()
{
	for (int i = 0; i < this->velkost; i++)
	{
		printf("%hd\n", this->zoznam[i]);
	}
}

Mnozina operator-(const Mnozina& a, const Mnozina& b)
{
	//zistujem pocet zhod, aby som vedel aka velka bude mnozina c
	short zhody = 0;
	for (int i = 0; i < a.velkost; i++)
	{
		for (int j = 0; j < b.velkost; j++)
		{
			if (a.zoznam[i] == b.zoznam[j])
			{
				zhody++;
			} 
		}
	}

	//vytvorenie a inicializacia mnoziny c a pomocnych premennych
	short pozicia = 0;
	bool zhoda = false;
	Mnozina c(a.velkost - zhody);
	for (int i = 0; i < c.getVelkost(); i++)
	{
		c.zoznam[i] = 0;
	}

	//naplnam mnozinu c prvkami, ktore sa nezhoduju
	for (int i = 0; i < a.velkost; i++)
	{
		zhoda = false;
		while (!zhoda)
		{
			for (int j = 0; j < b.velkost; j++)
			{
				if (a.zoznam[i] == b.zoznam[j])
				{
					zhoda = true;
					break;
				}
			}
			if (!zhoda)
			{
				c.zoznam[pozicia] = a.zoznam[i];
				pozicia++;
				zhoda = true;
			}
		}
	}
	
	return c;
}

Mnozina::~Mnozina()
{
	/*for (int i = 0; i < this->velkost; i++)
	{
		delete this->zoznam[i];
	}
	delete[] this->zoznam;
	this->velkost = 0;*/
}
