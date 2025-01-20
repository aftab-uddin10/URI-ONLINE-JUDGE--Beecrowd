#include <iostream>
using namespace std;
 
int main() {
 int n,a,b;
 char c;
 cin>> n;
 for(int i=0;i<n;i++){
     cin>>a>>c>>b;
      if(a == b)
            cout<<a*b<<endl;
        else if(c >= 65 && c <= 90)
            cout<<b-a<<endl;
        else
          cout<<b+a<<endl;
 }
   
    return 0;
}
