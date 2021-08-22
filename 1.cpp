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
void Removing_Items(char* parr, const char choice_element) {
	int counter = NULL, temporary_size = strlen(parr) + 1;
	char* temporary_arr = new char[strlen(parr)]{};
	for (int i = 0; i < temporary_size; i++) temporary_arr[i] = parr[i]; //"strcpy" и другие функции не работают
	for (int i = 0; i < temporary_size; i++)
		if (temporary_arr[i] != choice_element) {
			parr[counter] = temporary_arr[i];
			counter++;
		}
	//delete[] temporary_arr; // не могу почему-то удалить ДИНАМИЧЕСКИЙ МАССИВ
}
void main() {
	setlocale(0, "");
	cout << "Введите текст(поддерживается только английский язык)" << endl;
	char arr[50]{};
	gets_s(arr);
	int choice3 = NULL, choice2 = NULL;
	do {
		cout << "\nУточтите, пожалуйста, какой повторяющийся елемент в строке вы хотите удалить." << endl
			<< "--> ";
		char choice_element = NULL;
		cin >> choice_element;
		if (strchr(arr, choice_element) != 0) {
			cout << "\nПоиск елемента прошёл успешно." << endl;
			Removing_Items(arr, choice_element);
			cout << "\nУдаление успешно завершено." << endl
				<< "\nПоказать текст?" << endl
				<< "1. Да\t" << "2. Нет" << endl;
			Choice(choice2);
			if (choice2 == 1) puts(arr);
		}
		else cout << "\nПоиск елемента прошёл не удачно." << endl;
		cout << "\nХотите повторить?" << endl
			<< "1. Да\t" << "2. Нет" << endl;
		Choice(choice3);
	} while (choice3 == 1);
}