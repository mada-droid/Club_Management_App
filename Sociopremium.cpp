#include "Sociopremium.h"

Sociopremium::Sociopremium()
{

}

Sociopremium::Sociopremium(int c, string nom, string cog, float q, int a) : Persona(c, nom, cog, q)
{
    if (a == 1 || a == 2 || a == 3)
        anni = a;
    else
        a = 4;
}

Sociopremium:: ~Sociopremium()
{
  cout<<"distruzione oggetto Persona "<< nome <<" "<< cognome <<" "<< cod <<" "<< quota<< endl;
}

void Sociopremium::visualizza()
{
  cout<<"-- tipo di oggetto: "<<chiSono()<<endl;
  cout << "nome        : " << nome << endl;
  cout << "cognome     : " << cognome << endl;
  cout << "codice      : " << cod << endl;
  cout << "quota    : " << quota << endl;
  cout << "Anni : " << anni << endl;
}

void Sociopremium::setAnni(int a)
{
     if (a == 1 || a == 2 || a == 3)
        anni = a;
    else
        a = 4;
}

 int calcolaQuote(){
  int a, euro;
  bool state = true;
  
  cin >> a;

  while(state){
     cout << "Da quanti anni sei un nostro cliente ?" << endl << "1- 10 Anni    2- 20 Anni      3- 30 Anni    4- Altro ";

    if(a == 1){
        euro = 10;
        state = false;
    }else if(a == 2){
      euro = 20;
      state = false;
    }else if(a == 3){
      euro = 30;
      state = false;
    }else{
      cout << "Scelta Errata !!" << endl;
    }
  }
  return euro;

 }