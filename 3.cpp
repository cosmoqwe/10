//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//void Choice(int& choiceRef) {
//	do {
//		cout << "--> ";
//		cin >> choiceRef;
//		if (choiceRef < 1 || choiceRef > 2) cout << "\n������. ������� ����� 2-��" << endl;
//	} while (choiceRef < 1 || choiceRef > 2);
//}
//void Removing_Items(char* Arr) {
//	for (int i = 0; Arr[i] != '\0'; i++)
//		if (Arr[i] == '.') Arr[i] = '!';
//}
//void main() {
//	setlocale(0, "");
//	cout << "������� �����" << endl;
//	char arr[50];
//	gets_s(arr);
//	int choice = NULL;
//	if (strchr(arr, '.') != 0) {
//		cout << "\n����� �������� ������ �������." << endl;
//		Removing_Items(arr);
//		cout << "\n��������� \'.\' �� \'!\' ���������." << endl
//			<< "\n�������� �����?" << endl
//			<< "1. ��\t" << "2. ���" << endl;
//		Choice(choice);
//		if (choice == 1) puts(arr);
//	}
//	else cout << "\n����� �������� ������ �� ������." << endl;
//}