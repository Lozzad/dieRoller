//Die rolling prog to use random numbers
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

int main()
{
	srand(static_cast<unsigned int>(time(0)));		//seed the random number generator

	int randomNo = rand();							//generate the number

	int die = (randomNo % 6) + 1; //any number %6 will be between 0 and 5, +1 is 1 to 6
	cout << "You rolled a " << die << endl;

    return 0;
}

