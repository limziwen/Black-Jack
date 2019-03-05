#pragma once
#include <iostream>
#ifndef Players_H
#define Players_H
#include <string>
#include "Cards.h"
// function prototypes

class Players
{
private:
	Cards hand[5]; 
	int pointer = 0;


public:
	Players();
	int ShowHand();
	void AddCard(Cards);


	~Players();

};
#endif
