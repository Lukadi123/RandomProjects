//-------------1 CAS DRAGAN//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//
//class Nedviznost {
//protected:
//    char *owner;
//    char location[40];
//    float m2;
//    float priceperm2;
//public:
//    Nedviznost() {
//        this->owner = new char[0];
//    }
//
//    Nedviznost(char *owner, char *location, float m2, float priceperm2) {
//        this->owner = new char[strlen(owner) + 1];
//        strcpy(this->owner, owner);
//        strcpy(this->location, location);
//        this->m2 = m2;
//        this->priceperm2 = priceperm2;
//    }
//
//    Nedviznost(const Nedviznost &n) {
//        this->owner = new char[strlen(n.owner) + 1];
//        strcpy(this->owner, n.owner);
//        strcpy(this->location, n.location);
//        this->m2 = n.m2;
//        this->priceperm2 = n.priceperm2;
//    }
//
//    Nedviznost &operator=(const Nedviznost &n) {
//        if (this != &n) {
//            delete[]owner;
//            this->owner = new char[strlen(n.owner) + 1];
//            strcpy(this->owner, n.owner);
//            strcpy(this->location, n.location);
//            this->m2 = n.m2;
//            this->priceperm2 = n.priceperm2;
//        }
//        return *this;
//    }
//
//    char *getOwner() {
//        return owner;
//    }
//
//    float getM2() {
//        return m2;
//    }
//
//    float getPrice() {
//        return priceperm2;
//    }
//
//    void print() {
//        cout << "Owner: " << owner << " Location: " << location << " m2: " << m2 << " price: " << getPrice() << " euros"
//             << endl;
//    }
//
//    ~Nedviznost() {
//        delete[]owner;
//    }
//};
//
//    class Kukja:public Nedviznost{
//    private:
//        int kat;
//        bool daliDvor;
//    public:
//        Kukja():Nedviznost(){}//default constructor;
//        Kukja(char *owner, char *location, float m2, float priceperm2,int kat,bool daliDvor):Nedviznost( owner, location,m2,  priceperm2)
//        {
//            this->kat=kat;
//            this->daliDvor=daliDvor;
//        }
//
//
//        //OVERRIDE
//        void print(){
//            Nedviznost::print();
//            cout<<"Kukjata ima "<<kat<<" kata!"<<endl;
//            if(daliDvor)
//                cout<<"Kukjata ima dvor"<<endl;
//        }
//
//        float danok(){
//            if (m2>150)
//                return getPrice()*2*30/100;
//            else return getPrice()*2*10/100;
//        }
//        ~Kukja(){}
//    };
//
//    class Stan:public Nedviznost
//    {
//    private:
//        int sprat;
//        bool daliParking;
//    public:
//        Stan():Nedviznost(){}
//        Stan(char owner, char location,float m2,float pricePerM2,
//             int sprat,bool daliParking) : Nedviznost(owner, location, m2,pricePerM2){
//
//            this->sprat = sprat;
//            this->daliParking = daliParking;
//        }
//
//        void print(){
//            Nedviznost::print();
//            cout<<sprat<<endl;
//            if(daliParking)
//                cout<<"Poseduva parking"<<endl;
//        }
//
//~Stan(){}
//    };
//
//
//
//
//
//
//int main(){
//Kukja k("Dragan","Skopje,250,100,3,true");
//k.print();
//
//    cout<<"Kukjata na "<<k.getOwner() <<" ima: " <<k.getM2()<<"m2"<<endl;
//
//    Stan s("Marija","Skopje",89,1300,3,true);
//    s.print();
//}
//class Agencija
//{
//private:
//    char naziv[100];
//    Nedviznost imoti[100];
//    int n;
//public:
//    int metod()
//    {
//
//        if(m2>150)
//        {
//
//        }
//        return 0;
//    }
//

//--------------------------------------------CAS 2 DRAGAN-------------------------//

//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class Student
//{
//private:
//    string ime;
//    char *prezime;
//    int index;
//    float prosek;
//public:
//    Student()
//    {
//        this->prezime = new char[0];
//    }
//    Student (string ime,char *prezime,int index,float prosek)
//    {
//        this->ime = ime;
//        this->prezime = new char[strlen(prezime)+1];
//        strcpy(this->prezime,prezime);
//        this->index = index;
//        this->prosek = prosek;
//    }
//    Student (const Student &s)
//    {
//        this->ime = s.ime;
//        this->prezime = new char[strlen(s.prezime)+1];
//        strcpy(this->prezime,s.prezime);
//        this->index = s.index;
//        this->prosek = s.prosek;
//    }
//    Student& operator= (const Student &s)
//    {
//        if(this!=&s)
//        {
//            delete []prezime;
//            this->ime = s.ime;
//            this->prezime = new char[strlen(s.prezime)+1];
//            strcpy(this->prezime,s.prezime);
//            this->index = s.index;
//            this->prosek = s.prosek;
//        }
//        return *this;
//    }
//    friend ostream& operator<<(ostream &out, const Student &s)
//    {
//        out<<s.ime<<" "<<s.prezime<<" Index: "<<s.index<<" Prosek: "<<s.prosek<<endl;
//        return out;
//    }
//    bool operator>(const Student &s)
//    {
//        return this->prosek > s.prosek;
//    }
//    ~Student()
//    {
//        delete []prezime;
//    }
//};
//
//class FinkiStudent : public Student
//{
//private:
//    bool daliPraksa;
//    int brAplikacii;
//public:
//    FinkiStudent() : Student(){}
//
//    FinkiStudent(string ime,char *prezime,int index,float prosek,
//                 bool daliPraksa,int brAplikacii) : Student(ime,prezime,index,prosek)
//    {
//        this->daliPraksa = daliPraksa;
//        this->brAplikacii = brAplikacii;
//    }
//    FinkiStudent(const Student &s,
//                 bool daliPraksa,int brAplikacii) : Student(s)
//    {
//        this->daliPraksa = daliPraksa;
//        this->brAplikacii = brAplikacii;
//    }
//    friend ostream& operator<<(ostream &out,const FinkiStudent &fs)
//    {
//        out<<static_cast<const Student&>(fs);
//        if(fs.daliPraksa)
//        {
//            out<<"Ima praksa"<<endl;
//        }
//        else
//        {
//            out<<"Nema praksa"<<endl;
//        }
//        out<<"Broj na kreirani aplikacii: "<<fs.brAplikacii<<endl;
//        return out;
//
//    }
//
//    bool operator>= (const FinkiStudent &fs)
//    {
//        return this->brAplikacii >=fs.brAplikacii;
//    }
//    ~FinkiStudent(){}
//};
//
//class FeitStudent : public Student
//{
//private:
//    char *nazivDiplomska;
//    int brProekti;
//public:
//    FeitStudent():Student()
//    {
//        this->nazivDiplomska = new char[0];
//    }
//    FeitStudent(string ime,char *prezime,int index,float prosek,
//                char* nazivDiplomska,int brProekti) : Student(ime,prezime,index,prosek)
//    {
//        this->nazivDiplomska = new char[strlen(nazivDiplomska)+1];
//        strcpy(this->nazivDiplomska,nazivDiplomska);
//        this->brProekti = brProekti;
//    }
//    FeitStudent(const Student &s,
//                char* nazivDiplomska,int brProekti) : Student(s)
//    {
//        this->nazivDiplomska = new char[strlen(nazivDiplomska)+1];
//        strcpy(this->nazivDiplomska,nazivDiplomska);
//        this->brProekti = brProekti;
//    }
//    friend ostream& operator<<(ostream &out,const FeitStudent &fs)
//    {
//        out<<static_cast<const Student&>(fs);
//        if(strlen(fs.nazivDiplomska)>0)
//        {
//            out<<"Diplomski trud: "<<fs.nazivDiplomska<<endl;
//        }
//        out<<"Broj na proekti: "<<fs.brProekti<<endl;
//
//        return out;
//
//    }
//    FeitStudent(const FeitStudent &fs) : Student(fs)//copy constructor
//    {
//        this->nazivDiplomska = new char[strlen(fs.nazivDiplomska)+1];
//        strcpy(this->nazivDiplomska,fs.nazivDiplomska);
//        this->brProekti = fs.brProekti;
//    }
//
//    FeitStudent& operator=(const FeitStudent &fs)
//    {
//        if(this!=&fs)
//        {
//            Student::operator=(fs);
//            delete []nazivDiplomska;
//            this->nazivDiplomska = new char[strlen(fs.nazivDiplomska)+1];
//            strcpy(this->nazivDiplomska,fs.nazivDiplomska);
//            this->brProekti = fs.brProekti;
//        }
//        return *this;
//    }
//    ~FeitStudent()
//    {
//        delete []nazivDiplomska;
//    }
//};
//int main()
//{
//
//    Student s("Dragan","Jakimovski",511,10);
//    FinkiStudent finkist1 ("Marija","Stojceva",123,9.8,false,2);
//
//    FinkiStudent finkist2(s,true,7);
//    FinkiStudent finkist3(finkist2);//calls copy constructor
////    cout<<finkist1<<endl;
////    cout<<finkist2<<endl;
//    FeitStudent feitst1(s,"AI in industry",1);
////    if(finkist1 >feitst1)
////    {
////        cout<<finkist1<<" ima povisok prosek od "<<feitst1<<endl;
////    }
////    else
////    {
////        cout<<feitst1<<" ima povisok prosek od "<<finkist1<<endl;
////    }
////    if(finkist1>=finkist2)
////    {
////        cout<<finkist1<<" ima poveke kreirano aplikaciii od "<<finkist2<<endl;
////    }
////    else
////    {
////        cout<<finkist2<<" ima poveke kreirano aplikaciii od "<<finkist1<<endl;
////    }
//
//    FeitStudent feitSt2;
//    feitSt2 = feitst1;
//    cout<<feitSt2<<endl;
//}
//

