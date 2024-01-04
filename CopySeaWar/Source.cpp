#include "Header.h"

int main()
{
	srand(time(0));
	int r;
	do
	{
		cout << "Select a way to place ships (1 - Manual, 0 - Automatic): ";
		cin >> r;
	} while (r < 0 || r > 1);
	system("cls");

	// Корабли человека
	int ship4[2][4] = { {-100,-100,-100,-100},{-100,-100,-100,-100} }, ship3_1[2][3] = { {-100,-100,-100},{-100,-100,-100} }, ship3_2[2][3] = { {-100,-100,-100},{-100,-100,-100} }, ship2_1[2][2] = { {-100,-100},{-100,-100} }, ship2_2[2][2] = { {-100,-100},{-100,-100} }, ship2_3[2][2] = { {-100,-100},{-100,-100} }, ship1_1[2][1] = { {-100},{-100} }, ship1_2[2][1] = { {-100},{-100} }, ship1_3[2][1] = { {-100},{-100} }, ship1_4[2][1] = { {-100},{-100} };

	//Корабли компьютера
	int Ship4[2][4] = { {-100,-100,-100,-100},{-100,-100,-100,-100} }, Ship3_1[2][3] = { {-100,-100,-100},{-100,-100,-100} }, Ship3_2[2][3] = { {-100,-100,-100},{-100,-100,-100} }, Ship2_1[2][2] = { {-100,-100},{-100,-100} }, Ship2_2[2][2] = { {-100,-100},{-100,-100} }, Ship2_3[2][2] = { {-100,-100},{-100,-100} }, Ship1_1[2][1] = { {-100},{-100} }, Ship1_2[2][1] = { {-100},{-100} }, Ship1_3[2][1] = { {-100},{-100} }, Ship1_4[2][1] = { {-100},{-100} };

	if (r == 0)
	{
		autoR(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4);

		fieldHuman(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4);
		system("pause");
		system("cls");
	}
	else
	{
		manualR(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4);
		system("cls");
	}
	autoR(Ship4, Ship3_1, Ship3_2, Ship2_1, Ship2_2, Ship2_3, Ship1_1, Ship1_2, Ship1_3, Ship1_4);

	int pr = 1, lv = 1, vr = 1, nz = 1;

	int shotH[100], shotC[100];
	for (int k = 0; k < 100; k++)
	{
		shotH[k] = 1;
		shotC[k] = 1;
	}
	game(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4, Ship4, Ship3_1, Ship3_2, Ship2_1, Ship2_2, Ship2_3, Ship1_1, Ship1_2, Ship1_3, Ship1_4, shotH, shotC, &pr, &lv, &vr, &nz);

	return 0;
}