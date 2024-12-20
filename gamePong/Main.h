#pragma once
#include "Header.h"
#include "Fonction.h"
#include "Player.h"
#include "Balle.h"

//window
int widthWindow = 800;
int heightWindow = 450;
sf::Event event;
sf::RenderWindow window(sf::VideoMode(widthWindow, heightWindow), "Pong");

//game
sf::Font font;
sf::Text scorPlayer1;
sf::Text scorPlayer2;
sf::Text gameOver;
sf::Text resultat;
std::string page{ "menu" };

//Joueur
Player player1{ Player(sf::Vector2f(10, 200), &scorPlayer1, "Player 1") };
infoMove infoMovePlayer1{ false,false,false,false };
Player player2{ Player(sf::Vector2f(780, 200), &scorPlayer2, "PLayer 2")};
infoMove infoMovePlayer2{ false,false,false,false };

//Balle
Balle balle{ Balle() };