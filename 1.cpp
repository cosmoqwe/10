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
void Removing_Items(char* parr, const char choice_element) {
	int counter = NULL, temporary_size = strlen(parr) + 1;
	char* temporary_arr = new char[strlen(parr)]{};
	for (int i = 0; i < temporary_size; i++) temporary_arr[i] = parr[i]; //"strcpy" � ������ ������� �� ��������
	for (int i = 0; i < temporary_size; i++)
		if (temporary_arr[i] != choice_element) {
			parr[counter] = temporary_arr[i];
			counter++;
		}
	//delete[] temporary_arr; // �� ���� ������-�� ������� ������������ ������
}
void main() {
	setlocale(0, "");
	cout << "������� �����(�������������� ������ ���������� ����)" << endl;
	char arr[50]{};
	gets_s(arr);
	int choice3 = NULL, choice2 = NULL;
	do {
		cout << "\n��������, ����������, ����� ������������� ������� � ������ �� ������ �������." << endl
			<< "--> ";
		char choice_element = NULL;
		cin >> choice_element;
		if (strchr(arr, choice_element) != 0) {
			cout << "\n����� �������� ������ �������." << endl;
			Removing_Items(arr, choice_element);
			cout << "\n�������� ������� ���������." << endl
				<< "\n�������� �����?" << endl
				<< "1. ��\t" << "2. ���" << endl;
			Choice(choice2);
			if (choice2 == 1) puts(arr);
		}
		else cout << "\n����� �������� ������ �� ������." << endl;
		cout << "\n������ ���������?" << endl
			<< "1. ��\t" << "2. ���" << endl;
		Choice(choice3);
	} while (choice3 == 1);
}