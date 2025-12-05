/* 
*
**
***
****
*****
****
***
**
*
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n*2-1;i++){
    int star=i;
    if(i>n) star=n*2-i;
    for(int j=1;j<=star;j++){
      cout<<"*";
    }
    cout<<endl;
    }
}