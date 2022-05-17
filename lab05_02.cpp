// Samuel Omar Taya Yana
#include <iostream>
#include <cstdlib> // rand y srand
#include <ctime> // time
using namespace std;

int main() {
	
	//creamos los vectores
	float *vector1;
	float *vector2;
	
	// randomizamos usando la hora actual
	srand( static_cast<unsigned int>(time(0)));
	
	for(int k=0; k<1000000; k++) // repetimos hasta 1 000 000 veces	
	{	
		// les damos tamaño
		vector1 = new float[7];
		vector2 = new float[7];
	
		//asignamos valores aleatorios
		for (int i=0; i<7; i++)
		{
			vector1[i] = 1 + rand()%10; // numeros aleatorios del 1 al 10
			vector2[i] = 1 + rand()%10;
		}
	
		//producto punto de vectores
		int s=0; //sumatoria
		for(int i=0; i<7; i++)
		{
			s = s + vector1[i] * vector2[i];
		}
		cout << k+1 << " El producto punto es: " << s;
		cout << endl;
		//retiramos la memoria asignada
		delete[] vector1;
		delete[] vector2;
	}
	
	return 0;
}

