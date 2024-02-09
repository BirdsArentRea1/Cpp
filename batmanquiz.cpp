#include<iostream>
using namespace std;

int main() {

	int Joker = 0;
	int Bane = 0;
	int Scarecrow = 0;
	int Ras = 0;
	char input; 

	cout << "What Batman villian are you?" << endl;
	cout << "What is your favorite weapon?: (K)nives, (T)itan formula, (F)ear, (S)word. " << endl;//question1
	cin >> input;
	if (input == 'K')
		Joker += 1;
	else if (input == 'T')
		Bane += 1;
	else if (input == 'F')
		Scarecrow += 1;
	else if (input == 'S')
		Ras += 1;
	else
		cout << "not an option" << endl;

	cout << "What is your prefered evil lair?: (A)bandoned amusement park, (S)ewers, (R)andom gutter, (E)vil castle. " << endl;//question2
	cin >> input;
	if (input == 'A')
		Joker += 1;
	else if (input == 'S')
		Bane += 1;
	else if (input == 'R')
		Scarecrow += 1;
	else if (input == 'E')
		Ras += 1;
	else
		cout << "not an option" << endl;

	cout << "What is your sanity level?: (I)nsane, (U)known, (E)vil genius, (S)omewhat sane. " << endl;//question3
	cin >> input;
	if (input == 'I')
		Joker += 1;
	else if (input == 'U')
		Bane += 1;
	else if (input == 'E')
		Scarecrow += 1;
	else if (input == 'S')
		Ras += 1;
	else
		cout << "not an option" << endl;

	cout << "What is your favorite color?: (P)urple, (B)lack, (L)ight green, (D)ark green. " << endl;//question4
	cin >> input;
	if (input == 'P')
		Joker += 1;
	else if (input == 'B')
		Bane += 1;
	else if (input == 'L')
		Scarecrow += 1;
	else if (input == 'D')
		Ras += 1;
	else
		cout << "not an option" << endl;

	cout << "What is your secret power?: (B)eing a psycopath, (S)trength, (F)ear gas, (I)mortality. " << endl;//question5
	cin >> input;
	if (input == 'B')
		Joker += 1;
	else if (input == 'S')
		Bane += 1;
	else if (input == 'F')
		Scarecrow += 1;
	else if (input == 'I')
		Ras += 1;
	else
		cout << "not an option" << endl;

	cout << "How many times have you been locked up in Arkham Asylum?: (I) basically live there, (B)lackgate is better, (Q)uite a few times, (N)ever. " << endl;//question6
	cin >> input;
	if (input == 'I')
		Joker += 1;
	else if (input == 'B')
		Bane += 1;
	else if (input == 'Q')
		Scarecrow += 1;
	else if (input == 'N')
		Ras += 1;
	else
		cout << "not an option" << endl;

	cout << "1-10 how much do you hate Batman?: (3), (9), (8), (1)00. " << endl;//question7
	cin >> input;
	if (input == '3')
		Joker += 1;
	else if (input == '9')
		Bane += 1;
	else if (input == '8')
		Scarecrow += 1;
	else if (input == '1')
		Ras += 1;
	else
		cout << "not an option" << endl;

	cout << "What would your job be if you weren't a villain?: (C)omedian, (W)restler, (S)cientist, (I)dk. " << endl;//question8
	cin >> input;
	if (input == 'C')
		Joker += 1;
	else if (input == 'W')
		Bane += 1;
	else if (input == 'S')
		Scarecrow += 1;
	else if (input == 'I')
		Ras += 1;
	else
		cout << "not an option" << endl;




	if (Joker >= Bane && Joker >= Scarecrow && Joker >= Ras) {
		cout << "You Are The Joker!" << endl;
	}

	else if (Bane >= Joker && Bane >= Scarecrow && Bane >= Ras) {
		cout << "You Are Bane!" << endl;
	}

	else if (Scarecrow >= Bane && Scarecrow >= Joker && Scarecrow >= Ras) {
		cout << "You Are Jonathan Crane, AKA Scarecrow!" << endl;
	}

	else if (Ras >= Bane && Ras >= Scarecrow && Ras >= Joker) {
		cout << "You Are Ra's al Ghul!" << endl;
	}



}



