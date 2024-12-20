#include "Player.h"

//methode

Player::Player(sf::Vector2f position, sf::Text* scorPlayer, std::string name) : scorPlayer(scorPlayer), name(name)
{
	racket.setPosition(position);
}

void Player::drawRacket(sf::RenderWindow& window) {
	window.draw(racket);
}

void Player::moveRacket(infoMove& infoMove) {
	if (infoMove.up == true && racket.getPosition().y > 0){ this->racket.move(0,-speed); }
	else if (infoMove.down == true && racket.getPosition().y < 450 - racket.getLocalBounds().height) { this->racket.move(0, speed); }
}

//getteur

sf::RectangleShape& Player::get_racket() { return racket; }

int Player::get_scor() { return scor; }

//setteur

void Player::incrementScor() {
	scor += 1;
	scorPlayer->setString(name+ " : " + std::to_string(scor));
}