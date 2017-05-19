//---------------------------------------------------------------------------
#include "StdAfx.h"
#include "Symbol5.h"
#include "Symbol5.h"
//---------------------------------------------------------------------------
TSymbol5::TSymbol5()
{
	posX[0] = 4;
	posX[1] = 5;
	posX[2] = 5;
	posX[3] = 6;
	posY[0] = 0;
	posY[1] = 0;
	posY[2] = 1;
	posY[3] = 1;
	drehPos = 1;
}
//---------------------------------------------------------------------------
void TSymbol5::drehen()
{
	int *dPosY;
	dPosY = getPosY();
	for (int i = 0; i < 4; i++)
	{
		if ((dPosY[i]) == 17)
		{
			return;
		}
	}

	if (drehPos == 2)
	{
		drehPos = 0;
	}
	drehPos++;
	switch (drehPos)
	{
	case 1:
		posX[0] = posX[0];
		posX[1] = posX[1]-2;
		posX[2] = posX[2]--;
		posX[3] = posX[3];
		posY[0] = posY[0]++;
		posY[1] = posY[1]++;
		posY[2] = posY[2];
		posY[3] = posY[3]++;
		break;
	case 2:
	/*
	Selber Machen TM
	*/
		break;
	}

	/*
	Selber Machen TM
	*/

	// drehen
}

