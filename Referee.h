#ifndef REFEREE_H
#define REFEREE_H
#include "Computer.h"
#include "Human.h"
#include <iostream>
//Inheritance of the Human and the Computer class.
class referee
{

public:
	//Function to interact between the human and computer and gives the outcome of the game.
	void set_result();
	std::string H_input;
};
#endif
