#pragma once
#include "Header.h"
#include "Balle.h"


void creatScors(sf::Font& font, sf::Text& scorPlayer1, sf::Text& scorPlayer2, sf::Text gameOver, sf::Text resultat);
void drawScors(sf::RenderWindow& window, sf::Text& scorPlayer1, sf::Text& scorPlayer2);

void creatResultat(sf::Font& font, sf::Text& gameOver, sf::Text& resultat);
void drawResultat(sf::RenderWindow& window, sf::Text& gameOver, sf::Text& resultat);