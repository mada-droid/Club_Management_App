#include "persona.h"
#include "Sociobase.h"
#include "Sociopremium.h"
#include <iostream>

using namespace std;

int main()
{
  vector <Persona *> club;
 
 int scelta;

 void Carica(vector<Persona*> & club);
 void visualizzadb(vector<Persona*>v);
 void salva(vector<Persona*>v);
 void inizializza(vector<Persona*> & v);

 
     do{cout<<"menu"<<endl;
        cout<<"1- esci"<<endl;
        cout<<"2- inserisci ( 1:socio base, 2: socio premium )"<<endl;
        cout<<"3- mostra (1: tutti, 2: socio base  3: socio premium) "<<endl;
        cout<<"4- salva su file "<<endl;
        cout<<"8- pulisci lo schermo"<<endl;
        cin>>scelta;

        switch (scelta) {
                      
            case 2: Carica(club);
                    break;
            case 3: visualizzadb(club);
                    break;
            case 4: salva(club);
                    break;

            case 8: break;

        }
       }
 while (scelta!=1);

    return 0;
}




void visualizzadb(vector<Persona*>v){
    int s;
    cout<<"visualizza:    1: tutti,  2: socio base,  3: socio premium"<<endl;
    cin>>s;
    if (s==1){
    for(unsigned int i=0;i<v.size();i++){
        v[i]->visualizza();
    }
    }
    if (s==2){
        for(unsigned int i=0;i<v.size();i++){
            if (v[i]->chiSono()=="Sociob") v[i]->visualizza();
    }
    }
    if (s==3){
        for(unsigned int i=0;i<v.size();i++){
            if (v[i]->chiSono()=="Sociop") v[i]->visualizza();
    }
    }
}

void inizializza(vector<Persona*> & v){
    string line,flag;
    ifstream file("C:\\filec\\persone.txt");


    for(unsigned int i = 0; i<v.size();i++)
        delete v[i];

    v.clear();

    while (!file.eof())
    { flag = "";
      file >> flag;
      if (flag=="e")
      {
          int c;
          string n;
          string cog;
          float q;
          float s;

          file>>c>>n>>cog>>q>>s;

          Persona * etemp = new Sociobase(c,n,cog,q,s);
          v.push_back(etemp);
      }
      else if(flag=="i")
      {
          int c;
          string n;
          string cog;
          float q;
          int a;

        file>>c>>n>>cog>>q>>a;


          Persona * itemp = new Sociopremium(c,n,cog,q,a);
          v.push_back(itemp);
}
}
}


void Carica(vector<Persona*> & club) {
   inizializza(club);
                    int s;
                    cout<<"1: Socio base   2: Socio premium"<<endl;
                    cin>>s;
                    if(s==1) {int c;
                        string n;
                        string cog;
                        float q;
                        float s;
            

                        cout<<"inserire codice socio"<<endl;
                        cin>>c;
                        cout<<"inserire nome"<<endl;
                        cin>>n;
                        cout<<"inserire cognome"<<endl;
                        cin>>cog;
                        cout<<"inserire quota"<<endl;
                        cin>>q;
                         cout<<"inserire Sns"<<endl;
                        cin>>s;

                        Persona * etemp = new Sociobase (c,n,cog,q,s);
                        club.push_back(etemp);

                             }
                    if(s==2) {int c;
                        string n;
                        string cog;
                        float q;
                        int a;

                        cout<<"inserire codice socio"<<endl;
                        cin>>c;
                        cout<<"inserire nome"<<endl;
                        cin>>n;
                        cout<<"inserire cognome"<<endl;
                        cin>>cog;
                        cout<<"inserire quota"<<endl;
                        cin>>q;
                        cout << "inserire Anni" << endl;
                        cin >> a;

                        Persona * itemp = new Sociopremium (c,n,cog,q,a);
                        club.push_back(itemp);

                    }
}

void salva(vector<Persona*>v){
    string line;
     ofstream file("C:\\filec\\persone.txt");
     for (unsigned int i = 0; i <v.size(); i++){
         if (v[i]->chiSono()=="Socio base"){
             Sociobase * etemp = dynamic_cast<Sociobase*>(v[i]);
             file<<"e ";
             file<<etemp->getCod()<<" ";
             file<<etemp->getNome()<<" ";
             file<<etemp->getCognome()<<" ";
             file<<etemp->getQuota()<<" ";
             file<<etemp->getSns()<<endl;

         }

         else if (v[i]->chiSono()=="Sociopremium"){
             Sociopremium * itemp = dynamic_cast<Sociopremium*>(v[i]);
             file<<"i ";
             file<<itemp->getCod()<<" ";
             file<<itemp->getNome()<<" ";
             file<<itemp->getCognome()<<" ";
             file<<itemp->getQuota()<<" ";
             file<<itemp->getAnni()<<endl;

         }
     }
     file.close();
}



