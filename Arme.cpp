#include "Arme.h"

Arme::Arme(std::string nom, int dmg) : m_nom{ nom }, m_dmg{ dmg } {}

int Arme::getDmg()
{
	return m_dmg;
}


