#include "Balle.h"


Balle::Balle()
{
	sprite.setFillColor(color);
	sprite.setOrigin(sf::Vector2f(rayonne, rayonne));
	sprite.setPosition(sf::Vector2f(400.f, 40.f));
}

void Balle::drawRacket(sf::RenderWindow& window) {
	window.draw(sprite);
}

void Balle::moveBalle(Player& player1, Player& player2) {
	sf::Vector2f sizeRacket = sprite.getGlobalBounds().getSize();
	//changement de direction sur les bord de la fenétre
	if (sprite.getPosition().x > 800 - rayonne) { 
		ActualVectorMove.x = - vectorMove.x; 
		sprite.move(-30, 0); 
		player1.incrementScor();
	}
	else if (sprite.getPosition().x < rayonne) { 
		ActualVectorMove.x = vectorMove.x; 
		sprite.move(30, 0);
		player2.incrementScor();
	}
	else if (sprite.getPosition().y > 450 - rayonne) { ActualVectorMove.y = - vectorMove.y; }
	else if (sprite.getPosition().y < rayonne) { ActualVectorMove.y = vectorMove.y; }

	//changement de direction sur les rackets
	else if (sprite.getGlobalBounds().intersects(player1.get_racket().getGlobalBounds())) {
			ActualVectorMove.x = vectorMove.x;
		}
	else if (sprite.getGlobalBounds().intersects(player2.get_racket().getGlobalBounds())) {
		ActualVectorMove.x = - vectorMove.x;
	}


	//bouge la balle
	sprite.move(ActualVectorMove.x, ActualVectorMove.y);
}