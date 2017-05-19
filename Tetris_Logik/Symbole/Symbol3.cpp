//---------------------------------------------------------------------------
#include "StdAfx.h"
#include "Symbol3.h"
//---------------------------------------------------------------------------
TSymbol3::TSymbol3()
{
	posX[0] = 4;
	posX[1] = 5;
	posX[2] = 5;
	posX[3] = 6;
	posY[0] = 0;
	posY[1] = 0;
	posY[2] = 1;
	posY[3] = 0;
	drehPos = 1;
}
//---------------------------------------------------------------------------
void TSymbol3::drehen()
{
	/*
	Selber Machen TM
	*/

	if (drehPos == 4)
	{
		drehPos = 0;
	}

	switch (drehPos)
	{
	case 1:
		posX[0] = posX[0]--;
		posX[1] = posX[1];
		posX[2] = posX[2]--;
		posX[3] = posX[3]++;
		posY[0] = posY[0]++;
		posY[1] = posY[1];
		posY[2] = posY[2]++;
		posY[3] = posY[3]--;
		break;
	case 2:
		posX[0] = posX[0]++;
		posX[1] = posX[1];
		posX[2] = posX[2]--;
		posX[3] = posX[3]--;
		posY[0] = posY[0]--;
		posY[1] = posY[1];
		posY[2] = posY[2]--;
		posY[3] = posY[3]++;
		break;
	case 3:
		posX[0] = posX[0]--;
		posX[1] = posX[1];
		posX[2] = posX[2]++;
		posX[3] = posX[3]++;
		posY[0] = posY[0]++;
		posY[1] = posY[1];
		posY[2] = posY[2]--;
		posY[3] = posY[3]--;
		break;
	case 4:
		posX[0] = posX[0]++;
		posX[1] = posX[1];
		posX[2] = posX[2]++;
		posX[3] = posX[3]--;
		posY[0] = posY[0]--;
		posY[1] = posY[1];
		posY[2] = posY[2]++;
		posY[3] = posY[3]++;
		break;
	}

	/*
	Selber Machen TM
	*/

	// drehen
}