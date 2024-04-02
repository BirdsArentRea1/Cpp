#include<iostream>
#include<windows.h>   
#include<chrono>
#include<thread>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono_literals;
using std::chrono::system_clock;

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
				cout << "fishing..." << endl;
				sleep_for(1000ns);
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
