#include "Joueur.h"

Joueur::Joueur(int vie, Arme arme) : m_vie{ vie }, m_arme{ arme }{}

int Joueur::attaquer(Strategie strategie)
{
	return strategie.getDmgFinal(m_arme.getDmg());
}

int Joueur::recevoirDmg(int dmg) 
{
	m_vie -= dmg;
	return m_vie;
}

bool Joueur::isVivant() { return m_vie > 0; }
