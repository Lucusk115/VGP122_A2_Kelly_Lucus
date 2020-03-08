#include "SpecialCard.h"
#include "Dealer.h"
#include "Deck.h"
#include "Game.h"
#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<ctime>
#include<array>
using namespace std;

SpecialCard::SpecialCard() 
{
	string chosenCard = "Default";
	
}

SpecialCard::SpecialCard(string chosenCard) 
{
	chosenCard = chosenCard;
}

void SpecialCard::setChosenCard(string chosenCard) 
{
	this->chosenCard = chosenCard;
}

string SpecialCard::getChosenCard() 
{
	return chosenCard;
}

/*string SpecialCard::crazyEight(string chosenCard)
{
	chosenCard = dealer.getChosenCard();
	if (chosenCard == "8")
	{
		cout << "Crazy Eight!\n" << "Change suit by pressing 0,1,2, or 3\n"
			<< "0 = Hearts\n" << "1 = Diamonds\n" << "2 = Clubs\n" << "3 = Spades\n"
			<< endl;

		cin >> keypress;

		switch (keypress)
		{
		case '0':
			dealer.discard[y].suit = "Hearts";
			break;
		case '1':
			dealer.discard[y].suit = "Diamonds";
			break;
		case '2':
			dealer.discard[y].suit = "Clubs";
			break;
		case '3':
			dealer.discard[y].suit = "Spades";
			break;

		default:
			cout << "Invalid Keypress\n" << endl;
			break;
		}
	}
	setChosenCard (dealer.discard[y].suit);
	return chosenCard;
}

void SpecialCard::playTwo(string chosenCard)
{
	if (chosenCard == "2")
	{
		for (size_t i = 0; i < hand.size(); ++i)
		{
			if (hand[i].positionStatus == 0 || hand[i].cardStatus == 3)
			{
				//place top card of deck into player hand
				hand[i].face = deck.deck[x].face;
				hand[i].suit = deck.deck[x].suit;

				deck.deck[x].cardStatus = 1;
				hand[i].positionStatus = 1;

				++x;
			}
			break;
		}

		//place second card into player hand
		for (size_t i = 0; i < hand.size(); ++i)
		{
			if (hand[i].positionStatus == 0 || hand[i].cardStatus == 3)
			{
				hand[i].face = deck.deck[x].face;
				hand[i].suit = deck.deck[x].suit;

				deck.deck[x].cardStatus = 1;
				hand[i].positionStatus = 1;

				++x;
			}
			break;
		}

	}
}

void SpecialCard::playJack(string chosenCard)
{
	if (chosenCard == 'Jack')
	{
		cout << "\nSkip next player's turn\n" << endl;
	}
}*/