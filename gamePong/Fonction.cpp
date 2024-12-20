#include "Fonction.h"

void creatScors(sf::Font& font, sf::Text& scorPlayer1, sf::Text& scorPlayer2, sf::Text gameOver, sf::Text resultat) {
	//charger la police
	font.loadFromFile("res/Kanit-Bold.ttf");

	// choix de la police à utiliser
	scorPlayer1.setFont(font);
	scorPlayer2.setFont(font); 
	gameOver.setFont(font);
	resultat.setFont(font);

	// choix de la chaîne de caractères à afficher
	scorPlayer1.setString("Player  1  : 0");
	scorPlayer2.setString("Player  2  : 0");
	gameOver.setString("GameOver");
	resultat.setString("Player 1 a gagner !!!");

	// choix de la taille des caractères
	scorPlayer1.setCharacterSize(24); 
	scorPlayer2.setCharacterSize(24);
	gameOver.setCharacterSize(72);
	resultat.setCharacterSize(48);

	// choix de la couleur du texte
	scorPlayer1.setFillColor(sf::Color(0, 89, 255));
	scorPlayer2.setFillColor(sf::Color(0, 89, 255));
	gameOver.setFillColor(sf::Color(237, 9, 9));
	resultat.setFillColor(sf::Color(237, 102, 9));

	// choix de la position
	scorPlayer1.setPosition(sf::Vector2f(120, 20));
	scorPlayer2.setPosition(sf::Vector2f(550, 20));
	gameOver.setPosition(sf::Vector2f(300, 200));
	resultat.setPosition(sf::Vector2f(300, 250));
}

void drawScors(sf::RenderWindow& window, sf::Text& scorPlayer1, sf::Text& scorPlayer2){
	window.draw(scorPlayer1);
	window.draw(scorPlayer2);
}

void creatResultat(sf::Font& font, sf::Text& gameOver, sf::Text& resultat) {
	//charger la police
	font.loadFromFile("res/Kanit-Bold.ttf");

	// choix de la police à utiliser
	gameOver.setFont(font);
	resultat.setFont(font);

	// choix de la chaîne de caractères à afficher
	gameOver.setString("GameOver");
	resultat.setString("Player 1 a gagner !!!");

	// choix de la taille des caractères
	gameOver.setCharacterSize(72);
	resultat.setCharacterSize(48);

	// choix de la couleur du texte
	gameOver.setFillColor(sf::Color(237, 9, 9));
	resultat.setFillColor(sf::Color(237, 102, 9));

	// choix de la position
	gameOver.setPosition(sf::Vector2f(300, 200));
	resultat.setPosition(sf::Vector2f(300, 250));
}

void drawResultat(sf::RenderWindow& window, sf::Text& gameOver, sf::Text& resultat) {
	window.draw(gameOver);
	window.draw(resultat);
}
