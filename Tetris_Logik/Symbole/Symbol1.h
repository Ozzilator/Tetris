//---------------------------------------------------------------------------

#ifndef Symbol1H
#define Symbol1H
#include "Symbol_abs.h"
//---------------------------------------------------------------------------
class TSymbol1 : public TSymbol_abs
  {
   public:
    TSymbol1();
    virtual void drehen() override;
  };

#endif