//---------------------------------------------------------------------------
#include "StdAfx.h"
#include "Symbol4.h"
//---------------------------------------------------------------------------
TSymbol4::TSymbol4()
{
	posX[0] =4;
	posX[1] =5;
	posX[2] = 6;
	posX[3] = 7;
	posY[0] = 0;
	posY[1] = 0;
	posY[2] = 0;
	posY[3] = 0;
	drehPos = 1;
}
//---------------------------------------------------------------------------
void TSymbol4::drehen()
{
	/*
	Selber Machen TM
	*/
	switch (drehPos)
	{
	case 1:
	/*
	Selber Machen TM
	*/
		break;
	case 2:
	/*
	Selber Machen TM
	*/
		break;
	}
nochmal:
	int *dPosX;
	dPosX = getPosX();
	for (int i = 0; i < 3; i++)
	{
		if ((dPosX[i]) < 0)
		{
			for (int i = 0; i < 4; i++)
			{
				dPosX[i]++;
			}
			return nochmal;
		}
		else
		{
			if ((dPosX[i]) > 5)
			{
				for (int i = 0; i < 4; i++)
				{
					dPosX[i]--;
				}
			}
		}
	}

	// drehen
}

