#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct card {
	char face[10];
	char suit[10];
};

void main()
{
	struct card aCard = {"Ace","Spades"};
	struct card *cardP;
	
	cardP = &aCard;

	printf("%s%s%s\n%s%s%s\n%s%s%s\n",
		aCard.face,
		" of ",
		aCard.suit,
		cardP->face,
		" of ",
		cardP->suit,
		(*cardP).face,
		" of ",
		(*cardP).suit
	);

	system("PAUSE");
}