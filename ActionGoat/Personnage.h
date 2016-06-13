#pragma once
#include<string>
#include"Arme.h"

class Personnage
{
public:
	Personnage();
	~Personnage();
private:
	std::string m_nom;
	int m_vie;
	int m_mana;
	Arme m_arme;
public:
	void Deplacement();
	void Saut();
};

