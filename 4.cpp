//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//void Choice(int& choiceRef) {
//	do {
//		cout << "--> ";
//		cin >> choiceRef;
//		if (choiceRef < 1 || choiceRef > 2) cout << "\nОшибка. Пунктов всего 2-ва" << endl;
//	} while (choiceRef < 1 || choiceRef > 2);
//}
//int Score(const char* Arr, const char input) {
//	int score2 = NULL;
//	for (int i = 0; Arr[i] != '\0'; i++)
//		if (Arr[i] == input) score2++;
//	return score2;
//}
//void main() {
//	setlocale(0, "");
//	char arr[50];
//	cout << "Введите текст" << endl
//		<< "-- > " << gets_s(arr);
//	int choice = NULL, choice2 = NULL;
//	do {
//		cout << "\nВведите елемент для подсчёта количества подобных ему" << endl
//			<< "--> ";
//		char input = NULL;
//		cin >> input;
//		if (strchr(arr, input) != 0) {
//			cout << "\nПоиск елемента прошёл успешно." << endl;
//			int score = Score(arr, input);
//			cout << "\nПоиск и подсчёт символов завершен." << endl
//				<< "\nПоказать подсчёт?" << endl
//				<< "1. Да\t" << "2. Нет" << endl;
//			Choice(choice);
//			if (choice == 1) 
//				cout << "\nКоличества подобных" << endl
//				<< "--> " << score << endl;
//		}
//		else cout << "\nПоиск елемента прошёл не удачно." << endl;
//		cout << "\nХотите повторить?" << endl
//			<< "1. Да\t" << "2. Нет" << endl;
//		Choice(choice2);
//	} while (choice2 == 1);
//}