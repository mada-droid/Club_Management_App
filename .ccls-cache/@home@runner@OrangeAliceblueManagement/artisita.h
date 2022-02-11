#ifndef ARTISTA_H
#define ARTISTA_H

#include "persona.h"

class Artista : public Persona
{
protected:

    char spec;
public:

  Artista();
  Artista(int c, string nom, string cog, float com, char s );
  virtual ~ Artista();


  void setSpec(char s);

  char getSpec() {return spec;}

  void visualizza();

  string chiSono() { return "artista"; }
};
#endif // ARTISTA_H
