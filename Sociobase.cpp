#include "Sociobase.h"

Sociobase::Sociobase()
{

}

Sociobase::Sociobase(int c, string nom, string cog, float q, float s) : Persona (c, nom, cog, q)
{
    sns = s;
}

Sociobase:: ~Sociobase()
{
  cout<<"distruzione oggetto Persona "<< nome <<" "<< cognome <<" "<< cod <<" "<< quota<< endl;
}

void Sociobase::visualizza()
{
  cout<<"-- tipo di oggetto: "<<chiSono()<<endl;
  cout << "nome        : " << nome << endl;
  cout << "cognome     : " << cognome << endl;
  cout << "codice      : " << cod << endl;
  cout << "quota    : " << quota << endl;
  cout << "Sconto   : " << sns << endl;
}

float Sociobase::calcolaQuota(){
  float ss;
  bool stato = true;

  cin >> ss ;
  while(stato){
      cout << " NUOVO SOCIO !! Di Quanto vorresti essere scontato ? " << endl << " (0.2) per 20%  " << endl <<" (0.5) per 50%  " << endl; 
  if(ss == 0.2){
    sns = (quota*20)/100 ;
    cout << "Il tuo sconto è di " << sns << endl;
    stato = false;
  }else if(ss == 0.5){
    sns = (quota*50)/100 ;
    cout << "Il tuo sconto è di " << sns << endl;
    stato = false;
  }else{
    cout << "Inserimento errato !!" << endl;
  }
  }
  return sns;
}