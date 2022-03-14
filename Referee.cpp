#include "Referee.h"
#include <string>
using namespace std;
void referee::set_result()
{
	//The function has been assigned to the variable and The elements in the string can be accessed and checked one by one and give the result accordingly.
	H_input=get_move();
	//This loop is used to compare the moves and give the result accordingly. The i goes till the total length of the string.
		for (int i=0;i<(2*get_size())+1;i++)
		{
			if(get_move_computer()=='R' && H_input[i]=='P')
			{
				cout<<'W'<<' ';
			}
			else if(get_move_computer()=='R' && H_input[i]=='S')
			{
				cout<<'L'<<' ';
			}
			else if(get_move_computer()=='R' && H_input[i]=='R')
			{
				cout<<'T'<<' ';
			}
		}

}
