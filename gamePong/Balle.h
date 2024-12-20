#pragma once
#include "Header.h"
#include "Player.h"

class Balle
{
public:
	Balle();
	//methode
	void drawRacket(sf::RenderWindow& window);
	void moveBalle(Player& player1, Player& player2);

private:
	sf::Color color{ 255, 195, 0 };
	int speed{ 10 };
	sf::Vector2f vectorMove{ float(speed/3 *2) , float(speed / 3 ) };
	sf::Vector2f ActualVectorMove{ vectorMove };
	float rayonne{ 15 };
	sf::CircleShape sprite{ rayonne };
};