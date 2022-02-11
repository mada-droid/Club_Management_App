#include "musicista.h"

Musicista::Musicista()
{

}

Musicista::Musicista(int c, string nom, string cog, float com, string strum) : Persona (c, nom, cog, com)
{
    strumento = strum;
}

Musicista:: ~Musicista()
{
  cout<<"distruzione oggetto Persona "<< nome <<" "<< cognome <<" "<< cod <<" "<< comp<< endl;
}

void Musicista::visualizza()
{
  cout<<"-- tipo di oggetto: "<<chiSono()<<endl;
  cout << "nome        : " << nome << endl;
  cout << "cognome     : " << cognome << endl;
  cout << "codice      : " << cod << endl;
  cout << "compenso    : " << comp << endl;
  cout << "strumento   : " << strumento << endl;
}
