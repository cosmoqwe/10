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
//void Removing_Items(char* Arr) {
//	for (int i = 0; Arr[i] != '\0'; i++)
//		if (Arr[i] == '.') Arr[i] = '!';
//}
//void main() {
//	setlocale(0, "");
//	cout << "Введите текст" << endl;
//	char arr[50];
//	gets_s(arr);
//	int choice = NULL;
//	if (strchr(arr, '.') != 0) {
//		cout << "\nПоиск елемента прошёл успешно." << endl;
//		Removing_Items(arr);
//		cout << "\nИзменение \'.\' на \'!\' завершено." << endl
//			<< "\nПоказать текст?" << endl
//			<< "1. Да\t" << "2. Нет" << endl;
//		Choice(choice);
//		if (choice == 1) puts(arr);
//	}
//	else cout << "\nПоиск елемента прошёл не удачно." << endl;
//}