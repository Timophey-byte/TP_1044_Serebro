#include "queue.h"
#include <iostream>
using namespace std;
void Q::Push(int value) {
	Element* e = new(Element);
	e->data = value;
	e->prev = q;
	q = e;
	size++;
}
void Q::Pop() {
	system("cls");
	if (size != 0) {
		Element* e = q;
		while (e->prev->prev != 0)
			e = q->prev;
		int value = e->prev->data;
		delete e->prev;
		e->prev = 0;
		size--;
		cout << "The operation completed successfully" << endl;
	}
	else
		cout << "The current queue is empty" << endl;
}
void Q::Сopying(Q& obj) {
	system("cls");
	if (obj.size != 0) {
		Element* e = obj.q;
		int i, temp[100];
		for (i = 1; i <= obj.size; i++) {
			temp[i] = e->data;
			e = e->prev;
		}
		for (i = obj.size; i > 0; i--)
			Push(temp[i]);
		cout << "The operation completed successfully" << endl;
	}
	else
		cout << "The current queue is empty" << endl;
}
void Q::Connection(Q& obj) {
	if ((obj.size != 0) && (size != 0)) {
		Element* e = q;
		e = obj.q;
		int i, temp[100];
		for (i = 1; i <= obj.size; i++) {
			temp[i] = e->data;
			e = e->prev;
		}
		for (i = obj.size; i > 0; i--)
			Push(temp[i]);
		system("cls");
		cout << "The operation completed successfully" << endl;
	}
	else {
		system("cls");
		cout << "The current queue is empty" << endl;
	}
}
void Q::OddAM() {
	system("cls");
	if (size != 0) {
		int id = 0;
		float cnt = 0;
		float sum = 0;
		int temp = size;
		Element* e = q;
		while (temp != 0) {
			id++;
			if (size % 2 == 1) {
				if (id % 2 == 1) {
					cnt++;
					sum += e->data;
				}
			}
			else {
				if (id % 2 == 0) {
					cnt++;
					sum += e->data;
				}
			}
			e = e->prev;
			temp--;
		}
		if (cnt != 0)
			cout << "The arithmetic mean of elements with odd numbers of the current queue is " << sum / cnt << endl;
		else
			cout << "There are no elements with odd numbers of the current queue" <<
			endl;
	}
	else
		cout << "The current queue is empty" << endl;
}
void Q::Show() {
	if (size != 0) {
		cout << "The current queue: ";
		Element* e = q;
		int i, temp[100];
		for (i = 1; i <= size; i++) {
			temp[i] = e->data;
			e = e->prev;
		}
		for (i = size; i > 0; i--)
			cout << temp[i] << " ";
		cout << endl;
	}
	else
		cout << "The current queue is empty" << endl;
}
