/*1. ��������, ��������, ��� �������� �������� ����� �� 6 ������. ���������� ������� �������� ����� �� ����� �����.
2. �������� ��������, ��� �������� ����������� ����� � ���������� �������.
3. ���������� ������� ������� ����� �����������, ����� ������� ���������� � �����, 
��������� ��������� �������� ����������� (�������� � ���� ��� �����).
4. ���������� ������� �������� ����� �� �� (12 ������). 
��������� ��������� �����, � ����� �������� ��� ������������, � �����, � ����� �������� ��� ���������.*/

#include<iostream>
using namespace std;
int main() {
	int a;
	cout << "Oberite zadachy:\n"
		<< "1. Obchuslenna prubytky firmu za 6 misaciv\n"
		<< "2. Masuv y zvorotnomy napramky\n"
		<< "3. Obchuslenna perumetry patukytnuka\n"
		<< "4. Maksumalnui ta minimalnui prubytok firmu\n";
	cin >> a;
	switch (a) {
	case 1: {
		//1. ��������, ��������, ��� �������� �������� ����� �� 6 ������. ���������� ������� �������� ����� �� ����� �����.
		float Sum = 0;
		const int M = 6;
		float Prub[M];
		cout << "Vvedite prubytok firmu\n";
		for (int i = 0; i < 6; i++) {
			cout << "za " << i + 1 << " misac: ";
			cin >> Prub[i];
			Sum += Prub[i];
		}
		cout << "\nPrubytok firmu za " << M << " misaciv dorivnye " << Sum << endl;
	}
		  break;
	case 2: {
		//2. �������� ��������, ��� �������� ����������� ����� � ���������� �������.
		const int N = 10;
		int Arr[N];
		cout << "Zapovnite masuv:\n";
		for (int i = 0; i < N; i++) {
			cin >> Arr[i];
		}
		cout << "Vuvedenna masuvy y zvorotnomy napramky:\n";
		for (int j = N - 1; j >= 0; j--) {
			cout << Arr[j] << ' ';
		}
	}
		  break;
	case 3: {
		/*3. ���������� ������� ������� ����� �����������, ����� ������� ���������� � �����,
			 ��������� ��������� �������� ����������� (�������� � ���� ��� �����).*/
		float P = 0;
		const int S = 5;
		float PK[S];
		cout << "Vvedite rozmir storin patukytnuka:\n";
		for (int i = 0; i < S; i++) {
			cin >> PK[i];
			P += PK[i];
		}
		cout << "Perumetr patukytnuka = " << P << endl;

	}
		  break;
	case 4: {
		/*4. ���������� ������� �������� ����� �� �� (12 ������).
			 ��������� ��������� �����, � ����� �������� ��� ������������, � �����, � ����� �������� ��� ���������.*/
		const int M = 12;
		float PR[M];
		float Max = 0, Min = 0;
		cout << "Vvedite prubytok firmu za kozen misac:\n";
		for (int i = 0; i < M; i++) {
			cin >> PR[i];
		}
		Min = PR[0];
		for (int j = 0; j < M; j++) {
			if (Max < PR[j]) {
				Max = PR[j];
			}
			if (Min > PR[j]) {
				Min = PR[j];
			}
		}
		for (int k = 0; k < M; k++) {
			if (Max == PR[k]) {
				cout << "\nMaksumalnui prubytok " << Max << " byv y " << k + 1 << " misaci\n";
			}
		}
		for (int l = 0; l < M; l++) {
			if (Min == PR[l]) {
				cout << "Minimalnui prubytok " << Min << " byv y " << l + 1 << " misaci\n";
			}
		}
	}
		  break;
	default:cout << "Ne virno obrana zadacha!\n";
	}
}