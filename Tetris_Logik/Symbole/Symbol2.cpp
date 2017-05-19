//---------------------------------------------------------------------------
#include "StdAfx.h"
#include "Symbol2.h"
//---------------------------------------------------------------------------
TSymbol2::TSymbol2()
{
	posX[0] = 5;
	posX[1] = 5;
	posX[2] = 5;
	posX[3] = 4;
	posY[0] = 0;
	posY[1] = 1;
	posY[2] = 2;
	posY[3] = 2;
	drehPos = 1;
}
//---------------------------------------------------------------------------
void TSymbol2::drehen()
{
		/*
	Selber Machen TM
	*/
	switch (drehPos)
	{
	case 1:
		posX[0] = posX[0]++;
		posX[1] = posX[1];
		posX[2] = posX[2]--;
		posX[3] = posX[3] - 2;
		posY[0] = posY[0]--;
		posY[1] = posY[1];
		posY[2] = posY[2]++;
		posY[3] = posY[3];
		break;
	case 2:
		posX[0] = posX[0]++;
		posX[1] = posX[1];
		posX[2] = posX[2]--;
		posX[3] = posX[3];
		posY[0] = posY[0]++;
		posY[1] = posY[1];
		posY[2] = posY[2]--;
		posY[3] = posY[3] + 2;
		break;
	case 3:
		posX[0] = posX[0]++;
		posX[1] = posX[1];
		posX[2] = posX[2]--;
		posX[3] = posX[3] + 2;
		posY[0] = posY[0]--;
		posY[1] = posY[1];
		posY[2] = posY[2]++;
		posY[3] = posY[3];
		break;
	case 4:
		posX[0] = posX[0]--;
		posX[1] = posX[1];
		posX[2] = posX[2]--;
		posX[3] = posX[3];
		posY[0] = posY[0]++;
		posY[1] = posY[1];
		posY[2] = posY[2] + 2;
		posY[3] = posY[3]++;
		break;
	}

	/*
	Selber Machen TM
	*/


	// drehen
}
