#include <iostream>
#include <stdio.h>
using namespace std;

void Choice(int& choiceRef) {
	do {
		cout << "--> ";
		cin >> choiceRef;
		if (choiceRef < 1 || choiceRef > 2) cout << "\n������. ������� ����� 2-��" << endl;
	} while (choiceRef < 1 || choiceRef > 2);
}
void Score(const char* Arr, int& letter, int& number, int& symbol) {
	for (int i = 0; Arr[i] != '\0'; i++) {
		if (Arr[i] >= 'a' && Arr[i] <= 'z' || Arr[i] >= 'A' && Arr[i] <= 'Z' && Arr[i] != ' ') letter++;
		else if (Arr[i] >= 48 && Arr[i] <= 57 && Arr[i] != ' ') number++;
		else if (Arr[i] >= 33 && Arr[i] <= 47 && Arr[i] != ' ') symbol++;
	}
}
void main() {
	setlocale(0, "");
	cout << "������� �����" << endl
		<< "--> ";
	char arr[50];
	gets_s(arr);
	int choice = NULL, letter = NULL, number = NULL, symbol = NULL;
	Score(arr, letter, number, symbol);
	cout << "\n����� � ������� �������� ��������." << endl
		<< "\n�������� �������?" << endl
		<< "1. ��\t" << "2. ���" << endl;
	Choice(choice);
	if (choice == 1)
		cout << "\n���������� ����" << endl
		<< "--> " << letter << endl
		<< "���������� ����" << endl
		<< "--> " << number << endl
		<< "���������� ��������" << endl
		<< "--> " << symbol << endl;
}