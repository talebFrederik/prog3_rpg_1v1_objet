#ifndef PARTIE_DEF
#define PARTIE_DEF

#include "Joueur.h"
#include "Ennemi.h"
#include "Strategie.h"

class Partie
{
private:
	Joueur m_joueur;
	Ennemi m_listeEnnemis[5];
	Ennemi m_ennemi;
	Strategie m_strategies[2];
	Strategie m_strategieTour;

	void choisirEnnemi();
	void choisirStrategie();
	void resoudreDmg();
	void afficherVie(int vieJoueur, int vieEnnemi);
public:
	Partie();
	void jouer();
};

#endif


