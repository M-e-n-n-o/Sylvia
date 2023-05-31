/*
	https://www.mygreatlearning.com/blog/top-c-projects/
 
	Nodig:
	- Tekst input
	- Tekst output
	- Loop
	- Klasse voor Persoon en Datum
	- Lijst
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class FriendsBirthday
{
public:
	string Naam;
	string Datum;

	FriendsBirthday(string naam, string datum)
	{
		Naam = naam;
		Datum = datum;
	}

	string ToString()
	{
		string samen = Naam + " " + Datum;
		return samen;
	}
};

int main()
{
	vector<FriendsBirthday> lijstje;

	bool blijftvragen = true;
	while (blijftvragen == true)
	{ 
		cout << "Voor wie wil je een verjaardig invoeren?" << endl;

		string naam;
		getline(cin, naam);

		cout << "Voor de datum in" << endl;

		string datum;
		getline(cin, datum);

		FriendsBirthday fb(naam, datum);
		lijstje.push_back(fb);

		cout << fb.ToString() << endl;

		cout << "Nog een verjaardag invoeren?" << endl;
		
		string opnieuw;
		getline(cin, opnieuw);

		if (opnieuw == "nee")
		{
			blijftvragen = false;
		}
	}


	
}
