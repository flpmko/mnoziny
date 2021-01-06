#include "Mnozina.h"
#include "Vstup.h"
#include <stdio.h>
#include <string>

#define _CRT_SECURE_NO_DEPRECATE

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Vstup vstup;

	printf("Zadaj velkost mnoziny M1: ");
	Mnozina M1(vstup.NacitajVelkost());
	vstup.NacitajPrvky(M1);

	printf("Zadaj velkost mnoziny M2: ");
	Mnozina M2(vstup.NacitajVelkost());
	vstup.NacitajPrvky(M2);

	printf("Rozdiel mnozin M1 - M2:\n");
	(M1 - M2).Vypis();

	/*printf("Mnozina M1 obsahuje tieto prvky:\n");
	M1.Vypis();*/

	/*printf("Mnozina M2 obsahuje tieto prvky: ");
	M2.Vypis();*/

	return 0;
}