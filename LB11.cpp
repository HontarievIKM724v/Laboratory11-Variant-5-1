#include <iostream>
using namespace std;

int main()
{

	char A, B;

	cout << "Enter the value of the character variable A: ";
	cin >> A;
	cout << "\nEnter the value of the character variable B: ";
	cin >> B;

	char* pA = &A;
	char* pB = &B;
	cout << "\n Values of the entered variables:";
	cout << "\n \t Variable A: " << A;
	cout << "\n \t Variable B: " << B;

	*pA = 'N';
	cout << "\nChanging the value of variable A through a pointer: \t \nVariable A: " << *pA;

	char temp = *pA;
	*pA = *pB;
	*pB = temp;

	cout << "\n Values of the variables after changing the values:";
	cout << "\n \t Variable A: " << A;
	cout << "\n \t Variable B: " << B;

}
