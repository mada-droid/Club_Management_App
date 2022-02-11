#include "artista.h"

Artista::Artista()
{

}

Artista::Artista(int c, string nom, string cog, float com, char s) : Persona(c, nom, cog, com)
{
    if (s == 'f' || s == 'p' || s == 's')
        spec = s;
    else
        spec = 'e';
}

Artista:: ~Artista()
{
  cout<<"distruzione oggetto Persona "<< nome <<" "<< cognome <<" "<< cod <<" "<< comp<< endl;
}

void Artista::visualizza()
{
  cout<<"-- tipo di oggetto: "<<chiSono()<<endl;
  cout << "nome        : " << nome << endl;
  cout << "cognome     : " << cognome << endl;
  cout << "codice      : " << cod << endl;
  cout << "compenso    : " << comp << endl;
  cout << "specialita' : " << spec << endl;
}

void Artista::setSpec(char s)
{
    if (s == 'f' || s == 'p' || s == 's')
        spec = s;
    else
        spec = 'e';
}
