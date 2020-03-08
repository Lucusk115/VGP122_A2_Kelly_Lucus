//Crazy-Eights Game
#include <iostream>
#include <string>
#include <array>
#include <cstdlib>
#include "Game.h"
#include "Player.h"
#include "Deck.h"
#include "Dealer.h"

using namespace std;
int x = 0;
int cardStatus = 0;
void main()
{
	string chosenCard;
	Game game;
	Deck deck;
	Dealer dealer;
	Player player1, player2;

	game.gameRules();
	player1.enterName();
	player2.enterName();
	deck.buildDeck();
	dealer.shuffle();
	dealer.deal();
	dealer.playerDeal();
	//player1.dealHand();
	//player2.dealHand();
	
	dealer.topCard();
	//player1.displayHand();
	//player2.displayHand();
	game.cardInstructions();
	dealer.lastCard();
	dealer.restart();
	

}