#ifndef STRATEGIE_DEF
#define STRATEGIE_DEF

#include <string>

class Strategie
{
private:
	std::string m_nom;
	int m_pourcentageTouche;
	int m_modificateurDmg;
public:
	Strategie(std::string nom, int pourcentageTouche, int modificateurDmg);
	int getDmgFinal(int dmg);
};

#endif

