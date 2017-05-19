//---------------------------------------------------------------------------

#ifndef Symbol3H
#define Symbol3H
#include "Symbol_abs.h"
//---------------------------------------------------------------------------
class TSymbol3 : public TSymbol_abs
{
public:
	TSymbol3();
	virtual void drehen() override;
};

#endif