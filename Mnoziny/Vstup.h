#pragma once
#include "Mnozina.h"

//nacitanie z terminalu

class Vstup
{
private:

public:
	Vstup();
	short NacitajVelkost();
	void NacitajPrvky(Mnozina& mnozina); //bude nacitavat viackrat za sebou
	~Vstup();
};

