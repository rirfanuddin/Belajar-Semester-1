#include<iostream>
using namespace std;

int main(){
    int a[500], n, i;
    int min=200; 
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
            }
    for(i=0;i<n;i++){
    if(a[i]<=min){
    min=a[i];
        }
      }
    cout<< min<<endl;
 return 0;
}
