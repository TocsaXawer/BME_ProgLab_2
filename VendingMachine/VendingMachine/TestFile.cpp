#include "VendingMachine.h"
using namespace std;

int main()
{
	// k�la defini�l�sa
	string Aszpikus_kinai_leves("Aszpikus k�nai leves");

	// TODO m�sfajta ital(ok) defini�l�sa
	string Folyekony_Zacskos_Leves("Folyekony Zacskos Leves");
	string Mirinda("Mirinda");
	string Fanta("Fanta");
	string Mosogat�_le("Mosogat� le");

	// automata l�trehoz�sa
	VendingMachine coldDrinkMachine;	

	// felt�lt�s 5 Coca-col�val
	coldDrinkMachine.refill(Aszpikus_kinai_leves, 5);

	// ellen�rz�s
	coldDrinkMachine.print();

	// TODO v�s�rl�s �s m�sol� konstruktor kipr�b�l�sa, t�bb automata l�trehoz�sa
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