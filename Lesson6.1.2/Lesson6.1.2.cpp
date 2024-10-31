/*1. Написати програму, яка виводить на екран лінію заданим символом, вертикальну або горизонтальну, 
причому лінія може виводитися швидко, нормально і повільно. Спілкування з користувачем організувати через меню.
2. Написати гру «Кубики». 
Користувач і комп'ютер по черзі кидають 2 кубики. 
Переможець той, у кого за результатами 3х кидків сума більше. 
Передбачити красивий інтерфейс гри.
3. В одновимірному масиві, заповненому випадковими числами, визначити мінімальний і максимальний елементи.
4. Користувач вводить прибуток фірми за рік (12 місяців). 
Потім користувач вводить діапазон (наприклад, 3 і 6 — пошук між третім і шостим місяцем). 
Необхідно визначити місяць, у якому прибуток був максимальним, і місяць, у якому прибуток був мінімальним, 
з урахуванням обраного діапазону.
5. В одновимірному масиві, що складається з N дійсних чисел, обчислити:
■ Суму від'ємних елементів;
■ Добуток елементів, що розташовані між min і max елементами;
■ Добуток елементів з парними номерами;
■ Суму елементів, що розташовані між першим і останнім від'ємними елементами.*/

#include<iostream>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int a;
	cout << "Oberite zadachy:\n"
		<< "1. Linia\n"
		<< "2. Gra \"Kybuku\"\n"
		<< "3. Maksumym ta minimym\n"
		<< "4. Prubytok firmu\n"
		<< "5. Dii z elementamu masuvy\n";
	cin >> a;
	switch (a) {
	case 1: {
		/*1. Написати програму, яка виводить на екран лінію заданим символом, вертикальну або горизонтальну,
		  причому лінія може виводитися швидко, нормально і повільно. Спілкування з користувачем організувати через меню.*/
		char S, s;
		int n;
		cout << "Vvedite sumvol: ";
		cin >> S;
		cout << "Oberite:\n"
			<< "1. Vertukalna linia\n"
			<< "2. Gorizontalna linia\n";
		cin >> n;
		switch (n) {
		case 1: {
			cout << "\nOberite svudkist vuvedenna:\n"
				<< "H - svudko\n"
				<< "N - normalno\n"
				<< "P - povilno\n";
			cin >> s;
			switch (s) {
			case 'H': {
				for (int i = 0; i < 10; i++) {
					cout << S << endl;
				}
			}
					break;
			case 'N': {
				for (int i = 0; i < 10; i++) {
					Sleep(200);
					cout << S << endl;
				}
			}
					break;
			case 'P': {
				for (int i = 0; i < 10; i++) {
					Sleep(1000);
					cout << S << endl;
				}
			}
					break;
			default:cout << "Ne virno vubranui variant!\n";
			}

		}break;
		case 2: {
			cout << "Oberite svudkist vuvedenna:\n"
				<< "H - svudko\n"
				<< "N - normalno\n"
				<< "P - povilno\n";
			cin >> s;
			switch (s) {
			case 'H': {
				for (int i = 0; i < 10; i++) {
					cout << S << ' ';
				}
			}
					break;
			case 'N': {
				for (int i = 0; i < 10; i++) {
					Sleep(200);
					cout << S << ' ';
				}
			}
					break;
			case 'P': {
				for (int i = 0; i < 10; i++) {
					Sleep(1000);
					cout << S << ' ';
				}
			}
					break;
			default:cout << "Ne virno vubranui variant!\n";
			}
		}break;
		default:cout << "\nNe virnui vubir!\n";
		}

	}
		  break;
	case 2: {
		/*2. Написати гру «Кубики».
			 Користувач і комп'ютер по черзі кидають 2 кубики.
			 Переможець той, у кого за результатами 3х кидків сума більше.
			 Передбачити красивий інтерфейс гри.*/
		const int n = 6;
		int Kor[n], Kom[n], SumKor = 0, SumKom = 0, d = 0;
		char k;
		cout << "_______________KYBUKU_______________\n";
			
		for (int j = 0; j < 6; j += 2, d++) {
			cout << "\n\nPIDKUDANNA " << d + 1 << " RAZ:\n";
			for (int i = j; i <= j + 1; i++) {
				cout << "Pidkunte kybuk " << (i + 1) - j << " klavusoy \"k\": ";
				cin >> k;
				Kor[i] = rand() % 5 + 1;
				cout << "Vam vupalo: " << Kor[i] << endl;
				SumKor += Kor[i];
			}
			cout << endl;
			for (int l = j; l <= j + 1; l++) {
				cout << "Kompyter kudae kybuk " << (l + 1) - j << endl;
				Kom[l] = rand() % 5 + 1;
				cout << "Y kompytera vupalo: " << Kom[l] << endl;
				SumKom += Kom[l];
			}
		}
		if (SumKor > SumKom) {
			cout << "\n!!! V I T A Y !!!\n"
				<< "!!!  Z  P E R E M O G O Y  !!!\n\n"
				<< "y vas syma " << SumKor << " bilsa niz y kompytera " << SumKom << " !\n";
		}
		else if (SumKor < SumKom) {
			cout << "\nY kompytera syma bilsa " << SumKom << " niz y vas " << SumKor << " !\n\n"
				<< "!KOMPYTER PEREMIG!\n\n"
				<< "!VAM POSASTUT NASTYPNOGO RAZY!\n\n";
		}
	}
		  break;
	case 3: {
		//3. В одновимірному масиві, заповненому випадковими числами, визначити мінімальний і максимальний елементи.
		const int N = 10;
		int Arr[N];
		int Max = 0;
		int Min = 0;
		cout << "Masuv: ";
		for (int i = 0; i < 10; i++) {
			Arr[i] = rand() % 20 - 10;
			cout << Arr[i] << ' ';
		}
		Min = Arr[0];
		Max = Arr[0];
		for (int i = 0; i < 10; i++) {
			if (Max < Arr[i]) {
				Max = Arr[i];
			}
			if (Min > Arr[i]) {
				Min = Arr[i];
			}
			cout << Arr[i] << ' ';
		}
		cout << "\nMaksumalnui element: " << Max
			<< "\nMinimalnui element: " << Min << endl;
	}
		  break;
	case 4: {
		/*4. Користувач вводить прибуток фірми за рік (12 місяців).
			 Потім користувач вводить діапазон (наприклад, 3 і 6 — пошук між третім і шостим місяцем).
			 Необхідно визначити місяць, у якому прибуток був максимальним, і місяць, у якому прибуток був мінімальним,
			 з урахуванням обраного діапазону.*/
		cout << "\nPrubytok firmu po misacam:\n";
		const int M = 12;
		int Arr[M];
		for (int i = 0; i < M; i++) {
			Arr[i] = rand() % 1000;
			cout << i + 1 << " misaci - " << Arr[i] << endl;
		}
		int Max = 0, Min = Arr[0], t, h, c;
		cout << "\nVvedite diapazon misaciv: ";
		cin >> t >> h;
		if (t > h) {
			c = t;
			t = h;
			h = t;
		}
		for (int j = t - 1; j < h - 1; j++) {
			if (Max < Arr[j]) {
				Max = Arr[j];
			}
			if (Min > Arr[j]) {
				Min = Arr[j];
			}
		}
		if (t == h) {
			Max = Min;
			cout << "Prubytok firmu " << Max << " v misaci " << t << endl;
		}
		for (int l = t - 1; l < h - 1; l++) {
			if (Max == Arr[l]) {
				cout << "\nMaksumalnui prubytok " << Max << " byv v " << l + 1 << " misaci!";
			}
		}
		for (int k = t - 1; k < h - 1; k++) {
			if (Min == Arr[k]) {
				cout << "\nMinimalnui prubytok " << Min << " byv v " << k + 1 << " misaci!\n";
			}
		}
	}
		  break;
	case 5: {
		/*5. В одновимірному масиві, що складається з N дійсних чисел, обчислити:
			 ■ Суму від'ємних елементів;
			 ■ Добуток елементів, що розташовані між min і max елементами;
			 ■ Добуток елементів з парними номерами;
			 ■ Суму елементів, що розташовані між першим і останнім від'ємними елементами.*/
		const int N = 10;
		int Arr[N], A = 0, Sum = 0;
		cout << "Masuv:\n";
		for (int i = 0; i < N; i++) {
			Arr[i] = rand() % 100 - 50;
			cout << Arr[i] << ' ';
		}
		while (A >= 0 && A < 5) {
			cout << "\nVvedite potribny diy:\n"
				<< "1. Syma videmnux elementiv\n"
				<< "2. Dobytok elementiv roztasovanux miz Min ta Max\n"
				<< "3. Dobytok elementiv z parnumu elementamu\n"
				<< "4. Symy elementiv miz persum i ostannim videmnum elementamu\n"
				<< "5. Vuxid\n";
			cin >> A;
			switch (A) {
			case 1: {
				//1. Суму від'ємних елементів;
				for (int j = 0; j < N; j++) {
					if (Arr[j] < 0) {
						Sum += Arr[j];
					}
				}
				cout << "\nSyma videmnux elementiv = " << Sum << endl;
			}
				  break;
			case 2: {
				//2. Добуток елементів, що розташовані між min і max елементами;
				int Max = Arr[0], Min = Arr[0], m = 0, n = 0, Dob = 1;
				for (int j = 0; j < N; j++) {
					if (Max < Arr[j]) {
						Max = Arr[j];
					}
					if (Min > Arr[j]) {
						Min = Arr[j];
					}
				}
				for (int k = 0; k < N; k++) {
					if (Max == Arr[k]) {
						m = k;
						break;
					}
				}
				for (int l = 0; l < N; l++) {
					if (Min == Arr[l]) {
						n = l;
						break;
					}
				}
				if (n < m) {
					for (int y = 0; y < N; y++) {
						if (n <= y ) {
							Dob *= Arr[y];
							if (m + 1 == y)break;
						}
					}
				} else if(m < n)
				for (int y = 0; y < N; y++) {
					if (m <= y) {
						Dob *= Arr[y];
						if (n + 1 == y)break;
					}
				}
				cout << "\nDobytok elementiv " << Dob << " roztasovani miz min. el. " << n + 1 << " i max. el " << m + 1 << endl;
			}
				  break;
			case 3: {
				//3. Добуток елементів з парними номерами;
				int Dob = 1;
				for (int j = 0; j < N; j++) {
					if (j % 2 == 0 && j != 0) {
						Dob *= Arr[j];
					}
				}
				cout << "\nDobytok vsix elementiv z parnumu nomeramu " << Dob << endl;
			}
				  break;
			case 4: {
				//4. Суму елементів, що розташовані між першим і останнім від'ємними елементами.
				int Pr = 0, Ost = 0, q = 0, g = 0, sum = 0;
				for (int j = 0; j < N; j++) {
					if (Arr[j] < 0) {
						Pr = Arr[j];
						q = j;
						break;
					}
				}
				for (int l = N - 1; l >= 0; l--) {
					if (Arr[l] < 0) {
						Ost = Arr[l];
						g = l;
						break;
					}
				}
				for (int k = q; k <= g; k++) {
					sum += Arr[k];
				}
				cout << "\nSuma elementiv roztasovanuh miz persum videmnum " << Arr[q] 
					<< "\ni ostannim videmnum " << Arr[g] << " chislom\ndorivnue " << sum << endl;
			}
				  break;
			case 5:break;
			default:cout << "\nNe virno obranui variant!\n";
			}
		}
	}
		  break;
	default:cout << "Ne virno obrana zadacha!";
	}
}