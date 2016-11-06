#include <iostream>
#include "person.h"

using namespace std;

int main()
{
	Person* pa[2];
	pa[0] = new Student{ "Bogeom Park" };
	pa[1] = new Professor{ "Youjung Kim" };

	for (int i = 0; i < 2; i++)
	{
		pa[i]->printName();
		pa[i]->printWork();
		pa[i]->printHobby();
	}

	delete pa[0];
	delete pa[1];
}
