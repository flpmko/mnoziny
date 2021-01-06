#pragma once
class Mnozina
{private:
	short** zoznam;
	short velkost;
public:
	Mnozina();
	Mnozina(short size);
	friend Mnozina operator-(const Mnozina& a, const Mnozina& b);
	short getVelkost();
	short** getZoznam();
	void VlozCislo(int pozicia, short* hodnota);
	void nacitajCislo(int i);
	bool lookup(short* cislo);
	void Vypis();
	~Mnozina();
};

