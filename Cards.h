//#pragma once
#include <iostream>
#ifndef Cards_H
#define Cards_H
#include <string>


using namespace std;

//Header file
//Function prototypes 

class Cards
{
private:

	int num = 0;
	string type;


public:

	Cards();

	int GetNumber () const;
	string GetType () const;
	void SetNumber(int);
	void SetType(string);

	~Cards();

};

#endif

