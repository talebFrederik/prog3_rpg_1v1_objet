#include "Strategie.h"
#include <string>
#include <random>


Strategie::Strategie(std::string nom, int pourcentageTouche, int modificateurDmg)
	: m_nom{ nom }, m_pourcentageTouche{ pourcentageTouche }, m_modificateurDmg{modificateurDmg}
{}

int Strategie::getDmgFinal(int dommage)
{
	std::random_device rd;
	std::mt19937 rn(rd());
	std::uniform_int_distribution<> rng(1, 100);

	if (rng(rn) < m_pourcentageTouche)
	{
		return 0;
	}
	else
	{
		return dommage + m_modificateurDmg;
	}
}
