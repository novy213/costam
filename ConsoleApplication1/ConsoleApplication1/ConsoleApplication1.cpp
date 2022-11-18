#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

class Gra {
public:
	string slowo = losowanie();
	int licznik = 0;
	int licznik2 = 12;
	int odglicznik = 0;
	int dlg = slowo.length();
	vector<bool> odg;
	char znak;
	Gra();
	void granie();
	string losowanie();
	vector<int> sprawdz(char litera, string slowo);
	void rysowanie();
};

void Gra::rysowanie() {	
	if (licznik2 == 0) {
		cout << "    --------    " << endl;
		cout << "   |       |    " << endl;
		cout << "   |       O    " << endl;
		cout << "   |      /|\\  " << endl;
		cout << "   |       |    " << endl;
		cout << "   |      / \\  " << endl;
		cout << "   |            " << endl;
		cout << "   |            " << endl;
		cout << "  / \\          " << endl;
		cout << "----------------" << endl;
	}
	else if (licznik2 == 1) {
		cout << "    --------    " << endl;
		cout << "   |       |    " << endl;
		cout << "   |       O    " << endl;
		cout << "   |      /|\\  " << endl;
		cout << "   |       |    " << endl;
		cout << "   |      /   " << endl;
		cout << "   |            " << endl;
		cout << "   |            " << endl;
		cout << "  / \\          " << endl;
		cout << "----------------" << endl;
	}
	else if (licznik2 == 2) {
		cout << "    --------    " << endl;
		cout << "   |       |    " << endl;
		cout << "   |       O    " << endl;
		cout << "   |      /|\\  " << endl;
		cout << "   |       |    " << endl;
		cout << "   |         " << endl;
		cout << "   |            " << endl;
		cout << "   |            " << endl;
		cout << "  / \\          " << endl;
		cout << "----------------" << endl;
	}
	else if (licznik2 == 3) {
		cout << "    --------    " << endl;
		cout << "   |       |    " << endl;
		cout << "   |       O    " << endl;
		cout << "   |      /|\\  " << endl;
		cout << "   |           " << endl;
		cout << "   |         " << endl;
		cout << "   |            " << endl;
		cout << "   |            " << endl;
		cout << "  / \\          " << endl;
		cout << "----------------" << endl;
	}
	else if (licznik2 == 4) {
		cout << "    --------    " << endl;
		cout << "   |       |    " << endl;
		cout << "   |       O    " << endl;
		cout << "   |      /|  " << endl;
		cout << "   |           " << endl;
		cout << "   |         " << endl;
		cout << "   |            " << endl;
		cout << "   |            " << endl;
		cout << "  / \\          " << endl;
		cout << "----------------" << endl;
	}
	else if (licznik2 == 5) {
		cout << "    --------    " << endl;
		cout << "   |       |    " << endl;
		cout << "   |       O    " << endl;
		cout << "   |      /  " << endl;
		cout << "   |           " << endl;
		cout << "   |         " << endl;
		cout << "   |            " << endl;
		cout << "   |            " << endl;
		cout << "  / \\          " << endl;
		cout << "----------------" << endl;
	}
	else if (licznik2 == 6) {
		cout << "    --------    " << endl;
		cout << "   |       |    " << endl;
		cout << "   |       O    " << endl;
		cout << "   |        " << endl;
		cout << "   |          " << endl;
		cout << "   |        " << endl;
		cout << "   |            " << endl;
		cout << "   |            " << endl;
		cout << "  / \\          " << endl;
		cout << "----------------" << endl;
	}
	else if (licznik2 == 7) {
		cout << "    --------    " << endl;
		cout << "   |       |    " << endl;
		cout << "   |           " << endl;
		cout << "   |        " << endl;
		cout << "   |          " << endl;
		cout << "   |         " << endl;
		cout << "   |            " << endl;
		cout << "   |            " << endl;
		cout << "  / \\          " << endl;
		cout << "----------------" << endl;
	}
	else if (licznik2 == 8) {
		cout << "    --------    " << endl;
		cout << "   |           " << endl;
		cout << "   |           " << endl;
		cout << "   |        " << endl;
		cout << "   |          " << endl;
		cout << "   |         " << endl;
		cout << "   |            " << endl;
		cout << "   |            " << endl;
		cout << "  / \\          " << endl;
		cout << "----------------" << endl;
	}
	else if (licznik2 == 9) {
	cout << "       " << endl;
	cout << "   |           " << endl;
	cout << "   |           " << endl;
	cout << "   |        " << endl;
	cout << "   |          " << endl;
	cout << "   |         " << endl;
	cout << "   |            " << endl;
	cout << "   |            " << endl;
	cout << "  / \\          " << endl;
	cout << "----------------" << endl;
	}
	else if (licznik2 == 10) {
	cout << "       " << endl;
	cout << "              " << endl;
	cout << "              " << endl;
	cout << "           " << endl;
	cout << "             " << endl;
	cout << "            " << endl;
	cout << "               " << endl;
	cout << "               " << endl;
	cout << "  / \\          " << endl;
	cout << "----------------" << endl;
	}
	else if (licznik2 == 11) {
	cout << "       " << endl;
	cout << "              " << endl;
	cout << "              " << endl;
	cout << "           " << endl;
	cout << "             " << endl;
	cout << "            " << endl;
	cout << "               " << endl;
	cout << "               " << endl;
	cout << "  /          " << endl;
	cout << "----------------" << endl;
	}
	else if (licznik2 == 12) {
	cout << "       " << endl;
	cout << "              " << endl;
	cout << "              " << endl;
	cout << "           " << endl;
	cout << "             " << endl;
	cout << "            " << endl;
	cout << "               " << endl;
	cout << "               " << endl;
	cout << "            " << endl;
	cout << "----------------" << endl;
	}
}

Gra::Gra() {
	for (int i = 0;i <= slowo.length() - 1;i++) {
		odg.push_back(false);
	}
}

void Gra::granie() {
	for (;;) {
		system("cls");
		rysowanie();
		cout << "Pozostalo ci "<<licznik2<<" prob" << endl;
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
		if (odglicznik == dlg) {
			cout << "Wygrales!";
			break;
		}
		else if (licznik2 == 0) {
			cout << "Przegrales!"<<endl;
			cout << "Haslo: " << slowo;
			break;
		}
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

string Gra::losowanie() {
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

vector<int> Gra::sprawdz(char litera, string slowo) {
	vector<int> liczby;
	for (int i = 0;i <= slowo.length();i++) {
		if (litera == slowo[i]) {
			liczby.push_back(i);
		}
	}
	return liczby;
}

int main()
{
	Gra gra;
	gra.granie();
	
}