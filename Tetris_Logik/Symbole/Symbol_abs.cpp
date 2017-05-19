//---------------------------------------------------------------------------
#include "StdAfx.h"
#include "Symbol_abs.h"
#include "Symbol_abs.h"
//---------------------------------------------------------------------------
TSymbol_abs::TSymbol_abs()
{

}
//---------------------------------------------------------------------------
//Die Klasse funktioniert der rest ist Bullshit. Fragen hilft.
//---------------------------------------------------------------------------
void TSymbol_abs::weiter()
{
	int *dPosY;
	dPosY = getPosY();
	for (int i = 0; i < 4; i++)
	{
		if ((dPosY[i] + 1) > 17)
		{
			return;
		}
	}

	// nach unten
	for (int i = 0; i < 4; i++) {
		posY[i]++;
	}
}
//---------------------------------------------------------------------------
void TSymbol_abs::links()
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

	int *dPosX;
	dPosX = getPosX();
	for (int i = 0; i < 4; i++)
	{
		if ((dPosX[i] - 1) < 0)
		{
			return;
		}
	}
	// nach links
	for (int i = 0; i < 4; i++) {
		posX[i]--;
	}
}
//---------------------------------------------------------------------------
void TSymbol_abs::rechts()
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

	int *dPosX;
	dPosX = getPosX();
	for (int i = 0; i < 4; i++)
	{
		if ((dPosX[i] + 1) > 9)
		{
			return;
		}
	}

	// nach rechts
	for (int i = 0; i < 4; i++) {
		posX[i]++;
	}
}
//---------------------------------------------------------------------------
void TSymbol_abs::schnell()
{
	// schnell
}
//---------------------------------------------------------------------------
int* TSymbol_abs::getPosX()
{
	return posX;
}
//---------------------------------------------------------------------------
int* TSymbol_abs::getPosY()
{
	return posY;
}

