//#include <iostream>
//#include <cstring>
//using namespace std;
//
//
//
//class Ucesnik{
//private:
//    char *ime;
//    bool pol;
//    int vozrast;
//public:
//    Ucesnik(){
//        this->ime=new char[0];
//
//    }
//    Ucesnik(char *ime,bool pol,int vozrast){
//        this->ime=new char [strlen(ime)+1];
//        strcpy(this->ime,ime);
//        this->pol=pol;
//        this->vozrast=vozrast;
//    }
//
//    Ucesnik(const Ucesnik &u){
//        this->ime=new char [strlen(u.ime)+1];
//        strcpy(this->ime,u.ime);
//        this->pol=u.pol;
//        this->vozrast=u.vozrast;
//    }
//
//    Ucesnik& operator=(const Ucesnik &u){
//        if (this!=&u) {
//            delete []ime;
//            this->ime = new char[strlen(u.ime) + 1];
//            strcpy(this->ime, u.ime);
//            this->pol = u.pol;
//            this->vozrast = u.vozrast;
//        }return *this;
//    }
//
//bool operator>(const Ucesnik &u){
//        return this->vozrast>u.vozrast;
//    }
//
//    friend ostream& operator<<(ostream &out,const Ucesnik &uc){
//        out<<uc.ime<<" "<<uc.pol<<" "<<uc.vozrast<<endl;
//        return out;
//    }
//
//    int GetVozrast(){
//        return vozrast;
//    };
//
//    ~Ucesnik(){
//        delete []ime;
//    }
//
//
//};
//
//
//class Marathon{
//private:
//    char lokacija[100];
//    Ucesnik *ucesnik;
//    int broj;
//public:
//    Marathon(){
//        this->broj=0;
//        this->ucesnik=new Ucesnik[broj];
//    }
//    Marathon(char *lokacija,Ucesnik *ucesnik,int broj){
//        strcpy(this->lokacija,lokacija);
//        this->broj=broj;
//        for (int i = 0; i < broj; ++i) {
//            this->ucesnik[i]=ucesnik[i];
//        }
//    }
//    Marathon(const Marathon &m){
//        strcpy(this->lokacija,m.lokacija);
//        this->broj=broj;
//        for (int i = 0; i < m.broj; ++i) {
//            this->ucesnik[i]=m.ucesnik[i];
//        }
//    }
//
//    Marathon& operator=(const Marathon &m){
//        strcpy(this->lokacija,m.lokacija);
//        this->broj=broj;
//        for (int i = 0; i < m.broj; ++i) {
//            this->ucesnik[i]=m.ucesnik[i];
//        }
//    }
//
//    Marathon& operator+=(const Marathon &m){
//        Marathon* temp=new Marathon[broj+1];
//        for (int i = 0; i < broj; ++i) {
//            temp[i]=ucesnik[i];
//        }temp[broj]=ucesnik;
//        broj++;
//        delete []ucesnik;
//        ucesnik=temp;
//        return *this;
//    }
//
//
//    double prosecnoVozrast(){
//        int prosek=0;
//        for (int i = 0; i < broj; ++i) {
//            prosek+=ucesnik[i].GetVozrast();
//        }return prosek;
//    }
//
//   void pecatiPomladi(Ucesnik &u){
//       for (int i = 0; i < broj; ++i) {
//           if (ucesnik[i].GetVozrast()<ucesnik->GetVozrast()){
//               cout<<ucesnik[i]<<endl;
//           }
//       }
//    }
//
//
//    ~Marathon(){
//        delete []ucesnik;
//    }
//};
//
//
//int main(){
//
//
//}




