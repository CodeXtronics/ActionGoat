#pragma once
class Personnage
{
public:
	Personnage();
	~Personnage();
private:
	int m_vie;
	int m_mana;
public:
	void Deplacement();
};

