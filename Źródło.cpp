#include <iostream>
#include <fstream>

using namespace std;

int main(){

		fstream plik;
		plik.open("interpolacja");
		int liczba;
		plik >> liczba;
		cout << liczba << endl;
		/*
		double *xtab = new double[liczba];
		double *ytab = new double[liczba];

		for (int i = 0; i < liczba; i++) {
			plik >> xtab[i];
			plik >> ytab[i];
		}

		for (int i = 0; i < liczba; i++) {
			cout << "Punkty to:" << endl;
			cout << "X: " << xtab[i] << endl;
			cout << "Y:  " << ytab[i] << endl;
		}

		cout << "Podaj x w ktorym chcesz znalezc wartosc wielomianu" << endl;
		
		for (int i = 0; i < liczba; i++) {
			int z = ytab[0];
			for (int j = 1; j = liczba - i + 1; j++) {
				ytab[j - 1] = (ytab[j] - ytab[j - 1]) / (xtab[i + j] - xtab[j - 1]);
			}
			ytab[liczba - i - 1] = z;
		}

		cout << ytab << endl;
		*/

	return 0;
}