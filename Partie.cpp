#include <random>
#include <iostream>
#include "Partie.h"

Partie::Partie() : 
	m_joueur{ 50, {"epee", 10} },
	m_listeEnnemis{ 
		{ "Minotaur", 35, 8 },
		{"Gobelin", 30, 4},
		{"Voleur", 25, 12},
		{"Mercenaire", 50, 6},
		{"Magicien", 20, 16} },
	m_ennemi{"Minotaur", 35, 8},
	m_strategies{ {"Offensif", 40, 1}, {"Defensif", 60, -1} },
	m_strategieTour{"Default", 50, 0}
{}

void Partie::jouer()
{
	choisirEnnemi();

	while (m_joueur.isVivant() && m_ennemi.isVivant())
	{
		choisirStrategie();
		resoudreDmg();
	}

	if (m_joueur.isVivant())
	{
		std::cout << "Vous avez gagne! \n";
	}
	else
	{
		std::cout << "Vous avez perdu! \n";
	}
}

void Partie::choisirEnnemi()
{
	std::random_device rd;
	std::mt19937 rn(rd());
	std::uniform_int_distribution<> rng(0, 4);

	m_ennemi = m_listeEnnemis[rng(rn)];
}

void Partie::choisirStrategie()
{
	std::cout << "Choisissez votre strategie \n";
	std::cout << "'o' pour offensif \n";
	std::cout << "'d' pour defensif \n";
	char choix('o');
	std::cin >> choix;

	if (choix == 'o')
	{
		m_strategieTour = m_strategies[0];
	}
	else
	{
		m_strategieTour = m_strategies[1];
	}
}

void Partie::afficherVie(int vieJoueur, int vieEnnemi)
{
	std::system("CLS");
	std::cout << "Il vous reste " << vieEnnemi << " points de vie \n";
	std::cout << "Il reste " << vieJoueur << " points de vie a votre ennemi \n";
}

void Partie::resoudreDmg()
{
	afficherVie(
		m_ennemi.recevoirDmg(m_joueur.attaquer(m_strategieTour)),
		m_joueur.recevoirDmg(m_ennemi.attaquer(m_strategieTour))
	);
}
