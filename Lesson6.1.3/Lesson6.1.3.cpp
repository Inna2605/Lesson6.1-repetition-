/*1. Стиснути (зрушити елементи) масив, видаливши з нього всі 0, 
і заповнити звільнені праворуч елементи значеннями -1.
2. Написати програму, що копіює елементи 2-х масивів розміром 5 елементів кожен 
в один масив розміром 10 елементів у такий спосіб: 
спочатку копіюються послідовно всі елементи більші за 0, 
потім послідовно всі елементи рівні 0, 
а потім послідовно всі елементи менші за 0.*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int a;
	cout << "Oberite zadachy:\n"
		<< "1. Z odnum masuvom\n"
		<< "2. Z dvoma masuvamu\n";
	cin >> a;
	switch (a) {
	case 1: {
		/*1. Стиснути (зрушити елементи) масив, видаливши з нього всі 0, 
             і заповнити звільнені праворуч елементи значеннями -1.*/
			const int N = 10;
			int Arr[N], Arr2[N], a = 0;
			for (int i = 0; i < N; i++) {
				Arr[i] = rand() % 7 - 5;
				cout << Arr[i] << ' ';
				//cin >> Arr[i];
			}
			cout << endl;
			int c = 0;
			for (int l = 0; l < N; l++) {
				if (Arr[l] == 0) {
					c++;
					continue;
				}
				Arr2[l - c] = Arr[l];
			}
			for (int j = 0; j < N; j++) {
				if (N - c <= j) {
					Arr2[j] = -1;
				}
				cout << Arr2[j] << ' ';
			}
	}
		  break;
	case 2: {
		/*2. Написати програму, що копіює елементи 2-х масивів розміром 5 елементів кожен 
             в один масив розміром 10 елементів у такий спосіб: 
             спочатку копіюються послідовно всі елементи більші за 0, 
             потім послідовно всі елементи рівні 0, 
             а потім послідовно всі елементи менші за 0.*/
		const int M = 5;
		int A[M], B[M], C[M + M], a = 0, b = 0;
		for (int i = 0; i < M; i++) {
			A[i] = rand() % 10 - 5;
			B[i] = rand() % 20 - 10;
		}
		for (int j = 0; j < M; j++) {
			cout << A[j] << ' ';
		}
		cout << endl;
		for (int l = 0; l < M; l++) {
			cout << B[l] << ' ';
		}
		cout << endl;
		for (int k = 0; k < M; k++) {
			if (A[k] > 0) {
				C[a] = A[k];
				a++;
			}
			if (B[k] > 0) {
				C[a] = B[k];
				a++;
			}
		}
		for (int l = 0; l < M; l++) {
			if (A[l] == 0) {
				C[a] = A[l];
				a++;
			}
			if (B[l] == 0) {
				C[a] = B[l];
				a++;
			}
		}
		for (int h = 0; h < M; h++) {
			if (A[h] < 0) {
				C[a] = A[h];
				a++;
			}
			if (B[h] < 0) {
				C[a] = B[h];
				a++;
			}
		}
		for (int i = 0; i < M + M; i++) {
			cout << C[i] << ' ';
			}
		cout << endl;
		}
		  break;
	default:cout << "Ne virnui vubir!\n";
	}
}