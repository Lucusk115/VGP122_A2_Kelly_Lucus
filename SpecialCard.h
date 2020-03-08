#ifndef SPECIALCARD_H__
#define SPECIALCARD_H__
#include<iostream>
#include<string>
#include<array>
#include "Game.h"
#include "Deck.h"
#include "Dealer.h"

using namespace std;

class SpecialCard
{
private:

	Deck deck;
	//Dealer dealer;
	string chosenCard;
	char keypress = ' ';
	int y;

public:
	SpecialCard();
	SpecialCard(string chosenCard);
	void setChosenCard(string chosenCard);
	string getChosenCard();

	string crazyEight(string chosenCard);
	void playTwo(string chosenCard);
	void playJack(string chosenCard);


};

#endif