//--------------------------------------------CAS 3 DRAGAN-------------------------//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Imot{
//protected:
//    char *owner;
//    string location;
//    int m2;
//    int priceperm2;
//public:
//    Imot(){
//        this->owner=new char[0];
//    }
//    Imot(char *owner,string location,int m2,int priceperm2){
//        this->owner=new char [strlen(owner)+1];
//        strcpy(this->owner,owner);
//        this->location=location;
//        this->m2=m2;
//        this->priceperm2=priceperm2;
//    }
//    Imot(const Imot &im){
//        this->owner=new char [strlen(im.owner)+1];
//        strcpy(this->owner,im.owner);
//        this->location=im.location;
//        this->m2=im.m2;
//        this->priceperm2=im.priceperm2;
//    }
//    Imot& operator=(const Imot &im) {
//        if (this != &im) {
//            this->owner = new char[strlen(im.owner) + 1];
//            strcpy(this->owner, im.owner);
//            this->location = im.location;
//            this->m2 = im.m2;
//            this->priceperm2 = im.priceperm2;
//        }return *this;
//    }
//
//    virtual int totalPrice(){
//        return m2*priceperm2;
//    }
//    virtual void pecati(){
//        cout<<"Owner : "<<owner<<" Location: "<<location<<" Price per m2: "<<priceperm2<<" m2: "<<m2<<" Total price: "<<totalPrice()<<endl;
//    }
//int getM2(){
//        return m2;
//    }
//virtual ~Imot(){
//        delete[]owner;
//    }
//};
//
//class Kukja: public Imot{
//private:
//    int kat;
//    bool daliBazen;
//public:
//    Kukja():Imot(){}
//    Kukja(char *owner,string location,int m2,int priceperm2,int kat,bool daliBazen)
//    : Imot(owner,location,m2,priceperm2){
//        this->kat=kat;
//        this->daliBazen=daliBazen;
//    }
//    int totalPrice(){
//        int osnovnacena = Imot::totalPrice();
//        if (daliBazen){
//            return osnovnacena + osnovnacena*5/100;
//        }else return osnovnacena;
//    }
//    void pecati(){
//        cout<<"Kukja"<<endl;
//        Imot::pecati();
//        cout<<"Kukjata ima "<<kat<<endl;
//        if (daliBazen){
//            cout<<"Ima Bazen"<<endl;
//        }
//    }
//    ~Kukja(){}
//};
//
//class Stan:public Imot{
//private:
//    int sprat;
//    bool daliGaraza;
//public:
//    Stan():Imot(){}
//    Stan(char *owner,string location,int m2,int priceperm2,int sprat,bool daliGaraza)
//    :Imot(owner,location,m2,priceperm2){
//        this->sprat=sprat;
//        this->daliGaraza=daliGaraza;
//    }
//    int TotalPrice()
//    {
//        int osnovnacena= Imot::totalPrice();
//        int razlika=sprat-3;
//        int garaza=0,spr=0;
//        if (daliGaraza){
//            garaza=osnovnacena*5/100;
//        }
//        if (razlika>0){
//            spr=razlika*osnovnacena/100;
//        }
//        return osnovnacena-spr+garaza;
//    }
//    void pecati() {
//        cout << "STAN" << endl;
//        Imot::pecati();
//        if (daliGaraza) {
//            cout << "Ima Garaza" << endl;
//        }
//    }
//        ~Stan(){}
//
//};
//void najskapiotImot(Imot **im,int n){
//    int max=im[0]->totalPrice();
//    int index=0;
//    for (int i = 0; i < n; ++i) {
//        if (im[i]->totalPrice()>max){
//            max=im[i]->totalPrice();
//            index=i;
//        }
//    }im[index]->pecati();
//}
//int main(){
//    Imot **im;
//    int n;
//    cout<<"Kolku imoti "<<endl;
//    for (int i = 0; i < n; ++i) {
//        char owner[20];
//        string location;
//        int m2;
//        int priceperm2;
//        int izbor;
//        cout<<"1/Kukja ili 2/Stan"<<endl;
//        cin>>izbor;
//        cout<<"Vnesi sopstvenik, lokacija, m2 i cena po m2"<<endl;
//        cin>>owner>>location>>m2>>priceperm2;
//        if (izbor=1){
//            int kat;
//            bool daliBazen;
//            cout<<"Kolku kata "<<endl;
//            cin>>kat;
//            cout<<"Dali ima bazen "<<endl;
//            cin>>daliBazen;
//            im[i]=new Kukja(owner,location,m2,priceperm2,kat,daliBazen);
//        }
//        else if(izbor=2){
//            int sprat;
//            bool daliGaraza;
//            cout<<"Vnesi sprat: "<<endl;
//            cin>>sprat;
//            cout<<"Dali ima garaza "<<endl;
//            cin>>daliGaraza;
//            im[i]=new Stan(owner,location,m2,priceperm2,sprat,daliGaraza);
//        }
//        else{
//            cout<<"POgresen "<<endl;
//        }
//    }
//
//
//    cout<<"----------------------IMOTI"<<endl;
//    for (int i = 0; i < n; ++i) {
//        im[i]->pecati();
//    }
//    cout<<"NAJSKAP IMOT "<<endl;
//    najskapiotImot(im,n);
//    for (int i = 0; i < n; ++i) {
//        delete im[i];
//    }delete []im;
//}

