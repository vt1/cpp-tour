#include <iostream>
#include <vector>
using namespace std;

// make rock-papper-scissors game without rand() for selecting computer moves;

int main()
{
	cout << "Enter r, p or s" << endl;
	cout << "r - rock, p - papper, s - scissors" << endl;
	char move = '\0';
	vector<int> comp_moves = { 0, 1, 2, 1, 0, 2, 2, 1, 0, 1, 1, 2, 0, 0, 1 };

	for (int it = 0; it < comp_moves.size(); ++it)
	{
		int comp_val = comp_moves.at(it);	
		char comp_move = comp_val == 0 ? 'r' : comp_val == 1 ? 'p' : 's';		// 0 - rock, 1 - papper, 2 - scissors;
		cin >> move;
		cout << "Your move is {<" << move << ">}" << endl;
		cout << "Computer move is {<" << comp_move << ">}" << endl;

		switch (move)
		{
			case 'r':			
				if (comp_move == 'r')
					cout << "Nobody wins" << endl;
				else if (comp_move == 'p')
					cout << "You lose" << endl;
				else
					cout << "You win" << endl;		
				break;
			case 'p':			
				if (comp_move == 'r')
					cout << "You win" << endl;
				else if (comp_move == 'p')
					cout << "Nobody wins" << endl;
				else
					cout << "You lose" << endl;			
				break;
			case 's':
				if(comp_move == 'r')
					cout << "You lose" << endl;
				else if(comp_move == 'p')
					cout << "You win" << endl;
				else
					cout << "Nobody wins" << endl;
				break;			
		}
		cout << '\n';
	}
}