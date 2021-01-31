#ifndef ENNEMI_DEF
#define ENNEMI_DEF

#include <string>
#include "Strategie.h"

class Ennemi
{
private:
	std::string m_nom;
	int m_vie;
	int m_dmg;
public:
	Ennemi(std::string nom, int vie, int dmg);
	int attaquer(Strategie strategie);
	int recevoirDmg(int dmg);
	bool isVivant();
};
#endif


