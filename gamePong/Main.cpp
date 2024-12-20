#include "Main.h"

int main()
{
    //initialisation de window
    window.setVerticalSyncEnabled(true);

    //initialisation du game
    creatScors(font, scorPlayer1, scorPlayer2, gameOver, resultat);
    creatResultat(font, gameOver, resultat);

    while (window.isOpen())
    {
        //gestion events
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) window.close();
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Z) { infoMovePlayer1.up = true; }
                else if (event.key.code == sf::Keyboard::S) { infoMovePlayer1.down = true; }
                if (event.key.code == sf::Keyboard::Up) { infoMovePlayer2.up = true; }
                else if (event.key.code == sf::Keyboard::Down) { infoMovePlayer2.down = true; }
            }
            if (event.type == sf::Event::KeyReleased) {
                if (event.key.code == sf::Keyboard::Z) { infoMovePlayer1.up = false; }
                else if (event.key.code == sf::Keyboard::S) { infoMovePlayer1.down = false; }
                if (event.key.code == sf::Keyboard::Up) { infoMovePlayer2.up = false; }
                else if (event.key.code == sf::Keyboard::Down) { infoMovePlayer2.down = false; }
            }
        }
        //deplacer les raquettes
        player1.moveRacket(infoMovePlayer1);
        player2.moveRacket(infoMovePlayer2);
        balle.moveBalle(player1, player2);



        //afficher les sprites
        window.clear();
        player1.drawRacket(window);
        player2.drawRacket(window);
        balle.drawRacket(window);
        drawScors(window,scorPlayer1,scorPlayer2);
        //verifier si un joueur a gagner
        if (player1.get_scor() >= 2 || player2.get_scor() >= 2) {
            drawResultat(window, gameOver, resultat);
        }
        window.display();
    }

    return 0;
}

void playMenu(){}

void playGame(){

}