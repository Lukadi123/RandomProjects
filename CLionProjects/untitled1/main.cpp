#include <iostream>
#include <climits>
#include <iomanip>
using namespace std;




int main(){
   int n,m;
   int a[100][100];
   cin>>n>>m;
   bool flag=true;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n-1; ++i) {
        int max=a[i][0];
        for (int j = 0; j < m; ++j) {
            if (a[i][j]>max){
                max=a[i][j];
            }
        }
        for (int j = 0; j < m; ++j) {
            if (a[i+1][j]>=max){
                flag=false;
            }
        }

    }
    if (flag){
        cout<<"tocno";
    }else if(!flag){
        cout<<"netocno";
    }

    return 0;
}
