#ifndef JOUEUR_DEF
#define JOUEUR_DEF

#include "Arme.h"
#include "Strategie.h"

class Joueur
{
private:
	int m_vie;
	Arme m_arme;
public:
	Joueur(int vie, Arme arme);
	int attaquer(Strategie strategie);
	int recevoirDmg(int dmg);
	bool isVivant();
};

#endif


