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
//int Score(const char* Arr, const char input) {
//	int score2 = NULL;
//	for (int i = 0; Arr[i] != '\0'; i++)
//		if (Arr[i] == input) score2++;
//	return score2;
//}
//void main() {
//	setlocale(0, "");
//	char arr[50];
//	cout << "������� �����" << endl
//		<< "-- > " << gets_s(arr);
//	int choice = NULL, choice2 = NULL;
//	do {
//		cout << "\n������� ������� ��� �������� ���������� �������� ���" << endl
//			<< "--> ";
//		char input = NULL;
//		cin >> input;
//		if (strchr(arr, input) != 0) {
//			cout << "\n����� �������� ������ �������." << endl;
//			int score = Score(arr, input);
//			cout << "\n����� � ������� �������� ��������." << endl
//				<< "\n�������� �������?" << endl
//				<< "1. ��\t" << "2. ���" << endl;
//			Choice(choice);
//			if (choice == 1) 
//				cout << "\n���������� ��������" << endl
//				<< "--> " << score << endl;
//		}
//		else cout << "\n����� �������� ������ �� ������." << endl;
//		cout << "\n������ ���������?" << endl
//			<< "1. ��\t" << "2. ���" << endl;
//		Choice(choice2);
//	} while (choice2 == 1);
//}