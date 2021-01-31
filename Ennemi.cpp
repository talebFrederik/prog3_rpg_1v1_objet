#include "Ennemi.h"

Ennemi::Ennemi(std::string nom, int vie, int dmg) : m_nom{ nom }, m_vie{ vie }, m_dmg{ dmg } {};

int Ennemi::attaquer(Strategie strategie)
{
	return strategie.getDmgFinal(m_dmg);
}

int Ennemi::recevoirDmg(bool dmg) 
{
	m_vie -= dmg;
	return m_vie;
}

bool Ennemi::isVivant() { return m_vie > 0; }
