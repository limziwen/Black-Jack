#include "stdafx.h"
#include "Cards.h"
#include <string>
using namespace std;
#include <iostream>
//Contains the functions
//cpp file is compiled 
//it is not distributed unlike the header file
//Header file is distributed, so functions themselves cant be changed
//Header = function declaration
//CPP = Function defintiion

Cards::Cards()
{
	
	
}

void Cards::SetNumber(int numEntry) {
	this->num = numEntry;
}

void Cards::SetType(string typeEntry) {
	this->type = typeEntry; 

}

int Cards::GetNumber () const
{
	return this->num;
}

string Cards::GetType () const
{
	return this->type;
}

Cards::~Cards()
{
	
}