//#include <iostream>
//#include <cstring>
//using namespace std;
//
//enum Tip{
//    POP,
//    ROCK,
//    RAP
//};
//
//class Pesna{
//private:
//    char *ime;
//    int vreme;
//    Tip tip;
//
//public:
//    Pesna(){
//        this->ime=new char[0];
//
//    }
//    Pesna(char *ime,int vreme,Tip tip){
//        this->ime=new char[strlen(ime)+1];
//        strcpy(this->ime,ime);
//        this->vreme=vreme;
//        this->tip=tip;
//
//    }
//    Pesna(const Pesna &p){
//        this->ime=new char[strlen(p.ime)+1];
//        strcpy(this->ime,p.ime);
//        this->vreme=p.vreme;
//        this->tip=p.tip;
//    }
//    Pesna& operator=(const Pesna &p){
//        if (this!=&p){
//            delete []ime;
//            this->ime=new char[strlen(ime)+1];
//            strcpy(this->ime,ime);
//            this->vreme=vreme;
//            this->tip=tip;
//        }return *this;
//    }
//
//    friend ostream& operator<<(ostream &out,const Pesna &p){
//        out<<p.ime<<"-"<<p.vreme<<"-"<<p.tip<<endl;
//
//        return out;
//    }
//
//    void pecat(){
//        cout<<ime<<"-"<<vreme<<"-"<<tip<<endl;
//    }
//
//    int getVreme()const{
//        return vreme;
//    };
//
//    Tip getTip()const
//            {
//        return tip;
//            };
//
//    ~Pesna(){
//        delete[]ime;
//    }
//};
//
//
//
//class CD{
//private:
//    Pesna pesni[10];
//    int brojpesni;
//    int max;
//public:
//    CD(){
//        this->brojpesni=0;
//        this->max=0;
//    }
//
//    CD(Pesna *pesni,int brojpesni,int max){
//        this->brojpesni=brojpesni;
//        this->max=max;
//        for (int i = 0; i < brojpesni; ++i) {
//            this->pesni[i]=pesni[i];
//        }
//    }
//    CD(const CD &cd){
//        this->brojpesni=cd.brojpesni;
//        this->max=cd.max;
//        for (int i = 0; i < cd.brojpesni; ++i) {
//            this->pesni[i]=cd.pesni[i];
//        }
//    }
//
//    CD& operator=(const CD &cd){
//        if (this!=&cd) {
//            this->brojpesni = cd.brojpesni;
//            this->max = cd.max;
//            for (int i = 0; i < cd.brojpesni; ++i) {
//                this->pesni[i] = cd.pesni[i];
//            }
//        }return *this;
//    }
//
//    void pecatiPesniPoTip(Tip &tip){
//
//        for (int i = 0; i < brojpesni; ++i) {
//
//            if (strcmp(pesni[i].getTip(),"ROCK","POP","RAP")==0){
//                cout<<pesni[i];
//            }cout<<endl;
//        }
//    }
//
//
//    void dodadiPesna(const Pesna &pesna){
//        if (brojpesni<10) {
//            CD *temp=new CD [brojpesni+1];
//            int j=0;
//            bool vnesena=false;
//            for (int i = 0; i < brojpesni; ++i) {
//                if (!vnesena && max > pesni[i].getVreme()) {
//                    temp[j] = pesni[i];
//                    vnesena = true;
//                }
//                temp[j++];
//            }
//                if (!vnesena){
//                    temp[j]=pesna;
//                }
//                delete []pesna;
//                pesni=temp;
//                brojpesni++;
//                return *this;
//
//
//        }
//    }
//
//
//};
//
//
//int main(){
//
//
//}

//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Patnik {
//private:
//    char ime[100];
//    int vagon[2];
//    bool velosiped;
//public:
//    Patnik() {}
//
//    Patnik(char *ime, int *vagon, bool velosiped) {
//        strcpy(this->ime, ime);
//        for (int i = 0; i < 2; ++i) {
//            this->vagon[i] = vagon[i];
//        }
//        this->velosiped = velosiped;
//    }
//
//    Patnik(const Patnik &p) {
//        strcpy(this->ime, p.ime);
//        for (int i = 0; i < 2; ++i) {
//            this->vagon[i] = p.vagon[i];
//        }
//        this->velosiped = p.velosiped;
//    }
//
//    Patnik &operator=(const Patnik &p) {
//        strcpy(this->ime, p.ime);
//        for (int i = 0; i < 2; ++i) {
//            this->vagon[i] = p.vagon[i];
//        }
//        this->velosiped = p.velosiped;
//    }
//
//    bool getVelo(){
//        return velosiped;
//    }
//
//    int getVagon(){
//        return *vagon;
//    }
//
//    friend ostream &operator<<(ostream &out, const Patnik &p) {
//        out << p.ime << endl;
//        out << p.vagon << endl;
//        out << p.velosiped << endl;
//        return out;
//    }
//~Patnik(){}
//};
//    class Voz{
//    private:
//        char destinacii[100];
//        Patnik *p;
//        int broj;
//        int brvelosipedi;
//    public:
//        Voz(){
//            this->broj=0;
//            this->brvelosipedi=0;
//        }
//        Voz(char *destinacii,Patnik *p,int broj,int brvelospedi){
//            strcpy(this->destinacii,destinacii);
//            this->broj=broj;
//            this->brvelosipedi=brvelospedi;
//            for (int i = 0; i < broj; ++i) {
//                this->p[i]=p[i];
//            }
//
//        }
//
//        Voz(const Voz &voz){
//            strcpy(this->destinacii,voz.destinacii);
//            this->broj=voz.broj;
//            this->brvelosipedi=voz.brvelosipedi;
//            for (int i = 0; i < voz.broj; ++i) {
//                this->p[i]=voz.p[i];
//            }
//
//        }
//
//
//        Voz& operator=(const Voz &voz){
//            if (this!=&voz) {
//                delete []p;
//                strcpy(this->destinacii, voz.destinacii);
//                this->broj = voz.broj;
//                this->brvelosipedi = voz.brvelosipedi;
//                for (int i = 0; i < voz.broj; ++i) {
//                    this->p[i] = voz.p[i];
//                }
//            }return *this;
//        }
//
//        Voz& operator+=(Patnik &nov){
//            int counter=0;
//            if (nov.getVelo()) {
//                for (int i = 0; i < broj; ++i) {
//
//                    if (p[i].getVelo()) {
//                        counter++;
//                    }
//                }
//                    if (counter>brvelosipedi){
//                        return *this;
//                    }
//                    Patnik *temp=new Patnik[broj+1];
//                for (int i = 0; i < broj; ++i) {
//                    temp[i]=p[i];
//                }temp[broj]=nov;
//                broj++;
//                delete []p;
//                p=temp;
//                return *this;
//            }
//        }
//
//        void patnicNemaMesto(){
//            int counter1;
//            int counter2;
//            int prvaklasa=0;
//            int vtoraklasa=0;
//            for (int i = 0; i < broj; ++i) {
//                if (p[i].getVagon()==1){
//                    if (p[i].getVelo()) {
//                        counter1++;
//                        prvaklasa++;
//                    }
//                }
//                if (p[i].getVagon()==2){
//                    if (p[i].getVelo()) {
//                        counter2++;
//                        vtoraklasa++;
//                    }
//                }
//            }
//            if (broj>=prvaklasa) {
//                counter2 = 0;
//                if ((broj - prvaklasa) >= vtoraklasa) {
//                    counter2 = vtoraklasa - (broj - prvaklasa);
//                } else {
//                    counter1 = prvaklasa;
//                    counter2 = vtoraklasa;
//                }
//            }cout<<counter1<<endl;
//            cout<<counter2<<endl;
//        }
//
//
//
//    };
//
//
//int main(){
//
//}

