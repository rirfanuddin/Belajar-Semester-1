#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    
    int a[10000],n,i,j;
    
    cin >> n;
    i=0;
    while(n>0){
      a[i] = n%2;
       n=n/2;
       i++;
       }
       for(j=i-1;j>=0;j--){
          cout << a[j];
          }
       
       getch();
       return 0;
       }
       
