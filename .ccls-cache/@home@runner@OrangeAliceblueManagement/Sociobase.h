#ifndef SOCIOBASE_H
#define SOCIOBASE_H

#include "persona.h"

using namespace std;

class Sociobase : public Persona
{
protected:
    float sns;
public:

  Sociobase();
  Sociobase(int c, string nom, string cog, float com, float s);
  virtual ~ Sociobase();


  void setStrumento(float s) { sns = s; }

  float getSns() {return sns;}

  void visualizza();

  float calcolaQuota();

  string chiSono() { return "Sociob"; }

};
#endif // Sociobase
