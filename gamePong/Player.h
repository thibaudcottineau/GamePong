#pragma once
#include "Header.h"

class Player
{
public:
	//constructeur
	Player(sf::Vector2f position, sf::Text* scorPlayer, std::string name);
	//methode
	void drawRacket(sf::RenderWindow& window);
	void moveRacket(infoMove& infoMove);
	//get
	sf::RectangleShape& get_racket();
	int get_scor();
	//set
	void incrementScor();

private:
	std::string name;
	sf::Text* scorPlayer;
	int scor{ 0 };
	int speed{ 5 };
	sf::RectangleShape racket{ sf::Vector2f(10.f, 60.f) };
};