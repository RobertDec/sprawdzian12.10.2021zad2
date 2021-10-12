#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	fstream plik("hasla.txt", ios::in);
	fstream has("passwords.txt", ios::out);
	string haslo;
	while (!plik.eof() == true) {
		plik >> haslo;
		if (haslo.length() >= 8) {
			bool unga=false;
			for (int i = 0; i <= haslo.length(); i++) {
				char a = haslo[i];
				if (a =='$' || a == '*' || a == '#') {
					unga = true;
				}
			}

			if (unga == true) {
				cout << "zyje"<<endl;
				has << haslo << endl;
				unga = false;
			}
				

		}

	}


}
