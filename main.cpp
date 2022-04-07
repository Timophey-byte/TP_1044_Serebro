#include <iostream>
#include <string>
#include "queue.h"
using namespace std;
int main() {
	string flag;
	string temp;
	int value, i, cnt = 1;
	int choice = 0;
	int conchoice = 1;
	Q Queue[100];
	for (;;) {
		cout << "Instructions:" << endl;
		cout << "---------------------------" << endl;
		cout << "1 - Adding a queue item" << endl;
		cout << "2 - Retrieving a queue item" << endl;
		cout << "3 - Displaying the queue on the screen" << endl;
		cout << "4 - Calculation of the arithmetic mean for elements with an odd ordinal number" <<
			endl;
		cout << "5 - Creating a copy of the queue" << endl;
		cout << "6 - Merging the current queue with a copy and displaying the result on the screen" <<
			endl;
		cout << "7 - Selecting the current queue" << endl;
		cout << "8 - Exit the program" << endl;
		cout << "---------------------------" << endl;
		cout << "Select an operation and type its number" << endl;
		cin >> flag;
		if (flag == "1") {
			cout << "---------------------------" << endl;
			cout << "Enter a value for the item" << endl;
			cin >> temp;
			try {
				value = stoi(temp);
				Queue[choice].Push(value);
				system("cls");
				cout << "The operation completed successfully" << endl;
			}
			catch (std::invalid_argument e) {

				system("cls");
				cout << "The value for the item is invalid" << endl;
			}
		}
		else if (flag == "2") {
			Queue[choice].Pop();
		}
		else if (flag == "3") {
			system("cls");
			Queue[choice].Show();
		}
		else if (flag == "4") {
			Queue[choice].OddAM();
		}
		else if (flag == "5") {
			Queue[cnt].Сopying(Queue[choice]);
			cnt++;
		}
		else if (flag == "6") {
			cout << "---------------------------" << endl;
			for (i = 0; i < cnt; i++) {
				cout << "Queue " << i << ": ";
				Queue[i].Show();
			}
			cout << "---------------------------" << endl;
			cout << "Select the queue for connection" << endl;
			cin >> temp;
			try {
				conchoice = stoi(temp);
				if ((conchoice != choice) && (conchoice < cnt) && (conchoice >= 0)) {
					Queue[choice].Connection(Queue[conchoice]);
				}
				else {
					system("cls");
					cout << "The number of queue is invalid" << endl;
				}
			}
			catch (std::invalid_argument e) {
				system("cls");
				cout << "The number of queue is invalid" << endl;
			}
		}
		else if (flag == "7") {
			for (i = 0; i < cnt; i++) {
				cout << "Queue " << i << ": ";
				Queue[i].Show();
			}
			cout << "---------------------------" << endl;
			cout << "Select the current queue" << endl;
			cin >> temp;
			try {
				choice = stoi(temp);
				system("cls");
				cout << "The operation completed successfully" << endl;
			}
			catch (std::invalid_argument e) {
				system("cls");
				cout << "The number of queue is invalid" << endl;
			}
		}
		else if (flag == "8") {
			system("cls");
			break;
		}
		else
		{
			system("cls");
			cout << "The operation number is invalid" << endl;
		}
		cout << "---------------------------" << endl;
	}
	return 0;
}