//---------------------kvalifikaciska

#include <iostream>
#include <cstring>

//using namespace std;

/*sample input:
Mercedes
GSL300
75000
40
*/

/*Sample output
Unknown
Unknown
10000evra
Mercedes
GSL300
75000evra
Mercedes
GSL300
45000evra
*/
//const char *tipAvtomobil[] = {"TERENEC","SUV","GRADSKA","SPORTSKA","CUPE"};
//enum Tip
//{
//    TERENEC,
//    SUV,
//    GRADSKA,
//    SPORTSKA,
//    CUPE
//};
//class Avtomobil
//{
//private:
//    char marka[30];
//    char model[30];
//    int cena;
//    Tip tip;
//public:
//    Avtomobil(char *marka = "Unknown", char *model = "Unknown", int cena = 10000, Tip tip=CUPE)
//    {
//        strcpy(this->marka,marka);
//        strcpy(this->model,model);
//        this->cena = cena;
//        this->tip = tip;
//    }
//    Avtomobil(const Avtomobil &a)
//    {
//        strcpy(this->marka,a.marka);
//        strcpy(this->model,a.model);
//        this->cena = a.cena;
//        this->tip = a.tip;
//    }
//    void setCena(int cena)
//    {
//        this->cena = cena;
//    }
//    int getCena()
//    {
//        return cena;
//    }
//    void print()
//    {
//        cout<<marka<<endl;
//        cout<<model<<endl;
//        cout<<cena<<"evra"<<endl;
//        cout<<tipAvtomobil[tip]<<endl;
//    }
//    ~Avtomobil(){}
//};
//int main()
//{
//    Avtomobil a1;
//
//    char marka[30],model[30];
//    int cena,tip;
//    cin>>marka>>model>>cena>>tip;
//    Avtomobil a2(marka,model,cena,(Tip)tip);
//
//    Avtomobil a3(a2);
//    int popust;
//    cin>>popust;
//    a3.setCena(a3.getCena() - a3.getCena()*popust/100);
//
//
//    a1.print();
//    a2.print();
//    a3.print();
//}


