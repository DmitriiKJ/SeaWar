#include "Header.h"

HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
COORD cPos = { startCoordX, startCoordY };

void SetColor(ConsoleColor text, ConsoleColor background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

int ship3(int arr[2][3])
{
	int random, c = 0;
	arr[0][0] = rand() % 100 + 1;
	do
	{
		c++;
		random = rand() % 4;
		if (c % 4 == 0)
		{
			arr[0][0] = rand() % 100 + 1;
		}
	} while (random == 0 && arr[0][0] < 21 || random == 1 && (arr[0][0] % 10 > 8 || arr[0][0] % 10 == 0) || random == 2 && arr[0][0] > 80 || random == 3 && (arr[0][0] % 10 < 3 && arr[0][0] % 10 != 0));

	for (int i = 0; i < 2; i++)
	{
		for (int j = 1; j < 3; j++)
		{
			if (i == 1)
			{
				arr[i][j] = 1;
				arr[i][0] = 1;
			}
			else
			{
				if (random == 0)
				{
					arr[i][j] = arr[0][0] - (10 * j);
				}
				else if (random == 1)
				{
					arr[i][j] = arr[0][0] + j;
				}
				else if (random == 2)
				{
					arr[i][j] = arr[0][0] + (10 * j);
				}
				else
				{
					arr[i][j] = arr[0][0] - j;
				}
			}
		}
	}
	return 0;
}

int ship2(int arr[2][2])
{
	int random, c = 0;
	arr[0][0] = rand() % 100 + 1;
	do
	{
		c++;
		random = rand() % 4;
		if (c % 4 == 0)
		{
			arr[0][0] = rand() % 100 + 1;
		}
	} while (random == 0 && arr[0][0] < 11 || random == 1 && (arr[0][0] % 10 > 9 || arr[0][0] % 10 == 0) || random == 2 && arr[0][0] > 90 || random == 3 && (arr[0][0] % 10 < 2 && arr[0][0] % 10 != 0));

	for (int i = 0; i < 2; i++)
	{
		for (int j = 1; j < 2; j++)
		{
			if (i == 1)
			{
				arr[i][j] = 1;
				arr[i][0] = 1;
			}
			else
			{
				if (random == 0)
				{
					arr[i][j] = arr[0][0] - (10 * j);
				}
				else if (random == 1)
				{
					arr[i][j] = arr[0][0] + j;
				}
				else if (random == 2)
				{
					arr[i][j] = arr[0][0] + (10 * j);
				}
				else
				{
					arr[i][j] = arr[0][0] - j;
				}
			}
		}
	}
	return 0;
}


int autoR(int ship4[2][4], int ship3_1[2][3], int ship3_2[2][3], int ship2_1[2][2], int ship2_2[2][2], int ship2_3[2][2], int ship1_1[2][1], int ship1_2[2][1], int ship1_3[2][1], int ship1_4[2][1])
{
	//4
	ship4[0][0] = rand() % 100 + 1;
	int random;
	do
	{
		random = rand() % 4;
	} while (random == 0 && ship4[0][0] < 31 || random == 1 && (ship4[0][0] % 10 > 7 || ship4[0][0] % 10 == 0) || random == 2 && ship4[0][0] > 70 || random == 3 && ship4[0][0] % 10 < 4 && ship4[0][0] % 10 != 0);

	for (int i = 0; i < 2; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			if (i == 1)
			{
				ship4[i][j] = 1;
				ship4[i][0] = 1;
			}
			else
			{
				if (random == 0)
				{
					ship4[i][j] = ship4[0][0] - (10 * j);
				}
				else if (random == 1)
				{
					ship4[i][j] = ship4[0][0] + j;
				}
				else if (random == 2)
				{
					ship4[i][j] = ship4[0][0] + (10 * j);
				}
				else
				{
					ship4[i][j] = ship4[0][0] - j;
				}
			}
		}
	}
	// 3_1
	int z = 0;
	do
	{
		z = 0;
		ship3(ship3_1);
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (ship4[0][i] + 1 == ship3_1[0][j] || ship4[0][i] - 1 == ship3_1[0][j] || ship4[0][i] + 10 == ship3_1[0][j] || ship4[0][i] - 10 == ship3_1[0][j] || ship4[0][i] + 11 == ship3_1[0][j] || ship4[0][i] - 11 == ship3_1[0][j] || ship4[0][i] + 9 == ship3_1[0][j] || ship4[0][i] - 9 == ship3_1[0][j])
				{
					z++;
					break;
				}
			}
			if (z > 0)
			{
				break;
			}
		}
	} while (z > 0);
	//3_2
	do
	{
		z = 0;
		ship3(ship3_2);
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (ship4[0][i] + 1 == ship3_2[0][j] || ship4[0][i] - 1 == ship3_2[0][j] || ship4[0][i] + 10 == ship3_2[0][j] || ship4[0][i] - 10 == ship3_2[0][j] || ship4[0][i] + 11 == ship3_2[0][j] || ship4[0][i] - 11 == ship3_2[0][j] || ship4[0][i] + 9 == ship3_2[0][j] || ship4[0][i] - 9 == ship3_2[0][j])
				{
					z++;
					break;
				}
			}
			if (z > 0)
			{
				break;
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (ship3_2[0][i] + 1 == ship3_1[0][j] || ship3_2[0][i] - 1 == ship3_1[0][j] || ship3_2[0][i] + 10 == ship3_1[0][j] || ship3_2[0][i] - 10 == ship3_1[0][j] || ship3_2[0][i] + 11 == ship3_1[0][j] || ship3_2[0][i] - 11 == ship3_1[0][j] || ship3_2[0][i] + 9 == ship3_1[0][j] || ship3_2[0][i] - 9 == ship3_1[0][j])
					{
						z++;
						break;
					}
				}
				if (z > 0)
				{
					break;
				}
			}
		}
	} while (z > 0);
	//2_1
	do
	{
		z = 0;
		ship2(ship2_1);
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				if (ship4[0][i] + 1 == ship2_1[0][j] || ship4[0][i] - 1 == ship2_1[0][j] || ship4[0][i] + 10 == ship2_1[0][j] || ship4[0][i] - 10 == ship2_1[0][j] || ship4[0][i] + 11 == ship2_1[0][j] || ship4[0][i] - 11 == ship2_1[0][j] || ship4[0][i] + 9 == ship2_1[0][j] || ship4[0][i] - 9 == ship2_1[0][j])
				{
					z++;
					break;
				}
			}
			if (z > 0)
			{
				break;
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship3_2[0][i] + 1 == ship2_1[0][j] || ship3_2[0][i] - 1 == ship2_1[0][j] || ship3_2[0][i] + 10 == ship2_1[0][j] || ship3_2[0][i] - 10 == ship2_1[0][j] || ship3_2[0][i] + 11 == ship2_1[0][j] || ship3_2[0][i] - 11 == ship2_1[0][j] || ship3_2[0][i] + 9 == ship2_1[0][j] || ship3_2[0][i] - 9 == ship2_1[0][j])
					{
						z++;
						break;
					}
				}
				if (z > 0)
				{
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship3_1[0][i] + 1 == ship2_1[0][j] || ship3_1[0][i] - 1 == ship2_1[0][j] || ship3_1[0][i] + 10 == ship2_1[0][j] || ship3_1[0][i] - 10 == ship2_1[0][j] || ship3_1[0][i] + 11 == ship2_1[0][j] || ship3_1[0][i] - 11 == ship2_1[0][j] || ship3_1[0][i] + 9 == ship2_1[0][j] || ship3_1[0][i] - 9 == ship2_1[0][j])
					{
						z++;
						break;
					}
				}
				if (z > 0)
				{
					break;
				}
			}
		}
	} while (z > 0);
	//2_2
	do
	{
		z = 0;
		ship2(ship2_2);
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				if (ship4[0][i] + 1 == ship2_2[0][j] || ship4[0][i] - 1 == ship2_2[0][j] || ship4[0][i] + 10 == ship2_2[0][j] || ship4[0][i] - 10 == ship2_2[0][j] || ship4[0][i] + 11 == ship2_2[0][j] || ship4[0][i] - 11 == ship2_2[0][j] || ship4[0][i] + 9 == ship2_2[0][j] || ship4[0][i] - 9 == ship2_2[0][j])
				{
					z++;
					break;
				}
			}
			if (z > 0)
			{
				break;
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship3_2[0][i] + 1 == ship2_2[0][j] || ship3_2[0][i] - 1 == ship2_2[0][j] || ship3_2[0][i] + 10 == ship2_2[0][j] || ship3_2[0][i] - 10 == ship2_2[0][j] || ship3_2[0][i] + 11 == ship2_2[0][j] || ship3_2[0][i] - 11 == ship2_2[0][j] || ship3_2[0][i] + 9 == ship2_2[0][j] || ship3_2[0][i] - 9 == ship2_2[0][j])
					{
						z++;
						break;
					}
				}
				if (z > 0)
				{
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship3_1[0][i] + 1 == ship2_2[0][j] || ship3_1[0][i] - 1 == ship2_2[0][j] || ship3_1[0][i] + 10 == ship2_2[0][j] || ship3_1[0][i] - 10 == ship2_2[0][j] || ship3_1[0][i] + 11 == ship2_2[0][j] || ship3_1[0][i] - 11 == ship2_2[0][j] || ship3_1[0][i] + 9 == ship2_2[0][j] || ship3_1[0][i] - 9 == ship2_2[0][j])
					{
						z++;
						break;
					}
				}
				if (z > 0)
				{
					break;
				}
			}
		}
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				if (ship2_2[0][i] + 1 == ship2_1[0][j] || ship2_2[0][i] - 1 == ship2_1[0][j] || ship2_2[0][i] + 10 == ship2_1[0][j] || ship2_2[0][i] - 10 == ship2_1[0][j] || ship2_2[0][i] + 11 == ship2_1[0][j] || ship2_2[0][i] - 11 == ship2_1[0][j] || ship2_2[0][i] + 9 == ship2_1[0][j] || ship2_2[0][i] - 9 == ship2_1[0][j])
				{
					z++;
					break;
				}
			}
			if (z > 0)
			{
				break;
			}
		}
	} while (z > 0);
	//2_3
	do
	{
		z = 0;
		ship2(ship2_3);
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				if (ship4[0][i] + 1 == ship2_3[0][j] || ship4[0][i] - 1 == ship2_3[0][j] || ship4[0][i] + 10 == ship2_3[0][j] || ship4[0][i] - 10 == ship2_3[0][j] || ship4[0][i] + 11 == ship2_3[0][j] || ship4[0][i] - 11 == ship2_3[0][j] || ship4[0][i] + 9 == ship2_3[0][j] || ship4[0][i] - 9 == ship2_3[0][j])
				{
					z++;
					break;
				}
			}
			if (z > 0)
			{
				break;
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship3_2[0][i] + 1 == ship2_3[0][j] || ship3_2[0][i] - 1 == ship2_3[0][j] || ship3_2[0][i] + 10 == ship2_3[0][j] || ship3_2[0][i] - 10 == ship2_3[0][j] || ship3_2[0][i] + 11 == ship2_3[0][j] || ship3_2[0][i] - 11 == ship2_3[0][j] || ship3_2[0][i] + 9 == ship2_3[0][j] || ship3_2[0][i] - 9 == ship2_3[0][j])
					{
						z++;
						break;
					}
				}
				if (z > 0)
				{
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship3_1[0][i] + 1 == ship2_3[0][j] || ship3_1[0][i] - 1 == ship2_3[0][j] || ship3_1[0][i] + 10 == ship2_3[0][j] || ship3_1[0][i] - 10 == ship2_3[0][j] || ship3_1[0][i] + 11 == ship2_3[0][j] || ship3_1[0][i] - 11 == ship2_3[0][j] || ship3_1[0][i] + 9 == ship2_3[0][j] || ship3_1[0][i] - 9 == ship2_3[0][j])
					{
						z++;
						break;
					}
				}
				if (z > 0)
				{
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship2_3[0][i] + 1 == ship2_1[0][j] || ship2_3[0][i] - 1 == ship2_1[0][j] || ship2_3[0][i] + 10 == ship2_1[0][j] || ship2_3[0][i] - 10 == ship2_1[0][j] || ship2_3[0][i] + 11 == ship2_1[0][j] || ship2_3[0][i] - 11 == ship2_1[0][j] || ship2_3[0][i] + 9 == ship2_1[0][j] || ship2_3[0][i] - 9 == ship2_1[0][j])
					{
						z++;
						break;
					}
				}
				if (z > 0)
				{
					break;
				}
			}

		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship2_2[0][i] + 1 == ship2_3[0][j] || ship2_2[0][i] - 1 == ship2_3[0][j] || ship2_2[0][i] + 10 == ship2_3[0][j] || ship2_2[0][i] - 10 == ship2_3[0][j] || ship2_2[0][i] + 11 == ship2_3[0][j] || ship2_2[0][i] - 11 == ship2_3[0][j] || ship2_2[0][i] + 9 == ship2_3[0][j] || ship2_2[0][i] - 9 == ship2_3[0][j])
					{
						z++;
						break;
					}
				}
				if (z > 0)
				{
					break;
				}
			}
		}
	} while (z > 0);
	//1_1
	do
	{
		z = 0;
		ship1_1[0][0] = rand() % 100 + 1;
		ship1_1[1][0] = 1;
		for (int i = 0; i < 4; i++)
		{
			if (ship4[0][i] + 1 == ship1_1[0][0] || ship4[0][i] - 1 == ship1_1[0][0] || ship4[0][i] + 10 == ship1_1[0][0] || ship4[0][i] - 10 == ship1_1[0][0] || ship4[0][i] + 11 == ship1_1[0][0] || ship4[0][i] - 11 == ship1_1[0][0] || ship4[0][i] + 9 == ship1_1[0][0] || ship4[0][i] - 9 == ship1_1[0][0])
			{
				z++;
				break;
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 3; i++)
			{
				if (ship3_2[0][i] + 1 == ship1_1[0][0] || ship3_2[0][i] - 1 == ship1_1[0][0] || ship3_2[0][i] + 10 == ship1_1[0][0] || ship3_2[0][i] - 10 == ship1_1[0][0] || ship3_2[0][i] + 11 == ship1_1[0][0] || ship3_2[0][i] - 11 == ship1_1[0][0] || ship3_2[0][i] + 9 == ship1_1[0][0] || ship3_2[0][i] - 9 == ship1_1[0][0])
				{
					z++;
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 3; i++)
			{

				if (ship3_1[0][i] + 1 == ship1_1[0][0] || ship3_1[0][i] - 1 == ship1_1[0][0] || ship3_1[0][i] + 10 == ship1_1[0][0] || ship3_1[0][i] - 10 == ship1_1[0][0] || ship3_1[0][i] + 11 == ship1_1[0][0] || ship3_1[0][i] - 11 == ship1_1[0][0] || ship3_1[0][i] + 9 == ship1_1[0][0] || ship3_1[0][i] - 9 == ship1_1[0][0])
				{
					z++;
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 2; i++)
			{
				if (ship2_3[0][i] + 1 == ship1_1[0][0] || ship2_3[0][i] - 1 == ship1_1[0][0] || ship2_3[0][i] + 10 == ship1_1[0][0] || ship2_3[0][i] - 10 == ship1_1[0][0] || ship2_3[0][i] + 11 == ship1_1[0][0] || ship2_3[0][i] - 11 == ship1_1[0][0] || ship2_3[0][i] + 9 == ship1_1[0][0] || ship2_3[0][i] - 9 == ship1_1[0][0])
				{
					z++;
					break;
				}
			}

		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 2; i++)
			{
				if (ship2_2[0][i] + 1 == ship1_1[0][0] || ship2_2[0][i] - 1 == ship1_1[0][0] || ship2_2[0][i] + 10 == ship1_1[0][0] || ship2_2[0][i] - 10 == ship1_1[0][0] || ship2_2[0][i] + 11 == ship1_1[0][0] || ship2_2[0][i] - 11 == ship1_1[0][0] || ship2_2[0][i] + 9 == ship1_1[0][0] || ship2_2[0][i] - 9 == ship1_1[0][0])
				{
					z++;
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 2; i++)
			{
				if (ship2_1[0][i] + 1 == ship1_1[0][0] || ship2_1[0][i] - 1 == ship1_1[0][0] || ship2_1[0][i] + 10 == ship1_1[0][0] || ship2_1[0][i] - 10 == ship1_1[0][0] || ship2_1[0][i] + 11 == ship1_1[0][0] || ship2_1[0][i] - 11 == ship1_1[0][0] || ship2_1[0][i] + 9 == ship1_1[0][0] || ship2_1[0][i] - 9 == ship1_1[0][0])
				{
					z++;
					break;
				}
			}
		}
	} while (z > 0);
	//1_2
	do
	{
		z = 0;
		ship1_2[0][0] = rand() % 100 + 1;
		ship1_2[1][0] = 1;
		for (int i = 0; i < 4; i++)
		{
			if (ship4[0][i] + 1 == ship1_2[0][0] || ship4[0][i] - 1 == ship1_2[0][0] || ship4[0][i] + 10 == ship1_2[0][0] || ship4[0][i] - 10 == ship1_2[0][0] || ship4[0][i] + 11 == ship1_2[0][0] || ship4[0][i] - 11 == ship1_2[0][0] || ship4[0][i] + 9 == ship1_2[0][0] || ship4[0][i] - 9 == ship1_2[0][0])
			{
				z++;
				break;
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 3; i++)
			{
				if (ship3_2[0][i] + 1 == ship1_2[0][0] || ship3_2[0][i] - 1 == ship1_2[0][0] || ship3_2[0][i] + 10 == ship1_2[0][0] || ship3_2[0][i] - 10 == ship1_2[0][0] || ship3_2[0][i] + 11 == ship1_2[0][0] || ship3_2[0][i] - 11 == ship1_2[0][0] || ship3_2[0][i] + 9 == ship1_2[0][0] || ship3_2[0][i] - 9 == ship1_2[0][0])
				{
					z++;
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 3; i++)
			{

				if (ship3_1[0][i] + 1 == ship1_2[0][0] || ship3_1[0][i] - 1 == ship1_2[0][0] || ship3_1[0][i] + 10 == ship1_2[0][0] || ship3_1[0][i] - 10 == ship1_2[0][0] || ship3_1[0][i] + 11 == ship1_2[0][0] || ship3_1[0][i] - 11 == ship1_2[0][0] || ship3_1[0][i] + 9 == ship1_2[0][0] || ship3_1[0][i] - 9 == ship1_2[0][0])
				{
					z++;
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 2; i++)
			{
				if (ship2_3[0][i] + 1 == ship1_2[0][0] || ship2_3[0][i] - 1 == ship1_2[0][0] || ship2_3[0][i] + 10 == ship1_2[0][0] || ship2_3[0][i] - 10 == ship1_2[0][0] || ship2_3[0][i] + 11 == ship1_2[0][0] || ship2_3[0][i] - 11 == ship1_2[0][0] || ship2_3[0][i] + 9 == ship1_2[0][0] || ship2_3[0][i] - 9 == ship1_2[0][0])
				{
					z++;
					break;
				}
			}

		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 2; i++)
			{
				if (ship2_2[0][i] + 1 == ship1_2[0][0] || ship2_2[0][i] - 1 == ship1_2[0][0] || ship2_2[0][i] + 10 == ship1_2[0][0] || ship2_2[0][i] - 10 == ship1_2[0][0] || ship2_2[0][i] + 11 == ship1_2[0][0] || ship2_2[0][i] - 11 == ship1_2[0][0] || ship2_2[0][i] + 9 == ship1_2[0][0] || ship2_2[0][i] - 9 == ship1_2[0][0])
				{
					z++;
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 2; i++)
			{
				if (ship2_1[0][i] + 1 == ship1_2[0][0] || ship2_1[0][i] - 1 == ship1_2[0][0] || ship2_1[0][i] + 10 == ship1_2[0][0] || ship2_1[0][i] - 10 == ship1_2[0][0] || ship2_1[0][i] + 11 == ship1_2[0][0] || ship2_1[0][i] - 11 == ship1_2[0][0] || ship2_1[0][i] + 9 == ship1_2[0][0] || ship2_1[0][i] - 9 == ship1_2[0][0])
				{
					z++;
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			if (ship1_1[0][0] == ship1_2[0][0] || ship1_1[0][0] + 1 == ship1_2[0][0] || ship1_1[0][0] - 1 == ship1_2[0][0] || ship1_1[0][0] + 10 == ship1_2[0][0] || ship1_1[0][0] - 10 == ship1_2[0][0] || ship1_1[0][0] + 11 == ship1_2[0][0] || ship1_1[0][0] - 11 == ship1_2[0][0] || ship1_1[0][0] + 9 == ship1_2[0][0] || ship1_1[0][0] - 9 == ship1_2[0][0])
			{
				z++;
			}
		}
	} while (z > 0);
	//1_3
	do
	{
		z = 0;
		ship1_3[0][0] = rand() % 100 + 1;
		ship1_3[1][0] = 1;
		for (int i = 0; i < 4; i++)
		{
			if (ship4[0][i] + 1 == ship1_3[0][0] || ship4[0][i] - 1 == ship1_3[0][0] || ship4[0][i] + 10 == ship1_3[0][0] || ship4[0][i] - 10 == ship1_3[0][0] || ship4[0][i] + 11 == ship1_3[0][0] || ship4[0][i] - 11 == ship1_3[0][0] || ship4[0][i] + 9 == ship1_3[0][0] || ship4[0][i] - 9 == ship1_3[0][0])
			{
				z++;
				break;
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 3; i++)
			{
				if (ship3_2[0][i] + 1 == ship1_3[0][0] || ship3_2[0][i] - 1 == ship1_3[0][0] || ship3_2[0][i] + 10 == ship1_3[0][0] || ship3_2[0][i] - 10 == ship1_3[0][0] || ship3_2[0][i] + 11 == ship1_3[0][0] || ship3_2[0][i] - 11 == ship1_3[0][0] || ship3_2[0][i] + 9 == ship1_3[0][0] || ship3_2[0][i] - 9 == ship1_3[0][0])
				{
					z++;
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 3; i++)
			{

				if (ship3_1[0][i] + 1 == ship1_3[0][0] || ship3_1[0][i] - 1 == ship1_3[0][0] || ship3_1[0][i] + 10 == ship1_3[0][0] || ship3_1[0][i] - 10 == ship1_3[0][0] || ship3_1[0][i] + 11 == ship1_3[0][0] || ship3_1[0][i] - 11 == ship1_3[0][0] || ship3_1[0][i] + 9 == ship1_3[0][0] || ship3_1[0][i] - 9 == ship1_3[0][0])
				{
					z++;
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 2; i++)
			{
				if (ship2_3[0][i] + 1 == ship1_3[0][0] || ship2_3[0][i] - 1 == ship1_3[0][0] || ship2_3[0][i] + 10 == ship1_3[0][0] || ship2_3[0][i] - 10 == ship1_3[0][0] || ship2_3[0][i] + 11 == ship1_3[0][0] || ship2_3[0][i] - 11 == ship1_3[0][0] || ship2_3[0][i] + 9 == ship1_3[0][0] || ship2_3[0][i] - 9 == ship1_3[0][0])
				{
					z++;
					break;
				}
			}

		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 2; i++)
			{
				if (ship2_2[0][i] + 1 == ship1_3[0][0] || ship2_2[0][i] - 1 == ship1_3[0][0] || ship2_2[0][i] + 10 == ship1_3[0][0] || ship2_2[0][i] - 10 == ship1_3[0][0] || ship2_2[0][i] + 11 == ship1_3[0][0] || ship2_2[0][i] - 11 == ship1_3[0][0] || ship2_2[0][i] + 9 == ship1_3[0][0] || ship2_2[0][i] - 9 == ship1_3[0][0])
				{
					z++;
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 2; i++)
			{
				if (ship2_1[0][i] + 1 == ship1_3[0][0] || ship2_1[0][i] - 1 == ship1_3[0][0] || ship2_1[0][i] + 10 == ship1_3[0][0] || ship2_1[0][i] - 10 == ship1_3[0][0] || ship2_1[0][i] + 11 == ship1_3[0][0] || ship2_1[0][i] - 11 == ship1_3[0][0] || ship2_1[0][i] + 9 == ship1_3[0][0] || ship2_1[0][i] - 9 == ship1_3[0][0])
				{
					z++;
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			if (ship1_1[0][0] == ship1_3[0][0] || ship1_1[0][0] + 1 == ship1_3[0][0] || ship1_1[0][0] - 1 == ship1_3[0][0] || ship1_1[0][0] + 10 == ship1_3[0][0] || ship1_1[0][0] - 10 == ship1_3[0][0] || ship1_1[0][0] + 11 == ship1_3[0][0] || ship1_1[0][0] - 11 == ship1_3[0][0] || ship1_1[0][0] + 9 == ship1_3[0][0] || ship1_1[0][0] - 9 == ship1_3[0][0])
			{
				z++;
			}
		}
		if (z > 0)
		{
		}
		else
		{
			if (ship1_2[0][0] == ship1_3[0][0] || ship1_2[0][0] + 1 == ship1_3[0][0] || ship1_2[0][0] - 1 == ship1_3[0][0] || ship1_2[0][0] + 10 == ship1_3[0][0] || ship1_2[0][0] - 10 == ship1_3[0][0] || ship1_2[0][0] + 11 == ship1_3[0][0] || ship1_2[0][0] - 11 == ship1_3[0][0] || ship1_2[0][0] + 9 == ship1_3[0][0] || ship1_2[0][0] - 9 == ship1_3[0][0])
			{
				z++;
			}
		}
	} while (z > 0);
	//1_4
	do
	{
		z = 0;
		ship1_4[0][0] = rand() % 100 + 1;
		ship1_4[1][0] = 1;
		for (int i = 0; i < 4; i++)
		{
			if (ship4[0][i] + 1 == ship1_4[0][0] || ship4[0][i] - 1 == ship1_4[0][0] || ship4[0][i] + 10 == ship1_4[0][0] || ship4[0][i] - 10 == ship1_4[0][0] || ship4[0][i] + 11 == ship1_4[0][0] || ship4[0][i] - 11 == ship1_4[0][0] || ship4[0][i] + 9 == ship1_4[0][0] || ship4[0][i] - 9 == ship1_4[0][0])
			{
				z++;
				break;
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 3; i++)
			{
				if (ship3_2[0][i] + 1 == ship1_4[0][0] || ship3_2[0][i] - 1 == ship1_4[0][0] || ship3_2[0][i] + 10 == ship1_4[0][0] || ship3_2[0][i] - 10 == ship1_4[0][0] || ship3_2[0][i] + 11 == ship1_4[0][0] || ship3_2[0][i] - 11 == ship1_4[0][0] || ship3_2[0][i] + 9 == ship1_4[0][0] || ship3_2[0][i] - 9 == ship1_4[0][0])
				{
					z++;
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 3; i++)
			{

				if (ship3_1[0][i] + 1 == ship1_4[0][0] || ship3_1[0][i] - 1 == ship1_4[0][0] || ship3_1[0][i] + 10 == ship1_4[0][0] || ship3_1[0][i] - 10 == ship1_4[0][0] || ship3_1[0][i] + 11 == ship1_4[0][0] || ship3_1[0][i] - 11 == ship1_4[0][0] || ship3_1[0][i] + 9 == ship1_4[0][0] || ship3_1[0][i] - 9 == ship1_4[0][0])
				{
					z++;
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 2; i++)
			{
				if (ship2_3[0][i] + 1 == ship1_4[0][0] || ship2_3[0][i] - 1 == ship1_4[0][0] || ship2_3[0][i] + 10 == ship1_4[0][0] || ship2_3[0][i] - 10 == ship1_4[0][0] || ship2_3[0][i] + 11 == ship1_4[0][0] || ship2_3[0][i] - 11 == ship1_4[0][0] || ship2_3[0][i] + 9 == ship1_4[0][0] || ship2_3[0][i] - 9 == ship1_4[0][0])
				{
					z++;
					break;
				}
			}

		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 2; i++)
			{
				if (ship2_2[0][i] + 1 == ship1_4[0][0] || ship2_2[0][i] - 1 == ship1_4[0][0] || ship2_2[0][i] + 10 == ship1_4[0][0] || ship2_2[0][i] - 10 == ship1_4[0][0] || ship2_2[0][i] + 11 == ship1_4[0][0] || ship2_2[0][i] - 11 == ship1_4[0][0] || ship2_2[0][i] + 9 == ship1_4[0][0] || ship2_2[0][i] - 9 == ship1_4[0][0])
				{
					z++;
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			for (int i = 0; i < 2; i++)
			{
				if (ship2_1[0][i] + 1 == ship1_4[0][0] || ship2_1[0][i] - 1 == ship1_4[0][0] || ship2_1[0][i] + 10 == ship1_4[0][0] || ship2_1[0][i] - 10 == ship1_4[0][0] || ship2_1[0][i] + 11 == ship1_4[0][0] || ship2_1[0][i] - 11 == ship1_4[0][0] || ship2_1[0][i] + 9 == ship1_4[0][0] || ship2_1[0][i] - 9 == ship1_4[0][0])
				{
					z++;
					break;
				}
			}
		}
		if (z > 0)
		{
		}
		else
		{
			if (ship1_1[0][0] == ship1_4[0][0] || ship1_1[0][0] + 1 == ship1_4[0][0] || ship1_1[0][0] - 1 == ship1_4[0][0] || ship1_1[0][0] + 10 == ship1_4[0][0] || ship1_1[0][0] - 10 == ship1_4[0][0] || ship1_1[0][0] + 11 == ship1_4[0][0] || ship1_1[0][0] - 11 == ship1_4[0][0] || ship1_1[0][0] + 9 == ship1_4[0][0] || ship1_1[0][0] - 9 == ship1_4[0][0])
			{
				z++;
			}
		}
		if (z > 0)
		{
		}
		else
		{
			if (ship1_2[0][0] == ship1_4[0][0] || ship1_2[0][0] + 1 == ship1_4[0][0] || ship1_2[0][0] - 1 == ship1_4[0][0] || ship1_2[0][0] + 10 == ship1_4[0][0] || ship1_2[0][0] - 10 == ship1_4[0][0] || ship1_2[0][0] + 11 == ship1_4[0][0] || ship1_2[0][0] - 11 == ship1_4[0][0] || ship1_2[0][0] + 9 == ship1_4[0][0] || ship1_2[0][0] - 9 == ship1_4[0][0])
			{
				z++;
			}
		}
		if (z > 0)
		{
		}
		else
		{
			if (ship1_4[0][0] == ship1_3[0][0] || ship1_4[0][0] + 1 == ship1_3[0][0] || ship1_4[0][0] - 1 == ship1_3[0][0] || ship1_4[0][0] + 10 == ship1_3[0][0] || ship1_4[0][0] - 10 == ship1_3[0][0] || ship1_4[0][0] + 11 == ship1_3[0][0] || ship1_4[0][0] - 11 == ship1_3[0][0] || ship1_4[0][0] + 9 == ship1_3[0][0] || ship1_4[0][0] - 9 == ship1_3[0][0])
			{
				z++;
			}
		}
	} while (z > 0);
	return 0;
}

int manualR(int ship4[2][4], int ship3_1[2][3], int ship3_2[2][3], int ship2_1[2][2], int ship2_2[2][2], int ship2_3[2][2], int ship1_1[2][1], int ship1_2[2][1], int ship1_3[2][1], int ship1_4[2][1])
{
	for (int s = 0; s < 4; s++)
	{
		ship4[1][s] = 1;
	}
	for (int s = 0; s < 3; s++)
	{
		ship3_1[1][s] = 1;
	}
	for (int s = 0; s < 3; s++)
	{
		ship3_2[1][s] = 1;
	}
	for (int s = 0; s < 2; s++)
	{
		ship2_1[1][s] = 1;
	}
	for (int s = 0; s < 2; s++)
	{
		ship2_2[1][s] = 1;
	}
	for (int s = 0; s < 2; s++)
	{
		ship2_3[1][s] = 1;
	}
	ship1_1[1][0] = 1;
	ship1_2[1][0] = 1;
	ship1_3[1][0] = 1;
	ship1_4[1][0] = 1;

	// 4
	for (int c = 0, x = 0; ship4[0][0] == 0 || c != 0 || ship4[0][0] == -100; x = 0)
	{
		fieldHuman(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4);
		SetConsoleCursorPosition(hCon, cPos);

		int code = _getch();
		if (code == 224)
		{
			code = _getch();
		}
		else if (code == 13 && c == 0)
		{
			ship4[0][0] = 10 * (cPos.Y / 2 - 1) + ((cPos.X - 2) / 4 + 1);
			x++;
		}
		if (c != 0)
		{
			switch (code)
			{
			case 13:
				ship4[0][0] = 0;
				break;
			case 72:
				for (int d = 1; d < 4; d++)
				{
					ship4[0][d] = ship4[0][0] - (10 * d);
				}
				if (ship4[0][3] <= 0)
				{
					cout << "Error!";
					for (int d = 0; d < 4; d++)
					{
						ship4[0][d] = 0;
					}
				}
				break;
			case 77:
				for (int d = 1; d < 4; d++)
				{
					ship4[0][d] = ship4[0][0] + d;
				}
				if (ship4[0][2] / 10 != ship4[0][0] / 10)
				{
					cout << "Error!";
					for (int d = 0; d < 4; d++)
					{
						ship4[0][d] = 0;
					}
				}
				break;
			case 75:
				for (int d = 1; d < 4; d++)
				{
					ship4[0][d] = ship4[0][0] - d;
				}
				if ((ship4[0][3] - 1) / 10 != ship4[0][1] / 10)
				{
					cout << "Error!";
					for (int d = 0; d < 4; d++)
					{
						ship4[0][d] = 0;
					}
				}
				break;
			case 80:
				for (int d = 1; d < 4; d++)
				{
					ship4[0][d] = ship4[0][0] + (10 * d);
				}
				if (ship4[0][3] > 100)
				{
					cout << "Error!";
					for (int d = 0; d < 4; d++)
					{
						ship4[0][d] = 0;
					}
				}
				break;
			}
			c = 0;
		}
		else
		{
			switch (code)
			{
			case 72:
				if (cPos.Y > 3)
				{
					cPos.Y -= moveDown;
				}
				break;
			case 77:
				if (cPos.X < 38)
				{
					cPos.X += moveRight;
				}
				break;
			case 75:
				if (cPos.X > 2)
				{
					cPos.X -= moveRight;
				}
				break;
			case 80:
				if (cPos.Y < 20)
				{
					cPos.Y += moveDown;
				}
				break;
			}
		}
		if (x != 0)
		{
			c++;
		}
		SetConsoleCursorPosition(hCon, cPos);
		system("cls");
	}
	//3_1
	for (int c = 0, x = 0; ship3_1[0][0] == 0 || c != 0 || ship3_1[0][0] == -100; x = 0)
	{
		fieldHuman(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4);
		SetConsoleCursorPosition(hCon, cPos);

		int code = _getch();
		if (code == 224)
		{
			code = _getch();
		}
		else if (code == 13 && c == 0)
		{
			ship3_1[0][0] = 10 * (cPos.Y / 2 - 1) + ((cPos.X - 2) / 4 + 1);
			x++;
		}
		if (c != 0)
		{
			switch (code)
			{
			case 13:
				ship3_1[0][0] = 0;
				break;
			case 72:
				for (int d = 1; d < 3; d++)
				{
					ship3_1[0][d] = ship3_1[0][0] - (10 * d);
				}
				if (ship3_1[0][2] <= 0)
				{
					cout << "Error!";
					for (int d = 0; d < 3; d++)
					{
						ship3_1[0][d] = 0;
					}
				}
				break;
			case 77:
				for (int d = 1; d < 3; d++)
				{
					ship3_1[0][d] = ship3_1[0][0] + d;
				}
				if (ship3_1[0][1] / 10 != ship3_1[0][0] / 10)
				{
					cout << "Error!";
					for (int d = 0; d < 3; d++)
					{
						ship3_1[0][d] = 0;
					}
				}
				break;
			case 75:
				for (int d = 1; d < 3; d++)
				{
					ship3_1[0][d] = ship3_1[0][0] - d;
				}
				if ((ship3_1[0][2] - 1) / 10 != ship3_1[0][1] / 10)
				{
					cout << "Error!";
					for (int d = 0; d < 3; d++)
					{
						ship3_1[0][d] = 0;
					}
				}
				break;
			case 80:
				for (int d = 1; d < 3; d++)
				{
					ship3_1[0][d] = ship3_1[0][0] + (10 * d);
				}
				if (ship3_1[0][2] > 100)
				{
					cout << "Error!";
					for (int d = 0; d < 3; d++)
					{
						ship3_1[0][d] = 0;
					}
				}
				break;
			}
			c = 0;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (ship4[0][i] + 1 == ship3_1[0][j] || ship4[0][i] - 1 == ship3_1[0][j] || ship4[0][i] + 10 == ship3_1[0][j] || ship4[0][i] - 10 == ship3_1[0][j] || ship4[0][i] + 11 == ship3_1[0][j] || ship4[0][i] - 11 == ship3_1[0][j] || ship4[0][i] + 9 == ship3_1[0][j] || ship4[0][i] - 9 == ship3_1[0][j])
					{
						if (ship4[0][i] % 10 == 1 && ship3_1[0][j] % 10 == 0 || ship4[0][i] % 10 == 0 && ship3_1[0][j] % 10 == 1)
						{
						}
						else
						{
							cout << "Error!";
							for (int d = 0; d < 3; d++)
							{
								ship3_1[0][d] = 0;
							}
							break;
						}
					}
				}
			}
		}
		else
		{
			switch (code)
			{
			case 72:
				if (cPos.Y > 3)
				{
					cPos.Y -= moveDown;
				}
				break;
			case 77:
				if (cPos.X < 38)
				{
					cPos.X += moveRight;
				}
				break;
			case 75:
				if (cPos.X > 2)
				{
					cPos.X -= moveRight;
				}
				break;
			case 80:
				if (cPos.Y < 20)
				{
					cPos.Y += moveDown;
				}
				break;
			}
		}
		if (x != 0)
		{
			c++;
		}
		SetConsoleCursorPosition(hCon, cPos);
		system("cls");
	}
	//3_2
	for (int c = 0, x = 0; ship3_2[0][0] == 0 || c != 0 || ship3_2[0][0] == -100; x = 0)
	{
		SetColor(White, Black);
		fieldHuman(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4);
		SetConsoleCursorPosition(hCon, cPos);

		int code = _getch();
		if (code == 224)
		{
			code = _getch();
		}
		else if (code == 13 && c == 0)
		{
			ship3_2[0][0] = 10 * (cPos.Y / 2 - 1) + ((cPos.X - 2) / 4 + 1);
			x++;
		}
		if (c != 0)
		{
			switch (code)
			{
			case 13:
				ship3_2[0][0] = 0;
				break;
			case 72:
				for (int d = 1; d < 3; d++)
				{
					ship3_2[0][d] = ship3_2[0][0] - (10 * d);
				}
				if (ship3_2[0][2] <= 0)
				{
					cout << "Error!";
					for (int d = 0; d < 3; d++)
					{
						ship3_2[0][d] = 0;
					}
				}
				break;
			case 77:
				for (int d = 1; d < 3; d++)
				{
					ship3_2[0][d] = ship3_2[0][0] + d;
				}
				if (ship3_2[0][1] / 10 != ship3_2[0][0] / 10)
				{
					cout << "Error!";
					for (int d = 0; d < 3; d++)
					{
						ship3_2[0][d] = 0;
					}
				}
				break;
			case 75:
				for (int d = 1; d < 3; d++)
				{
					ship3_2[0][d] = ship3_2[0][0] - d;
				}
				if ((ship3_2[0][2] - 1) / 10 != ship3_2[0][1] / 10)
				{
					cout << "Error!";
					for (int d = 0; d < 3; d++)
					{
						ship3_2[0][d] = 0;
					}
				}
				break;
			case 80:
				for (int d = 1; d < 3; d++)
				{
					ship3_2[0][d] = ship3_2[0][0] + (10 * d);
				}
				if (ship3_2[0][2] > 100)
				{
					cout << "Error!";
					for (int d = 0; d < 3; d++)
					{
						ship3_2[0][d] = 0;
					}
				}
				break;
			}
			c = 0;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (ship4[0][i] + 1 == ship3_2[0][j] || ship4[0][i] - 1 == ship3_2[0][j] || ship4[0][i] + 10 == ship3_2[0][j] || ship4[0][i] - 10 == ship3_2[0][j] || ship4[0][i] + 11 == ship3_2[0][j] || ship4[0][i] - 11 == ship3_2[0][j] || ship4[0][i] + 9 == ship3_2[0][j] || ship4[0][i] - 9 == ship3_2[0][j])
					{
						if (ship4[0][i] % 10 == 1 && ship3_2[0][j] % 10 == 0 || ship4[0][i] % 10 == 0 && ship3_2[0][j] % 10 == 1)
						{
						}
						else
						{
							cout << "Error!";
							for (int d = 0; d < 3; d++)
							{
								ship3_2[0][d] = 0;
							}
							break;
						}
					}
				}
			}
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (ship3_1[0][i] + 1 == ship3_2[0][j] || ship3_1[0][i] - 1 == ship3_2[0][j] || ship3_1[0][i] + 10 == ship3_2[0][j] || ship3_1[0][i] - 10 == ship3_2[0][j] || ship3_1[0][i] + 11 == ship3_2[0][j] || ship3_1[0][i] - 11 == ship3_2[0][j] || ship3_1[0][i] + 9 == ship3_2[0][j] || ship3_1[0][i] - 9 == ship3_2[0][j])
					{
						if (ship3_2[0][i] % 10 == 1 && ship3_1[0][j] % 10 == 0 || ship3_2[0][i] % 10 == 0 && ship3_1[0][j] % 10 == 1)
						{
						}
						else
						{
							cout << "Error!";
							for (int d = 0; d < 3; d++)
							{
								ship3_2[0][d] = 0;
							}
							break;
						}
					}
				}
			}
		}
		else
		{
			switch (code)
			{
			case 72:
				if (cPos.Y > 3)
				{
					cPos.Y -= moveDown;
				}
				break;
			case 77:
				if (cPos.X < 38)
				{
					cPos.X += moveRight;
				}
				break;
			case 75:
				if (cPos.X > 2)
				{
					cPos.X -= moveRight;
				}
				break;
			case 80:
				if (cPos.Y < 20)
				{
					cPos.Y += moveDown;
				}
				break;
			}
		}
		if (x != 0)
		{
			c++;
		}
		SetConsoleCursorPosition(hCon, cPos);
		system("cls");
	}
	// 2_1
	for (int c = 0, x = 0; ship2_1[0][0] == 0 || c != 0 || ship2_1[0][0] == -100; x = 0)
	{
		fieldHuman(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4);
		SetConsoleCursorPosition(hCon, cPos);
		int code = _getch();
		if (code == 224)
		{
			code = _getch();
		}
		else if (code == 13 && c == 0)
		{
			ship2_1[0][0] = 10 * (cPos.Y / 2 - 1) + ((cPos.X - 2) / 4 + 1);
			x++;
		}
		if (c != 0)
		{
			switch (code)
			{
			case 13:
				ship2_1[0][0] = 0;
				break;
			case 72:
				for (int d = 1; d < 2; d++)
				{
					ship2_1[0][d] = ship2_1[0][0] - (10 * d);
				}
				if (ship2_1[0][1] <= 0)
				{
					cout << "Error!";
					for (int d = 0; d < 2; d++)
					{
						ship2_1[0][d] = 0;
					}
				}
				break;
			case 77:
				for (int d = 1; d < 2; d++)
				{
					ship2_1[0][d] = ship2_1[0][0] + d;
				}
				if (ship2_1[0][0] % 10 == 0)
				{
					cout << "Error!";
					for (int d = 0; d < 2; d++)
					{
						ship2_1[0][d] = 0;
					}
				}
				break;
			case 75:
				for (int d = 1; d < 2; d++)
				{
					ship2_1[0][d] = ship2_1[0][0] - d;
				}
				if (ship2_1[0][0] % 10 == 1)
				{
					cout << "Error!";
					for (int d = 0; d < 2; d++)
					{
						ship2_1[0][d] = 0;
					}
				}
				break;
			case 80:
				for (int d = 1; d < 2; d++)
				{
					ship2_1[0][d] = ship2_1[0][0] + (10 * d);
				}
				if (ship2_1[0][1] > 100)
				{
					cout << "Error!";
					for (int d = 0; d < 2; d++)
					{
						ship2_1[0][d] = 0;
					}
				}
				break;
			}
			c = 0;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship4[0][i] + 1 == ship2_1[0][j] || ship4[0][i] - 1 == ship2_1[0][j] || ship4[0][i] + 10 == ship2_1[0][j] || ship4[0][i] - 10 == ship2_1[0][j] || ship4[0][i] + 11 == ship2_1[0][j] || ship4[0][i] - 11 == ship2_1[0][j] || ship4[0][i] + 9 == ship2_1[0][j] || ship4[0][i] - 9 == ship2_1[0][j])
					{
						if (ship4[0][i] % 10 == 1 && ship2_1[0][j] % 10 == 0 || ship4[0][i] % 10 == 0 && ship2_1[0][j] % 10 == 1)
						{
						}
						else
						{
							cout << "Error!";
							for (int d = 0; d < 2; d++)
							{
								ship2_1[0][d] = 0;
							}
							break;
						}
					}
				}
			}
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship3_1[0][i] + 1 == ship2_1[0][j] || ship3_1[0][i] - 1 == ship2_1[0][j] || ship3_1[0][i] + 10 == ship2_1[0][j] || ship3_1[0][i] - 10 == ship2_1[0][j] || ship3_1[0][i] + 11 == ship2_1[0][j] || ship3_1[0][i] - 11 == ship2_1[0][j] || ship3_1[0][i] + 9 == ship2_1[0][j] || ship3_1[0][i] - 9 == ship2_1[0][j])
					{
						if (ship3_1[0][i] % 10 == 1 && ship2_1[0][j] % 10 == 0 || ship3_1[0][i] % 10 == 0 && ship2_1[0][j] % 10 == 1)
						{
						}
						else
						{
							cout << "Error!";
							for (int d = 0; d < 2; d++)
							{
								ship2_1[0][d] = 0;
							}
							break;
						}
					}
				}
			}
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship3_2[0][i] + 1 == ship2_1[0][j] || ship3_2[0][i] - 1 == ship2_1[0][j] || ship3_2[0][i] + 10 == ship2_1[0][j] || ship3_2[0][i] - 10 == ship2_1[0][j] || ship3_2[0][i] + 11 == ship2_1[0][j] || ship3_2[0][i] - 11 == ship2_1[0][j] || ship3_2[0][i] + 9 == ship2_1[0][j] || ship3_2[0][i] - 9 == ship2_1[0][j])
					{
						if (ship3_2[0][i] % 10 == 1 && ship2_1[0][j] % 10 == 0 || ship3_2[0][i] % 10 == 0 && ship2_1[0][j] % 10 == 1)
						{
						}
						else
						{
							cout << "Error!";
							for (int d = 0; d < 2; d++)
							{
								ship2_1[0][d] = 0;
							}
							break;
						}
					}
				}
			}
		}
		else
		{
			switch (code)
			{
			case 72:
				if (cPos.Y > 3)
				{
					cPos.Y -= moveDown;
				}
				break;
			case 77:
				if (cPos.X < 38)
				{
					cPos.X += moveRight;
				}
				break;
			case 75:
				if (cPos.X > 2)
				{
					cPos.X -= moveRight;
				}
				break;
			case 80:
				if (cPos.Y < 20)
				{
					cPos.Y += moveDown;
				}
				break;
			}
		}
		if (x != 0)
		{
			c++;
		}
		SetConsoleCursorPosition(hCon, cPos);
		system("cls");
	}
	//2_2
	for (int c = 0, x = 0; ship2_2[0][0] == 0 || c != 0 || ship2_2[0][0] == -100; x = 0)
	{
		fieldHuman(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4);
		SetConsoleCursorPosition(hCon, cPos);
		int code = _getch();
		if (code == 224)
		{
			code = _getch();
		}
		else if (code == 13 && c == 0)
		{
			ship2_2[0][0] = 10 * (cPos.Y / 2 - 1) + ((cPos.X - 2) / 4 + 1);
			x++;
		}
		if (c != 0)
		{
			switch (code)
			{
			case 13:
				ship2_2[0][0] = 0;
				break;
			case 72:
				for (int d = 1; d < 2; d++)
				{
					ship2_2[0][d] = ship2_2[0][0] - (10 * d);
				}
				if (ship2_2[0][1] <= 0)
				{
					cout << "Error!";
					for (int d = 0; d < 2; d++)
					{
						ship2_2[0][d] = 0;
					}
				}
				break;
			case 77:
				for (int d = 1; d < 2; d++)
				{
					ship2_2[0][d] = ship2_2[0][0] + d;
				}
				if (ship2_2[0][0] % 10 == 0)
				{
					cout << "Error!";
					for (int d = 0; d < 2; d++)
					{
						ship2_2[0][d] = 0;
					}
				}
				break;
			case 75:
				for (int d = 1; d < 2; d++)
				{
					ship2_2[0][d] = ship2_2[0][0] - d;
				}
				if (ship2_2[0][0] % 10 == 1)
				{
					cout << "Error!";
					for (int d = 0; d < 2; d++)
					{
						ship2_2[0][d] = 0;
					}
				}
				break;
			case 80:
				for (int d = 1; d < 2; d++)
				{
					ship2_2[0][d] = ship2_2[0][0] + (10 * d);
				}
				if (ship2_2[0][1] > 100)
				{
					cout << "Error!";
					for (int d = 0; d < 2; d++)
					{
						ship2_2[0][d] = 0;
					}
				}
				break;
			}
			c = 0;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship4[0][i] + 1 == ship2_2[0][j] || ship4[0][i] - 1 == ship2_2[0][j] || ship4[0][i] + 10 == ship2_2[0][j] || ship4[0][i] - 10 == ship2_2[0][j] || ship4[0][i] + 11 == ship2_2[0][j] || ship4[0][i] - 11 == ship2_2[0][j] || ship4[0][i] + 9 == ship2_2[0][j] || ship4[0][i] - 9 == ship2_2[0][j])
					{
						if (ship4[0][i] % 10 == 1 && ship2_2[0][j] % 10 == 0 || ship4[0][i] % 10 == 0 && ship2_2[0][j] % 10 == 1)
						{
						}
						else
						{
							cout << "Error!";
							for (int d = 0; d < 2; d++)
							{
								ship2_2[0][d] = 0;
							}
							break;
						}
					}
				}
			}
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship3_1[0][i] + 1 == ship2_2[0][j] || ship3_1[0][i] - 1 == ship2_2[0][j] || ship3_1[0][i] + 10 == ship2_2[0][j] || ship3_1[0][i] - 10 == ship2_2[0][j] || ship3_1[0][i] + 11 == ship2_2[0][j] || ship3_1[0][i] - 11 == ship2_2[0][j] || ship3_1[0][i] + 9 == ship2_2[0][j] || ship3_1[0][i] - 9 == ship2_2[0][j])
					{
						if (ship3_1[0][i] % 10 == 1 && ship2_2[0][j] % 10 == 0 || ship3_1[0][i] % 10 == 0 && ship2_2[0][j] % 10 == 1)
						{
						}
						else
						{
							cout << "Error!";
							for (int d = 0; d < 2; d++)
							{
								ship2_2[0][d] = 0;
							}
							break;
						}
					}
				}
			}
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship3_2[0][i] + 1 == ship2_2[0][j] || ship3_2[0][i] - 1 == ship2_2[0][j] || ship3_2[0][i] + 10 == ship2_2[0][j] || ship3_2[0][i] - 10 == ship2_2[0][j] || ship3_2[0][i] + 11 == ship2_2[0][j] || ship3_2[0][i] - 11 == ship2_2[0][j] || ship3_2[0][i] + 9 == ship2_2[0][j] || ship3_2[0][i] - 9 == ship2_2[0][j])
					{
						if (ship3_2[0][i] % 10 == 1 && ship2_2[0][j] % 10 == 0 || ship3_2[0][i] % 10 == 0 && ship2_2[0][j] % 10 == 1)
						{
						}
						else
						{
							cout << "Error!";
							for (int d = 0; d < 2; d++)
							{
								ship2_2[0][d] = 0;
							}
							break;
						}
					}
				}
			}
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship2_1[0][i] + 1 == ship2_2[0][j] || ship2_1[0][i] - 1 == ship2_2[0][j] || ship2_1[0][i] + 10 == ship2_2[0][j] || ship2_1[0][i] - 10 == ship2_2[0][j] || ship2_1[0][i] + 11 == ship2_2[0][j] || ship2_1[0][i] - 11 == ship2_2[0][j] || ship2_1[0][i] + 9 == ship2_2[0][j] || ship2_1[0][i] - 9 == ship2_2[0][j])
					{
						if (ship2_2[0][i] % 10 == 1 && ship2_1[0][j] % 10 == 0 || ship2_2[0][i] % 10 == 0 && ship2_1[0][j] % 10 == 1)
						{
						}
						else
						{
							cout << "Error!";
							for (int d = 0; d < 2; d++)
							{
								ship2_2[0][d] = 0;
							}
							break;
						}
					}
				}
			}
		}
		else
		{
			switch (code)
			{
			case 72:
				if (cPos.Y > 3)
				{
					cPos.Y -= moveDown;
				}
				break;
			case 77:
				if (cPos.X < 38)
				{
					cPos.X += moveRight;
				}
				break;
			case 75:
				if (cPos.X > 2)
				{
					cPos.X -= moveRight;
				}
				break;
			case 80:
				if (cPos.Y < 20)
				{
					cPos.Y += moveDown;
				}
				break;
			}
		}
		if (x != 0)
		{
			c++;
		}
		SetConsoleCursorPosition(hCon, cPos);
		system("cls");
	}
	//2_3
	for (int c = 0, x = 0; ship2_3[0][0] == 0 || c != 0 || ship2_3[0][0] == -100; x = 0)
	{
		fieldHuman(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4);
		SetConsoleCursorPosition(hCon, cPos);
		int code = _getch();
		if (code == 224)
		{
			code = _getch();
		}
		else if (code == 13 && c == 0)
		{
			ship2_3[0][0] = 10 * (cPos.Y / 2 - 1) + ((cPos.X - 2) / 4 + 1);
			x++;
		}
		if (c != 0)
		{
			switch (code)
			{
			case 13:
				ship2_3[0][0] = 0;
				break;
			case 72:
				for (int d = 1; d < 2; d++)
				{
					ship2_3[0][d] = ship2_3[0][0] - (10 * d);
				}
				if (ship2_3[0][1] <= 0)
				{
					cout << "Error!";
					for (int d = 0; d < 2; d++)
					{
						ship2_3[0][d] = 0;
					}
				}
				break;
			case 77:
				for (int d = 1; d < 2; d++)
				{
					ship2_3[0][d] = ship2_3[0][0] + d;
				}
				if (ship2_3[0][0] % 10 == 0)
				{
					cout << "Error!";
					for (int d = 0; d < 2; d++)
					{
						ship2_3[0][d] = 0;
					}
				}
				break;
			case 75:
				for (int d = 1; d < 2; d++)
				{
					ship2_3[0][d] = ship2_3[0][0] - d;
				}
				if (ship2_3[0][0] % 10 == 1)
				{
					cout << "Error!";
					for (int d = 0; d < 2; d++)
					{
						ship2_3[0][d] = 0;
					}
				}
				break;
			case 80:
				for (int d = 1; d < 2; d++)
				{
					ship2_3[0][d] = ship2_3[0][0] + (10 * d);
				}
				if (ship2_3[0][1] > 100)
				{
					cout << "Error!";
					for (int d = 0; d < 2; d++)
					{
						ship2_3[0][d] = 0;
					}
				}
				break;
			}
			c = 0;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship4[0][i] + 1 == ship2_3[0][j] || ship4[0][i] - 1 == ship2_3[0][j] || ship4[0][i] + 10 == ship2_3[0][j] || ship4[0][i] - 10 == ship2_3[0][j] || ship4[0][i] + 11 == ship2_3[0][j] || ship4[0][i] - 11 == ship2_3[0][j] || ship4[0][i] + 9 == ship2_3[0][j] || ship4[0][i] - 9 == ship2_3[0][j])
					{
						if (ship4[0][i] % 10 == 1 && ship2_3[0][j] % 10 == 0 || ship4[0][i] % 10 == 0 && ship2_3[0][j] % 10 == 1)
						{
						}
						else
						{
							cout << "Error!";
							for (int d = 0; d < 2; d++)
							{
								ship2_3[0][d] = 0;
							}
							break;
						}
					}
				}
			}
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship3_1[0][i] + 1 == ship2_3[0][j] || ship3_1[0][i] - 1 == ship2_3[0][j] || ship3_1[0][i] + 10 == ship2_3[0][j] || ship3_1[0][i] - 10 == ship2_3[0][j] || ship3_1[0][i] + 11 == ship2_3[0][j] || ship3_1[0][i] - 11 == ship2_3[0][j] || ship3_1[0][i] + 9 == ship2_3[0][j] || ship3_1[0][i] - 9 == ship2_3[0][j])
					{
						if (ship3_1[0][i] % 10 == 1 && ship2_3[0][j] % 10 == 0 || ship3_1[0][i] % 10 == 0 && ship2_3[0][j] % 10 == 1)
						{
						}
						else
						{
							cout << "Error!";
							for (int d = 0; d < 2; d++)
							{
								ship2_3[0][d] = 0;
							}
							break;
						}
					}
				}
			}
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship3_2[0][i] + 1 == ship2_3[0][j] || ship3_2[0][i] - 1 == ship2_3[0][j] || ship3_2[0][i] + 10 == ship2_3[0][j] || ship3_2[0][i] - 10 == ship2_3[0][j] || ship3_2[0][i] + 11 == ship2_3[0][j] || ship3_2[0][i] - 11 == ship2_3[0][j] || ship3_2[0][i] + 9 == ship2_3[0][j] || ship3_2[0][i] - 9 == ship2_3[0][j])
					{
						if (ship3_2[0][i] % 10 == 1 && ship2_3[0][j] % 10 == 0 || ship3_2[0][i] % 10 == 0 && ship2_3[0][j] % 10 == 1)
						{
						}
						else
						{
							cout << "Error!";
							for (int d = 0; d < 2; d++)
							{
								ship2_3[0][d] = 0;
							}
							break;
						}
					}
				}
			}
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship2_1[0][i] + 1 == ship2_3[0][j] || ship2_1[0][i] - 1 == ship2_3[0][j] || ship2_1[0][i] + 10 == ship2_3[0][j] || ship2_1[0][i] - 10 == ship2_3[0][j] || ship2_1[0][i] + 11 == ship2_3[0][j] || ship2_1[0][i] - 11 == ship2_3[0][j] || ship2_1[0][i] + 9 == ship2_3[0][j] || ship2_1[0][i] - 9 == ship2_3[0][j])
					{
						if (ship2_3[0][i] % 10 == 1 && ship2_1[0][j] % 10 == 0 || ship2_3[0][i] % 10 == 0 && ship2_1[0][j] % 10 == 1)
						{
						}
						else
						{
							cout << "Error!";
							for (int d = 0; d < 2; d++)
							{
								ship2_3[0][d] = 0;
							}
							break;
						}
					}
				}
			}
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (ship2_2[0][i] + 1 == ship2_3[0][j] || ship2_2[0][i] - 1 == ship2_3[0][j] || ship2_2[0][i] + 10 == ship2_3[0][j] || ship2_2[0][i] - 10 == ship2_3[0][j] || ship2_2[0][i] + 11 == ship2_3[0][j] || ship2_2[0][i] - 11 == ship2_3[0][j] || ship2_2[0][i] + 9 == ship2_3[0][j] || ship2_2[0][i] - 9 == ship2_3[0][j])
					{
						if (ship2_2[0][i] % 10 == 1 && ship2_3[0][j] % 10 == 0 || ship2_2[0][i] % 10 == 0 && ship2_3[0][j] % 10 == 1)
						{
						}
						else
						{
							cout << "Error!";
							for (int d = 0; d < 2; d++)
							{
								ship2_3[0][d] = 0;
							}
							break;
						}
					}
				}
			}
		}
		else
		{
			switch (code)
			{
			case 72:
				if (cPos.Y > 3)
				{
					cPos.Y -= moveDown;
				}
				break;
			case 77:
				if (cPos.X < 38)
				{
					cPos.X += moveRight;
				}
				break;
			case 75:
				if (cPos.X > 2)
				{
					cPos.X -= moveRight;
				}
				break;
			case 80:
				if (cPos.Y < 20)
				{
					cPos.Y += moveDown;
				}
				break;
			}
		}
		if (x != 0)
		{
			c++;
		}
		SetConsoleCursorPosition(hCon, cPos);
		system("cls");
	}
	// 1_1
	for (; ship1_1[0][0] == -100;)
	{
		fieldHuman(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4);
		SetConsoleCursorPosition(hCon, cPos);
		int code = _getch();
		if (code == 224)
		{
			code = _getch();
		}
		else if (code == 13)
		{
			ship1_1[0][0] = 10 * (cPos.Y / 2 - 1) + ((cPos.X - 2) / 4 + 1);
		}
		for (int i = 0; i < 4; i++)
		{
			if (ship4[0][i] + 1 == ship1_1[0][0] || ship4[0][i] - 1 == ship1_1[0][0] || ship4[0][i] + 10 == ship1_1[0][0] || ship4[0][i] - 10 == ship1_1[0][0] || ship4[0][i] + 11 == ship1_1[0][0] || ship4[0][i] - 11 == ship1_1[0][0] || ship4[0][i] + 9 == ship1_1[0][0] || ship4[0][i] - 9 == ship1_1[0][0])
			{
				if (ship4[0][i] % 10 == 1 && ship1_1[0][0] % 10 == 0 || ship4[0][i] % 10 == 0 && ship1_1[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_1[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 3; i++)
		{
			if (ship3_1[0][i] + 1 == ship1_1[0][0] || ship3_1[0][i] - 1 == ship1_1[0][0] || ship3_1[0][i] + 10 == ship1_1[0][0] || ship3_1[0][i] - 10 == ship1_1[0][0] || ship3_1[0][i] + 11 == ship1_1[0][0] || ship3_1[0][i] - 11 == ship1_1[0][0] || ship3_1[0][i] + 9 == ship1_1[0][0] || ship3_1[0][i] - 9 == ship1_1[0][0])
			{
				if (ship3_1[0][i] % 10 == 1 && ship1_1[0][0] % 10 == 0 || ship3_1[0][i] % 10 == 0 && ship1_1[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_1[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 3; i++)
		{
			if (ship3_2[0][i] + 1 == ship1_1[0][0] || ship3_2[0][i] - 1 == ship1_1[0][0] || ship3_2[0][i] + 10 == ship1_1[0][0] || ship3_2[0][i] - 10 == ship1_1[0][0] || ship3_2[0][i] + 11 == ship1_1[0][0] || ship3_2[0][i] - 11 == ship1_1[0][0] || ship3_2[0][i] + 9 == ship1_1[0][0] || ship3_2[0][i] - 9 == ship1_1[0][0])
			{
				if (ship3_2[0][i] % 10 == 1 && ship1_1[0][0] % 10 == 0 || ship3_2[0][i] % 10 == 0 && ship1_1[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_1[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 2; i++)
		{
			if (ship2_1[0][i] + 1 == ship1_1[0][0] || ship2_1[0][i] - 1 == ship1_1[0][0] || ship2_1[0][i] + 10 == ship1_1[0][0] || ship2_1[0][i] - 10 == ship1_1[0][0] || ship2_1[0][i] + 11 == ship1_1[0][0] || ship2_1[0][i] - 11 == ship1_1[0][0] || ship2_1[0][i] + 9 == ship1_1[0][0] || ship2_1[0][i] - 9 == ship1_1[0][0])
			{
				if (ship2_1[0][i] % 10 == 1 && ship1_1[0][0] % 10 == 0 || ship2_1[0][i] % 10 == 0 && ship1_1[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_1[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 2; i++)
		{
			if (ship2_2[0][i] + 1 == ship1_1[0][0] || ship2_2[0][i] - 1 == ship1_1[0][0] || ship2_2[0][i] + 10 == ship1_1[0][0] || ship2_2[0][i] - 10 == ship1_1[0][0] || ship2_2[0][i] + 11 == ship1_1[0][0] || ship2_2[0][i] - 11 == ship1_1[0][0] || ship2_2[0][i] + 9 == ship1_1[0][0] || ship2_2[0][i] - 9 == ship1_1[0][0])
			{
				if (ship2_2[0][i] % 10 == 1 && ship1_1[0][0] % 10 == 0 || ship2_2[0][i] % 10 == 0 && ship1_1[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_1[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 2; i++)
		{
			if (ship2_3[0][i] + 1 == ship1_1[0][0] || ship2_3[0][i] - 1 == ship1_1[0][0] || ship2_3[0][i] + 10 == ship1_1[0][0] || ship2_3[0][i] - 10 == ship1_1[0][0] || ship2_3[0][i] + 11 == ship1_1[0][0] || ship2_3[0][i] - 11 == ship1_1[0][0] || ship2_3[0][i] + 9 == ship1_1[0][0] || ship2_3[0][i] - 9 == ship1_1[0][0])
			{
				if (ship2_3[0][i] % 10 == 1 && ship1_1[0][0] % 10 == 0 || ship2_3[0][i] % 10 == 0 && ship1_1[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_1[0][0] = -100;
					break;
				}
			}
		}
		switch (code)
		{
		case 72:
			if (cPos.Y > 3)
			{
				cPos.Y -= moveDown;
			}
			break;
		case 77:
			if (cPos.X < 38)
			{
				cPos.X += moveRight;
			}
			break;
		case 75:
			if (cPos.X > 2)
			{
				cPos.X -= moveRight;
			}
			break;
		case 80:
			if (cPos.Y < 20)
			{
				cPos.Y += moveDown;
			}
			break;
		}
		SetConsoleCursorPosition(hCon, cPos);
		system("cls");
	}
	//1_2
	for (; ship1_2[0][0] == -100;)
	{
		fieldHuman(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4);
		SetConsoleCursorPosition(hCon, cPos);
		int code = _getch();
		if (code == 224)
		{
			code = _getch();
		}
		else if (code == 13)
		{
			ship1_2[0][0] = 10 * (cPos.Y / 2 - 1) + ((cPos.X - 2) / 4 + 1);
		}
		for (int i = 0; i < 4; i++)
		{
			if (ship4[0][i] + 1 == ship1_2[0][0] || ship4[0][i] - 1 == ship1_2[0][0] || ship4[0][i] + 10 == ship1_2[0][0] || ship4[0][i] - 10 == ship1_2[0][0] || ship4[0][i] + 11 == ship1_2[0][0] || ship4[0][i] - 11 == ship1_2[0][0] || ship4[0][i] + 9 == ship1_2[0][0] || ship4[0][i] - 9 == ship1_2[0][0])
			{
				if (ship4[0][i] % 10 == 1 && ship1_2[0][0] % 10 == 0 || ship4[0][i] % 10 == 0 && ship1_2[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_2[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 3; i++)
		{
			if (ship3_1[0][i] + 1 == ship1_2[0][0] || ship3_1[0][i] - 1 == ship1_2[0][0] || ship3_1[0][i] + 10 == ship1_2[0][0] || ship3_1[0][i] - 10 == ship1_2[0][0] || ship3_1[0][i] + 11 == ship1_2[0][0] || ship3_1[0][i] - 11 == ship1_2[0][0] || ship3_1[0][i] + 9 == ship1_2[0][0] || ship3_1[0][i] - 9 == ship1_2[0][0])
			{
				if (ship3_1[0][i] % 10 == 1 && ship1_2[0][0] % 10 == 0 || ship3_1[0][i] % 10 == 0 && ship1_2[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_2[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 3; i++)
		{
			if (ship3_2[0][i] + 1 == ship1_2[0][0] || ship3_2[0][i] - 1 == ship1_2[0][0] || ship3_2[0][i] + 10 == ship1_2[0][0] || ship3_2[0][i] - 10 == ship1_2[0][0] || ship3_2[0][i] + 11 == ship1_2[0][0] || ship3_2[0][i] - 11 == ship1_2[0][0] || ship3_2[0][i] + 9 == ship1_2[0][0] || ship3_2[0][i] - 9 == ship1_2[0][0])
			{
				if (ship3_2[0][i] % 10 == 1 && ship1_2[0][0] % 10 == 0 || ship3_2[0][i] % 10 == 0 && ship1_2[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_2[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 2; i++)
		{
			if (ship2_1[0][i] + 1 == ship1_2[0][0] || ship2_1[0][i] - 1 == ship1_2[0][0] || ship2_1[0][i] + 10 == ship1_2[0][0] || ship2_1[0][i] - 10 == ship1_2[0][0] || ship2_1[0][i] + 11 == ship1_2[0][0] || ship2_1[0][i] - 11 == ship1_2[0][0] || ship2_1[0][i] + 9 == ship1_2[0][0] || ship2_1[0][i] - 9 == ship1_2[0][0])
			{
				if (ship2_1[0][i] % 10 == 1 && ship1_2[0][0] % 10 == 0 || ship2_1[0][i] % 10 == 0 && ship1_2[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_2[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 2; i++)
		{
			if (ship2_2[0][i] + 1 == ship1_2[0][0] || ship2_2[0][i] - 1 == ship1_2[0][0] || ship2_2[0][i] + 10 == ship1_2[0][0] || ship2_2[0][i] - 10 == ship1_2[0][0] || ship2_2[0][i] + 11 == ship1_2[0][0] || ship2_2[0][i] - 11 == ship1_2[0][0] || ship2_2[0][i] + 9 == ship1_2[0][0] || ship2_2[0][i] - 9 == ship1_2[0][0])
			{
				if (ship2_2[0][i] % 10 == 1 && ship1_2[0][0] % 10 == 0 || ship2_2[0][i] % 10 == 0 && ship1_2[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_2[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 2; i++)
		{
			if (ship2_3[0][i] + 1 == ship1_2[0][0] || ship2_3[0][i] - 1 == ship1_2[0][0] || ship2_3[0][i] + 10 == ship1_2[0][0] || ship2_3[0][i] - 10 == ship1_2[0][0] || ship2_3[0][i] + 11 == ship1_2[0][0] || ship2_3[0][i] - 11 == ship1_2[0][0] || ship2_3[0][i] + 9 == ship1_2[0][0] || ship2_3[0][i] - 9 == ship1_2[0][0])
			{
				if (ship2_3[0][i] % 10 == 1 && ship1_2[0][0] % 10 == 0 || ship2_3[0][i] % 10 == 0 && ship1_2[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_2[0][0] = -100;
					break;
				}
			}
		}
		if (ship1_1[0][0] == ship1_2[0][0] || ship1_1[0][0] + 1 == ship1_2[0][0] || ship1_1[0][0] - 1 == ship1_2[0][0] || ship1_1[0][0] + 10 == ship1_2[0][0] || ship1_1[0][0] - 10 == ship1_2[0][0] || ship1_1[0][0] + 11 == ship1_2[0][0] || ship1_1[0][0] - 11 == ship1_2[0][0] || ship1_1[0][0] + 9 == ship1_2[0][0] || ship1_1[0][0] - 9 == ship1_2[0][0])
		{
			if (ship1_1[0][0] % 10 == 1 && ship1_2[0][0] % 10 == 0 || ship1_1[0][0] % 10 == 0 && ship1_2[0][0] % 10 == 1)
			{
			}
			else
			{
				cout << "Error!";
				ship1_2[0][0] = -100;
			}
		}
		switch (code)
		{
		case 72:
			if (cPos.Y > 3)
			{
				cPos.Y -= moveDown;
			}
			break;
		case 77:
			if (cPos.X < 38)
			{
				cPos.X += moveRight;
			}
			break;
		case 75:
			if (cPos.X > 2)
			{
				cPos.X -= moveRight;
			}
			break;
		case 80:
			if (cPos.Y < 20)
			{
				cPos.Y += moveDown;
			}
			break;
		}
		SetConsoleCursorPosition(hCon, cPos);
		system("cls");
	}
	//1_3
	for (; ship1_3[0][0] == -100;)
	{
		fieldHuman(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4);
		SetConsoleCursorPosition(hCon, cPos);
		int code = _getch();
		if (code == 224)
		{
			code = _getch();
		}
		else if (code == 13)
		{
			ship1_3[0][0] = 10 * (cPos.Y / 2 - 1) + ((cPos.X - 2) / 4 + 1);
		}
		for (int i = 0; i < 4; i++)
		{
			if (ship4[0][i] + 1 == ship1_3[0][0] || ship4[0][i] - 1 == ship1_3[0][0] || ship4[0][i] + 10 == ship1_3[0][0] || ship4[0][i] - 10 == ship1_3[0][0] || ship4[0][i] + 11 == ship1_3[0][0] || ship4[0][i] - 11 == ship1_3[0][0] || ship4[0][i] + 9 == ship1_3[0][0] || ship4[0][i] - 9 == ship1_3[0][0])
			{
				if (ship4[0][i] % 10 == 1 && ship1_3[0][0] % 10 == 0 || ship4[0][i] % 10 == 0 && ship1_3[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_3[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 3; i++)
		{
			if (ship3_1[0][i] + 1 == ship1_3[0][0] || ship3_1[0][i] - 1 == ship1_3[0][0] || ship3_1[0][i] + 10 == ship1_3[0][0] || ship3_1[0][i] - 10 == ship1_3[0][0] || ship3_1[0][i] + 11 == ship1_3[0][0] || ship3_1[0][i] - 11 == ship1_3[0][0] || ship3_1[0][i] + 9 == ship1_3[0][0] || ship3_1[0][i] - 9 == ship1_3[0][0])
			{
				if (ship3_1[0][i] % 10 == 1 && ship1_3[0][0] % 10 == 0 || ship3_1[0][i] % 10 == 0 && ship1_3[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_3[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 3; i++)
		{
			if (ship3_2[0][i] + 1 == ship1_3[0][0] || ship3_2[0][i] - 1 == ship1_3[0][0] || ship3_2[0][i] + 10 == ship1_3[0][0] || ship3_2[0][i] - 10 == ship1_3[0][0] || ship3_2[0][i] + 11 == ship1_3[0][0] || ship3_2[0][i] - 11 == ship1_3[0][0] || ship3_2[0][i] + 9 == ship1_3[0][0] || ship3_2[0][i] - 9 == ship1_3[0][0])
			{
				if (ship3_2[0][i] % 10 == 1 && ship1_3[0][0] % 10 == 0 || ship3_2[0][i] % 10 == 0 && ship1_3[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_3[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 2; i++)
		{
			if (ship2_1[0][i] + 1 == ship1_3[0][0] || ship2_1[0][i] - 1 == ship1_3[0][0] || ship2_1[0][i] + 10 == ship1_3[0][0] || ship2_1[0][i] - 10 == ship1_3[0][0] || ship2_1[0][i] + 11 == ship1_3[0][0] || ship2_1[0][i] - 11 == ship1_3[0][0] || ship2_1[0][i] + 9 == ship1_3[0][0] || ship2_1[0][i] - 9 == ship1_3[0][0])
			{
				if (ship2_1[0][i] % 10 == 1 && ship1_3[0][0] % 10 == 0 || ship2_1[0][i] % 10 == 0 && ship1_3[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_3[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 2; i++)
		{
			if (ship2_2[0][i] + 1 == ship1_3[0][0] || ship2_2[0][i] - 1 == ship1_3[0][0] || ship2_2[0][i] + 10 == ship1_3[0][0] || ship2_2[0][i] - 10 == ship1_3[0][0] || ship2_2[0][i] + 11 == ship1_3[0][0] || ship2_2[0][i] - 11 == ship1_3[0][0] || ship2_2[0][i] + 9 == ship1_3[0][0] || ship2_2[0][i] - 9 == ship1_3[0][0])
			{
				if (ship2_2[0][i] % 10 == 1 && ship1_3[0][0] % 10 == 0 || ship2_2[0][i] % 10 == 0 && ship1_3[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_3[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 2; i++)
		{
			if (ship2_3[0][i] + 1 == ship1_3[0][0] || ship2_3[0][i] - 1 == ship1_3[0][0] || ship2_3[0][i] + 10 == ship1_3[0][0] || ship2_3[0][i] - 10 == ship1_3[0][0] || ship2_3[0][i] + 11 == ship1_3[0][0] || ship2_3[0][i] - 11 == ship1_3[0][0] || ship2_3[0][i] + 9 == ship1_3[0][0] || ship2_3[0][i] - 9 == ship1_3[0][0])
			{
				if (ship2_3[0][i] % 10 == 1 && ship1_3[0][0] % 10 == 0 || ship2_3[0][i] % 10 == 0 && ship1_3[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_3[0][0] = -100;
					break;
				}
			}
		}
		if (ship1_1[0][0] == ship1_3[0][0] || ship1_1[0][0] + 1 == ship1_3[0][0] || ship1_1[0][0] - 1 == ship1_3[0][0] || ship1_1[0][0] + 10 == ship1_3[0][0] || ship1_1[0][0] - 10 == ship1_3[0][0] || ship1_1[0][0] + 11 == ship1_3[0][0] || ship1_1[0][0] - 11 == ship1_3[0][0] || ship1_1[0][0] + 9 == ship1_3[0][0] || ship1_1[0][0] - 9 == ship1_3[0][0])
		{
			if (ship1_1[0][0] % 10 == 1 && ship1_3[0][0] % 10 == 0 || ship1_1[0][0] % 10 == 0 && ship1_3[0][0] % 10 == 1)
			{
			}
			else
			{
				cout << "Error!";
				ship1_3[0][0] = -100;
			}
		}
		if (ship1_2[0][0] == ship1_3[0][0] || ship1_2[0][0] + 1 == ship1_3[0][0] || ship1_2[0][0] - 1 == ship1_3[0][0] || ship1_2[0][0] + 10 == ship1_3[0][0] || ship1_2[0][0] - 10 == ship1_3[0][0] || ship1_2[0][0] + 11 == ship1_3[0][0] || ship1_2[0][0] - 11 == ship1_3[0][0] || ship1_2[0][0] + 9 == ship1_3[0][0] || ship1_2[0][0] - 9 == ship1_3[0][0])
		{
			if (ship1_2[0][0] % 10 == 1 && ship1_3[0][0] % 10 == 0 || ship1_2[0][0] % 10 == 0 && ship1_3[0][0] % 10 == 1)
			{
			}
			else
			{
				cout << "Error!";
				ship1_3[0][0] = -100;
			}
		}
		switch (code)
		{
		case 72:
			if (cPos.Y > 3)
			{
				cPos.Y -= moveDown;
			}
			break;
		case 77:
			if (cPos.X < 38)
			{
				cPos.X += moveRight;
			}
			break;
		case 75:
			if (cPos.X > 2)
			{
				cPos.X -= moveRight;
			}
			break;
		case 80:
			if (cPos.Y < 20)
			{
				cPos.Y += moveDown;
			}
			break;
		}
		SetConsoleCursorPosition(hCon, cPos);
		system("cls");
	}
	//1_4
	for (; ship1_4[0][0] == -100;)
	{
		fieldHuman(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4);
		SetConsoleCursorPosition(hCon, cPos);
		int code = _getch();
		if (code == 224)
		{
			code = _getch();
		}
		else if (code == 13)
		{
			ship1_4[0][0] = 10 * (cPos.Y / 2 - 1) + ((cPos.X - 2) / 4 + 1);
		}


		for (int i = 0; i < 4; i++)
		{
			if (ship4[0][i] + 1 == ship1_4[0][0] || ship4[0][i] - 1 == ship1_4[0][0] || ship4[0][i] + 10 == ship1_4[0][0] || ship4[0][i] - 10 == ship1_4[0][0] || ship4[0][i] + 11 == ship1_4[0][0] || ship4[0][i] - 11 == ship1_4[0][0] || ship4[0][i] + 9 == ship1_4[0][0] || ship4[0][i] - 9 == ship1_4[0][0])
			{
				if (ship4[0][i] % 10 == 1 && ship1_4[0][0] % 10 == 0 || ship4[0][i] % 10 == 0 && ship1_4[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_4[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 3; i++)
		{
			if (ship3_1[0][i] + 1 == ship1_4[0][0] || ship3_1[0][i] - 1 == ship1_4[0][0] || ship3_1[0][i] + 10 == ship1_4[0][0] || ship3_1[0][i] - 10 == ship1_4[0][0] || ship3_1[0][i] + 11 == ship1_4[0][0] || ship3_1[0][i] - 11 == ship1_4[0][0] || ship3_1[0][i] + 9 == ship1_4[0][0] || ship3_1[0][i] - 9 == ship1_4[0][0])
			{
				if (ship3_1[0][i] % 10 == 1 && ship1_4[0][0] % 10 == 0 || ship3_1[0][i] % 10 == 0 && ship1_4[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_4[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 3; i++)
		{
			if (ship3_2[0][i] + 1 == ship1_4[0][0] || ship3_2[0][i] - 1 == ship1_4[0][0] || ship3_2[0][i] + 10 == ship1_4[0][0] || ship3_2[0][i] - 10 == ship1_4[0][0] || ship3_2[0][i] + 11 == ship1_4[0][0] || ship3_2[0][i] - 11 == ship1_4[0][0] || ship3_2[0][i] + 9 == ship1_4[0][0] || ship3_2[0][i] - 9 == ship1_4[0][0])
			{
				if (ship3_2[0][i] % 10 == 1 && ship1_4[0][0] % 10 == 0 || ship3_2[0][i] % 10 == 0 && ship1_4[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_4[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 2; i++)
		{
			if (ship2_1[0][i] + 1 == ship1_4[0][0] || ship2_1[0][i] - 1 == ship1_4[0][0] || ship2_1[0][i] + 10 == ship1_4[0][0] || ship2_1[0][i] - 10 == ship1_4[0][0] || ship2_1[0][i] + 11 == ship1_4[0][0] || ship2_1[0][i] - 11 == ship1_4[0][0] || ship2_1[0][i] + 9 == ship1_4[0][0] || ship2_1[0][i] - 9 == ship1_4[0][0])
			{
				if (ship2_1[0][i] % 10 == 1 && ship1_4[0][0] % 10 == 0 || ship2_1[0][i] % 10 == 0 && ship1_4[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_4[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 2; i++)
		{
			if (ship2_2[0][i] + 1 == ship1_4[0][0] || ship2_2[0][i] - 1 == ship1_4[0][0] || ship2_2[0][i] + 10 == ship1_4[0][0] || ship2_2[0][i] - 10 == ship1_4[0][0] || ship2_2[0][i] + 11 == ship1_4[0][0] || ship2_2[0][i] - 11 == ship1_4[0][0] || ship2_2[0][i] + 9 == ship1_4[0][0] || ship2_2[0][i] - 9 == ship1_4[0][0])
			{
				if (ship2_2[0][i] % 10 == 1 && ship1_4[0][0] % 10 == 0 || ship2_2[0][i] % 10 == 0 && ship1_4[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_4[0][0] = -100;
					break;
				}
			}
		}
		for (int i = 0; i < 2; i++)
		{
			if (ship2_3[0][i] + 1 == ship1_4[0][0] || ship2_3[0][i] - 1 == ship1_4[0][0] || ship2_3[0][i] + 10 == ship1_4[0][0] || ship2_3[0][i] - 10 == ship1_4[0][0] || ship2_3[0][i] + 11 == ship1_4[0][0] || ship2_3[0][i] - 11 == ship1_4[0][0] || ship2_3[0][i] + 9 == ship1_4[0][0] || ship2_3[0][i] - 9 == ship1_4[0][0])
			{
				if (ship2_3[0][i] % 10 == 1 && ship1_4[0][0] % 10 == 0 || ship2_3[0][i] % 10 == 0 && ship1_4[0][0] % 10 == 1)
				{
				}
				else
				{
					cout << "Error!";
					ship1_4[0][0] = -100;
					break;
				}
			}
		}
		if (ship1_1[0][0] == ship1_4[0][0] || ship1_1[0][0] + 1 == ship1_4[0][0] || ship1_1[0][0] - 1 == ship1_4[0][0] || ship1_1[0][0] + 10 == ship1_4[0][0] || ship1_1[0][0] - 10 == ship1_4[0][0] || ship1_1[0][0] + 11 == ship1_4[0][0] || ship1_1[0][0] - 11 == ship1_4[0][0] || ship1_1[0][0] + 9 == ship1_4[0][0] || ship1_1[0][0] - 9 == ship1_4[0][0])
		{
			if (ship1_1[0][0] % 10 == 1 && ship1_4[0][0] % 10 == 0 || ship1_1[0][0] % 10 == 0 && ship1_4[0][0] % 10 == 1)
			{
			}
			else
			{
				cout << "Error!";
				ship1_4[0][0] = -100;
			}
		}
		if (ship1_2[0][0] == ship1_4[0][0] || ship1_2[0][0] + 1 == ship1_4[0][0] || ship1_2[0][0] - 1 == ship1_4[0][0] || ship1_2[0][0] + 10 == ship1_4[0][0] || ship1_2[0][0] - 10 == ship1_4[0][0] || ship1_2[0][0] + 11 == ship1_4[0][0] || ship1_2[0][0] - 11 == ship1_4[0][0] || ship1_2[0][0] + 9 == ship1_4[0][0] || ship1_2[0][0] - 9 == ship1_4[0][0])
		{
			if (ship1_2[0][0] % 10 == 1 && ship1_4[0][0] % 10 == 0 || ship1_2[0][0] % 10 == 0 && ship1_4[0][0] % 10 == 1)
			{
			}
			else
			{
				cout << "Error!";
				ship1_4[0][0] = -100;
			}
		}
		if (ship1_3[0][0] == ship1_4[0][0] || ship1_3[0][0] + 1 == ship1_4[0][0] || ship1_3[0][0] - 1 == ship1_4[0][0] || ship1_3[0][0] + 10 == ship1_4[0][0] || ship1_3[0][0] - 10 == ship1_4[0][0] || ship1_3[0][0] + 11 == ship1_4[0][0] || ship1_3[0][0] - 11 == ship1_4[0][0] || ship1_3[0][0] + 9 == ship1_4[0][0] || ship1_3[0][0] - 9 == ship1_4[0][0])
		{
			if (ship1_3[0][0] % 10 == 1 && ship1_4[0][0] % 10 == 0 || ship1_3[0][0] % 10 == 0 && ship1_4[0][0] % 10 == 1)
			{
			}
			else
			{
				cout << "Error!";
				ship1_4[0][0] = -100;
			}
		}
		switch (code)
		{
		case 72:
			if (cPos.Y > 3)
			{
				cPos.Y -= moveDown;
			}
			break;
		case 77:
			if (cPos.X < 38)
			{
				cPos.X += moveRight;
			}
			break;
		case 75:
			if (cPos.X > 2)
			{
				cPos.X -= moveRight;
			}
			break;
		case 80:
			if (cPos.Y < 20)
			{
				cPos.Y += moveDown;
			}
			break;
		}
		SetConsoleCursorPosition(hCon, cPos);
		system("cls");
	}
	return 0;
}

bool pois(int ship4[2][4], int ship3_1[2][3], int ship3_2[2][3], int ship2_1[2][2], int ship2_2[2][2], int ship2_3[2][2], int ship1_1[2][1], int ship1_2[2][1], int ship1_3[2][1], int ship1_4[2][1], int coordinates)
{
	if (coordinates == ship4[0][0] || coordinates == ship4[0][1] || coordinates == ship4[0][2] || coordinates == ship4[0][3] || coordinates == ship3_1[0][0] || coordinates == ship3_1[0][1] || coordinates == ship3_1[0][2] || coordinates == ship3_2[0][0] || coordinates == ship3_2[0][1] || coordinates == ship3_2[0][2] || coordinates == ship2_1[0][0] || coordinates == ship2_1[0][1] || coordinates == ship2_2[0][0] || coordinates == ship2_2[0][1] || coordinates == ship2_3[0][0] || coordinates == ship2_3[0][1] || coordinates == ship1_1[0][0] || coordinates == ship1_2[0][0] || coordinates == ship1_3[0][0] || coordinates == ship1_4[0][0])
	{
		return true;
	}
	return false;
}

void fieldHuman(int ship4[2][4], int ship3_1[2][3], int ship3_2[2][3], int ship2_1[2][2], int ship2_2[2][2], int ship2_3[2][2], int ship1_1[2][1], int ship1_2[2][1], int ship1_3[2][1], int ship1_4[2][1])
{
	int coordinates = 0;
	cout << "Your ship:" << endl;
	for (int i = 1; i <= 21; i++)
	{
		if (i == 1)
		{
			cout << char(201);
		}
		else if (i == 21)
		{
			cout << char(187);
		}
		else if (i % 2 == 0)
		{
			cout << char(205) << char(205) << char(205);
		}
		else
		{
			cout << char(203);
		}
	}
	cout << endl;
	for (int i = 1; i <= 21; i++)
	{
		if (i == 1)
		{
			cout << char(186);
		}
		else if (i == 21)
		{
			cout << char(186);
		}
		else if (i % 2 == 0)
		{
			coordinates++;
			if (pois(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4, coordinates))
			{
				SetColor(White, Green);
				cout << char(254) << char(254) << char(254);
				SetColor(White, Black);
			}
			else
			{
				cout << "   ";
			}
		}
		else if (i % 2 != 0)
		{
			cout << char(186);
		}
	}
	for (int s = 1; s <= 9; s++)
	{
		cout << endl;
		for (int i = 1; i <= 21; i++)
		{
			if (i == 1)
			{
				cout << char(204);
			}
			else if (i == 21)
			{
				cout << char(185);
			}
			else if (i % 2 == 0)
			{
				cout << char(205) << char(205) << char(205);
			}
			else if (i % 2 != 0)
			{
				cout << char(206);
			}
		}
		cout << endl;
		for (int i = 1; i <= 21; i++)
		{
			if (i == 1)
			{
				cout << char(186);
			}
			else if (i == 21)
			{
				cout << char(186);
			}
			else if (i % 2 == 0)
			{
				coordinates++;
				if (pois(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4, coordinates))
				{
					SetColor(White, Green);
					cout << char(254) << char(254) << char(254);
					SetColor(White, Black);
				}
				else
				{
					cout << "   ";
				}
			}
			else if (i % 2 != 0)
			{
				cout << char(186);
			}
		}
	}
	cout << endl;
	for (int i = 1; i <= 21; i++)
	{
		if (i == 1)
		{
			cout << char(200);
		}
		else if (i == 21)
		{
			cout << char(188);
		}
		else if (i % 2 == 0)
		{
			cout << char(205) << char(205) << char(205);
		}
		else if (i % 2 != 0)
		{
			cout << char(202);
		}
	}
}

void fieldAll(int ship4[2][4], int ship3_1[2][3], int ship3_2[2][3], int ship2_1[2][2], int ship2_2[2][2], int ship2_3[2][2], int ship1_1[2][1], int ship1_2[2][1], int ship1_3[2][1], int ship1_4[2][1], int Ship4[2][4], int Ship3_1[2][3], int Ship3_2[2][3], int Ship2_1[2][2], int Ship2_2[2][2], int Ship2_3[2][2], int Ship1_1[2][1], int Ship1_2[2][1], int Ship1_3[2][1], int Ship1_4[2][1], int shotH[100], int shotC[100])
{
	int _shot = 0;
	int coordinates = 0;
	cout << "Enemy field:                               ";
	cout << "Your field:" << endl;
	for (int i = 1; i <= 21; i++)
	{
		if (i == 1)
		{
			cout << char(201);
		}
		else if (i == 21)
		{
			cout << char(187);
		}
		else if (i % 2 == 0)
		{
			cout << char(205) << char(205) << char(205);
		}
		else
		{
			cout << char(203);
		}
	}
	cout << "  ";
	for (int i = 1; i <= 21; i++)
	{
		if (i == 1)
		{
			cout << char(201);
		}
		else if (i == 21)
		{
			cout << char(187);
		}
		else if (i % 2 == 0)
		{
			cout << char(205) << char(205) << char(205);
		}
		else
		{
			cout << char(203);
		}
	}
	cout << endl;
	for (int i = 1; i <= 21; i++)
	{
		if (i == 1)
		{
			cout << char(186);
		}
		else if (i == 21)
		{
			cout << char(186);
		}
		else if (i % 2 == 0)
		{
			_shot++;
			if (shotH[_shot - 1] == 0)
			{
				if (pois(Ship4, Ship3_1, Ship3_2, Ship2_1, Ship2_2, Ship2_3, Ship1_1, Ship1_2, Ship1_3, Ship1_4, _shot))
				{
					SetColor(White, Red);
					cout << char(254) << char(254) << char(254);
					SetColor(White, Black);
				}
				else
				{
					cout << " " << char(253) << " ";
				}
			}
			else
			{
				cout << "   ";
			}
		}
		else if (i % 2 != 0)
		{
			cout << char(186);
		}
	}
	cout << "  ";
	for (int i = 1; i <= 21; i++)
	{
		if (i == 1)
		{
			cout << char(186);
		}
		else if (i == 21)
		{
			cout << char(186);
		}
		else if (i % 2 == 0)
		{
			coordinates++;
			if (pois(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4, coordinates))
			{
				for (int g = 0; g < 4; g++)
				{
					if (ship4[0][g] == coordinates)
					{
						if (ship4[1][g] == 1)
						{
							SetColor(White, Green);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
						else
						{
							SetColor(White, Red);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
					}
				}
				for (int g = 0; g < 3; g++)
				{
					if (ship3_1[0][g] == coordinates)
					{
						if (ship3_1[1][g] == 1)
						{
							SetColor(White, Green);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
						else
						{
							SetColor(White, Red);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
					}
				}
				for (int g = 0; g < 3; g++)
				{
					if (ship3_2[0][g] == coordinates)
					{
						if (ship3_2[1][g] == 1)
						{
							SetColor(White, Green);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
						else
						{
							SetColor(White, Red);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
					}
				}
				for (int g = 0; g < 2; g++)
				{
					if (ship2_1[0][g] == coordinates)
					{
						if (ship2_1[1][g] == 1)
						{
							SetColor(White, Green);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
						else
						{
							SetColor(White, Red);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
					}
				}
				for (int g = 0; g < 2; g++)
				{
					if (ship2_2[0][g] == coordinates)
					{
						if (ship2_2[1][g] == 1)
						{
							SetColor(White, Green);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
						else
						{
							SetColor(White, Red);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
					}
				}
				for (int g = 0; g < 2; g++)
				{
					if (ship2_3[0][g] == coordinates)
					{
						if (ship2_3[1][g] == 1)
						{
							SetColor(White, Green);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
						else
						{
							SetColor(White, Red);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
					}
				}
				if (ship1_1[0][0] == coordinates)
				{
					if (ship1_1[1][0] == 1)
					{
						SetColor(White, Green);
						cout << char(254) << char(254) << char(254);
						SetColor(White, Black);
					}
					else
					{
						SetColor(White, Red);
						cout << char(254) << char(254) << char(254);
						SetColor(White, Black);
					}
				}
				if (ship1_2[0][0] == coordinates)
				{
					if (ship1_2[1][0] == 1)
					{
						SetColor(White, Green);
						cout << char(254) << char(254) << char(254);
						SetColor(White, Black);
					}
					else
					{
						SetColor(White, Red);
						cout << char(254) << char(254) << char(254);
						SetColor(White, Black);
					}
				}
				if (ship1_3[0][0] == coordinates)
				{
					if (ship1_3[1][0] == 1)
					{
						SetColor(White, Green);
						cout << char(254) << char(254) << char(254);
						SetColor(White, Black);
					}
					else
					{
						SetColor(White, Red);
						cout << char(254) << char(254) << char(254);
						SetColor(White, Black);
					}
				}
				if (ship1_4[0][0] == coordinates)
				{
					if (ship1_4[1][0] == 1)
					{
						SetColor(White, Green);
						cout << char(254) << char(254) << char(254);
						SetColor(White, Black);
					}
					else
					{
						SetColor(White, Red);
						cout << char(254) << char(254) << char(254);
						SetColor(White, Black);
					}
				}
			}
			else if (shotC[coordinates - 1] == 0)
			{
				cout << " " << char(253) << " ";
			}
			else if (shotC[coordinates - 1] == 3)
			{
				SetColor(Blue, Black);
				cout << " " << char(253) << " ";
				SetColor(White, Black);
				shotC[coordinates - 1] = 0;
			}
			else
			{
				cout << "   ";
			}
		}
		else if (i % 2 != 0)
		{
			cout << char(186);
		}
	}
	for (int s = 1; s <= 9; s++)
	{
		cout << endl;
		for (int i = 1; i <= 21; i++)
		{
			if (i == 1)
			{
				cout << char(204);
			}
			else if (i == 21)
			{
				cout << char(185);
			}
			else if (i % 2 == 0)
			{
				cout << char(205) << char(205) << char(205);
			}
			else if (i % 2 != 0)
			{
				cout << char(206);
			}
		}
		cout << "  ";
		for (int i = 1; i <= 21; i++)
		{
			if (i == 1)
			{
				cout << char(204);
			}
			else if (i == 21)
			{
				cout << char(185);
			}
			else if (i % 2 == 0)
			{
				cout << char(205) << char(205) << char(205);
			}
			else if (i % 2 != 0)
			{
				cout << char(206);
			}
		}
		cout << endl;
		for (int i = 1; i <= 21; i++)
		{
			if (i == 1)
			{
				cout << char(186);
			}
			else if (i == 21)
			{
				cout << char(186);
			}
			else if (i % 2 == 0)
			{
				_shot++;
				if (shotH[_shot - 1] == 0)
				{
					if (pois(Ship4, Ship3_1, Ship3_2, Ship2_1, Ship2_2, Ship2_3, Ship1_1, Ship1_2, Ship1_3, Ship1_4, _shot))
					{
						SetColor(White, Red);
						cout << char(254) << char(254) << char(254);
						SetColor(White, Black);
					}
					else
					{
						cout << " " << char(253) << " ";
					}
				}
				else
				{
					cout << "   ";
				}
			}
			else if (i % 2 != 0)
			{
				cout << char(186);
			}
		}
		cout << "  ";
		for (int i = 1; i <= 21; i++)
		{
			if (i == 1)
			{
				cout << char(186);
			}
			else if (i == 21)
			{
				cout << char(186);
			}
			else if (i % 2 == 0)
			{
				coordinates++;
				if (pois(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4, coordinates))
				{
					for (int g = 0; g < 4; g++)
					{
						if (ship4[0][g] == coordinates)
						{
							if (ship4[1][g] == 1)
							{
								SetColor(White, Green);
								cout << char(254) << char(254) << char(254);
								SetColor(White, Black);
							}
							else
							{
								SetColor(White, Red);
								cout << char(254) << char(254) << char(254);
								SetColor(White, Black);
							}
						}
					}
					for (int g = 0; g < 3; g++)
					{
						if (ship3_1[0][g] == coordinates)
						{
							if (ship3_1[1][g] == 1)
							{
								SetColor(White, Green);
								cout << char(254) << char(254) << char(254);
								SetColor(White, Black);
							}
							else
							{
								SetColor(White, Red);
								cout << char(254) << char(254) << char(254);
								SetColor(White, Black);
							}
						}
					}
					for (int g = 0; g < 3; g++)
					{
						if (ship3_2[0][g] == coordinates)
						{
							if (ship3_2[1][g] == 1)
							{
								SetColor(White, Green);
								cout << char(254) << char(254) << char(254);
								SetColor(White, Black);
							}
							else
							{
								SetColor(White, Red);
								cout << char(254) << char(254) << char(254);
								SetColor(White, Black);
							}
						}
					}
					for (int g = 0; g < 2; g++)
					{
						if (ship2_1[0][g] == coordinates)
						{
							if (ship2_1[1][g] == 1)
							{
								SetColor(White, Green);
								cout << char(254) << char(254) << char(254);
								SetColor(White, Black);
							}
							else
							{
								SetColor(White, Red);
								cout << char(254) << char(254) << char(254);
								SetColor(White, Black);
							}
						}
					}
					for (int g = 0; g < 2; g++)
					{
						if (ship2_2[0][g] == coordinates)
						{
							if (ship2_2[1][g] == 1)
							{
								SetColor(White, Green);
								cout << char(254) << char(254) << char(254);
								SetColor(White, Black);
							}
							else
							{
								SetColor(White, Red);
								cout << char(254) << char(254) << char(254);
								SetColor(White, Black);
							}
						}
					}
					for (int g = 0; g < 2; g++)
					{
						if (ship2_3[0][g] == coordinates)
						{
							if (ship2_3[1][g] == 1)
							{
								SetColor(White, Green);
								cout << char(254) << char(254) << char(254);
								SetColor(White, Black);
							}
							else
							{
								SetColor(White, Red);
								cout << char(254) << char(254) << char(254);
								SetColor(White, Black);
							}
						}
					}
					if (ship1_1[0][0] == coordinates)
					{
						if (ship1_1[1][0] == 1)
						{
							SetColor(White, Green);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
						else
						{
							SetColor(White, Red);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
					}
					if (ship1_2[0][0] == coordinates)
					{
						if (ship1_2[1][0] == 1)
						{
							SetColor(White, Green);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
						else
						{
							SetColor(White, Red);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
					}
					if (ship1_3[0][0] == coordinates)
					{
						if (ship1_3[1][0] == 1)
						{
							SetColor(White, Green);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
						else
						{
							SetColor(White, Red);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
					}
					if (ship1_4[0][0] == coordinates)
					{
						if (ship1_4[1][0] == 1)
						{
							SetColor(White, Green);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
						else
						{
							SetColor(White, Red);
							cout << char(254) << char(254) << char(254);
							SetColor(White, Black);
						}
					}
				}
				else if (shotC[coordinates - 1] == 0)
				{
					cout << " " << char(253) << " ";
				}
				else if (shotC[coordinates - 1] == 3)
				{
					SetColor(Blue, Black);
					cout << " " << char(253) << " ";
					SetColor(White, Black);
					shotC[coordinates - 1] = 0;
				}
				else
				{
					cout << "   ";
				}
			}
			else if (i % 2 != 0)
			{
				cout << char(186);
			}
		}
	}
	cout << endl;
	for (int i = 1; i <= 21; i++)
	{
		if (i == 1)
		{
			cout << char(200);
		}
		else if (i == 21)
		{
			cout << char(188);
		}
		else if (i % 2 == 0)
		{
			cout << char(205) << char(205) << char(205);
		}
		else if (i % 2 != 0)
		{
			cout << char(202);
		}
	}
	cout << "  ";
	for (int i = 1; i <= 21; i++)
	{
		if (i == 1)
		{
			cout << char(200);
		}
		else if (i == 21)
		{
			cout << char(188);
		}
		else if (i % 2 == 0)
		{
			cout << char(205) << char(205) << char(205);
		}
		else if (i % 2 != 0)
		{
			cout << char(202);
		}
	}
}

int ship_search(int ship4[2][4], int ship3_1[2][3], int ship3_2[2][3], int ship2_1[2][2], int ship2_2[2][2], int ship2_3[2][2], int ship1_1[2][1], int ship1_2[2][1], int ship1_3[2][1], int ship1_4[2][1], int* pol, int* st, int p, int shotC[100], int* w, int* pr, int* lv, int* vr, int* nz)
{
	if (*st == 0)
	{
		for (int g = 0; g < 4; g++)
		{
			if (ship4[0][g] == *(pol)-10 * *vr)
			{
				ship4[1][g] = 0;
				shotC[*(pol)-1 - 10 * *vr] = 0;
				int st1;
				if (ship4[0][g] > 10)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 0;
				}
				else
				{
					*st = 2;
				}
				for (int c = 0; c < 4; c++)
				{
					if (ship4[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 1;
					*pr = 1;
					*vr = 0;
					*st = -1;
					for (int c = 0; c < 4; c++)
					{
						if (ship4[0][c] % 10 != 1)
						{
							shotC[ship4[0][c] - 1 - 1] = 0;
						}
						if (ship4[0][c] > 10)
						{
							shotC[ship4[0][c] - 1 - 10] = 0;
						}
						if (ship4[0][c] % 10 != 1 && ship4[0][c] > 10)
						{
							shotC[ship4[0][c] - 1 - 11] = 0;
						}
						if (ship4[0][c] % 10 != 0 && ship4[0][c] > 10)
						{
							shotC[ship4[0][c] - 1 - 9] = 0;
						}
						if (ship4[0][c] % 10 != 0)
						{
							shotC[ship4[0][c] - 1 + 1] = 0;
						}
						if (ship4[0][c] < 91)
						{
							shotC[ship4[0][c] - 1 + 10] = 0;
						}
						if (ship4[0][c] < 91 && ship4[0][c] % 10 != 0)
						{
							shotC[ship4[0][c] - 1 + 11] = 0;
						}
						if (ship4[0][c] < 91 && ship4[0][c] % 10 != 1)
						{
							shotC[ship4[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*vr += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)-10 * *vr - 1] = 3;
			}
		}
		for (int g = 0; g < 3; g++)
		{
			if (ship3_1[0][g] == *(pol)-10 * *vr)
			{
				ship3_1[1][g] = 0;
				shotC[*(pol)-1 - 10 * *vr] = 0;
				int st1;
				if (ship3_1[0][g] > 10)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 0;
				}
				else
				{
					*st = 2;
				}
				for (int c = 0; c < 3; c++)
				{
					if (ship3_1[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 1;
					*pr = 1;
					*vr = 0;
					*st = -1;
					for (int c = 0; c < 3; c++)
					{
						if (ship3_1[0][c] % 10 != 1)
						{
							shotC[ship3_1[0][c] - 1 - 1] = 0;
						}
						if (ship3_1[0][c] > 10)
						{
							shotC[ship3_1[0][c] - 1 - 10] = 0;
						}
						if (ship3_1[0][c] % 10 != 1 && ship3_1[0][c] > 10)
						{
							shotC[ship3_1[0][c] - 1 - 11] = 0;
						}
						if (ship3_1[0][c] % 10 != 0 && ship3_1[0][c] > 10)
						{
							shotC[ship3_1[0][c] - 1 - 9] = 0;
						}
						if (ship3_1[0][c] % 10 != 0)
						{
							shotC[ship3_1[0][c] - 1 + 1] = 0;
						}
						if (ship3_1[0][c] < 91)
						{
							shotC[ship3_1[0][c] - 1 + 10] = 0;
						}
						if (ship3_1[0][c] < 91 && ship3_1[0][c] % 10 != 0)
						{
							shotC[ship3_1[0][c] - 1 + 11] = 0;
						}
						if (ship3_1[0][c] < 91 && ship3_1[0][c] % 10 != 1)
						{
							shotC[ship3_1[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*vr += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)-10 * *vr - 1] = 3;
			}
		}
		for (int g = 0; g < 3; g++)
		{
			if (ship3_2[0][g] == *(pol)-10 * *vr)
			{
				ship3_2[1][g] = 0;
				shotC[*(pol)-1 - 10 * *vr] = 0;
				int st1;
				if (ship3_2[0][g] > 10)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 0;
				}
				else
				{
					*st = 2;
				}
				for (int c = 0; c < 3; c++)
				{
					if (ship3_2[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 1;
					*pr = 1;
					*vr = 0;
					*st = -1;
					for (int c = 0; c < 3; c++)
					{
						if (ship3_2[0][c] % 10 != 1)
						{
							shotC[ship3_2[0][c] - 1 - 1] = 0;
						}
						if (ship3_2[0][c] > 10)
						{
							shotC[ship3_2[0][c] - 1 - 10] = 0;
						}
						if (ship3_2[0][c] % 10 != 1 && ship3_2[0][c] > 10)
						{
							shotC[ship3_2[0][c] - 1 - 11] = 0;
						}
						if (ship3_2[0][c] % 10 != 0 && ship3_2[0][c] > 10)
						{
							shotC[ship3_2[0][c] - 1 - 9] = 0;
						}
						if (ship3_2[0][c] % 10 != 0)
						{
							shotC[ship3_2[0][c] - 1 + 1] = 0;
						}
						if (ship3_2[0][c] < 91)
						{
							shotC[ship3_2[0][c] - 1 + 10] = 0;
						}
						if (ship3_2[0][c] < 91 && ship3_2[0][c] % 10 != 0)
						{
							shotC[ship3_2[0][c] - 1 + 11] = 0;
						}
						if (ship3_2[0][c] < 91 && ship3_2[0][c] % 10 != 1)
						{
							shotC[ship3_2[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*vr += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)-10 * *vr - 1] = 3;
			}
		}
		for (int g = 0; g < 2; g++)
		{
			if (ship2_1[0][g] == *(pol)-10 * *vr)
			{
				ship2_1[1][g] = 0;
				shotC[*(pol)-1 - 10 * *vr] = 0;
				int st1;
				if (ship2_1[0][g] > 10)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 0;
				}
				else
				{
					*st = 2;
				}
				for (int c = 0; c < 2; c++)
				{
					if (ship2_1[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 1;
					*pr = 1;
					*vr = 0;
					*st = -1;
					for (int c = 0; c < 2; c++)
					{
						if (ship2_1[0][c] % 10 != 1)
						{
							shotC[ship2_1[0][c] - 1 - 1] = 0;
						}
						if (ship2_1[0][c] > 10)
						{
							shotC[ship2_1[0][c] - 1 - 10] = 0;
						}
						if (ship2_1[0][c] % 10 != 1 && ship2_1[0][c] > 10)
						{
							shotC[ship2_1[0][c] - 1 - 11] = 0;
						}
						if (ship2_1[0][c] % 10 != 0 && ship2_1[0][c] > 10)
						{
							shotC[ship2_1[0][c] - 1 - 9] = 0;
						}
						if (ship2_1[0][c] % 10 != 0)
						{
							shotC[ship2_1[0][c] - 1 + 1] = 0;
						}
						if (ship2_1[0][c] < 91)
						{
							shotC[ship2_1[0][c] - 1 + 10] = 0;
						}
						if (ship2_1[0][c] < 91 && ship2_1[0][c] % 10 != 0)
						{
							shotC[ship2_1[0][c] - 1 + 11] = 0;
						}
						if (ship2_1[0][c] < 91 && ship2_1[0][c] % 10 != 1)
						{
							shotC[ship2_1[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*vr += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)-10 * *vr - 1] = 3;
			}
		}
		for (int g = 0; g < 2; g++)
		{
			if (ship2_2[0][g] == *(pol)-10 * *vr)
			{
				ship2_2[1][g] = 0;
				shotC[*(pol)-1 - 10 * *vr] = 0;
				int st1;
				if (ship2_2[0][g] > 10)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 0;
				}
				else
				{
					*st = 2;
				}
				for (int c = 0; c < 2; c++)
				{
					if (ship2_2[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 1;
					*pr = 1;
					*vr = 0;
					*st = -1;
					for (int c = 0; c < 2; c++)
					{
						if (ship2_2[0][c] % 10 != 1)
						{
							shotC[ship2_2[0][c] - 1 - 1] = 0;
						}
						if (ship2_2[0][c] > 10)
						{
							shotC[ship2_2[0][c] - 1 - 10] = 0;
						}
						if (ship2_2[0][c] % 10 != 1 && ship2_2[0][c] > 10)
						{
							shotC[ship2_2[0][c] - 1 - 11] = 0;
						}
						if (ship2_2[0][c] % 10 != 0 && ship2_2[0][c] > 10)
						{
							shotC[ship2_2[0][c] - 1 - 9] = 0;
						}
						if (ship2_2[0][c] % 10 != 0)
						{
							shotC[ship2_2[0][c] - 1 + 1] = 0;
						}
						if (ship2_2[0][c] < 91)
						{
							shotC[ship2_2[0][c] - 1 + 10] = 0;
						}
						if (ship2_2[0][c] < 91 && ship2_2[0][c] % 10 != 0)
						{
							shotC[ship2_2[0][c] - 1 + 11] = 0;
						}
						if (ship2_2[0][c] < 91 && ship2_2[0][c] % 10 != 1)
						{
							shotC[ship2_2[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*vr += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)-10 * *vr - 1] = 3;
			}
		}
		for (int g = 0; g < 2; g++)
		{
			if (ship2_3[0][g] == *(pol)-10 * *vr)
			{
				ship2_3[1][g] = 0;
				shotC[*(pol)-1 - 10 * *vr] = 0;
				int st1;
				if (ship2_3[0][g] > 10)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 0;
				}
				else
				{
					*st = 2;
				}
				for (int c = 0; c < 2; c++)
				{
					if (ship2_3[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 1;
					*pr = 1;
					*vr = 0;
					*st = -1;
					for (int c = 0; c < 2; c++)
					{
						if (ship2_3[0][c] % 10 != 1)
						{
							shotC[ship2_3[0][c] - 1 - 1] = 0;
						}
						if (ship2_3[0][c] > 10)
						{
							shotC[ship2_3[0][c] - 1 - 10] = 0;
						}
						if (ship2_3[0][c] % 10 != 1 && ship2_3[0][c] > 10)
						{
							shotC[ship2_3[0][c] - 1 - 11] = 0;
						}
						if (ship2_3[0][c] % 10 != 0 && ship2_3[0][c] > 10)
						{
							shotC[ship2_3[0][c] - 1 - 9] = 0;
						}
						if (ship2_3[0][c] % 10 != 0)
						{
							shotC[ship2_3[0][c] - 1 + 1] = 0;
						}
						if (ship2_3[0][c] < 91)
						{
							shotC[ship2_3[0][c] - 1 + 10] = 0;
						}
						if (ship2_3[0][c] < 91 && ship2_3[0][c] % 10 != 0)
						{
							shotC[ship2_3[0][c] - 1 + 11] = 0;
						}
						if (ship2_3[0][c] < 91 && ship2_3[0][c] % 10 != 1)
						{
							shotC[ship2_3[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*vr += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)-10 * *vr - 1] = 3;
			}
		}
		if (*vr > 1)
		{
			*st = 2;
		}
		else
		{
			do
			{
				*st = rand() % 4;
			} while (*st == 0 || *st == 1 && (shotC[*pol] == 0 || *(pol) % 10 == 0) || *st == 2 && (shotC[*(pol)-1 + 10] == 0 || *(pol) > 90) || *st == 3 && (shotC[*(pol)-1 - 1] == 0 || *(pol) % 10 == 1));
		}
	}
	else if (*st == 1)
	{
		for (int g = 0; g < 4; g++)
		{
			if (ship4[0][g] == *(pol)+1 * *pr)
			{
				ship4[1][g] = 0;
				shotC[*(pol)-1 + 1 * *pr] = 0;
				int st1;
				if (ship4[0][g] % 10 != 0)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 1;
				}
				else
				{
					*st = 3;
				}
				for (int c = 0; c < 4; c++)
				{
					if (ship4[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 1;
					*pr = 0;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 4; c++)
					{
						if (ship4[0][c] % 10 != 1)
						{
							shotC[ship4[0][c] - 1 - 1] = 0;
						}
						if (ship4[0][c] > 10)
						{
							shotC[ship4[0][c] - 1 - 10] = 0;
						}
						if (ship4[0][c] % 10 != 1 && ship4[0][c] > 10)
						{
							shotC[ship4[0][c] - 1 - 11] = 0;
						}
						if (ship4[0][c] % 10 != 0 && ship4[0][c] > 10)
						{
							shotC[ship4[0][c] - 1 - 9] = 0;
						}
						if (ship4[0][c] % 10 != 0)
						{
							shotC[ship4[0][c] - 1 + 1] = 0;
						}
						if (ship4[0][c] < 91)
						{
							shotC[ship4[0][c] - 1 + 10] = 0;
						}
						if (ship4[0][c] < 91 && ship4[0][c] % 10 != 0)
						{
							shotC[ship4[0][c] - 1 + 11] = 0;
						}
						if (ship4[0][c] < 91 && ship4[0][c] % 10 != 1)
						{
							shotC[ship4[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*pr += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)+1 * *pr - 1] = 3;
			}
		}
		for (int g = 0; g < 3; g++)
		{
			if (ship3_1[0][g] == *(pol)+1 * *pr)
			{
				ship3_1[1][g] = 0;
				shotC[*(pol)-1 + 1 * *pr] = 0;
				int st1;
				if (ship3_1[0][g] % 10 != 0)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 1;
				}
				else
				{
					*st = 3;
				}
				for (int c = 0; c < 3; c++)
				{
					if (ship3_1[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 1;
					*pr = 0;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 3; c++)
					{
						if (ship3_1[0][c] % 10 != 1)
						{
							shotC[ship3_1[0][c] - 1 - 1] = 0;
						}
						if (ship3_1[0][c] > 10)
						{
							shotC[ship3_1[0][c] - 1 - 10] = 0;
						}
						if (ship3_1[0][c] % 10 != 1 && ship3_1[0][c] > 10)
						{
							shotC[ship3_1[0][c] - 1 - 11] = 0;
						}
						if (ship3_1[0][c] % 10 != 0 && ship3_1[0][c] > 10)
						{
							shotC[ship3_1[0][c] - 1 - 9] = 0;
						}
						if (ship3_1[0][c] % 10 != 0)
						{
							shotC[ship3_1[0][c] - 1 + 1] = 0;
						}
						if (ship3_1[0][c] < 91)
						{
							shotC[ship3_1[0][c] - 1 + 10] = 0;
						}
						if (ship3_1[0][c] < 91 && ship3_1[0][c] % 10 != 0)
						{
							shotC[ship3_1[0][c] - 1 + 11] = 0;
						}
						if (ship3_1[0][c] < 91 && ship3_1[0][c] % 10 != 1)
						{
							shotC[ship3_1[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*pr += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)+1 * *pr - 1] = 3;
			}
		}
		for (int g = 0; g < 3; g++)
		{
			if (ship3_2[0][g] == *(pol)+1 * *pr)
			{
				ship3_2[1][g] = 0;
				shotC[*(pol)-1 + 1 * *pr] = 0;
				int st1;
				if (ship3_2[0][g] % 10 != 0)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 1;
				}
				else
				{
					*st = 3;
				}
				for (int c = 0; c < 3; c++)
				{
					if (ship3_2[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 1;
					*pr = 0;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 3; c++)
					{
						if (ship3_2[0][c] % 10 != 1)
						{
							shotC[ship3_2[0][c] - 1 - 1] = 0;
						}
						if (ship3_2[0][c] > 10)
						{
							shotC[ship3_2[0][c] - 1 - 10] = 0;
						}
						if (ship3_2[0][c] % 10 != 1 && ship3_2[0][c] > 10)
						{
							shotC[ship3_2[0][c] - 1 - 11] = 0;
						}
						if (ship3_2[0][c] % 10 != 0 && ship3_2[0][c] > 10)
						{
							shotC[ship3_2[0][c] - 1 - 9] = 0;
						}
						if (ship3_2[0][c] % 10 != 0)
						{
							shotC[ship3_2[0][c] - 1 + 1] = 0;
						}
						if (ship3_2[0][c] < 91)
						{
							shotC[ship3_2[0][c] - 1 + 10] = 0;
						}
						if (ship3_2[0][c] < 91 && ship3_2[0][c] % 10 != 0)
						{
							shotC[ship3_2[0][c] - 1 + 11] = 0;
						}
						if (ship3_2[0][c] < 91 && ship3_2[0][c] % 10 != 1)
						{
							shotC[ship3_2[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*pr += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)+1 * *pr - 1] = 3;
			}
		}
		for (int g = 0; g < 2; g++)
		{
			if (ship2_1[0][g] == *(pol)+1 * *pr)
			{
				ship2_1[1][g] = 0;
				shotC[*(pol)-1 + 1 * *pr] = 0;
				int st1;
				if (ship2_1[0][g] % 10 != 0)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 1;
				}
				else
				{
					*st = 3;
				}
				for (int c = 0; c < 2; c++)
				{
					if (ship2_1[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 1;
					*pr = 0;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 2; c++)
					{
						if (ship2_1[0][c] % 10 != 1)
						{
							shotC[ship2_1[0][c] - 1 - 1] = 0;
						}
						if (ship2_1[0][c] > 10)
						{
							shotC[ship2_1[0][c] - 1 - 10] = 0;
						}
						if (ship2_1[0][c] % 10 != 1 && ship2_1[0][c] > 10)
						{
							shotC[ship2_1[0][c] - 1 - 11] = 0;
						}
						if (ship2_1[0][c] % 10 != 0 && ship2_1[0][c] > 10)
						{
							shotC[ship2_1[0][c] - 1 - 9] = 0;
						}
						if (ship2_1[0][c] % 10 != 0)
						{
							shotC[ship2_1[0][c] - 1 + 1] = 0;
						}
						if (ship2_1[0][c] < 91)
						{
							shotC[ship2_1[0][c] - 1 + 10] = 0;
						}
						if (ship2_1[0][c] < 91 && ship2_1[0][c] % 10 != 0)
						{
							shotC[ship2_1[0][c] - 1 + 11] = 0;
						}
						if (ship2_1[0][c] < 91 && ship2_1[0][c] % 10 != 1)
						{
							shotC[ship2_1[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*pr += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)+1 * *pr - 1] = 3;
			}
		}
		for (int g = 0; g < 2; g++)
		{
			if (ship2_2[0][g] == *(pol)+1 * *pr)
			{
				ship2_2[1][g] = 0;
				shotC[*(pol)-1 + 1 * *pr] = 0;
				int st1;
				if (ship2_2[0][g] % 10 != 0)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 1;
				}
				else
				{
					*st = 3;
				}
				for (int c = 0; c < 2; c++)
				{
					if (ship2_2[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 1;
					*pr = 0;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 2; c++)
					{
						if (ship2_2[0][c] % 10 != 1)
						{
							shotC[ship2_2[0][c] - 1 - 1] = 0;
						}
						if (ship2_2[0][c] > 10)
						{
							shotC[ship2_2[0][c] - 1 - 10] = 0;
						}
						if (ship2_2[0][c] % 10 != 1 && ship2_2[0][c] > 10)
						{
							shotC[ship2_2[0][c] - 1 - 11] = 0;
						}
						if (ship2_2[0][c] % 10 != 0 && ship2_2[0][c] > 10)
						{
							shotC[ship2_2[0][c] - 1 - 9] = 0;
						}
						if (ship2_2[0][c] % 10 != 0)
						{
							shotC[ship2_2[0][c] - 1 + 1] = 0;
						}
						if (ship2_2[0][c] < 91)
						{
							shotC[ship2_2[0][c] - 1 + 10] = 0;
						}
						if (ship2_2[0][c] < 91 && ship2_2[0][c] % 10 != 0)
						{
							shotC[ship2_2[0][c] - 1 + 11] = 0;
						}
						if (ship2_2[0][c] < 91 && ship2_2[0][c] % 10 != 1)
						{
							shotC[ship2_2[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*pr += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)+1 * *pr - 1] = 3;
			}
		}
		for (int g = 0; g < 2; g++)
		{
			if (ship2_3[0][g] == *(pol)+1 * *pr)
			{
				ship2_3[1][g] = 0;
				shotC[*(pol)-1 + 1 * *pr] = 0;
				int st1;
				if (ship2_3[0][g] % 10 != 0)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 1;
				}
				else
				{
					*st = 3;
				}
				for (int c = 0; c < 2; c++)
				{
					if (ship2_3[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 1;
					*pr = 0;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 2; c++)
					{
						if (ship2_3[0][c] % 10 != 1)
						{
							shotC[ship2_3[0][c] - 1 - 1] = 0;
						}
						if (ship2_3[0][c] > 10)
						{
							shotC[ship2_3[0][c] - 1 - 10] = 0;
						}
						if (ship2_3[0][c] % 10 != 1 && ship2_3[0][c] > 10)
						{
							shotC[ship2_3[0][c] - 1 - 11] = 0;
						}
						if (ship2_3[0][c] % 10 != 0 && ship2_3[0][c] > 10)
						{
							shotC[ship2_3[0][c] - 1 - 9] = 0;
						}
						if (ship2_3[0][c] % 10 != 0)
						{
							shotC[ship2_3[0][c] - 1 + 1] = 0;
						}
						if (ship2_3[0][c] < 91)
						{
							shotC[ship2_3[0][c] - 1 + 10] = 0;
						}
						if (ship2_3[0][c] < 91 && ship2_3[0][c] % 10 != 0)
						{
							shotC[ship2_3[0][c] - 1 + 11] = 0;
						}
						if (ship2_3[0][c] < 91 && ship2_3[0][c] % 10 != 1)
						{
							shotC[ship2_3[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*pr += 1;
				return p;;
			}
			else
			{
				*w = 0;
				shotC[*(pol)+1 * *pr - 1] = 3;
			}
		}
		if (*pr > 1)
		{
			*st = 3;
		}
		else
		{
			do
			{
				*st = rand() % 4;
			} while (*st == 1 || *st == 0 && (shotC[*(pol)-1 - 10] == 0 || *(pol) <= 10) || *st == 2 && (shotC[*(pol)-1 + 10] == 0 || *(pol) > 90) || *st == 3 && (shotC[*(pol)-1 - 1] == 0 || *(pol) % 10 == 1));
		}
	}
	else if (*st == 2)
	{
		for (int g = 0; g < 4; g++)
		{
			if (ship4[0][g] == *(pol)+10 * *nz)
			{
				ship4[1][g] = 0;
				shotC[*(pol)-1 + 10 * *nz] = 0;
				int st1;
				if (ship4[0][g] < 91)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 2;
				}
				else
				{
					*st = 0;
				}
				for (int c = 0; c < 4; c++)
				{
					if (ship4[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 0;
					*pr = 1;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 4; c++)
					{
						if (ship4[0][c] % 10 != 1)
						{
							shotC[ship4[0][c] - 1 - 1] = 0;
						}
						if (ship4[0][c] > 10)
						{
							shotC[ship4[0][c] - 1 - 10] = 0;
						}
						if (ship4[0][c] % 10 != 1 && ship4[0][c] > 10)
						{
							shotC[ship4[0][c] - 1 - 11] = 0;
						}
						if (ship4[0][c] % 10 != 0 && ship4[0][c] > 10)
						{
							shotC[ship4[0][c] - 1 - 9] = 0;
						}
						if (ship4[0][c] % 10 != 0)
						{
							shotC[ship4[0][c] - 1 + 1] = 0;
						}
						if (ship4[0][c] < 91)
						{
							shotC[ship4[0][c] - 1 + 10] = 0;
						}
						if (ship4[0][c] < 91 && ship4[0][c] % 10 != 0)
						{
							shotC[ship4[0][c] - 1 + 11] = 0;
						}
						if (ship4[0][c] < 91 && ship4[0][c] % 10 != 1)
						{
							shotC[ship4[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*nz += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)+10 * *nz - 1] = 3;
			}
		}
		for (int g = 0; g < 3; g++)
		{
			if (ship3_1[0][g] == *(pol)+10 * *nz)
			{
				ship3_1[1][g] = 0;
				shotC[*(pol)-1 + 10 * *nz] = 0;
				int st1;
				if (ship3_1[0][g] < 91)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 2;
				}
				else
				{
					*st = 0;
				}
				for (int c = 0; c < 3; c++)
				{
					if (ship3_1[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 0;
					*pr = 1;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 3; c++)
					{
						if (ship3_1[0][c] % 10 != 1)
						{
							shotC[ship3_1[0][c] - 1 - 1] = 0;
						}
						if (ship3_1[0][c] > 10)
						{
							shotC[ship3_1[0][c] - 1 - 10] = 0;
						}
						if (ship3_1[0][c] % 10 != 1 && ship3_1[0][c] > 10)
						{
							shotC[ship3_1[0][c] - 1 - 11] = 0;
						}
						if (ship3_1[0][c] % 10 != 0 && ship3_1[0][c] > 10)
						{
							shotC[ship3_1[0][c] - 1 - 9] = 0;
						}
						if (ship3_1[0][c] % 10 != 0)
						{
							shotC[ship3_1[0][c] - 1 + 1] = 0;
						}
						if (ship3_1[0][c] < 91)
						{
							shotC[ship3_1[0][c] - 1 + 10] = 0;
						}
						if (ship3_1[0][c] < 91 && ship3_1[0][c] % 10 != 0)
						{
							shotC[ship3_1[0][c] - 1 + 11] = 0;
						}
						if (ship3_1[0][c] < 91 && ship3_1[0][c] % 10 != 1)
						{
							shotC[ship3_1[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*nz += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)+10 * *nz - 1] = 3;
			}
		}
		for (int g = 0; g < 3; g++)
		{
			if (ship3_2[0][g] == *(pol)+10 * *nz)
			{
				ship3_2[1][g] = 0;
				shotC[*(pol)-1 + 10 * *nz] = 0;
				int st1;
				if (ship3_2[0][g] < 91)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 2;
				}
				else
				{
					*st = 0;
				}
				for (int c = 0; c < 3; c++)
				{
					if (ship3_2[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 0;
					*pr = 1;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 3; c++)
					{
						if (ship3_2[0][c] % 10 != 1)
						{
							shotC[ship3_2[0][c] - 1 - 1] = 0;
						}
						if (ship3_2[0][c] > 10)
						{
							shotC[ship3_2[0][c] - 1 - 10] = 0;
						}
						if (ship3_2[0][c] % 10 != 1 && ship3_2[0][c] > 10)
						{
							shotC[ship3_2[0][c] - 1 - 11] = 0;
						}
						if (ship3_2[0][c] % 10 != 0 && ship3_2[0][c] > 10)
						{
							shotC[ship3_2[0][c] - 1 - 9] = 0;
						}
						if (ship3_2[0][c] % 10 != 0)
						{
							shotC[ship3_2[0][c] - 1 + 1] = 0;
						}
						if (ship3_2[0][c] < 91)
						{
							shotC[ship3_2[0][c] - 1 + 10] = 0;
						}
						if (ship3_2[0][c] < 91 && ship3_2[0][c] % 10 != 0)
						{
							shotC[ship3_2[0][c] - 1 + 11] = 0;
						}
						if (ship3_2[0][c] < 91 && ship3_2[0][c] % 10 != 1)
						{
							shotC[ship3_2[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*nz += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)+10 * *nz - 1] = 3;
			}
		}
		for (int g = 0; g < 2; g++)
		{
			if (ship2_1[0][g] == *(pol)+10 * *nz)
			{
				ship2_1[1][g] = 0;
				shotC[*(pol)-1 + 10 * *nz] = 0;
				int st1;
				if (ship2_1[0][g] < 91)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 2;
				}
				else
				{
					*st = 0;
				}
				for (int c = 0; c < 2; c++)
				{
					if (ship2_1[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 0;
					*pr = 1;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 2; c++)
					{
						if (ship2_1[0][c] % 10 != 1)
						{
							shotC[ship2_1[0][c] - 1 - 1] = 0;
						}
						if (ship2_1[0][c] > 10)
						{
							shotC[ship2_1[0][c] - 1 - 10] = 0;
						}
						if (ship2_1[0][c] % 10 != 1 && ship2_1[0][c] > 10)
						{
							shotC[ship2_1[0][c] - 1 - 11] = 0;
						}
						if (ship2_1[0][c] % 10 != 0 && ship2_1[0][c] > 10)
						{
							shotC[ship2_1[0][c] - 1 - 9] = 0;
						}
						if (ship2_1[0][c] % 10 != 0)
						{
							shotC[ship2_1[0][c] - 1 + 1] = 0;
						}
						if (ship2_1[0][c] < 91)
						{
							shotC[ship2_1[0][c] - 1 + 10] = 0;
						}
						if (ship2_1[0][c] < 91 && ship2_1[0][c] % 10 != 0)
						{
							shotC[ship2_1[0][c] - 1 + 11] = 0;
						}
						if (ship2_1[0][c] < 91 && ship2_1[0][c] % 10 != 1)
						{
							shotC[ship2_1[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*nz += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)+10 * *nz - 1] = 3;
			}
		}
		for (int g = 0; g < 2; g++)
		{
			if (ship2_2[0][g] == *(pol)+10 * *nz)
			{
				ship2_2[1][g] = 0;
				shotC[*(pol)-1 + 10 * *nz] = 0;
				int st1;
				if (ship2_2[0][g] < 91)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 2;
				}
				else
				{
					*st = 0;
				}
				for (int c = 0; c < 2; c++)
				{
					if (ship2_2[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 0;
					*pr = 1;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 2; c++)
					{
						if (ship2_2[0][c] % 10 != 1)
						{
							shotC[ship2_2[0][c] - 1 - 1] = 0;
						}
						if (ship2_2[0][c] > 10)
						{
							shotC[ship2_2[0][c] - 1 - 10] = 0;
						}
						if (ship2_2[0][c] % 10 != 1 && ship2_2[0][c] > 10)
						{
							shotC[ship2_2[0][c] - 1 - 11] = 0;
						}
						if (ship2_2[0][c] % 10 != 0 && ship2_2[0][c] > 10)
						{
							shotC[ship2_2[0][c] - 1 - 9] = 0;
						}
						if (ship2_2[0][c] % 10 != 0)
						{
							shotC[ship2_2[0][c] - 1 + 1] = 0;
						}
						if (ship2_2[0][c] < 91)
						{
							shotC[ship2_2[0][c] - 1 + 10] = 0;
						}
						if (ship2_2[0][c] < 91 && ship2_2[0][c] % 10 != 0)
						{
							shotC[ship2_2[0][c] - 1 + 11] = 0;
						}
						if (ship2_2[0][c] < 91 && ship2_2[0][c] % 10 != 1)
						{
							shotC[ship2_2[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*nz += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)+10 * *nz - 1] = 3;
			}
		}
		for (int g = 0; g < 2; g++)
		{
			if (ship2_3[0][g] == *(pol)+10 * *nz)
			{
				ship2_3[1][g] = 0;
				shotC[*(pol)-1 + 10 * *nz] = 0;
				int st1;
				if (ship2_3[0][g] < 91)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 2;
				}
				else
				{
					*st = 0;
				}
				for (int c = 0; c < 2; c++)
				{
					if (ship2_3[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 1;
					*nz = 0;
					*pr = 1;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 2; c++)
					{
						if (ship2_3[0][c] % 10 != 1)
						{
							shotC[ship2_3[0][c] - 1 - 1] = 0;
						}
						if (ship2_3[0][c] > 10)
						{
							shotC[ship2_3[0][c] - 1 - 10] = 0;
						}
						if (ship2_3[0][c] % 10 != 1 && ship2_3[0][c] > 10)
						{
							shotC[ship2_3[0][c] - 1 - 11] = 0;
						}
						if (ship2_3[0][c] % 10 != 0 && ship2_3[0][c] > 10)
						{
							shotC[ship2_3[0][c] - 1 - 9] = 0;
						}
						if (ship2_3[0][c] % 10 != 0)
						{
							shotC[ship2_3[0][c] - 1 + 1] = 0;
						}
						if (ship2_3[0][c] < 91)
						{
							shotC[ship2_3[0][c] - 1 + 10] = 0;
						}
						if (ship2_3[0][c] < 91 && ship2_3[0][c] % 10 != 0)
						{
							shotC[ship2_3[0][c] - 1 + 11] = 0;
						}
						if (ship2_3[0][c] < 91 && ship2_3[0][c] % 10 != 1)
						{
							shotC[ship2_3[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*nz += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)+10 * *nz - 1] = 3;
			}
		}
		if (*nz > 1)
		{
			*st = 0;
		}
		else
		{
			do
			{
				*st = rand() % 4;
			} while (*st == 2 || *st == 0 && (shotC[*(pol)-1 - 10] == 0 || *(pol) <= 10) || *st == 1 && (shotC[*(pol)] == 0 || *(pol) % 10 == 0) || *st == 3 && (shotC[*(pol)-1 - 1] == 0 || *(pol) % 10 == 1));
		}
	}
	else if (*st == 3)
	{
		for (int g = 0; g < 4; g++)
		{
			if (ship4[0][g] == *(pol)-1 * *lv)
			{
				ship4[1][g] = 0;
				shotC[*(pol)-1 - 1 * *lv] = 0;
				int st1;
				if (ship4[0][g] % 10 != 1)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 3;
				}
				else
				{
					*st = 1;
				}
				for (int c = 0; c < 4; c++)
				{
					if (ship4[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 0;
					*nz = 1;
					*pr = 1;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 4; c++)
					{
						if (ship4[0][c] % 10 != 1)
						{
							shotC[ship4[0][c] - 1 - 1] = 0;
						}
						if (ship4[0][c] > 10)
						{
							shotC[ship4[0][c] - 1 - 10] = 0;
						}
						if (ship4[0][c] % 10 != 1 && ship4[0][c] > 10)
						{
							shotC[ship4[0][c] - 1 - 11] = 0;
						}
						if (ship4[0][c] % 10 != 0 && ship4[0][c] > 10)
						{
							shotC[ship4[0][c] - 1 - 9] = 0;
						}
						if (ship4[0][c] % 10 != 0)
						{
							shotC[ship4[0][c] - 1 + 1] = 0;
						}
						if (ship4[0][c] < 91)
						{
							shotC[ship4[0][c] - 1 + 10] = 0;
						}
						if (ship4[0][c] < 91 && ship4[0][c] % 10 != 0)
						{
							shotC[ship4[0][c] - 1 + 11] = 0;
						}
						if (ship4[0][c] < 91 && ship4[0][c] % 10 != 1)
						{
							shotC[ship4[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*lv += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)-1 * *lv - 1] = 3;
			}
		}
		for (int g = 0; g < 3; g++)
		{
			if (ship3_1[0][g] == *(pol)-1 * *lv)
			{
				ship3_1[1][g] = 0;
				shotC[*(pol)-1 - 1 * *lv] = 0;
				int st1;
				if (ship3_1[0][g] % 10 != 1)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 3;
				}
				else
				{
					*st = 1;
				}
				for (int c = 0; c < 3; c++)
				{
					if (ship3_1[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 0;
					*nz = 1;
					*pr = 1;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 3; c++)
					{
						if (ship3_1[0][c] % 10 != 1)
						{
							shotC[ship3_1[0][c] - 1 - 1] = 0;
						}
						if (ship3_1[0][c] > 10)
						{
							shotC[ship3_1[0][c] - 1 - 10] = 0;
						}
						if (ship3_1[0][c] % 10 != 1 && ship3_1[0][c] > 10)
						{
							shotC[ship3_1[0][c] - 1 - 11] = 0;
						}
						if (ship3_1[0][c] % 10 != 0 && ship3_1[0][c] > 10)
						{
							shotC[ship3_1[0][c] - 1 - 9] = 0;
						}
						if (ship3_1[0][c] % 10 != 0)
						{
							shotC[ship3_1[0][c] - 1 + 1] = 0;
						}
						if (ship3_1[0][c] < 91)
						{
							shotC[ship3_1[0][c] - 1 + 10] = 0;
						}
						if (ship3_1[0][c] < 91 && ship3_1[0][c] % 10 != 0)
						{
							shotC[ship3_1[0][c] - 1 + 11] = 0;
						}
						if (ship3_1[0][c] < 91 && ship3_1[0][c] % 10 != 1)
						{
							shotC[ship3_1[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*lv += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)-1 * *lv - 1] = 3;
			}
		}
		for (int g = 0; g < 3; g++)
		{
			if (ship3_2[0][g] == *(pol)-1 * *lv)
			{
				ship3_2[1][g] = 0;
				shotC[*(pol)-1 - 1 * *lv] = 0;
				int st1;
				if (ship3_2[0][g] % 10 != 1)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 3;
				}
				else
				{
					*st = 1;
				}
				for (int c = 0; c < 3; c++)
				{
					if (ship3_2[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 0;
					*nz = 1;
					*pr = 1;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 3; c++)
					{
						if (ship3_2[0][c] % 10 != 1)
						{
							shotC[ship3_2[0][c] - 1 - 1] = 0;
						}
						if (ship3_2[0][c] > 10)
						{
							shotC[ship3_2[0][c] - 1 - 10] = 0;
						}
						if (ship3_2[0][c] % 10 != 1 && ship3_2[0][c] > 10)
						{
							shotC[ship3_2[0][c] - 1 - 11] = 0;
						}
						if (ship3_2[0][c] % 10 != 0 && ship3_2[0][c] > 10)
						{
							shotC[ship3_2[0][c] - 1 - 9] = 0;
						}
						if (ship3_2[0][c] % 10 != 0)
						{
							shotC[ship3_2[0][c] - 1 + 1] = 0;
						}
						if (ship3_2[0][c] < 91)
						{
							shotC[ship3_2[0][c] - 1 + 10] = 0;
						}
						if (ship3_2[0][c] < 91 && ship3_2[0][c] % 10 != 0)
						{
							shotC[ship3_2[0][c] - 1 + 11] = 0;
						}
						if (ship3_2[0][c] < 91 && ship3_2[0][c] % 10 != 1)
						{
							shotC[ship3_2[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*lv += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)-1 * *lv - 1] = 3;
			}
		}
		for (int g = 0; g < 2; g++)
		{
			if (ship2_1[0][g] == *(pol)-1 * *lv)
			{
				ship2_1[1][g] = 0;
				shotC[*(pol)-1 - 1 * *lv] = 0;
				int st1;
				if (ship2_1[0][g] % 10 != 1)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 3;
				}
				else
				{
					*st = 1;
				}
				for (int c = 0; c < 2; c++)
				{
					if (ship2_1[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 0;
					*nz = 1;
					*pr = 1;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 2; c++)
					{
						if (ship2_1[0][c] % 10 != 1)
						{
							shotC[ship2_1[0][c] - 1 - 1] = 0;
						}
						if (ship2_1[0][c] > 10)
						{
							shotC[ship2_1[0][c] - 1 - 10] = 0;
						}
						if (ship2_1[0][c] % 10 != 1 && ship2_1[0][c] > 10)
						{
							shotC[ship2_1[0][c] - 1 - 11] = 0;
						}
						if (ship2_1[0][c] % 10 != 0 && ship2_1[0][c] > 10)
						{
							shotC[ship2_1[0][c] - 1 - 9] = 0;
						}
						if (ship2_1[0][c] % 10 != 0)
						{
							shotC[ship2_1[0][c] - 1 + 1] = 0;
						}
						if (ship2_1[0][c] < 91)
						{
							shotC[ship2_1[0][c] - 1 + 10] = 0;
						}
						if (ship2_1[0][c] < 91 && ship2_1[0][c] % 10 != 0)
						{
							shotC[ship2_1[0][c] - 1 + 11] = 0;
						}
						if (ship2_1[0][c] < 91 && ship2_1[0][c] % 10 != 1)
						{
							shotC[ship2_1[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*lv += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)-1 * *lv - 1] = 3;
			}
		}
		for (int g = 0; g < 2; g++)
		{
			if (ship2_2[0][g] == *(pol)-1 * *lv)
			{
				ship2_2[1][g] = 0;
				shotC[*(pol)-1 - 1 * *lv] = 0;
				int st1;
				if (ship2_2[0][g] % 10 != 1)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 3;
				}
				else
				{
					*st = 1;
				}
				for (int c = 0; c < 2; c++)
				{
					if (ship2_2[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 0;
					*nz = 1;
					*pr = 1;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 2; c++)
					{
						if (ship2_2[0][c] % 10 != 1)
						{
							shotC[ship2_2[0][c] - 1 - 1] = 0;
						}
						if (ship2_2[0][c] > 10)
						{
							shotC[ship2_2[0][c] - 1 - 10] = 0;
						}
						if (ship2_2[0][c] % 10 != 1 && ship2_2[0][c] > 10)
						{
							shotC[ship2_2[0][c] - 1 - 11] = 0;
						}
						if (ship2_2[0][c] % 10 != 0 && ship2_2[0][c] > 10)
						{
							shotC[ship2_2[0][c] - 1 - 9] = 0;
						}
						if (ship2_2[0][c] % 10 != 0)
						{
							shotC[ship2_2[0][c] - 1 + 1] = 0;
						}
						if (ship2_2[0][c] < 91)
						{
							shotC[ship2_2[0][c] - 1 + 10] = 0;
						}
						if (ship2_2[0][c] < 91 && ship2_2[0][c] % 10 != 0)
						{
							shotC[ship2_2[0][c] - 1 + 11] = 0;
						}
						if (ship2_2[0][c] < 91 && ship2_2[0][c] % 10 != 1)
						{
							shotC[ship2_2[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*lv += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)-1 * *lv - 1] = 3;
			}
		}
		for (int g = 0; g < 2; g++)
		{
			if (ship2_3[0][g] == *(pol)-1 * *lv)
			{
				ship2_3[1][g] = 0;
				shotC[*(pol)-1 - 1 * *lv] = 0;
				int st1;
				if (ship2_3[0][g] % 10 != 1)
				{
					st1 = 0;
				}
				else
				{
					st1 = 1;
				}
				if (st1 == 0)
				{
					*st = 3;
				}
				else
				{
					*st = 1;
				}
				for (int c = 0; c < 2; c++)
				{
					if (ship2_3[1][c] == 1)
					{
						p = 1;
						break;
					}
					p = 0;
				}
				if (p == 0)
				{
					*lv = 0;
					*nz = 1;
					*pr = 1;
					*vr = 1;
					*st = -1;
					for (int c = 0; c < 2; c++)
					{
						if (ship2_3[0][c] % 10 != 1)
						{
							shotC[ship2_3[0][c] - 1 - 1] = 0;
						}
						if (ship2_3[0][c] > 10)
						{
							shotC[ship2_3[0][c] - 1 - 10] = 0;
						}
						if (ship2_3[0][c] % 10 != 1 && ship2_3[0][c] > 10)
						{
							shotC[ship2_3[0][c] - 1 - 11] = 0;
						}
						if (ship2_3[0][c] % 10 != 0 && ship2_3[0][c] > 10)
						{
							shotC[ship2_3[0][c] - 1 - 9] = 0;
						}
						if (ship2_3[0][c] % 10 != 0)
						{
							shotC[ship2_3[0][c] - 1 + 1] = 0;
						}
						if (ship2_3[0][c] < 91)
						{
							shotC[ship2_3[0][c] - 1 + 10] = 0;
						}
						if (ship2_3[0][c] < 91 && ship2_3[0][c] % 10 != 0)
						{
							shotC[ship2_3[0][c] - 1 + 11] = 0;
						}
						if (ship2_3[0][c] < 91 && ship2_3[0][c] % 10 != 1)
						{
							shotC[ship2_3[0][c] - 1 + 9] = 0;
						}
					}
				}
				*w = 1;
				*lv += 1;
				return p;
			}
			else
			{
				*w = 0;
				shotC[*(pol)-1 * *lv - 1] = 3;
			}
		}
		if (*lv > 1)
		{
			*st = 1;
		}
		else
		{
			do
			{
				*st = rand() % 4;
			} while (*st == 3 || *st == 0 && (shotC[*(pol)-1 - 10] == 0 || *(pol) <= 10) || *st == 1 && (shotC[*(pol)] == 0 || *(pol) % 10 == 0) || *st == 2 && (shotC[*(pol)-1 + 10] == 0 || *(pol) > 90));
		}
	}
	return p;
}

void game(int ship4[2][4], int ship3_1[2][3], int ship3_2[2][3], int ship2_1[2][2], int ship2_2[2][2], int ship2_3[2][2], int ship1_1[2][1], int ship1_2[2][1], int ship1_3[2][1], int ship1_4[2][1], int Ship4[2][4], int Ship3_1[2][3], int Ship3_2[2][3], int Ship2_1[2][2], int Ship2_2[2][2], int Ship2_3[2][2], int Ship1_1[2][1], int Ship1_2[2][1], int Ship1_3[2][1], int Ship1_4[2][1], int shotH[100], int shotC[100], int* pr, int* lv, int* vr, int* nz)
{
	int st = -1, pol = 0;
	int finishC = 0, finishH = 0;
	for (int k = 0, p = 0, w = 0; ; k++)
	{
		int* w1 = &w;
		if (p != 0)
		{
			k--;
		}
		else
		{
			if (k <= 9)
			{
				pol = 1 + 11 * k;
				while (shotC[pol - 1] == 0 || shotC[pol - 1] == 3)
				{
					k++;
					if (k > 9)
					{
						pol = 10 + 9 * (k - 10);
					}
					else
					{
						pol = 1 + 11 * k;
					}
				}
			}
			else if (k <= 19)
			{
				pol = 10 + 9 * (k - 10);
				while (shotC[pol - 1] == 0 || shotC[pol - 1] == 3)
				{
					k++;
					if (k > 19)
					{
						pol = rand() % 100 + 1;
					}
					else
					{
						pol = 10 + 9 * (k - 10);
					}
				}
			}
			else
			{
				while (shotC[pol - 1] == 0 || shotC[pol - 1] == 3)
				{
					pol = rand() % 100 + 1;
				}
			}
		}
		if (w == 0)
		{
			for (int d = 0; d != 1;)
			{
				fieldAll(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4, Ship4, Ship3_1, Ship3_2, Ship2_1, Ship2_2, Ship2_3, Ship1_1, Ship1_2, Ship1_3, Ship1_4, shotH, shotC);
				SetConsoleCursorPosition(hCon, cPos);
				int code = _getch();
				if (code == 224)
				{
					code = _getch();
				}
				else if (code == 13)
				{
					int Hpos = 10 * (cPos.Y / 2 - 1) + ((cPos.X - 2) / 4 + 1);
					if (shotH[Hpos - 1] == 0)
					{
						cout << "Error!";
					}
					else
					{
						shotH[Hpos - 1] = 0;
						if (pois(Ship4, Ship3_1, Ship3_2, Ship2_1, Ship2_2, Ship2_3, Ship1_1, Ship1_2, Ship1_3, Ship1_4, Hpos))
						{
							d = 0;
							for (int g = 0; g < 4; g++)
							{
								if (Ship4[0][g] == Hpos)
								{
									Ship4[1][g] = 0;
									shotH[Hpos - 1] = 0;
								}
							}
							for (int g = 0; g < 3; g++)
							{
								if (Ship3_1[0][g] == Hpos)
								{
									Ship3_1[1][g] = 0;
									shotH[Hpos - 1] = 0;
								}
							}
							for (int g = 0; g < 3; g++)
							{
								if (Ship3_2[0][g] == Hpos)
								{
									Ship3_2[1][g] = 0;
									shotH[Hpos - 1] = 0;
								}
							}
							for (int g = 0; g < 2; g++)
							{
								if (Ship2_1[0][g] == Hpos)
								{
									Ship2_1[1][g] = 0;
									shotH[Hpos - 1] = 0;
								}
							}
							for (int g = 0; g < 2; g++)
							{
								if (Ship2_2[0][g] == Hpos)
								{
									Ship2_2[1][g] = 0;
									shotH[Hpos - 1] = 0;
								}
							}
							for (int g = 0; g < 2; g++)
							{
								if (Ship2_3[0][g] == Hpos)
								{
									Ship2_3[1][g] = 0;
									shotH[Hpos - 1] = 0;
								}
							}
							if (Ship1_1[0][0] == Hpos)
							{
								Ship1_1[1][0] = 0;
								shotH[Hpos - 1] = 0;
								if (Hpos % 10 != 1)
								{
									shotH[Ship1_1[0][0] - 1 - 1] = 0;
								}
								if (Hpos > 10)
								{
									shotH[Ship1_1[0][0] - 1 - 10] = 0;
								}
								if (Hpos % 10 != 1 && Hpos > 10)
								{
									shotH[Ship1_1[0][0] - 1 - 11] = 0;
								}
								if (Hpos % 10 != 0 && Hpos > 10)
								{
									shotH[Ship1_1[0][0] - 1 - 9] = 0;
								}
								if (Hpos % 10 != 0)
								{
									shotH[Ship1_1[0][0] - 1 + 1] = 0;
								}
								if (Hpos < 91)
								{
									shotH[Ship1_1[0][0] - 1 + 10] = 0;
								}
								if (Hpos < 91 && Hpos % 10 != 0)
								{
									shotH[Ship1_1[0][0] - 1 + 11] = 0;
								}
								if (Hpos < 91 && Hpos % 10 != 1)
								{
									shotH[Ship1_1[0][0] - 1 + 9] = 0;
								}
							}
							if (Ship1_2[0][0] == Hpos)
							{
								Ship1_2[1][0] = 0;
								shotH[Hpos - 1] = 0;
								if (Hpos % 10 != 1)
								{
									shotH[Ship1_2[0][0] - 1 - 1] = 0;
								}
								if (Hpos > 10)
								{
									shotH[Ship1_2[0][0] - 1 - 10] = 0;
								}
								if (Hpos % 10 != 1 && Hpos > 10)
								{
									shotH[Ship1_2[0][0] - 1 - 11] = 0;
								}
								if (Hpos % 10 != 0 && Hpos > 10)
								{
									shotH[Ship1_2[0][0] - 1 - 9] = 0;
								}
								if (Hpos % 10 != 0)
								{
									shotH[Ship1_2[0][0] - 1 + 1] = 0;
								}
								if (Hpos < 91)
								{
									shotH[Ship1_2[0][0] - 1 + 10] = 0;
								}
								if (Hpos < 91 && Hpos % 10 != 0)
								{
									shotH[Ship1_2[0][0] - 1 + 11] = 0;
								}
								if (Hpos < 91 && Hpos % 10 != 1)
								{
									shotH[Ship1_2[0][0] - 1 + 9] = 0;
								}
							}
							if (Ship1_3[0][0] == Hpos)
							{
								Ship1_3[1][0] = 0;
								shotH[Hpos - 1] = 0;
								if (Hpos % 10 != 1)
								{
									shotH[Ship1_3[0][0] - 1 - 1] = 0;
								}
								if (Hpos > 10)
								{
									shotH[Ship1_3[0][0] - 1 - 10] = 0;
								}
								if (Hpos % 10 != 1 && Hpos > 10)
								{
									shotH[Ship1_3[0][0] - 1 - 11] = 0;
								}
								if (Hpos % 10 != 0 && Hpos > 10)
								{
									shotH[Ship1_3[0][0] - 1 - 9] = 0;
								}
								if (Hpos % 10 != 0)
								{
									shotH[Ship1_3[0][0] - 1 + 1] = 0;
								}
								if (Hpos < 91)
								{
									shotH[Ship1_3[0][0] - 1 + 10] = 0;
								}
								if (Hpos < 91 && Hpos % 10 != 0)
								{
									shotH[Ship1_3[0][0] - 1 + 11] = 0;
								}
								if (Hpos < 91 && Hpos % 10 != 1)
								{
									shotH[Ship1_3[0][0] - 1 + 9] = 0;
								}
							}
							if (Ship1_4[0][0] == Hpos)
							{
								Ship1_4[1][0] = 0;
								shotH[Hpos - 1] = 0;
								if (Hpos % 10 != 1)
								{
									shotH[Ship1_4[0][0] - 1 - 1] = 0;
								}
								if (Hpos > 10)
								{
									shotH[Ship1_4[0][0] - 1 - 10] = 0;
								}
								if (Hpos % 10 != 1 && Hpos > 10)
								{
									shotH[Ship1_4[0][0] - 1 - 11] = 0;
								}
								if (Hpos % 10 != 0 && Hpos > 10)
								{
									shotH[Ship1_4[0][0] - 1 - 9] = 0;
								}
								if (Hpos % 10 != 0)
								{
									shotH[Ship1_4[0][0] - 1 + 1] = 0;
								}
								if (Hpos < 91)
								{
									shotH[Ship1_4[0][0] - 1 + 10] = 0;
								}
								if (Hpos < 91 && Hpos % 10 != 0)
								{
									shotH[Ship1_4[0][0] - 1 + 11] = 0;
								}
								if (Hpos < 91 && Hpos % 10 != 1)
								{
									shotH[Ship1_4[0][0] - 1 + 9] = 0;
								}
							}
						}
						else
						{
							d = 1;
						}
					}
				}
				switch (code)
				{
				case 72:
					if (cPos.Y > 3)
					{
						cPos.Y -= moveDown;
					}
					break;
				case 77:
					if (cPos.X < 38)
					{
						cPos.X += moveRight;
					}
					break;
				case 75:
					if (cPos.X > 2)
					{
						cPos.X -= moveRight;
					}
					break;
				case 80:
					if (cPos.Y < 20)
					{
						cPos.Y += moveDown;
					}
					break;
				}
				system("cls");
				int x = 0;
				for (int m = 0; m < 4; m++)
				{
					if (Ship4[1][m] == 0)
					{
						x++;
					}
				}
				if (x == 4)
				{
					for (int c = 0; c < 4; c++)
					{
						if (Ship4[0][c] % 10 != 1)
						{
							shotH[Ship4[0][c] - 1 - 1] = 0;
						}
						if (Ship4[0][c] > 10)
						{
							shotH[Ship4[0][c] - 1 - 10] = 0;
						}
						if (Ship4[0][c] % 10 != 1 && Ship4[0][c] > 10)
						{
							shotH[Ship4[0][c] - 1 - 11] = 0;
						}
						if (Ship4[0][c] % 10 != 0 && Ship4[0][c] > 10)
						{
							shotH[Ship4[0][c] - 1 - 9] = 0;
						}
						if (Ship4[0][c] % 10 != 0)
						{
							shotH[Ship4[0][c] - 1 + 1] = 0;
						}
						if (Ship4[0][c] < 91)
						{
							shotH[Ship4[0][c] - 1 + 10] = 0;
						}
						if (Ship4[0][c] < 91 && Ship4[0][c] % 10 != 0)
						{
							shotH[Ship4[0][c] - 1 + 11] = 0;
						}
						if (Ship4[0][c] < 91 && Ship4[0][c] % 10 != 1)
						{
							shotH[Ship4[0][c] - 1 + 9] = 0;
						}
					}
				}
				x = 0;
				for (int m = 0; m < 3; m++)
				{
					if (Ship3_1[1][m] == 0)
					{
						x++;
					}
				}
				if (x == 3)
				{
					for (int c = 0; c < 3; c++)
					{
						if (Ship3_1[0][c] % 10 != 1)
						{
							shotH[Ship3_1[0][c] - 1 - 1] = 0;
						}
						if (Ship3_1[0][c] > 10)
						{
							shotH[Ship3_1[0][c] - 1 - 10] = 0;
						}
						if (Ship3_1[0][c] % 10 != 1 && Ship3_1[0][c] > 10)
						{
							shotH[Ship3_1[0][c] - 1 - 11] = 0;
						}
						if (Ship3_1[0][c] % 10 != 0 && Ship3_1[0][c] > 10)
						{
							shotH[Ship3_1[0][c] - 1 - 9] = 0;
						}
						if (Ship3_1[0][c] % 10 != 0)
						{
							shotH[Ship3_1[0][c] - 1 + 1] = 0;
						}
						if (Ship3_1[0][c] < 91)
						{
							shotH[Ship3_1[0][c] - 1 + 10] = 0;
						}
						if (Ship3_1[0][c] < 91 && Ship3_1[0][c] % 10 != 0)
						{
							shotH[Ship3_1[0][c] - 1 + 11] = 0;
						}
						if (Ship3_1[0][c] < 91 && Ship3_1[0][c] % 10 != 1)
						{
							shotH[Ship3_1[0][c] - 1 + 9] = 0;
						}
					}
				}
				x = 0;
				for (int m = 0; m < 3; m++)
				{
					if (Ship3_2[1][m] == 0)
					{
						x++;
					}
				}
				if (x == 3)
				{
					for (int c = 0; c < 3; c++)
					{
						if (Ship3_2[0][c] % 10 != 1)
						{
							shotH[Ship3_2[0][c] - 1 - 1] = 0;
						}
						if (Ship3_2[0][c] > 10)
						{
							shotH[Ship3_2[0][c] - 1 - 10] = 0;
						}
						if (Ship3_2[0][c] % 10 != 1 && Ship3_2[0][c] > 10)
						{
							shotH[Ship3_2[0][c] - 1 - 11] = 0;
						}
						if (Ship3_2[0][c] % 10 != 0 && Ship3_2[0][c] > 10)
						{
							shotH[Ship3_2[0][c] - 1 - 9] = 0;
						}
						if (Ship3_2[0][c] % 10 != 0)
						{
							shotH[Ship3_2[0][c] - 1 + 1] = 0;
						}
						if (Ship3_2[0][c] < 91)
						{
							shotH[Ship3_2[0][c] - 1 + 10] = 0;
						}
						if (Ship3_2[0][c] < 91 && Ship3_2[0][c] % 10 != 0)
						{
							shotH[Ship3_2[0][c] - 1 + 11] = 0;
						}
						if (Ship3_2[0][c] < 91 && Ship3_2[0][c] % 10 != 1)
						{
							shotH[Ship3_2[0][c] - 1 + 9] = 0;
						}
					}
				}
				x = 0;
				for (int m = 0; m < 2; m++)
				{
					if (Ship2_1[1][m] == 0)
					{
						x++;
					}
				}
				if (x == 2)
				{
					for (int c = 0; c < 2; c++)
					{
						if (Ship2_1[0][c] % 10 != 1)
						{
							shotH[Ship2_1[0][c] - 1 - 1] = 0;
						}
						if (Ship2_1[0][c] > 10)
						{
							shotH[Ship2_1[0][c] - 1 - 10] = 0;
						}
						if (Ship2_1[0][c] % 10 != 1 && Ship2_1[0][c] > 10)
						{
							shotH[Ship2_1[0][c] - 1 - 11] = 0;
						}
						if (Ship2_1[0][c] % 10 != 0 && Ship2_1[0][c] > 10)
						{
							shotH[Ship2_1[0][c] - 1 - 9] = 0;
						}
						if (Ship2_1[0][c] % 10 != 0)
						{
							shotH[Ship2_1[0][c] - 1 + 1] = 0;
						}
						if (Ship2_1[0][c] < 91)
						{
							shotH[Ship2_1[0][c] - 1 + 10] = 0;
						}
						if (Ship2_1[0][c] < 91 && Ship2_1[0][c] % 10 != 0)
						{
							shotH[Ship2_1[0][c] - 1 + 11] = 0;
						}
						if (Ship2_1[0][c] < 91 && Ship2_1[0][c] % 10 != 1)
						{
							shotH[Ship2_1[0][c] - 1 + 9] = 0;
						}
					}
				}
				x = 0;
				for (int m = 0; m < 2; m++)
				{
					if (Ship2_2[1][m] == 0)
					{
						x++;
					}
				}
				if (x == 2)
				{
					for (int c = 0; c < 2; c++)
					{
						if (Ship2_2[0][c] % 10 != 1)
						{
							shotH[Ship2_2[0][c] - 1 - 1] = 0;
						}
						if (Ship2_2[0][c] > 10)
						{
							shotH[Ship2_2[0][c] - 1 - 10] = 0;
						}
						if (Ship2_2[0][c] % 10 != 1 && Ship2_2[0][c] > 10)
						{
							shotH[Ship2_2[0][c] - 1 - 11] = 0;
						}
						if (Ship2_2[0][c] % 10 != 0 && Ship2_2[0][c] > 10)
						{
							shotH[Ship2_2[0][c] - 1 - 9] = 0;
						}
						if (Ship2_2[0][c] % 10 != 0)
						{
							shotH[Ship2_2[0][c] - 1 + 1] = 0;
						}
						if (Ship2_2[0][c] < 91)
						{
							shotH[Ship2_2[0][c] - 1 + 10] = 0;
						}
						if (Ship2_2[0][c] < 91 && Ship2_2[0][c] % 10 != 0)
						{
							shotH[Ship2_2[0][c] - 1 + 11] = 0;
						}
						if (Ship2_2[0][c] < 91 && Ship2_2[0][c] % 10 != 1)
						{
							shotH[Ship2_2[0][c] - 1 + 9] = 0;
						}
					}
				}
				x = 0;
				for (int m = 0; m < 2; m++)
				{
					if (Ship2_3[1][m] == 0)
					{
						x++;
					}
				}
				if (x == 2)
				{
					for (int c = 0; c < 2; c++)
					{
						if (Ship2_3[0][c] % 10 != 1)
						{
							shotH[Ship2_3[0][c] - 1 - 1] = 0;
						}
						if (Ship2_3[0][c] > 10)
						{
							shotH[Ship2_3[0][c] - 1 - 10] = 0;
						}
						if (Ship2_3[0][c] % 10 != 1 && Ship2_3[0][c] > 10)
						{
							shotH[Ship2_3[0][c] - 1 - 11] = 0;
						}
						if (Ship2_3[0][c] % 10 != 0 && Ship2_3[0][c] > 10)
						{
							shotH[Ship2_3[0][c] - 1 - 9] = 0;
						}
						if (Ship2_3[0][c] % 10 != 0)
						{
							shotH[Ship2_3[0][c] - 1 + 1] = 0;
						}
						if (Ship2_3[0][c] < 91)
						{
							shotH[Ship2_3[0][c] - 1 + 10] = 0;
						}
						if (Ship2_3[0][c] < 91 && Ship2_3[0][c] % 10 != 0)
						{
							shotH[Ship2_3[0][c] - 1 + 11] = 0;
						}
						if (Ship2_3[0][c] < 91 && Ship2_3[0][c] % 10 != 1)
						{
							shotH[Ship2_3[0][c] - 1 + 9] = 0;
						}
					}
				}
				finishH = 0;
				for (int m = 0; m < 4; m++)
				{
					if (Ship4[1][m] == 0)
					{
						finishH++;
					}
				}
				for (int m = 0; m < 3; m++)
				{
					if (Ship3_1[1][m] == 0)
					{
						finishH++;
					}
				}
				for (int m = 0; m < 3; m++)
				{
					if (Ship3_2[1][m] == 0)
					{
						finishH++;
					}
				}
				for (int m = 0; m < 2; m++)
				{
					if (Ship2_1[1][m] == 0)
					{
						finishH++;
					}
				}
				for (int m = 0; m < 2; m++)
				{
					if (Ship2_2[1][m] == 0)
					{
						finishH++;
					}
				}
				for (int m = 0; m < 2; m++)
				{
					if (Ship2_3[1][m] == 0)
					{
						finishH++;
					}
				}
				if (Ship1_1[1][0] == 0)
				{
					finishH++;
				}
				if (Ship1_2[1][0] == 0)
				{
					finishH++;
				}
				if (Ship1_3[1][0] == 0)
				{
					finishH++;
				}
				if (Ship1_4[1][0] == 0)
				{
					finishH++;
				}
				if (finishH == 20)
				{
					fieldAll(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4, Ship4, Ship3_1, Ship3_2, Ship2_1, Ship2_2, Ship2_3, Ship1_1, Ship1_2, Ship1_3, Ship1_4, shotH, shotC);
					Sleep(3000);
					system("cls");
					cout << "You won!!!" << endl;
					system("pause");
					break;
				}
			}
			if (finishH == 20)
			{
				break;
			}
		}
		fieldAll(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4, Ship4, Ship3_1, Ship3_2, Ship2_1, Ship2_2, Ship2_3, Ship1_1, Ship1_2, Ship1_3, Ship1_4, shotH, shotC);
		if (pois(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4, pol) && p == 0)
		{
			for (int g = 0; g < 4; g++)
			{
				if (ship4[0][g] == pol)
				{
					ship4[1][g] = 0;
					shotC[pol - 1] = 0;
					p++;
				}
			}
			for (int g = 0; g < 3; g++)
			{
				if (ship3_1[0][g] == pol)
				{
					ship3_1[1][g] = 0;
					shotC[pol - 1] = 0;
					p++;
				}
			}
			for (int g = 0; g < 3; g++)
			{
				if (ship3_2[0][g] == pol)
				{
					ship3_2[1][g] = 0;
					shotC[pol - 1] = 0;
					p++;
				}
			}
			for (int g = 0; g < 2; g++)
			{
				if (ship2_1[0][g] == pol)
				{
					ship2_1[1][g] = 0;
					shotC[pol - 1] = 0;
					p++;
				}
			}
			for (int g = 0; g < 2; g++)
			{
				if (ship2_2[0][g] == pol)
				{
					ship2_2[1][g] = 0;
					shotC[pol - 1] = 0;
					p++;
				}
			}
			for (int g = 0; g < 2; g++)
			{
				if (ship2_3[0][g] == pol)
				{
					ship2_3[1][g] = 0;
					shotC[pol - 1] = 0;
					p++;
				}
			}
			if (ship1_1[0][0] == pol)
			{
				ship1_1[1][0] = 0;
				shotC[pol - 1] = 0;
				if (pol % 10 != 1)
				{
					shotC[ship1_1[0][0] - 1 - 1] = 0;
				}
				if (pol > 10)
				{
					shotC[ship1_1[0][0] - 1 - 10] = 0;
				}
				if (pol % 10 != 1 && pol > 10)
				{
					shotC[ship1_1[0][0] - 1 - 11] = 0;
				}
				if (pol % 10 != 0 && pol > 10)
				{
					shotC[ship1_1[0][0] - 1 - 9] = 0;
				}
				if (pol % 10 != 0)
				{
					shotC[ship1_1[0][0] - 1 + 1] = 0;
				}
				if (pol < 91)
				{
					shotC[ship1_1[0][0] - 1 + 10] = 0;
				}
				if (pol < 91 && pol % 10 != 0)
				{
					shotC[ship1_1[0][0] - 1 + 11] = 0;
				}
				if (pol < 91 && pol % 10 != 1)
				{
					shotC[ship1_1[0][0] - 1 + 9] = 0;
				}
			}
			if (ship1_2[0][0] == pol)
			{
				ship1_2[1][0] = 0;
				shotC[pol - 1] = 0;
				if (pol % 10 != 1)
				{
					shotC[ship1_2[0][0] - 1 - 1] = 0;
				}
				if (pol > 10)
				{
					shotC[ship1_2[0][0] - 1 - 10] = 0;
				}
				if (pol % 10 != 1 && pol > 10)
				{
					shotC[ship1_2[0][0] - 1 - 11] = 0;
				}
				if (pol % 10 != 0 && pol > 10)
				{
					shotC[ship1_2[0][0] - 1 - 9] = 0;
				}
				if (pol % 10 != 0)
				{
					shotC[ship1_2[0][0] - 1 + 1] = 0;
				}
				if (pol < 91)
				{
					shotC[ship1_2[0][0] - 1 + 10] = 0;
				}
				if (pol < 91 && pol % 10 != 0)
				{
					shotC[ship1_2[0][0] - 1 + 11] = 0;
				}
				if (pol < 91 && pol % 10 != 1)
				{
					shotC[ship1_2[0][0] - 1 + 9] = 0;
				}
			}
			if (ship1_3[0][0] == pol)
			{
				ship1_3[1][0] = 0;
				shotC[pol - 1] = 0;
				if (pol % 10 != 1)
				{
					shotC[ship1_3[0][0] - 1 - 1] = 0;
				}
				if (pol > 10)
				{
					shotC[ship1_3[0][0] - 1 - 10] = 0;
				}
				if (pol % 10 != 1 && pol > 10)
				{
					shotC[ship1_3[0][0] - 1 - 11] = 0;
				}
				if (pol % 10 != 0 && pol > 10)
				{
					shotC[ship1_3[0][0] - 1 - 9] = 0;
				}
				if (pol % 10 != 0)
				{
					shotC[ship1_3[0][0] - 1 + 1] = 0;
				}
				if (pol < 91)
				{
					shotC[ship1_3[0][0] - 1 + 10] = 0;
				}
				if (pol < 91 && pol % 10 != 0)
				{
					shotC[ship1_3[0][0] - 1 + 11] = 0;
				}
				if (pol < 91 && pol % 10 != 1)
				{
					shotC[ship1_3[0][0] - 1 + 9] = 0;
				}
			}
			if (ship1_4[0][0] == pol)
			{
				ship1_4[1][0] = 0;
				shotC[pol - 1] = 0;
				if (pol % 10 != 1)
				{
					shotC[ship1_4[0][0] - 1 - 1] = 0;
				}
				if (pol > 10)
				{
					shotC[ship1_4[0][0] - 1 - 10] = 0;
				}
				if (pol % 10 != 1 && pol > 10)
				{
					shotC[ship1_4[0][0] - 1 - 11] = 0;
				}
				if (pol % 10 != 0 && pol > 10)
				{
					shotC[ship1_4[0][0] - 1 - 9] = 0;
				}
				if (pol % 10 != 0)
				{
					shotC[ship1_4[0][0] - 1 + 1] = 0;
				}
				if (pol < 91)
				{
					shotC[ship1_4[0][0] - 1 + 10] = 0;
				}
				if (pol < 91 && pol % 10 != 0)
				{
					shotC[ship1_4[0][0] - 1 + 11] = 0;
				}
				if (pol < 91 && pol % 10 != 1)
				{
					shotC[ship1_4[0][0] - 1 + 9] = 0;
				}
			}
			w = 1;
		}
		else if (p != 0)
		{
			if (st == -1)
			{
				do
				{
					st = rand() % 4;
				} while (st == 0 && (pol < 11 || shotC[pol - 1 - 10] == 0) || st == 2 && (pol > 90 || shotC[pol - 1 + 10] == 0) || st == 1 && (pol % 10 == 0 || shotC[pol - 1 + 1] == 0) || st == 3 && (pol % 10 == 1 || shotC[pol - 1 - 1] == 0));
			}
			p = ship_search(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4, &pol, &st, p, shotC, w1, pr, lv, vr, nz);
		}
		else
		{
			shotC[pol - 1] = 3;
			w = 0;
		}
		system("cls");

		finishC = 0;
		for (int m = 0; m < 4; m++)
		{
			if (ship4[1][m] == 0)
			{
				finishC++;
			}
		}
		for (int m = 0; m < 3; m++)
		{
			if (ship3_1[1][m] == 0)
			{
				finishC++;
			}
		}
		for (int m = 0; m < 3; m++)
		{
			if (ship3_2[1][m] == 0)
			{
				finishC++;
			}
		}
		for (int m = 0; m < 2; m++)
		{
			if (ship2_1[1][m] == 0)
			{
				finishC++;
			}
		}
		for (int m = 0; m < 2; m++)
		{
			if (ship2_2[1][m] == 0)
			{
				finishC++;
			}
		}
		for (int m = 0; m < 2; m++)
		{
			if (ship2_3[1][m] == 0)
			{
				finishC++;
			}
		}
		if (ship1_1[1][0] == 0)
		{
			finishC++;
		}
		if (ship1_2[1][0] == 0)
		{
			finishC++;
		}
		if (ship1_3[1][0] == 0)
		{
			finishC++;
		}
		if (ship1_4[1][0] == 0)
		{
			finishC++;
		}
		if (finishC == 20)
		{
			fieldAll(ship4, ship3_1, ship3_2, ship2_1, ship2_2, ship2_3, ship1_1, ship1_2, ship1_3, ship1_4, Ship4, Ship3_1, Ship3_2, Ship2_1, Ship2_2, Ship2_3, Ship1_1, Ship1_2, Ship1_3, Ship1_4, shotH, shotC);
			Sleep(3000);
			system("cls");
			cout << "You lose!!!" << endl;
			system("pause");
			break;
		}
	}
}