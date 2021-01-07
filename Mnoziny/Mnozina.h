#pragma once
class Mnozina
{private:
	short** zoznam = nullptr;
	short velkost = 0;
public:
	Mnozina();
	Mnozina(short size);
	Mnozina(const Mnozina& zdroj);
	Mnozina operator = (const Mnozina& zdroj);
	friend Mnozina operator-(const Mnozina& a, const Mnozina& b);
	short getVelkost();
	short** getZoznam();
	void VlozCislo(int pozicia, short hodnota);
	void nacitajCislo(int i);
	bool lookup(short* cislo);
	void Vypis();
	~Mnozina();
};

