#include<iostream>
#include<windows.h>           
using namespace std;

string inventory[10];
void Fishing();

int main() {

	char input = 'a';
	int room = 1;

	while (input != 'q') {
		cout << "your inventory:" << endl;
		for (int i = 0; i < 10; i++)
			cout << inventory[i] << " ";
		cout << endl;

		switch (room) {
		case 1:
			cout << "Press F to fish" << endl;
			cin >> input;
			if (input == 'F' || input == 'f') {
				Sleep(5);
				Fishing();
			}
			break;

	
		}
	}
}
	


void Fishing() {
	int num = rand() % 100;
	if (num < 33) {
		cout << "You got a carp" << endl;
		inventory[0] = "carp";
	}

	else if (num < 66) {
		cout << "You got a Woodskip" << endl;
		inventory[1] = "woodskip";
	}

	else if (num < 99) {
		cout << "You got a Catfish" << endl;
		inventory[2] = "catfish";
	}

}
