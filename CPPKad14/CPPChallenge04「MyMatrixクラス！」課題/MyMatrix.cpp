#include <iostream>
#include <iomanip>
using namespace std;

#include "MyMatrix.h"

void showMatrix(const char * str, const MyMatrix & m)
{
	cout << str << endl;
	cout << "| " << setw(2) << m.mat[0][0] << ", " << setw(2) << m.mat[0][1] << " |" << endl;
	cout << "| " << setw(2) << m.mat[1][0] << ", " << setw(2) << m.mat[1][1] << " |" << endl;
}





