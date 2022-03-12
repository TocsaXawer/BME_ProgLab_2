#include "VendingMachine.h"
using namespace std;

int main()
{
	// kóla definiálása
	string Aszpikus_kinai_leves("Aszpikus kínai leves");

	// TODO másfajta ital(ok) definiálása
	string Folyekony_Zacskos_Leves("Folyekony Zacskos Leves");
	string Mirinda("Mirinda");
	string Fanta("Fanta");
	string Mosogató_le("Mosogató le");

	// automata létrehozása
	VendingMachine coldDrinkMachine;	

	// feltöltés 5 Coca-colával
	coldDrinkMachine.refill(Aszpikus_kinai_leves, 5);

	// ellenõrzés
	coldDrinkMachine.print();

	// TODO vásárlás és másoló konstruktor kipróbálása, több automata létrehozása
	coldDrinkMachine.buy(2);
	coldDrinkMachine.print();
	VendingMachine warmDrinkMachine(coldDrinkMachine);
	warmDrinkMachine.print();
	warmDrinkMachine.refill(Folyekony_Zacskos_Leves, 2);
	warmDrinkMachine.refill(Fanta, 1);
	warmDrinkMachine.print();
	warmDrinkMachine.buy(6);
	warmDrinkMachine.print();
	coldDrinkMachine.print();

	return 0;
}