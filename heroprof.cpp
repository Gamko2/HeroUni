#include <iostream>
#include "held.h"
#include <iomanip>

using namespace std;

//Allgemeine Funktionen
void einleitung()
{
	cout << "Es waren einmal drei Helden. Leider koennen diese sich teilweise nicht mal mehr an ihren Namen erinnern." << endl;
	cout << "Das liegt wohl vor allem an der letzten Nacht im Wirtshaus zur Baertigen Barbara" << endl;
	cout << endl;

	cout << "Enter druecken" << endl;
	cin.get();

	cout << endl;
	cout << "Doch bevor sich unsere Helden in ein Abenteuer stuerzen koennen," << endl;
	cout << "sollten sie sich wieder an die wichtigsten Dinge erinnern." << endl;
	cout << endl;

	cout << "Enter druecken" << endl;
	cin.get();

	cout << endl;
	cout << "Ich hoffe hier koennen Sie helfen." << endl;
	cout << endl;
	cout << "Enter druecken" << endl;
	cin.get();
}


void heldErstellen1(Held& held)
{
	string name;

	cout << "Geben Sie einen Namen fuer Ihren Helden ein: " << endl;
	getline(cin, name);
	Held held2(name); //Held 2 - Alter und Groesse sind Default-Werte
	held = held2;
}

Held heldErstellen2()
{
	string name;
	int alter;
	double groesse;

	cout << "Geben Sie einen Namen fuer Ihren Helden ein: " << endl;
	getline(cin, name);
	cout << "Geben Sie das Alter fuer Ihren Held ein: " << endl;
	cin >> alter;
	cin.get();
	cout << "Geben Sie die Groesse fuer Ihren Helden ein: " << endl;
	cin >> groesse;
	cin.get();

	Held held3(name, alter, groesse);

	return held3;
}


void kampf_ergebnis(Held h){
  
  cout << endl;
	if (h.lebenspunkteBerechnen(h.get_alter(), h.get_groesse()) > 250)
	{
		cout << h.get_name() << ":" << " Hat mit " << h.lebenspunkteBerechnen(h.get_alter(), h.get_groesse()) - 250 << " Lebenspunkten ueberlebt" << endl;
	}

	else
	{
		cout << h.get_name() << ":" << "OHHHH NEIN! Ich sterbe! Vielleicht ist die Wildnis einfach nichts fuer Babys und Kinder" << endl;
		cout << h.get_name() << " ist damit leider Tot" << endl;
	}
	cout << endl;

	cout << "Enter druecken";
	cin.get();
}


void gespraech(Held h1, Held h2, Held h3)
{
	cout << "Die 3 Helden treffen sich mit dickem Kopf an einem Lagerfeuer" << endl;
	cout << endl;

	cout << "Enter druecken" << endl;
	cin.get();

	cout << h1.get_name() << ":" << "Haha ihr Luschen koennt euch an nix mehr erinnern!\nIch weiss noch, dass mein Name " << h1.get_name();
	cout << " ist und ich " << h1.get_alter() << " Jahre alt bin, " << "ausserdem bin ich " << h1.get_groesse() << " gross" << endl;
	cout << endl;

	cout << "Enter druecken" << endl;
	cin.get();

	cout << endl;
	cout << h2.get_name() << ":" << "Boah mein Kopf! Ich glaube mein Name war " << h2.get_name();
	cout << " und ich bin wohl " << h2.get_alter() << " Jahre alt und " << h2.get_groesse() << " gross" << endl;
	cout << endl;

	cout << "Enter druecken" << endl;
	cin.get();

	cout << endl;
	cout << h3.get_name() << ":" << "Ich glaube ich bin jetzt noch nicht mal nuechtern *hicks*.";
	cout << "Aber mein Name war glaube ich " << h3.get_name() << " und ich bin " << h3.get_alter() << " Jahre alt." << endl;
	cout << endl;

	cout << "Enter druecken";
	cin.get();

	cout << endl;
	cout << "AH! Moment ich bin " << h3.get_groesse() << " gross" << endl << endl;
	cout << endl;

	cout << "Enter druecken";
	cin.get();

	cout << endl;
	cout << "Ploetzlich taucht ein wildes Monster auf. Da die Reaktionsgeschwindigkeit unserer Helden gegen 0 geht,";
	cout << "kann das Monster unsere Helden ohne Gegenwehr angreifen" << endl;
	cout << endl;
	cout << "Alle Helden verlieren 250 Lebenspunkte" << endl;
	cout << endl;

	cout << "Enter druecken";
	cin.get();

	kampf_ergebnis(h1);
	kampf_ergebnis(h2);
	kampf_ergebnis(h3);


	cout << endl;
	cout << "Schnell klaut das Monster die Rucksaecke der Helden.";
	cout << "Nachdem das Monster allerdings die alkoholischen Ausduenstungen der verbliebenen Helden riecht, macht er sich lieber ganz schnell aus dem Staub." << endl;
	cout << endl;

	cout << "Enter druecken";
	cin.get();

	cout << endl;
	cout << "Unsere guten, mutigen, wackeren und total verkaterten Helden liegen bewusstlos oder tot um das Lagerfeuer." << endl;
	cout << endl;

	cout << "Enter druecken";
	cin.get();
	cout << "An dieser Stelle wuerde natuerlich dramatische Musik einsetzen.";
	cout << "Diese muessen Sie sich leider selber vorstellen." << endl;
	cout << endl;

	cout << "Enter druecken";
	cin.get();

	cout << endl;
	cout << "Fortsetzung folgt..." << endl;

	cout << endl;
	cout << "Enter druecken";
	cin.get();

	cout << endl;
}

int main()
{
	einleitung();

	Held held1, held2, held3;   //Helden mit default Konstruktor erstellen
	cout << "Ein Held wird per Default erstellt. Fuer den 2. Helden muss der Name eingegeben werden " << endl;
	heldErstellen1(held2); //Da heldErstellen1 mit Referenz arbeitet, koennen die Werte direkt ueberschrieben werden.
	cout << "Fuer den 3. Helden muessen alle 3 Daten eingegeben werden. " << endl;
	held3 = heldErstellen2(); //heldErstellen2 hat als Rueckgabewert ein held Objekt. Dieses wird held 3 zugewiesen.

	gespraech(held1, held2, held3);

	return 0;
}
