#include "Human.h"
#include <iostream>
using namespace std;
//Inputs the move variable.
//size variable uses the first element entered in the move and subtract it with the ascii value of 0.
int Human::Human()
{
	getline(cin,move);
	int size=move[0]-'0';
}
//returns the size.
int Human::get_size()
{
	return size;
}
//returns the move.
string Human::get_move()
{
	return move;
}
