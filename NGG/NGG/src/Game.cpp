#include "Includes.h"
#include "Game.h"

using namespace std;

void Game::Run()
{
	srand((unsigned)time(0));
	int random = rand() % 100;  //rdm nummer
	int gissning = 0;
	int f�rs�k = 0;


	do {
		cout << "Skriv in din Gissning!";
		cin >> gissning;
		if (gissning == random)
			cout << "Grattis du gissade r�tt efter " << f�rs�k << " f�rs�k" << endl;
		else if (gissning < random)
			cout << "Fel gissning! Gissa h�gre!" << endl;
		else cout << "Fel gissning! Gissa l�gre!" << endl;

	} while (gissning != random);
}