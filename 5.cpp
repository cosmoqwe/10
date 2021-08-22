#include <iostream>
#include <stdio.h>
using namespace std;

void Choice(int& choiceRef) {
	do {
		cout << "--> ";
		cin >> choiceRef;
		if (choiceRef < 1 || choiceRef > 2) cout << "\nОшибка. Пунктов всего 2-ва" << endl;
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
	cout << "Введите текст" << endl
		<< "--> ";
	char arr[50];
	gets_s(arr);
	int choice = NULL, letter = NULL, number = NULL, symbol = NULL;
	Score(arr, letter, number, symbol);
	cout << "\nПоиск и подсчёт символов завершен." << endl
		<< "\nПоказать подсчёт?" << endl
		<< "1. Да\t" << "2. Нет" << endl;
	Choice(choice);
	if (choice == 1)
		cout << "\nКоличества букв" << endl
		<< "--> " << letter << endl
		<< "Количества цифр" << endl
		<< "--> " << number << endl
		<< "Количества символов" << endl
		<< "--> " << symbol << endl;
}