//-----------------------Dragan cas 4----------------------------------//
//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Song
//{
//private:
//    string artist;
//    string title;
//    string verses[20];
//    int numberOfVerses;
//public:
//    Song(){
//        this->numberOfVerses=0;
//    }
//    Song(string artist,string title,string *verses,int numberOfVerses) {
//        this->artist = artist;
//        this->title = title;
//        this->numberOfVerses = numberOfVerses;
//        for (int i = 0; i < numberOfVerses; ++i) {
//            this->verses[i] = verses[i];
//        }
//    }
//        int getNumberVerses()
//        {
//            return numberOfVerses;
//        }
//        void addVerses(const string &verse){
//            if (numberOfVerses<20){
//                verses[numberOfVerses]=verse;
//                numberOfVerses++;
//            }
//    }
//    string completeSong(){
//        string song=" ";
//        for (int i = 0; i < numberOfVerses; ++i) {
//            song=song+verses[i]+"\n";
//        }return song;
//    }
//       int occurances(const string &word) {
//           int counter = 0;
//           for (int i = 0; i < numberOfVerses; ++i) {
//               int poz = 0;
//               while (poz = verses[i].find(word, poz)) {
//
//                   if (poz!=string::npos) {
//                       counter++;
//                       poz += word.length();
//                   }else {break;}
//               }
//           }return counter;
//
//       }
//       ~Song(){}
//
//
//       int main()
//       {
//
//       }
//};
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(){
//    //lenght of string
//    string abc="Object oriented progrmming";
//    cout<<"dolzinata e "<<abc<<" e: "<<abc.length()<<endl;
//
//    //individual characters
//    cout<<"Prviot karakter na string:  "<<abc.at(0)<<endl;
//    cout<<"Psoledniot "<<abc.at(abc.length()-1)<<endl;
//
//
//    //substring
//    string substring1 = abc.substr(16,11);//start na 16 dolzina 11
//    cout<<"Podstringot e "<<substring1<<endl;
//    string substring2 = abc.substr(7);//start na 7 i do kraj
//    cout<<"Podstringot e "<<substring2<<endl;
//
//    //String concatation
//    string a1="Hello";
//    string a2=" World";
//    string a3=a1+a2;
//    cout<<"Spoeni se "<<a3<<endl;
//
//    //String comparison
//    string st1="Windows 11";
//    string st2="Sonoma";
//    string st3="Windows 11";
//
//    int c1=st1.compare(st2);
//    int c2=st1.compare(st3);
//    if (c1==0){
//        cout<<" isti se "<<endl;
//    }
//    else if (c1>0){
//        cout<<"Pogolem i podolg "<<endl;
//    }
//    else {
//        cout << " pomal i pokratok " << endl;
//    }
//    if(c2 ==0)
//    {
//        cout<<"Equal strings"<<endl;
//    }
//    else if(c2 > 0 )
//    {
//        cout<<st1 <<" is alpabeticaly greater then "<<st3<<endl;
//    }
//    else
//    {
//        cout<<st1 <<" is alpabeticaly lower then "<<st3<<endl;}
//
////finding substring
//string recenica ="Denes e ponedelnik, prv den vo nedelata";
//    int poz=recenica.find("ponedelnik");
//    if (poz!=string::npos){
//        cout<<"Zborot se naoga na pocetna pozicija: "<<poz<<endl;
//
//    }
//    else
//    {
//        cout<<"Potrebniot zbor ne e pronajden "<<endl;
//    }
//    //Brisenje
//    string string1="Denes e denot da se bide ili ne";
//    int pocetnaPoz=string1.find("bide");
//    string1.erase(pocetnaPoz+4);
//    cout<<"Po naogjanje e "<<string1<<endl;
//
//
//    //vmetnuvanje
//    string pozdravuvanje="Zdravo, ";
//    pozdravuvanje.insert(8,"Luka");
//    cout<<"Izjava: "<<pozdravuvanje<<endl;
//
//
//    //zamenuvanje
//    string sport="Jas sakam da sledam odbojka ";
//    sport.replace(20,7,"football");
//    cout<<"Izjava: "<<sport<<endl;
//
//    return 0;
//}



//--------------------------------DRAGAN CAS 5----------------------------------//

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Karticka{
//protected:
//    char smetka[10];
//    int pin;
//    bool povekjePin;
//    const static int P;
//public:
//    Karticka(){}
//    Karticka(char *smetka,int pin){
//        strcpy(this->smetka,smetka);
//        this->pin=pin;
//        this->povekjePin=false;
//    }
//    virtual int tezinaProbivanje()
//    {
//        int brCifri=0;
//        int temp=pin;
//        while (temp!=0){
//            temp = temp/10;
//            brCifri++;
//        }return brCifri;
//    }
//    friend ostream &operator<<(ostream &out,Karticka &k){
//        out<<k.smetka<<": "<<k.tezinaProbivanje()<<endl;
//        return out;
//    }
//    bool getDopolnitelenPin(){
//        return povekjePin;
//    }
//    char *getSmetka()
//    {
//        return smetka;
//    }
//    virtual ~Karticka(){}
//};
//const int Karticka::P=4;
//
//class SpecijalnaKarticka : public Karticka
//        {
//private:
//            int n;
//            int *pinovi;
//public:
//            SpecijalnaKarticka(): Karticka(){
//                this->n=0;
//                this->pinovi =new int[0];
//                this->povekjePin=true;
//            }
//            SpecijalnaKarticka(char *smetka,int pin):Karticka(smetka,pin)
//            {
//                this->n=0;
//                this->pinovi =new int[0];
//                this->povekjePin=true;
//            }
//    SpecijalnaKarticka(const SpecijalnaKarticka &sk):Karticka(smetka,pin)
//    {
//        this->n=sk.n;
//        this->pinovi =new int[sk.n];
//        for (int i = 0; i < n; ++i) {
//            this->pinovi[i]=sk.pinovi[i];
//        }
//    }
//
//
//    //Override
//    int tezinaProbivanje(){
//                int osnovnaTezina=Karticka::tezinaProbivanje();
//            return osnovnaTezina+n;
//            }
//
//            SpecijalnaKarticka& operator+=(int novPin){
//                if (n==Karticka::P)
//                {
//                    cout<<"Brojot na pinovi ne smee da go nadmine dozvolenoto!"<<endl;
//                }
//                else {
//                    int *temp=new int [n+1];
//                    for (int i = 0; i < n; ++i) {
//                   temp[i]=pinovi[i];
//                    }temp[n]=novPin;
//                    n++;
//                    delete []pinovi;
//                    pinovi=temp;
//                }
//                return *this;
//            }
//            ~SpecijalnaKarticka(){
//                delete []pinovi;
//            }
//};
//
//
//class Banka{
//private:
//    char naziv[30];
//    Karticka *karticki[20];
//    int broj;
//    static int LIMIT;
//public:
//    Banka(char *naziv,Karticka *karticki,int broj){
//        strcpy(this->naziv,naziv);
//        for (int i = 0; i < broj; ++i) {
//            //ako kartickata ima dopolnitelni pin kodovi
//            if (karticki[i].getDopolnitelenPin()) {
//                this->karticki[i]=new Karticka(karticki[i]);
//            }this->broj=broj;
//        }
//    }
//
//    void static setLIMIT(int l){
//        LIMIT=l;
//    }
//
//    void pecatiKarticki()
//    {
//        for (int i = 0; i < broj; ++i) {
//            if (karticki[i]->tezinaProbivanje()<=LIMIT){
//                cout<<karticki[i]<<endl;
//            }
//        }
//    }
//
//    void dodadiDopolnitelenPin(char *smetka,int novPin){
//        for (int i = 0; i < broj; ++i) {
//            if (strcmp(karticki[i]->getSmetka(),smetka)==0){
//                SpecijalnaKarticka *sp=dynamic_cast<SpecijalnaKarticka*>(karticki[i]);
//                if (sp!=0){
//                    *sp+=novPin;
//                }break;
//            }
//
//        }
//    }
//    ~Banka(){
//        for (int i = 0; i < broj; ++i) {
//            delete karticki[i];
//        }
//    }
//};
//int Banka::LIMIT =7;
//
//
//int main(){
//
//    Karticka **niza;
//    int n,m,pin;
//    char smetka[16];
//    bool daliDopolnitelniPin;
//    cin>>n;
//    niza=new Karticka*[n];
//    for (int i=0;i<n;i++){
//        cin>>smetka;
//        cin>>pin;
//        cin>>daliDopolnitelniPin;
//        if (!daliDopolnitelniPin)
//            niza[i]=new Karticka(smetka,pin);
//        else
//            niza[i]=new SpecijalnaKarticka(smetka,pin);
//    }
//
//    Banka komercijalna("Komercijalna",niza,n);
//    for (int i=0;i<n;i++) delete niza[i];
//    delete [] niza;
//    cin>>m;
//    for (int i=0;i<m;i++){
//        cin>>smetka>>pin;
//
//        komercijalna.dodadiDopolnitelenPin(smetka,pin);
//
//    }
//
//    Banka::setLIMIT(5);
//
//    komercijalna.pecatiKarticki();
//
//}


//---------------------------------------------DRAFAN 6 CAS-------------------------------//
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//
//class Kurs{
//private:
//    char ime[20];
//    int krediti;
//public:
//
//    Kurs (char *ime,int krediti){
//        strcpy(this->ime,ime);
//        this->krediti=krediti;
//    }
//    Kurs (){
//        strcpy(this->ime,"");
//        krediti=0;
//    }
//    bool operator==(const char *ime) const{
//        return strcmp(this->ime,ime)==0;
//    }
//    char const * getIme()const{
//        return ime;
//    }
//    void pecati ()const{cout<<ime<<" "<<krediti<<"ECTS";}
//};
//
//class Student{
//private:
//    int *ocenki;
//    int brojOcenki;
//
//protected:
//    int indeks;
//
//public:
//    Student(){
//        this->brojOcenki=0;
//        this->ocenki=new int[0];
//    }
//    Student(int indeks,int *ocenki, int brojOcenki){
//        this->indeks=indeks;
//        this->brojOcenki=brojOcenki;
//        this->ocenki=new int[brojOcenki];
//        for (int i=0;i<brojOcenki;i++) this->ocenki[i]=ocenki[i];
//    }
//    Student(const Student &k){
//        this->indeks=k.indeks;
//        this->brojOcenki=k.brojOcenki;
//        this->ocenki=new int[k.brojOcenki];
//        for (int i=0;i<k.brojOcenki;i++) this->ocenki[i]=k.ocenki[i];
//    }
//    Student operator=(const Student &k){
//        if (&k==this) return *this;
//        this->indeks=k.indeks;
//        this->brojOcenki=k.brojOcenki;
//        delete [] ocenki;
//        this->ocenki=new int[k.brojOcenki];
//        for (int i=0;i<k.brojOcenki;i++) this->ocenki[i]=k.ocenki[i];
//        return *this;
//    }
//
//     virtual int getBodovi(){
//        int preodna=0;
//         for (int i = 0; i < brojOcenki; ++i) {
//             if (ocenki[i]>5){
//                 preodna++;
//             }
//         }return preodna*100/brojOcenki;
//    }
//
//    virtual void pecati(){
//        cout<<indeks;
//    }
//
//    ~Student(){delete [] ocenki;}
//
//
//};
//
//class Predavach{
//private:
//    Kurs kursevi[10];
//    int brojKursevi;
//
//protected:
//    char *imeIPrezime;
//
//public:
//    Predavach(){
//        this->brojKursevi=0;
//        this->imeIPrezime=new char[0];
//    }
//    Predavach(char *imeIPrezime,Kurs *kursevi,int brojKursevi){
//        this->brojKursevi=brojKursevi;
//        for (int i=0;i<brojKursevi;i++) this->kursevi[i]=kursevi[i];
//        this->imeIPrezime=new char[strlen(imeIPrezime)+1];
//        strcpy(this->imeIPrezime,imeIPrezime);
//    }
//    Predavach(const Predavach &p){
//        this->brojKursevi=p.brojKursevi;
//        for (int i=0;i<p.brojKursevi;i++) this->kursevi[i]=p.kursevi[i];
//        this->imeIPrezime=new char[strlen(p.imeIPrezime)+1];
//        strcpy(this->imeIPrezime,p.imeIPrezime);
//    }
//    Predavach operator=(const Predavach &p){
//        if (this==&p) return *this;
//        this->brojKursevi=p.brojKursevi;
//        for (int i=0;i<p.brojKursevi;i++) this->kursevi[i]=p.kursevi[i];
//        this->imeIPrezime=new char[strlen(p.imeIPrezime)+1];
//        delete [] imeIPrezime;
//        strcpy(this->imeIPrezime,p.imeIPrezime);
//        return *this;
//    }
//    ~Predavach(){delete [] imeIPrezime;}
//
//    int getBrojKursevi()const {return brojKursevi;}
//
//    char * const getImeIPrezime()const {return imeIPrezime;}
//
//    Kurs operator[](int i) const {
//        if (i<brojKursevi&&i>=0)
//            return kursevi[i];
//        else return Kurs();
//    }
//    Kurs* getkursevi(){
//        return kursevi;
//    }
//    void pecati() const  {
//        cout<<imeIPrezime<<" (";
//        for (int i=0;i<brojKursevi;i++){
//            kursevi[i].pecati();
//            if (i<brojKursevi-1) cout<<", ";  else cout<<")";
//        }
//    }
//};
//
//
//class Demonstrator : public Student, public Predavach{
//private:
//    int brCasovi;
//public:
//    Demonstrator():Student(),Predavach(){
//        this->brCasovi=0;
//    }
//    Demonstrator(int indeks,int *ocenki, int brojOcenki,char *imeIPrezime,Kurs *kursevi,int brojKursevi,int brCasovi)
//    :Student(indeks,ocenki,brojOcenki),
//    Predavach(imeIPrezime,kursevi,brojKursevi)
//    {
//        this->brCasovi=brCasovi;
//    }
//    Demonstrator(const Demonstrator &d):Student(d),Predavach(d){
//        this->brCasovi=d.brCasovi;
//    }
//    int getbodovi(){
//        int osnovni=Student::getBodovi();
//        if (brCasovi=0){
//            cout<<"Demonstratorot so indeks: "<<indeks<< " ne drzi labratoriski vezbi"<<endl;
//            return 0;
//        }return osnovni+20*brCasovi/getBrojKursevi();
//    }
//void pecati(){
//        Student::pecati();
//        cout<<": ";
//        Predavach::pecati();
//    }
//    ~Demonstrator(){}
//};
//
//Student& vratiNajdobroRangiran(Student **s, int n){
//   Student  *max=s[0];
//    for (int i = 0; i < n; ++i) {
//        if (s[i]->getBodovi()>max->getBodovi()){
//            max=s[i];
//        }return *max;
//    }
//}
//void pecatiDemonstratoriKurs (char* kurs, Student **s, int n){
//    for (int i = 0; i <n; ++i) {
//        Demonstrator *d = dynamic_cast<Demonstrator*>(s[i]);
//        if (d!=0)
//        {
//            for (int j = 0; j < d->getBrojKursevi(); ++j) {
//                if (strcmp(d->getkursevi()[j].getIme(),kurs)==0)
//                {
//                    d->pecati();
//                    cout<<endl;
//                    break;
//                }
//            }
//        }
//    }
//}
//
//
//
//
//
//
//
//int main(){
//
//    Kurs kursevi[10];
//    int indeks,brojKursevi, ocenki[20],ocenka,brojOcenki,tip,brojCasovi,krediti;
//    char ime[20],imeIPrezime[50];
//
//    cin>>tip;
//
//    if (tip==1) //test class Demonstrator
//    {
//        cout<<"-----TEST Demonstrator-----"<<endl;
//        cin>>indeks>>brojOcenki;
//        for (int i=0;i<brojOcenki;i++){
//            cin>>ocenka;
//            ocenki[i]=ocenka;
//        }
//        cin>>imeIPrezime>>brojKursevi;
//        for (int i=0;i<brojKursevi;i++){
//            cin>>ime>>krediti;
//            kursevi[i]=Kurs(ime,krediti);
//        }
//        cin>>brojCasovi;
//
//        Demonstrator d(indeks,ocenki,brojOcenki,imeIPrezime,kursevi,brojKursevi,brojCasovi);
//        cout<<"Objekt od klasata Demonstrator e kreiran";
//
//    } else if (tip==2) //funkcija pecati vo Student
//    {
//        cout<<"-----TEST pecati-----"<<endl;
//        cin>>indeks>>brojOcenki;
//        for (int i=0;i<brojOcenki;i++){
//            cin>>ocenka;
//            ocenki[i]=ocenka;
//        }
//
//        Student s(indeks,ocenki,brojOcenki);
//        s.pecati();
//
//    } else if (tip==3) //funkcija getVkupnaOcenka vo Student
//    {
//        cout<<"-----TEST getVkupnaOcenka-----"<<endl;
//        cin>>indeks>>brojOcenki;
//        for (int i=0;i<brojOcenki;i++){
//            cin>>ocenka;
//            ocenki[i]=ocenka;
//        }
//        Student s(indeks,ocenki,brojOcenki);
//        cout<<"Broj na bodovi: "<<s.getBodovi()<<endl;
//
//    } else if (tip==4) //funkcija getVkupnaOcenka vo Demonstrator
//    {
//        cout<<"-----TEST getVkupnaOcenka-----"<<endl;
//        cin>>indeks>>brojOcenki;
//        for (int i=0;i<brojOcenki;i++){
//            cin>>ocenka;
//            ocenki[i]=ocenka;
//        }
//        cin>>imeIPrezime>>brojKursevi;
//        for (int i=0;i<brojKursevi;i++){
//            cin>>ime>>krediti;
//            kursevi[i]=Kurs(ime,krediti);
//        }
//        cin>>brojCasovi;
//
//        Demonstrator d(indeks,ocenki,brojOcenki,imeIPrezime,kursevi,brojKursevi,brojCasovi);
//        cout<<"Broj na bodovi: "<<d.getBodovi()<<endl;
//
//    } else if (tip==5) //funkcija pecati vo Demonstrator
//    {
//        cout<<"-----TEST pecati -----"<<endl;
//        cin>>indeks>>brojOcenki;
//        for (int i=0;i<brojOcenki;i++){
//            cin>>ocenka;
//            ocenki[i]=ocenka;
//        }
//        cin>>imeIPrezime>>brojKursevi;
//        for (int i=0;i<brojKursevi;i++){
//            cin>>ime>>krediti;
//            kursevi[i]=Kurs(ime,krediti);
//        }
//        cin>>brojCasovi;
//
//        Demonstrator d(indeks,ocenki,brojOcenki,imeIPrezime,kursevi,brojKursevi,brojCasovi);
//        d.pecati();
//
//    } else if (tip==6) //site klasi
//    {
//        cout<<"-----TEST Student i Demonstrator-----"<<endl;
//        cin>>indeks>>brojOcenki;
//        for (int i=0;i<brojOcenki;i++){
//            cin>>ocenka;
//            ocenki[i]=ocenka;
//        }
//        cin>>imeIPrezime>>brojKursevi;
//        for (int i=0;i<brojKursevi;i++){
//            cin>>ime>>krediti;
//            kursevi[i]=Kurs(ime,krediti);
//        }
//        cin>>brojCasovi;
//
//        Student *s=new Demonstrator(indeks,ocenki,brojOcenki,imeIPrezime,kursevi,brojKursevi,brojCasovi);
//        s->pecati();
//        cout<<"\nBroj na bodovi: "<<s->getBodovi()<<endl;
//        delete s;
//
//
//    } else if (tip==7) //funkcija vratiNajdobroRangiran
//    {
//        cout<<"-----TEST vratiNajdobroRangiran-----"<<endl;
//        int k, opt;
//        cin>>k;
//        Student **studenti=new Student*[k];
//        for (int j=0;j<k;j++){
//            cin>>opt; //1 Student 2 Demonstrator
//            cin>>indeks>>brojOcenki;
//            for (int i=0;i<brojOcenki;i++)
//            {
//                cin>>ocenka;
//                ocenki[i]=ocenka;
//            }
//            if (opt==1){
//                studenti[j]=new Student(indeks,ocenki,brojOcenki);
//            }else{
//                cin>>imeIPrezime>>brojKursevi;
//                for (int i=0;i<brojKursevi;i++){
//                    cin>>ime>>krediti;
//                    kursevi[i]=Kurs(ime,krediti);
//                }
//                cin>>brojCasovi;
//                studenti[j]=new Demonstrator(indeks,ocenki,brojOcenki,imeIPrezime,kursevi,brojKursevi,brojCasovi);
//            }
//        }
//        Student& najdobar=vratiNajdobroRangiran(studenti,k);
//        cout<<"Maksimalniot broj na bodovi e:"<<najdobar.getBodovi();
//        cout<<"\nNajdobro rangiran:";
//        najdobar.pecati();
//
//        for (int j=0;j<k;j++) delete studenti[j];
//        delete [] studenti;
//    } else if (tip==8) //funkcija pecatiDemonstratoriKurs
//    {
//        cout<<"-----TEST pecatiDemonstratoriKurs-----"<<endl;
//        int k, opt;
//        cin>>k;
//        Student **studenti=new Student*[k];
//        for (int j=0;j<k;j++){
//            cin>>opt; //1 Student 2 Demonstrator
//            cin>>indeks>>brojOcenki;
//            for (int i=0;i<brojOcenki;i++)
//            {
//                cin>>ocenka;
//                ocenki[i]=ocenka;
//            }
//            if (opt==1){
//                studenti[j]=new Student(indeks,ocenki,brojOcenki);
//            }else{
//                cin>>imeIPrezime>>brojKursevi;
//                for (int i=0;i<brojKursevi;i++)
//                {
//                    cin>>ime>>krediti;
//                    kursevi[i]=Kurs(ime,krediti);
//                }
//                cin>>brojCasovi;
//                studenti[j]=new Demonstrator(indeks,ocenki,brojOcenki,imeIPrezime,kursevi,brojKursevi,brojCasovi);
//            }
//        }
//        char kurs[20];
//        cin>>kurs;
//        cout<<"Demonstratori na "<<kurs<<" se:"<<endl;
//        pecatiDemonstratoriKurs (kurs,studenti,k);
//        for (int j=0;j<k;j++) delete studenti[j];
//        delete [] studenti;
//
//    }
//
//
//    return 0;
//}

//---------------------------------------------DRAFAN 7 CAS-------------------------------//
//#include <iostream>
//#include <string>
//#include <cstring>
//#include <cctype>
//using namespace std;
//
//class VrabotenIsklucok{
//private:
//    char *msg;
//public:
//    VrabotenIsklucok(char *msg)
//    {
//        this->msg=new char[strlen(msg)+1];
//        strcpy(this->msg,msg);
//    }
//    void message(){
//        cout<<msg<<endl;
//    }
//};
//
//class Vozac
//{
//private:
//    string ime;
//    string prezime;
//    int vozrast;
//    int brcasovi;
//public:
//    Vozac(){}
//    Vozac(string ime,  string prezime, int vozrast, int brcasovi)
//    {
//        if (vozrast<18)
//        {
//            throw VrabotenIsklucok("Nevalidna vozrast ");
//        }
//        for (int i = 0; i < ime.length(); ++i) {
//            if (!isalpha(ime[i]))
//            {
//                throw VrabotenIsklucok("Nevalidna ime ");
//            }
//        }
//        this->ime=ime;
//        this->prezime=prezime;
//        this->vozrast=vozrast;
//        if (brcasovi<=0){
//            throw VrabotenIsklucok("Nevaliden broj na casovi ");
//        }
//        this->brcasovi=brcasovi;
//    }
//};
//
//int main(){
//    try {
//        Vozac v1("Luka","Dimitrijoski",24,29);
//    }catch (VrabotenIsklucok &ve) {
//    ve.message();
//    }
//    try {
//        Vozac v2("Goce","Jovanov",12,40);
//    }catch (VrabotenIsklucok &ve){
//        ve.message();
//    }
//
//
//}


//---------------------------------------------DRAgAN 8 CAS-------------------------------//

//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//
//class ExistingGame{ //VAZNOO
//private:
//    char *msg;
//public:
//    ExistingGame(char *msg){
//        this->msg=new char[strlen(msg)+1];
//        strcpy(this->msg,msg);
//    }
//    void message(){
//        cout<<msg<<endl;
//    }
//    ~ExistingGame(){
//        delete []msg;
//    }
//};
//
//class Game{
//protected:
//    char game_name[100];
//    float game_price;
//    bool game_on_sale;
//public:
//    Game(){}
//    Game(char *game_name,float game_price,bool game_on_sale){
//        strcpy(this->game_name,game_name);
//        this->game_price=game_price;
//        this->game_on_sale=game_on_sale;
//    }
//    bool operator==(const Game &g){
//        return strcmp(this->game_name,g.game_name)==0;
//    }
//
//    virtual void print(){
//
//        cout<<"Game: "<<game_name<<", regular price: $"<<game_price;
//        if (game_on_sale){
//            cout<<", bought on sale";
//        }
//    }
//    virtual void read(){
//        cin>>game_name>>game_price>>game_on_sale;
//    }
//    friend ostream& operator<<(ostream &out, Game &g){
//
//        g.print();
//        return out;
//    }
//    friend istream& operator>>(istream &in,Game &g){
//      g.read();
//        return in;
//    }
//
//    bool getSale(){
//        return game_on_sale;
//    };
//     char* getName(){
//        return game_name;
//    }
//    float getPrice(){
//        return game_price;
//    }
//
//    virtual ~Game(){}
//};
//
//class SubscriptionGame:public Game{
//private:
//    float sub_game_monthly_fee;
//    int sub_game_month;
//    int sub_game_year;
//public:
//    SubscriptionGame():Game(){}
//    SubscriptionGame(char *game_name,float game_price,bool game_on_sale,float sub_game_monthly_fee,int sub_game_month,int sub_game_year)
//    :Game(game_name,game_price,game_on_sale){
//        this->sub_game_month=sub_game_month;
//        this->sub_game_year=sub_game_year;
//        this->sub_game_monthly_fee=sub_game_monthly_fee;
//    }
//
//    void print(){
//        Game::print();//PREPOKRIVANJE-----
//        cout<<", monthly fee: $"<<sub_game_monthly_fee<<", purchased: "<<sub_game_month<<"-"<<sub_game_year<<endl;
//    }
//     void read(){
//        Game::read();//-----PREPOKRIVANJE
//        cin>>sub_game_monthly_fee>>sub_game_month>>sub_game_year;
//    }
////    friend istream& operator>>(istream &in,SupscriptionGame &sg){//--------nemora da se pisuva
////        sg.read();
////        return in;
////    }
////
////    friend  ostream& operator<<(ostream &out,SupscriptionGame &sg){//----------nemora da se pisuva
////        sg.print();
////        return out;
////    }
////
//
//float getFee(){
//        return sub_game_monthly_fee;
//    }
//
//int getYear(){
//        return sub_game_year;
//    }
//    int getMonth(){
//        return sub_game_month;
//    }
//
//    ~SubscriptionGame(){}
//};
//
//class User
//{
//private:
//    char username[100];
//    Game **g;
//    int n;
//public:
//    User(){
//        this->n=0;
//        g=new Game*[0];
//    }
//    User(char *username){
//        strcpy(this->username,username);
//        this->n=0;
//        this->g= new Game*[0];
//    }
//    User(const User &u){
//        strcpy(this->username,u.username);
//        this->n=u.n;
//        this->g= new Game*[n];
//        for (int i = 0; i < n; ++i) {
//            this->g[i]=u.g[i];
//        }
//    }
//    User& operator=(const User &u){
//        if (this!=&u) {
//            strcpy(this->username, u.username);
//            this->n = u.n;
//            this->g = new Game*[n];
//            for (int i = 0; i < n; ++i) {
//                this->g[i] = u.g[i];
//            }
//        }return *this;
//    }
//    User& operator+=( Game &nova){
//        for (int i = 0; i < n; ++i) {
//            if (strcmp(g[i]->getName(),nova.getName())==0) {
//                throw ExistingGame("The game is already in the collection");
//            }
//
//        }
//        Game **temp=new Game*[n+1];
//        for (int i = 0; i < n; ++i) {
//            temp[i]=g[i];
//        }
//        temp[n]=&nova;
//        n++;
//        delete []g;
//        g=temp;
//        return *this;
//    }
//
//    friend ostream& operator<<(ostream &out,const User &u){
//        cout<<"User: "<<u.username<<endl;
//        for (int i = 0; i < u.n; ++i) {
//            cout<<*u.g[i];
//
//        }
//    }
//    float  total_spent(){
//        float sum=0;
//        for (int i = 0; i < n; ++i) {
//            if (g[i]->getSale()){
//                sum+=g[i]->getPrice()-g[i]->getPrice()*30/100;
//            }
//            else
//            {
//                sum+=g[i]->getPrice();
//            }
//            SubscriptionGame *sg= dynamic_cast<SubscriptionGame*>(g[i]);
//            if (sg!=0){
//                int god=2018-sg->getYear();
//                int month=5 - sg->getMonth();
//                sum+=(god*12+month) * sg->getFee();
//            }
//        }
//        return sum;
//    }
//
//    ~User(){
//        delete []g;
//    }
//};
//
//
//int main() {
//    int test_case_num;
//
//    cin>>test_case_num;
//
//    // for Game
//    char game_name[100];
//    float game_price;
//    bool game_on_sale;
//
//    // for SubscritionGame
//    float sub_game_monthly_fee;
//    int sub_game_month, sub_game_year;
//
//    // for User
//    char username[100];
//    int num_user_games;
//
//    if (test_case_num == 1){
//        cout<<"Testing class Game and operator<< for Game"<<std::endl;
//        cin.get();
//        cin.getline(game_name,100);
//        //cin.get();
//        cin>>game_price>>game_on_sale;
//
//        Game g(game_name, game_price, game_on_sale);
//
//        cout<<g;
//    }
//    else if (test_case_num == 2){
//        cout<<"Testing class SubscriptionGame and operator<< for SubscritionGame"<<std::endl;
//        cin.get();
//        cin.getline(game_name, 100);
//
//        cin>>game_price>>game_on_sale;
//
//        cin>>sub_game_monthly_fee;
//        cin>>sub_game_month>>sub_game_year;
//
//        SubscriptionGame sg(game_name, game_price, game_on_sale, sub_game_monthly_fee, sub_game_month, sub_game_year);
//        cout<<sg;
//    }
//    else if (test_case_num == 3){
//        cout<<"Testing operator>> for Game"<<std::endl;
//        Game g;
//
//        cin>>g;
//
//        cout<<g;
//    }
//    else if (test_case_num == 4){
//        cout<<"Testing operator>> for SubscriptionGame"<<std::endl;
//        SubscriptionGame sg;
//
//        cin>>sg;
//
//        cout<<sg;
//    }
//    else if (test_case_num == 5){
//        cout<<"Testing class User and operator+= for User"<<std::endl;
//        cin.get();
//        cin.getline(username,100);
//        User u(username);
//
//        int num_user_games;
//        int game_type;
//        cin >>num_user_games;
//
//        try {
//
//            for (int i=0; i<num_user_games; ++i){
//
//                cin >> game_type;
//
//                Game *g;
//                // 1 - Game, 2 - SubscriptionGame
//                if (game_type == 1){
//                    cin.get();
//                    cin.getline(game_name, 100);
//
//                    cin>>game_price>>game_on_sale;
//                    g = new Game(game_name, game_price, game_on_sale);
//                }
//                else if (game_type == 2){
//                    cin.get();
//                    cin.getline(game_name, 100);
//
//                    cin>>game_price>>game_on_sale;
//
//                    cin>>sub_game_monthly_fee;
//                    cin>>sub_game_month>>sub_game_year;
//                    g = new SubscriptionGame(game_name, game_price, game_on_sale, sub_game_monthly_fee, sub_game_month, sub_game_year);
//                }
//
//                //cout<<(*g);
//
//                try {
//                    u+=(*g);
//                } catch (ExistingGame &eg) {
//                    eg.message();
//                }
//
//            }
//        }catch(ExistingGame &ex){
//            ex.message();
//        }
//
//        cout<<u;
//
////    cout<<"\nUser: "<<u.get_username()<<"\n";
//
////    for (int i=0; i < u.get_games_number(); ++i){
////        Game * g;
////        SubscriptionGame * sg;
////        g = &(u.get_game(i));
//
////        sg = dynamic_cast<SubscriptionGame *> (g);
//
////        if (sg){
////          cout<<"- "<<(*sg);
////        }
////        else {
////          cout<<"- "<<(*g);
////        }
////        cout<<"\n";
////    }
//
//    }
//    else if (test_case_num == 6){
//        cout<<"Testing exception ExistingGame for User"<<std::endl;
//        cin.get();
//        cin.getline(username,100);
//        User u(username);
//
//        int num_user_games;
//        int game_type;
//        cin >>num_user_games;
//
//        for (int i=0; i<num_user_games; ++i){
//
//            cin >> game_type;
//
//            Game *g;
//            // 1 - Game, 2 - SubscriptionGame
//            if (game_type == 1){
//                cin.get();
//                cin.getline(game_name, 100);
//
//                cin>>game_price>>game_on_sale;
//                g = new Game(game_name, game_price, game_on_sale);
//            }
//            else if (game_type == 2){
//                cin.get();
//                cin.getline(game_name, 100);
//
//                cin>>game_price>>game_on_sale;
//
//                cin>>sub_game_monthly_fee;
//                cin>>sub_game_month>>sub_game_year;
//                g = new SubscriptionGame(game_name, game_price, game_on_sale, sub_game_monthly_fee, sub_game_month, sub_game_year);
//            }
//
//            //cout<<(*g);
//
//            try {
//                u+=(*g);
//            }
//            catch(ExistingGame &ex){
//                ex.message();
//            }
//        }
//
//        cout<<u;
//
////      for (int i=0; i < u.get_games_number(); ++i){
////          Game * g;
////          SubscriptionGame * sg;
////          g = &(u.get_game(i));
//
////          sg = dynamic_cast<SubscriptionGame *> (g);
//
////          if (sg){
////            cout<<"- "<<(*sg);
////          }
////          else {
////            cout<<"- "<<(*g);
////          }
////          cout<<"\n";
////      }
//    }
//    else if (test_case_num == 7){
//        cout<<"Testing total_spent method() for User"<<std::endl;
//        cin.get();
//        cin.getline(username,100);
//        User u(username);
//
//        int num_user_games;
//        int game_type;
//        cin >>num_user_games;
//
//        for (int i=0; i<num_user_games; ++i){
//
//            cin >> game_type;
//
//            Game *g;
//            // 1 - Game, 2 - SubscriptionGame
//            if (game_type == 1){
//                cin.get();
//                cin.getline(game_name, 100);
//
//                cin>>game_price>>game_on_sale;
//                g = new Game(game_name, game_price, game_on_sale);
//            }
//            else if (game_type == 2){
//                cin.get();
//                cin.getline(game_name, 100);
//
//                cin>>game_price>>game_on_sale;
//
//                cin>>sub_game_monthly_fee;
//                cin>>sub_game_month>>sub_game_year;
//                g = new SubscriptionGame(game_name, game_price, game_on_sale, sub_game_monthly_fee, sub_game_month, sub_game_year);
//            }
//
//            //cout<<(*g);
//
//
//            try {
//                u+=(*g);
//            } catch (ExistingGame &eg) {
//                eg.message();
//            }
//        }
//
//        cout<<u;
//
//        cout<<"Total money spent: $"<<u.total_spent()<<endl;
//    }
//}

//---------------------------------------------DRAgAN 9 CAS-------------------------------//
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <cctype>
//
//using namespace std;
//
//class Secret
//{
//public:
//    virtual double simpleEntropy()=0 ;
//    virtual int total() =0;
//
//    virtual bool checkEq( Secret *s) = 0;
//    virtual bool checkNotEq( Secret *s) = 0;
//    virtual void print()=0;
//
//    bool operator==( Secret &s)
//    {
//        return checkEq(&s);
//    }
//    bool operator!=( Secret &s)
//    {
//        return checkNotEq(&s);
//    }
//
//    friend ostream& operator<<(ostream& out, Secret &s)
//    {
//        s.print();
//        return out;
//    }
//    virtual ~Secret(){}
//};
//
//class DigitSecret : public Secret
//{
//private:
//    int broevi[100];
//    int brBroevi;
//public:
//
//    DigitSecret () : Secret()
//    {
//        brBroevi=0;
//    }
//    DigitSecret (int broevi[],int brBroevi) : Secret()
//    {
//        this->brBroevi=brBroevi;
//        for(int i=0;i<brBroevi;i++)
//        {
//            this->broevi[i] = broevi[i];
//        }
//    }
//    double simpleEntropy()
//    {
//
//        int pomNiza[10];
//        for(int i=0;i<10;i++)
//        {
//            pomNiza[i]=0;
//        }
//        for(int i=0;i<brBroevi;i++)
//        {
//            pomNiza[broevi[i]]++;
//        }
//        int uniq =0;
//        for(int i=0;i<10;i++)
//        {
//            if(pomNiza[i]==1)
//            {
//                uniq++;
//            }
//        }
//
//        return (double)uniq/brBroevi;
//    }
//    int total()
//    {
//        return brBroevi;
//    }
//
//    bool checkEq( Secret *s)
//    {
//        DigitSecret *ds = dynamic_cast<DigitSecret*>(s);
//        if(ds!=0)
//        {
//            for(int i=0;i<brBroevi;i++)
//            {
//                if(this->broevi[i]!=ds->broevi[i])
//                    return false;
//            }
//            return true;
//        }
//        return false;
//    }
//
//    bool checkNotEq( Secret *s)
//    {
//        DigitSecret *ds = dynamic_cast<DigitSecret*>(s);
//        if(ds!=0)
//        {
//            int br=0;
//            for(int i=0;i<brBroevi;i++)
//            {
//                if(this->broevi[i]==ds->broevi[i])
//                    br++;
//            }
//            if(br==brBroevi)
//                return false;
//            else
//                return true;
//        }
//        return true;
//    }
//
//
//    void print()
//    {
//        cout<<brBroevi<<"Simple entropy: "<<simpleEntropy()<<"Total: "<<total()<<endl;
//    }
//    ~DigitSecret(){}
//};
//
//class CharSecret : public Secret

//{
//private:
//    char bukvi[100];
//public:
//    CharSecret() : Secret(){}
//    CharSecret(char *bukvi)
//    {
//        strcpy(this->bukvi,bukvi);
//    }
//
//    double simpleEntropy()
//    {
//        int azbuka[26] = {0};//site 26 elementi na inicijalna nula
//
//        for(int i=0;i<strlen(bukvi);i++)
//        {
//            if(isalpha(bukvi[i]))
//                azbuka[bukvi[i]-'a']++;
//        }
//        int uniq=0;
//        int suma=0;
//        for(int i=0;i<26;i++)
//        {
//            if(azbuka[i]==1)
//            {
//                uniq++;
//            }
//            suma+=azbuka[i];
//        }
//        return (double)uniq / suma;
//    }
//    int total()
//    {
//        return strlen(bukvi);
//    }
//
//    bool checkEq(Secret *s)
//    {
//        CharSecret *cs  = dynamic_cast<CharSecret*>(s);
//        if(cs!=0)
//            return strcmp(this->bukvi,cs->bukvi)==0;
//        else
//            return false;
//
//    }
//    void print()
//    {
//        cout<<strlen(bukvi)<<"Simple entropy: "<<simpleEntropy()<<"Total: "<<total()<<endl;
//    }
//    bool checkNotEq(Secret *s)
//    {
//        CharSecret *cs  = dynamic_cast<CharSecret*>(s);
//        if(cs!=0)
//            return strcmp(this->bukvi,cs->bukvi)!=0;
//        return true;
//    }
//    ~CharSecret(){}
//};
//
//
//void process(Secret **secrets, int n)
//{
//    int index=0;
//    double max=secrets[0]->simpleEntropy();
//    for(int i=1;i<n;i++)
//    {
//        if(secrets[i]->simpleEntropy() > max)
//        {
//            max = secrets[i]->simpleEntropy();
//            index = i;
//        }
//    }
//    cout<<*secrets[index];
//}
//
//void printAll(Secret **secrets, int n)
//{
//    for(int i=1;i<n;i++)
//    {
//        cout<<*secrets[i];
//    }
//}
//int main()
//{
//    int niza1[] = {3,4,5,1,2,3,4,5,3,4,5,7,8};
//    int niza2[] = {3,4,5,1,8,3,4,5,3,4,5,7,8};
//    char nizaChar1[] = "tekst za prva niza";
//    char nizaChar2[] = "tekst za vtora niza";
//    DigitSecret ds1 (niza1,13);
//    DigitSecret ds2 (niza2,13);
//
//
//    CharSecret cs1(nizaChar1);
//    CharSecret cs2(nizaChar1);
//    if(ds1==ds2)
//    {
//        cout<<"Isti"<<endl;
//    }
//    else
//    {
//        cout<<"Ne se isti"<<endl;
//    }
//
//    if(cs1==cs2)
//    {
//        cout<<"Isti"<<endl;
//    }
//    else
//    {
//        cout<<"Ne se isti"<<endl;
//    }
//
//    cout<<ds1.simpleEntropy()<<endl;
//    cout<<cs1.simpleEntropy()<<endl;
//}
//-------------------------------------DRAGANN 10 CAS---------------------------------------DATOTEKI//
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//
//int main(){
//ifstream input("\\Desktop\\Test.txt");
//    if (!input.is_open())
//    {
//        cout<<"Nema takva datoteka "<<endl;
//        return -1;
//    }
//    string line;
//    while(getline(input,line)){
//        cout<<line<<endl;
//    }
//    input.close();
//
//    return 0;
//}



////-------------------------------------DRAGANN 12 CAS---------------------------------------//
//#include <iostream>
//#include <fstream>
//using  namespace std;
//
//class Person{
//private:
//    string ime;
//public:
//    Person(){}
//    Person(string ime){
//        cout<<"Konstruktorot ima ime "<<endl;
//        this->ime=ime;
//
//    }
//};
//
//class Student : virtual public Person{
//private:
//    string index;
//public:
//    Student(){}
//    Student(string index){
//        this->index=index;
//        cout<<"Student noctructor called"<<endl;
//    }
//
//};
//class Vraboten : virtual public Person{
//private:
//    int plata;
//public:
//    Vraboten(){}
//    Vraboten(int plata){
//        this->plata=plata;
//        cout<<"Vraboten noctructor called"<<endl;
//    }
//
//};
//
//class Assistent : public Student,public Vraboten{
//public:
//    Assistent():Student(),Vraboten(){}
//    Assistent(string index,int plata):Student(index),Vraboten(plata){
//        cout<<"Assistent constructor called"<<endl;
//    }
//
//};
//
//int main(){
//    Assistent a1("Dragan","2322323",1000);  ----DIAMOND PROBLEM
//}

//#include <iostream>
//#include <fstream>
//#include <cctype>
//using namespace std;
//
//void writeToFile() {
//    std::ofstream outFile("text.txt");
//    char c;
//    while((c = std::cin.get()) != '#') {
//        outFile.put(c);
//    }
//    outFile.close();
//}
//
//int main() {
//    writeToFile();
//
//    //Your code
//    ifstream inFile("text.txt");
//    if(!inFile.is_open()){
//        return -1;
//    }
//    int mali=0, golemi=0, total=0;
//    char c;
//    while(inFile.get(c)){
//        if (isalpha(c)){
//            total++;
//            if (islower(c)) {
//                mali++;
//            }
//                else golemi++;
//        }
//    }
//
//    inFile.close();
//    float rFrekvencija=(float)mali/total;
//    float rgolemi= (float)golemi/total;
//    cout<<"Realtivni frekvencii na site malii: "<<rFrekvencija<<endl;
//    cout<<"Realtivni frekvencii na site golemi: "<<rgolemi<<endl;
//
//    return 0;
//}
//
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <cctype>
//
//using namespace std;
//
//
//class SMS
//{
//protected:
//    char tel[20];
//    float cena;
//public:
//    SMS(){}
//    SMS(char *tel,float cena)
//    {
//        strcpy(this->tel,tel);
//        this->cena = cena;
//    }
//    virtual float SMS_cena() = 0;
//    friend ostream& operator<<(ostream& out,SMS &s)
//    {
//        out<<"Tel: "<<s.tel<<" - cena: "<<s.SMS_cena()<<"den."<<endl;
//        return out;
//    }
//    virtual ~SMS(){}
//};
//class RegularSMS : public SMS
//{
//private:
//    char msg[1000];
//    bool roam;
//    static int rProcent;
//public:
//    RegularSMS(): SMS(){}
//    RegularSMS(char *tel,float cena,char *msg,bool roam) : SMS(tel,cena)
//    {
//        strcpy(this->msg, msg);
//        this->roam = roam;
//    }
//    static void set_rProcent(int r)
//    {
//        rProcent = r;
//    }
//    float SMS_cena()
//    {
//        int brPoraki = strlen(msg)/160 + 1;
//        if(strlen(msg)%160==0)
//            brPoraki--;
//        int cenaRoam=0;
//        if(roam)
//        {
//            cenaRoam = cena * rProcent /100;
//        }
//
//        return brPoraki *(cena + cenaRoam + cena*18/100);
//    }
//    ~RegularSMS(){}
//};
//int RegularSMS::rProcent = 300;
//
//class SpecialSMS : public SMS
//{
//private:
//    static int sProcent;
//    bool hum;
//public:
//    SpecialSMS(): SMS(){}
//    SpecialSMS(char *tel,float cena,bool hum) : SMS(tel,cena)
//    {
//        this->hum = hum;
//    }
//    static void set_sProcent(int s)
//    {
//        sProcent = s;
//    }
//    float SMS_cena()
//    {
//        int humCena=0;
//        int ddv=0;
//        if(!hum)
//        {
//            humCena = cena * sProcent/100;
//            ddv = cena * 18/100;
//        }
//        return cena + humCena + ddv;
//    }
//    ~SpecialSMS(){}
//};
//int SpecialSMS::sProcent = 150;
//
//void vkupno_SMS(SMS **poraki, int n)
//{
//    int r=0,s=0;
//    float rVkupno=0;
//    float sVkupno=0;
//    for(int i=0;i<n;i++)
//    {
//        RegularSMS *rs = dynamic_cast<RegularSMS*>(poraki[i]);
//        if(rs!=0)
//        {
//            rVkupno +=rs->SMS_cena();
//            r++;
//        }
//        else
//        {
//            SpecialSMS *ss = dynamic_cast<SpecialSMS*>(poraki[i]);
//            sVkupno+=ss->SMS_cena();
//            s++;
//        }
//    }
//    cout<<"Regular SMS: "<<r<<" Total price: "<<rVkupno<<"den."<<endl;
//    cout<<"Special SMS: "<<s<<" Total price: "<<sVkupno<<"den."<<endl;
//}
//int main(){
//
//    char tel[20], msg[1000];
//    float cena;
//    float price;
//    int p;
//    bool roam, hum;
//    SMS  **sms;
//    int n;
//    int tip;
//
//    int testCase;
//    cin >> testCase;
//
//    if (testCase == 1){
//        cout << "====== Testing RegularSMS class ======" << endl;
//        cin >> n;
//        sms = new SMS *[n];
//
//        for (int i = 0; i < n; i++){
//            cin >> tel;
//            cin >> cena;
//            cin.get();
//            cin.getline(msg, 1000);
//            cin >> roam;
//            cout << "CONSTRUCTOR" << endl;
//            sms[i] = new RegularSMS(tel, cena, msg, roam);
//            cout << "OPERATOR <<" << endl;
//            cout << *sms[i];
//        }
//        for (int i = 0; i<n; i++) delete sms[i];
//        delete[] sms;
//    }
//    if (testCase == 2){
//        cout << "====== Testing SpecialSMS class ======" << endl;
//        cin >> n;
//        sms = new SMS *[n];
//
//        for (int i = 0; i < n; i++){
//            cin >> tel;
//            cin >> cena;
//            cin >> hum;
//            cout << "CONSTRUCTOR" << endl;
//            sms[i] = new SpecialSMS(tel, cena, hum);
//            cout << "OPERATOR <<" << endl;
//            cout << *sms[i];
//        }
//        for (int i = 0; i<n; i++) delete sms[i];
//        delete[] sms;
//    }
//    if (testCase == 3){
//        cout << "====== Testing method vkupno_SMS() ======" << endl;
//        cin >> n;
//        sms = new SMS *[n];
//
//        for (int i = 0; i<n; i++){
//
//            cin >> tip;
//            cin >> tel;
//            cin >> cena;
//            if (tip == 1) {
//
//                cin.get();
//                cin.getline(msg, 1000);
//                cin >> roam;
//
//                sms[i] = new RegularSMS(tel, cena, msg, roam);
//
//            }
//            else {
//                cin >> hum;
//
//                sms[i] = new SpecialSMS(tel, cena, hum);
//            }
//        }
//
//        vkupno_SMS(sms, n);
//        for (int i = 0; i<n; i++) delete sms[i];
//        delete[] sms;
//    }
//    if (testCase == 4){
//        cout << "====== Testing RegularSMS class with a changed percentage======" << endl;
//        SMS *sms1, *sms2;
//        cin >> tel;
//        cin >> cena;
//        cin.get();
//        cin.getline(msg, 1000);
//        cin >> roam;
//        sms1 = new RegularSMS(tel, cena, msg, roam);
//        cout << *sms1;
//
//        cin >> tel;
//        cin >> cena;
//        cin.get();
//        cin.getline(msg, 1000);
//        cin >> roam;
//        cin >> p;
//        RegularSMS::set_rProcent(p);
//        sms2 = new RegularSMS(tel, cena, msg, roam);
//        cout << *sms2;
//
//        delete sms1, sms2;
//    }
//    if (testCase == 5){
//        cout << "====== Testing SpecialSMS class with a changed percentage======" << endl;
//        SMS *sms1, *sms2;
//        cin >> tel;
//        cin >> cena;
//        cin >> hum;
//        sms1 = new SpecialSMS(tel, cena, hum);
//        cout << *sms1;
//
//        cin >> tel;
//        cin >> cena;
//        cin >> hum;
//        cin >> p;
//        SpecialSMS::set_sProcent(p);
//        sms2 = new SpecialSMS(tel, cena, hum);
//        cout << *sms2;
//
//        delete sms1, sms2;
//    }
//
//    return 0;
//}

//--------------------------CAS DRGAAN 13
//#include <iostream>
//#include <cstring>
//
//
//using namespace std;
//
//template <typename T>
//T suma(T a,T b)
//{
//    return a + b;
//}
//
//template <typename R>
//R maxN(R a,R b)
//{
//    if(a>b)
//        return a;
//    return b;
//}
//
//int main()
//{
//    cout<<suma(4,5)<<endl;
//    cout<<suma(4.0f,5.0f)<<endl;
//    cout<<suma(4.456,5.456)<<endl;
//
//
//    cout<<maxN(5,87)<<endl;
//    cout<<maxN(123.5,87.8)<<endl;
//    cout<<maxN(545.2f,8.127f)<<endl;
//    cout<<maxN(5.12,87.34)<<endl;
//}
//

//#include <iostream>
//#include <cstring>
//
//
//using namespace std;
//
//
//template <typename T1, typename T2>
//class Pair
//{
//private:
//    T1 first;
//    T2 second;
//public:
//    Pair(T1 first, T2 second)
//    {
//        this->first = first;
//        this->second = second;
//    }
//    T1 getFirst()
//    {
//        return first;
//    }
//    T2 getSecond()
//    {
//        return second;
//    }
//};
//
//class Student
//{
//private:
//    string ime;
//    int index;
//public:
//    Student (){}
//    Student(string ime,int index)
//    {
//        this->ime = ime;
//        this->index = index;
//    }
//    friend ostream& operator<<(ostream &out,const Student &s)
//    {
//        out<<"Ime: "<<s.ime<<" Index: "<<s.index;
//        return out;
//    }
//    void print()
//    {
//        cout<<"Ime: "<<ime<<" Index: "<<index;
//    }
//};
//
////---------------Specijalizirana upotreba na template za char*---------
//template<typename T>
//class Printer
//{
//public:
//    void print(T text)
//    {
//        cout<<"Printer's out: "<<text<<endl;
//    }
//};
//
//template<>
//class Printer<char*>
//{
//public:
//    void print(char *text)
//    {
//        cout<<"Char*: "<<text<<endl;
//    }
//};
//int main()
//{
//    Pair<int,double> p1(2,4.5);
//
//    cout<<"Pair: ("<<p1.getFirst()<<", "<<p1.getSecond()<<" )"<<endl;
//
//    Pair<string,string> p2("Dragan","Jakimovski");
//    cout<<"Pair: ("<<p2.getFirst()<<", "<<p2.getSecond()<<" )"<<endl;
//
//
//    Student s1("Dragan",2345);
//    Pair<string,Student> p3("FINKI",s1);
//    cout<<"Pair: ("<<p3.getFirst()<<", "<<p3.getSecond()<<" )"<<endl;
//
//
//
//    Printer<int> intPrint;
//    intPrint.print(234);
//
//    Printer<string> strPrint;
//    strPrint.print("Tekst");
//
//    Printer<char*> charPrint;
//    charPrint.print("Text from char");
//}

//#include <iostream>
//#include <cstring>
//#include <vector>
//
//using namespace std;
//
//class Student
//{
//private:
//    string ime;
//    int index;
//public:
//    Student(){}
//    Student(string ime,int index)
//    {
//        this->ime = ime;
//        this->index = index;
//    }
//};
//int main()
//{
//
//    vector<int> v1;//default constructor
//    vector<double> v2;
//    vector<Student> v3;
//
//    vector<int> v4(5);//Initializing with a specific size
//
//    vector<int> v5(5,100);//alocate vector with size 5, all elements initilized to 100
//
//    vector<int> v6 = {100,101,102,103,104};//other way of alocate and initilized like above
//
//    for(int broj : v6)//foreach
//    {
//        cout<< broj<<" ";
//    }
//    cout<<endl;
//}
//#include <iostream>
//#include <cstring>
//#include <vector>
//
//using namespace std;
//
//class Student
//{
//private:
//    string ime;
//    int index;
//public:
//    Student(){}
//    Student(string ime,int index)
//    {
//        this->ime = ime;
//        this->index = index;
//    }
//};
//int main()
//{
//
//    vector<int> v;
//
//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);
//    v.push_back(4);
//
//    for(int broj: v)
//    {
//        cout<<broj<<" ";
//    }
//    cout<<endl;
//    v.pop_back();//removing the last element
//
//    for(int broj: v)
//    {
//        cout<<broj<<" ";
//    }
//    cout<<endl;
//
//    v.insert(v.begin()+2,19);
//    for(int broj: v)
//    {
//        cout<<broj<<" ";
//    }
//    cout<<endl;
//
//    v.erase(v.begin()+1);
//    for(int broj: v)
//    {
//        cout<<broj<<" ";
//    }
//    cout<<endl;
//
//    v.clear();//clearing the vector
//
//    cout<<"Vector's size: "<<v.size()<<endl;
//
//}
//#include <iostream>
//#include <cstring>
//#include <vector>
//
//using namespace std;
//
//class Student
//{
//private:
//    string ime;
//    int index;
//public:
//    Student(){}
//    Student(string ime,int index)
//    {
//        this->ime = ime;
//        this->index = index;
//    }
//};
//int main()
//{
//
//    vector<int> v = {1,2,3,4,5};
//
//
//    cout<<"Tretiot element: "<<v[2]<<endl;
//
//
//    cout<<"Tretiot element: "<<v.at(2)<<endl;
//}

//--------------------------------DRAGAN CAS 14------

//#include <iostream>
//#include <cstring>
//#include <string>
//#include <fstream>
//using namespace std;
//class AllreadyEcist{
//private:
//    int index;
//public:
//    AllreadyEcist(int index){
//        this->index=index;
//    }
//    void message(){
//        cout<<"Studentot so index postoi "<<index;
//    }
//
//    ~AllreadyEcist(){}
//};
//class Student
//{
//private:
//    string ime;
//    string prezime;
//    int index;
//    int *oceni;
//    int broceni;
//    string smer;
//public:
//    Student(){
//        broceni=0;
//        this->oceni=new int[broceni];
//    }
//    Student(string ime,string prezime,int index,int *oceni,int broceni,string smer){
//        this->ime=ime;
//        this->prezime=prezime;
//        this->index=index;
//        this->broceni=broceni;
//        this->oceni=new int{broceni};
//        for (int i = 0; i < broceni; ++i) {
//            this->oceni[i]=oceni[i];
//        }
//        this->smer=smer;
//
//    }
//    Student(const Student &s){
//        this->ime=s.ime;
//        this->prezime=s.prezime;
//        this->index=s.index;
//        this->broceni=s.broceni;
//        this->oceni=new int{s.broceni};
//        for (int i = 0; i < s.broceni; ++i) {
//            this->oceni[i]=s.oceni[i];
//        }
//        this->smer=s.smer;
//
//    }
//    Student&  operator=(const Student &s){
//        if (this!=&s){
//            delete []oceni;
//            this->ime=s.ime;
//            this->prezime=s.prezime;
//            this->index=s.index;
//            this->broceni=s.broceni;
//            this->oceni=new int{s.broceni};
//            for (int i = 0; i < s.broceni; ++i) {
//                this->oceni[i]=s.oceni[i];
//            }
//            this->smer=s.smer;
//        }return *this;
//    }
//    int getIndex(){
//        return index;
//    }
//
//    friend ostream& operator<<(ostream &out,const Student &s){
//
//        out<<s.ime<<" "<<s.prezime<<" Index: "<<s.index<<" Broj na polozeni predmeti "<<s.broceni<<endl;
//        out<<"Oceni "<<endl;
//        for (int i = 0; i < s.broceni; ++i) {
//            out<<s.oceni[i]<<" ";
//        }out<<endl;
//        return out;
//    }
//    float prosek(){
//        int s=0;
//        for (int i = 0; i < broceni; ++i) {
//            s+=oceni[i];
//        }return (float)s/broceni;
//    }
//    string getSmer(){
//        return smer;
//    }
//    bool operator==(const Student &s){
//        return this->index==s.index;
//    }
//    ~Student(){
//        delete []oceni;
//    }
//};
//
//class Fakultet
//{
//private:
//    string naziv;
//    Student *s;
//    int n;
//public:
//    Fakultet(){
//        n=0;
//        s=new Student[0];
//    }
//    Fakultet(string naziv){
//        this->naziv=naziv;
//        n=0;
//        s=new Student[0];
//
//    }
//
//    Fakultet& operator+=(const Student &nov)
//            {
//                for (int i = 0; i < n; ++i) {
//                    if (s[i]==nov){
////                        char msg[100];
////                        strcpy(msg,"Studenoto so index: ");
////                        strcat(msg, to_string(nov.getIndex()));
//                        throw AllreadyEcist (nov.getIndex);
//                    }
//                }
//
//                Student *temp=new Student[n+1];
//                for (int i = 0; i < n; ++i) {
//                    temp[i]=s[i];
//                }
////                s[n]=nov;
////                n++;          AKO NE E DINAMICKI ALOCIRANA
////
//        return *this;
//    }
//    ~Fakultet(){
//        delete[]s;
//    }
//
//};
//void writetoFile()
//{
//    ofstream outFile("student.txt");
//    int n;
//
//    string ime,prezime,smer;
//    int broceni;
//    int oceni[50];
//    int index;
//    cin>>n;
//    if (!outFile){
//        cerr<<"Ne moze da se otvori datotekata "<<endl;
//        return;
//    }
//    outFile<<n<<endl;
//    for (int i = 0; i < n; ++i) {
//        cin>>ime>>prezime>>index>>smer>>broceni;
//        outFile<<ime<<" "<<prezime<<" "<<index<<" "<<smer<<" "<<broceni;
//        for (int j = 0; j < broceni; ++j) {
//            cin>>oceni[i];
//            outFile<<oceni[i]<<" ";
//
//        }outFile<<endl;
//    }outFile.close();
//}
//int main()
//{
//    Fakultet f("FINKI");
//    writetoFile();
//    //vasiot kod
//    ifstream  inFile("Student.txt");
//    string word;
//    string ime;
//    string prezime;
//    string smer;
//    int index;
//    int oceni[50];
//    int broceni=0;
//    while(inFile)
//    {
//    inFile>>ime>>prezime>>index>>smer>>broceni;
//        for (int i = 0; i < broceni; ++i) {
//            inFile>>oceni[i];
//        }
//        Student s(ime,prezime,index,oceni,broceni,smer);
////        f+=s;
//    }
//
//
//}
//
