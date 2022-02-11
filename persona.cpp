#include "persona.h"

Persona::Persona()
{

}

Persona::Persona(int c, string nom, string cog, float q)
{
   nome = nom;
   cognome = cog;
   cod = c;
   quota = q;
}

Persona:: ~Persona()
{
  cout<<"distruzione oggetto Persona "<< nome <<" "<< cognome <<" "<< cod <<" "<< quota<< endl;
}

void Persona::visualizza()
{

  cout<<"-- tipo di oggetto: "<<chiSono()<<endl;
  cout << "nome        : " << getNome() << endl;
  cout << "cognome     : " << getCognome() << endl;
  cout << "codice      : " << getCod() << endl;
  cout << "quota    : " << getQuota() << endl;
}
