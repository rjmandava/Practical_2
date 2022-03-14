//a1739139

#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>
using namespace std;

int main()
{
    // Human object.
    Human hum;
    // Computer object
    Computer comp;
    // Referee object.
    Referee r;
    //Print result
	cout <<r.refGame(hum, comp);
    
	return 0;
}


