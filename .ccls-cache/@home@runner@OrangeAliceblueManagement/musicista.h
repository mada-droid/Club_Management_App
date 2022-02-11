#ifndef MUSICISTA_H
#define MUSICISTA_H

#include "persona.h"

using namespace std;

class Musicista : public Persona
{
protected:

    string strumento;
public:

  Musicista();
  Musicista(int c, string nom, string cog, float com, string str);
  virtual ~ Musicista();


  void setStrumento(string str) { strumento = str; }

  string getStrumento() {return strumento;}

  void visualizza();

  string chiSono() { return "musicista"; }

};
#endif // MUSICISTA_H
