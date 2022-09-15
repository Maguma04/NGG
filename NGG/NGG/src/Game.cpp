#include "Includes.h"
#include "Game.h"

using namespace std;

void Game::Run()
{
	srand((unsigned)time(0));
	int random = rand() % 100;  //rdm nummer
	int gissning = 0;
	int försök = 0;


	do {
		cout << "Skriv in din Gissning!";
		cin >> gissning;
		if (gissning == random)
			cout << "Grattis du gissade rätt efter " << försök << " försök" << endl;
		else if (gissning < random)
			cout << "Fel gissning! Gissa högre!" << endl;
		else cout << "Fel gissning! Gissa lägre!" << endl;

	} while (gissning != random);
}