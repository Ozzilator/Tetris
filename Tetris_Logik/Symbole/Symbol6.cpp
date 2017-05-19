//---------------------------------------------------------------------------
#include "StdAfx.h"
#include "Symbol6.h"
//---------------------------------------------------------------------------
TSymbol6::TSymbol6()
{
	posX[0] = 4;
	posX[1] = 5;
	posX[2] = 5;
	posX[3] = 6;
	posY[0] = 1;
	posY[1] = 0;
	posY[2] = 1;
	posY[3] = 0;
	drehPos = 1;
}
//---------------------------------------------------------------------------
void TSymbol6::drehen()
{
		/*
	Selber Machen TM
	*/
	switch (drehPos)
	{
	case 1:
		posX[0] = posX[0];
		posX[1] = posX[1];
		posX[2] = posX[2]--;
		posX[3] = posX[3]+2;
		posY[0] = posY[0]++;
		posY[1] = posY[1]++;
		posY[2] = posY[2];
		posY[3] = posY[3]++;
		break;
	case 2:
	/*
	Selber Machen TM
	*/
nochmal:
	int *dPosX;
	dPosX = getPosX();
	for (int i = 0; i < 3; i++)
	{
		if ((dPosX[i]) < 0)
		{
			for (int i = 0; i < 4; i++)
			{
				dPosX[i]--;
			}
			return nochmal;
		}
		else
		{
			if ((dPosX[i]) > 8)
			{
				for (int i = 0; i < 4; i++)
				{
					dPosX[i]++;
				}
			}
		}
	}

	// drehen
}
