#include "Rick.h"
#include <iostream>
using namespace std;



Rick::Rick(int num)
	:h(num)
{
}

void Rick::printCrap() {
	cout << "h=" << h << endl;
	cout << "this->" << this-> h << endl;
	cout << "(*this).h=" << (*this).h << endl;

}