//#include <iostream>
//#include <cstring>
//using namespace std;
//
//
//
// struct Date{
//     int d;
//     int m;
//     int y;
//
// };
//struct Player{
//    char ime[30];
//    char prezime[30];
//    int godrag;
//    Date datum
//};
//
//class Footballplayer{
//private:
//
//    Player p;
//    int brkopacki;
//public:
//    Footballplayer(){
//
//    }
//    Footballplayer(Player p,int brkopacki){
//        this->p=p;
//        this->brkopacki=brkopacki;
//    }
//    ~Footballplayer(){}
//
//};
//
//class FC{
//private:
//    char *ime;
//    Footballplayer players[20];
//    int nump;
//public:
//    FC(){
//        this->ime=new char[0];
//    }
//    FC(char *ime,int nump,Footballplayer *players){
//        this->ime=new char [strlen(ime)+1];
//        strcpy(this->ime,ime);
//        this->nump=nump;
//        for (int i = 0; i < nump; ++i) {
//            this->players[i]=players[i];
//        }
//    }
//
//    FC(const FC &fc){
//        this->ime=new char [strlen(fc.ime)+1];
//        strcpy(this->ime,fc.ime);
//        this->nump=fc.nump;
//        for (int i = 0; i < fc.nump; ++i) {
//            this->players[i]=fc.players[i];
//        }
//    }
//
//    FC& operator=(const FC &fc){
//        if (this!=&fc) {
//            delete []ime;
//            this->ime = new char[strlen(fc.ime) + 1];
//            strcpy(this->ime, fc.ime);
//            this->nump = fc.nump;
//            for (int i = 0; i < fc.nump; ++i) {
//                this->players[i] = fc.players[i];
//            }
//        }return *this;
//    }
//
//
//
//    void setName(char *ime)
//            {
//        delete[]this->ime;
//        this->ime=new char[strlen(ime)+1];
//                strcpy(this->ime,ime);
//            }
//            ~FC(){
//        delete []ime;
//    }
//};
//
//int main(){
//    int n;
//    FC fc[20];
//
//
//    cout<<"Kolku fc ima ligata"<<endl;
//    cin>>n;
//    char club[30];
//    int numplayers;
//    for (int i = 0; i < n; ++i) {
//        cout<<"Vnesi ime na klub "<<endl;
//        cin>>club;
//        fc[i].setName(club);
//        cout<<"Kolku igraci se vo klubot"<<endl;
//        cin>>numplayers;
//        for (int j = 0; j < numplayers; ++j) {
//            Player p;
//            int brkopacki;
//            cout<<"vnesi ime i rpez"<<endl;
//            cin>>p.ime>>p.prezime;
//            cout<<"Datum raganje"<<endl;
//        }
//    }
//}


//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Icecream{
//private:
//    char vkus[20];
//    int cena;
//    char kornet[20];
//public:
//    Icecream(char *vkus="grd",char *kornet ="nema",int cena=0){
//        strcpy(this->vkus,vkus);
//        strcpy(this->kornet,kornet);
//        this->cena=cena;
//    }
//    Icecream(const Icecream &ic){
//        strcpy(this->vkus,ic.vkus);
//        strcpy(this->kornet,ic.kornet);
//        this->cena=ic.cena;
//    }
//
//
//    void setKornet(char *kornet){
//        strcpy(this->kornet,kornet);
//    }
//
//    char getKornet(){
//        return *kornet;
//    }
//
//    void setCena(int cena){
//        this->cena=cena;
//
//    }
//
//    int getCena(){
//        return cena;
//
//    }
//
//    void pecati(){
//        cout<<vkus<<endl;
//        cout<<kornet<<endl;
//        cout<<cena<<endl;
//
//    }
//
//    ~Icecream(){}
//};
//
//
//int main(){
//    int n=0;
//    Icecream num[n];
//    char vkus[20];
//    char kornet[20];
//    int cena;
//    cout<<"Vnesi "<<endl;
//    cin>>vkus>>kornet>>cena;
//    Icecream a1;
//    Icecream a2(vkus,kornet,cena);
//    Icecream a3(a2);
//
//
//
//    a1.pecati();
//    a2.pecati();
//    a3.pecati();
//
//
//
//
//}


#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

enum Pozicija{
    vraboten,
    direktor,
    sef
};

class Vraboten{
private:
    char ime[30];
    int plata;
    Pozicija poz;
public:
    Vraboten(){}
    Vraboten(char *ime,int plata,Pozicija poz){
        strcpy(this->ime,ime);
        this->plata=plata;
this->poz=poz;
    }

    void setIme(char *ime){
        strcpy(this->ime,ime);
    }
    char getIme(){
        return *ime;
    };

    void setPlata(int plata){
        this->plata=plata;
    }

    int getPlata(){
        return plata;
    }
    void setPoz(Pozicija poz){
        this->poz=poz;
    }
    Pozicija getPoz(){
        return poz;
    }


    void sortPlata(Vraboten *a,int n){

        Vraboten p;
        for (int i= 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if (a[i].getPlata()>a[j].getPlata()){
                    p=a[j];
                    a[j]=a[i];
                    a[i]=p;
                }
            }

        }
    }

    ~Vraboten(){}
};


int main(){
Vraboten p[100];
float plata;
int n,pos;
char ime[30];

    for (int i = 0; i < n; ++i) {
        cin>>ime;
        cin>>plata;
        cin>>pos;
        p[i].setIme(ime);
        p[i].setPlata(plata);
        p[i].setPoz((Pozicija)pos);
    }


    for (int i = 0; i < n; ++i) {
        cout<<
    }



}