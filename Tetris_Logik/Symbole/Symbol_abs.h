//---------------------------------------------------------------------------

#ifndef Symbol_absH
#define Symbol_absH
//---------------------------------------------------------------------------
class TSymbol_abs abstract
{
protected:
	int posX[4];
	int posY[4];
	int drehPos;
public:
	TSymbol_abs();
	virtual void drehen() = 0;
	void weiter();
	void links();
	void rechts();
	void schnell();
	int* getPosX();
	int* getPosY();
};

#endif