//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//void Choice(int& temporary) {
//	do {
//		cout << "--> ";
//		cin >> temporary;
//		if (temporary < 1 || temporary > 2) cout << "\n������. ������� ����� 2-��" << endl;
//	} while (temporary < 1 || temporary > 2);
//}
//void Insert_Element(char* parr, const char choice_element/*, const int choice*/, const char insert_element) {
//	int counter = NULL, temporary_size = strlen(parr) + 2;
//	char* temporary_arr = new char[strlen(parr) + 1]{};
//	for (int i = 0; i < temporary_size; i++) temporary_arr[i] = parr[i];
//	for (int i = 0; i < temporary_size; i++) {
//		if (parr[i] != insert_element) {
//			parr[i] = temporary_arr[counter];
//			counter++;
//		}
//		if (/*choice == 1 && */parr[i + 1] == choice_element) parr[counter] = insert_element;
//		//else if (choice == 2 && parr[i - 1] == choice_element) 
//		//	parr[counter] = insert_element;
//	}
//}
//void main() {
//	setlocale(0, "");
//	cout << "������� �����" << endl;
//	const int size = 50;
//	char arr[size]{};
//	gets_s(arr);
//	int choice3 = NULL, choice2 = NULL/*, choice = NULL*/;
//	do {
//		char choice_element = NULL, insert_element = NULL;
//		cout << "\n�������� ������� �� ������" << endl
//			<< "--> ";
//		cin >> choice_element;
//		if (strchr(arr, choice_element) == 0) cout << "\n������� �� ������." << endl;
//		else {
//			cout << "\n������� ������� ������." << endl;
//			//	<< "\n�� ������ �������� ������� (1)����� ��� (2)����� ��������� �������?" << endl;
//			//Choice(choice);
//			cout << "\n������� ������� ������� ������ ��������" << endl
//				<< "--> ";
//			cin >> insert_element;
//			Insert_Element(arr, choice_element/*, choice*/, insert_element);
//			cout << "\n������� ������� ��������." << endl
//				<< "\n�������� �����?" << endl
//				<< "1. ��\t" << "2. ���" << endl;
//			Choice(choice3);
//			if (choice3 == 1) puts(arr);
//		}
//		cout << "\n������ ���������?" << endl
//			<< "1. ��\t" << "2. ���" << endl;
//		Choice(choice2);
//	} while (choice2 == 1);
//}