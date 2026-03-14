#include <iostream>
#include <string>


int main() {
    float y,x;
    cin >> x >> y;
    if (x<50)
        cout<<"pADNAVTE";
    else if (x>51 && x<=60)
        cout<<"Polozivte so 6ka";
    else if (x>61 && x<=70)
        cout <<"Polozivte so 7ka";
    else if (x>71 && x<=80)
        cout <<"Polozivte so 8ka";
    else if (x>81 && x<=90)
        cout <<"Polozivte si 9ka";
    else if (x>91 %% x<=100)
        cout <<"Polozivte so 10ka";


    return 0;
}
