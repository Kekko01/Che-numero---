#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	cout << "Per vincere il gioco devi indovinare il numero a cui penso... Il numero va da 1 a 10" << endl;
	int num[2];
	num[0] = 5;
	int vinte = 0;
	srand(time(NULL));
	int inserimento;
	while (vinte < 3)
	{
		num[1] = rand() % 10 + 1;
		cout << "Ti faccio vedere questo: " << num[1] << ". Che numero e'? ";
		cin >> inserimento;
		if (inserimento == num[0])
		{
			cout << "Bravo! Forse hai capito come funziona!" << endl;
			vinte++;
		}
		else
		{
			cout << "Ahia no! Non e' il " << inserimento << ", riprova!" << endl;
			vinte = 0;
		}
		num[0] = num[1];
	}
	cout << "Congratuzioni, hai capito come funziona il trucchetto!";
}