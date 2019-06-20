#pragma once
//#include <string>
#include <iostream>
using namespace std;
struct Film
{
	char name[50];
	char directed_by[50];
	char country[50];
	int year;
	int censor;
};
int che()
{
	int s;
	fstream mo("file.txt");
	mo.seekg(0, ios::end);
	s = mo.tellg();
	mo.close();
	return s;
}
int enter(int num, Film filmi[])
{
	int y = 0;
	ifstream mo("file.txt");
	if (!mo.is_open())
	{
		cout << "File is not open.\n";
	}
	else
	{
		for (y = 0; y != 5; y++)
		{
			{
				mo >> filmi[y].name;
				mo >> filmi[y].directed_by;
				mo >> filmi[y].country;
				mo >> filmi[y].year;
				mo >> filmi[y].censor;
			}
		}
	}
	mo.close();
	return num;
}
void save(int num, Film filmi[])
{
	int p = 1;
	ofstream fi("file.txt", ios_base::trunc | ios_base::out);
	for (int i = 0; i != 5; i++)
	{
		fi << filmi[i].name << " " << filmi[i].directed_by << " " << filmi[i].country << " " << filmi[i].year << " " << filmi[i].censor << " ";
	}
	cout << "Info saved" << endl;
	fi.close();
}
void bsave(int num, Film filmi[])
{
	int p = 1;
	ofstream bi("bin", ios::binary);
	for (int i = 0; i != 5; i++)
	{
		bi << filmi[i].name << " " << filmi[i].directed_by << " " << filmi[i].country << " " << filmi[i].year << " " << filmi[i].censor << " ";
	}
	cout << "Info saved" << endl;
	bi.close();
}
void mcout(Film filmi[])
{
	for (int b = 0; b != 5; b++)
	{
		{
			cout << "Film(" << b + 1 << ") :\n";
			cout << "Name - " << filmi[b].name << "\n";
			cout << "Family - " << filmi[b].directed_by << "\n";
			cout << "Country - " << filmi[b].country << "\n";
			cout << "Year - " << filmi[b].year << "\n";
			cout << "Cens - " << filmi[b].censor << "\n\n";
		}
	}
}
