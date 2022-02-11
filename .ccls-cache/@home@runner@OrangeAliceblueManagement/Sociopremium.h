#ifndef SOCIOPREMIUM_H
#define SOCIOPREMIUM_H

#include "persona.h"

class Sociopremium : public Persona
{
protected:

    int anni;
public:

  Sociopremium();
  Sociopremium(int c, string nom, string cog, float com, int a );
  virtual ~ Sociopremium();


  void setAnni(int a);

  int getAnni() {return anni;}

  void visualizza();

//Metodo per calcolare quanti euro versati * da quando è in associazione ovvero gli anni
  int calcolaQuote();

  string chiSono() { return "Sociop"; }
};
#endif // SOCIOPREMIUM
