#include "stdafx.h"
#include "Players.h"
#include <iostream>
#include "Cards.h"
// function declaration


Players::Players()
{
	"Player created";
}

void Players::AddCard(Cards Card) {

	hand[this->pointer] = Card;
	this->pointer += 1;

}

int Players::ShowHand() {
	int value = 0;

	for (int i = 0; i < 5; i++) {

		if (hand[i].GetNumber() != 0) {

			cout << "Number: " << hand[i].GetNumber() << endl;
			cout << "Suit: " << hand[i].GetType()<< endl;
			cout << endl;
			if (hand[i].GetNumber() > 10) {
				value = value + 10;
			} else {
				value = value + hand[i].GetNumber();
			}

			
		}
	}
	cout << "Total Value " << value << endl;
	if (value > 21) {
		cout << "Bust!";
	};
	return value;
}


Players::~Players()
{
}
