#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>


using namespace std;

class Persona
{
protected:
unsigned int cod;
string nome, cognome;
float quota;

public:

  Persona();
  Persona(int c, string nom, string cog, float q);
  virtual ~ Persona();


  void setNome(string nom) { nome = nom; }
  void setCognome(string cog) { cognome = cog; }
  void setCod(int c) { cod = c; }
  void setquota(float q) {quota = q;}

  string getNome() {return nome;}
  string getCognome() {return cognome;}
  int getCod() {return cod;}
  float getQuota() {return quota;}

  virtual void visualizza();

  virtual string chiSono() { return "persona"; }


};
#endif // PERSONA_H