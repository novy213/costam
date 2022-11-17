#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
#include <locale.h>

using namespace std;

string Losowanie() {
	srand(time(NULL));
	vector<string> slowa;
	string slowo;
	string line;
	ifstream myFile("hasla.txt");
	if (myFile) {
		while (getline(myFile, line)) {
			slowa.push_back(line);
		}
	}
	else {
		cout << "Cant read the file";
	}
	slowo = slowa[rand() % slowa.size() + 1];
	return slowo;
}

vector<int> sprawdz(char litera, string slowo) {
	vector<int> liczby;
	for (int i = 0;i <= slowo.length();i++) {
		if (litera == slowo[i]) {
			liczby.push_back(i);
		}
	}
	return liczby;
}

int dlugosc(string slowo) { return slowo.length(); }
int main()
{
	string slowo = Losowanie();
	setlocale(LC_CTYPE, "Polish");
	int licznik = 0;
	int licznik2 = 10;
	int odglicznik = 0;
	int dlg = slowo.length();
	vector<bool> odg;
	char znak;
	for (int i = 0;i <= slowo.length() - 1;i++) {
		odg.push_back(false);
	}
	for (;;) {
		system("cls");
		cout << slowo << endl;
		for (int i = 0;i <= slowo.length() - 1;i++) {
			if (odg[i] == false) {
				cout << "_ ";
			}
			else if (odg[i] == true) {
				cout << slowo[i] << " ";
			}
		}
		cout << endl;
		for (int i = 0;i <= slowo.length() - 1;i++) {
			odg.push_back(false);
		}
		if (odglicznik == dlg) break;
		cin >> znak;
		vector<int> obecna_proboa = sprawdz(znak, slowo);
		if (sprawdz(znak, slowo).size() == 0) licznik2--;
		else if ((sprawdz(znak, slowo).size() > 0)) {
			for (int i = 0;i <= obecna_proboa.size() - 1;i++) {
				odg[obecna_proboa[i]] = true;
			}
		}
		for (int i = 0;i <= slowo.length() - 1;i++) {
			if (odg[i] == false) {
				cout << "_ ";
			}
			else if (odg[i] == true) {
				cout << slowo[i] << " ";
			}
		}
		odglicznik = 0;
		for (int i = 0;i <= slowo.length();i++) {
			if (odg[i] == true) {
				odglicznik++;
			}
		}
		cout << endl;
	}
}