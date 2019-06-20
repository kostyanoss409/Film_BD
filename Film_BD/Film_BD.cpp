// Film_BD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include "Header.h"
#include <string>
using namespace std;
int main()
{
//	ofstream bout("bin.txt", ios::out | ios::binary);
//	ifstream bin("bin.txt", ios::in | ios::binary);
//	ofstream fout("file.txt", ios::out | ios::binary);
//	ifstream fin("file.txt", ios::in | ios::binary);
	setlocale(LC_ALL, "Russian");
	Film filmi[5];
	char q;
	int p, num = 0;
	const char ch = '\n';
	cout << "1 - Fill" << "\n";
	cout << "2 - Binary Fill" << "\n";
	cout << "3 - Save" << "\n";
	cout << "4 - Binary Save" << "\n";
	cout << "5 - Show" << "\n";
	cin >> q;
	do
	{
		switch (q)
		{
		case '1':
		{
			p = che();
			if (p == 0)
			{
				cout << "File is empty.\n";
			}
			else
			{
				num = enter(num, filmi);
			}
			break;
		}
		case '2':
		{
			p = che();
			if (p == 0)
			{
				cout << "File is empty.\n";
			}
			else
			{
				ifstream fr("bin.txt", ios::in | ios::binary);
				fr.read((char*)filmi, sizeof(filmi));
				fr.close();
			}
			//		bin.read((char*)&filmi, sizeof(filmi));
			//		bin.close();
			break;
		}
		case '3':
		{
			save(num, filmi);
			break;
		}
		case '4':
		{
			ofstream fo("bin.txt", ios::out | ios::binary);
			fo.write((char*)filmi, sizeof(filmi));
			fo.close();
			//	bout.write((char*)&filmi, sizeof(filmi));
			//	bout.close();
			break;
		}
		case '5':
		{
			/*for (int b = 0; b != 5; b++)
			{
				{
					cout << "Film(" << b + 1 << ") :\n";
					cout << "Name - " << filmi[b].name << "\n";
					cout << "Family - " << filmi[b].directed_by << "\n";
					cout << "Country - " << filmi[b].country << "\n";
					cout << "Year - " << filmi[b].year << "\n";
					cout << "Cens - " << filmi[b].censor << "\n\n";
				}
			}*/
			mcout(filmi);
			break;
		}
		}
		cin >> q;
	} while (q != 'q');
	/*while (q != 'q')
	{
		while ((q != '1') && (q != '2') && (q != '3') && (q != '4') && (q != '5'))
		{
			cout << "What do you want to do?" << "\n";
			cin >> q;
		}
		
		cout << "\nWhat do you want to do?" << "\n";
		cout << "1 - Fill" << "\n";
		cout << "2 - Binary Fill" << "\n";
		cout << "3 - Save" << "\n";
		cout << "4 - Binary Save" << "\n";
		cout << "5 - Show" << "\n";
		cout << "q - Close" << "\n";
		cin >> q;
	}*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
