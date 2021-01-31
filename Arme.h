#ifndef ARME_DEF
#define ARME_DEF

#include <string>

class Arme
{
private:
	std::string m_nom;
	int m_dmg;
public:
	Arme(std::string nom, int dmg);
	int getDmg();
};

#endif

