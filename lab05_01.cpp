// Samuel Omar Taya Yana
#include <iostream>
using namespace std;

int main() {
	int a=7;
	int b=10;

	cout << "A es: " << a << endl;
	cout << "B es: " << b << endl;
	
	int *px;
	int *py;
	
	px = &a;
	py = &b;
	
	*px = 10;
	*py = 7;
	
	cout << "\nINTERCAMBIAMOS" << endl;
	cout << "A es: " << a << endl;
	cout << "B es: " << b;
	
	return 0;
}

