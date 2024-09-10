#include <iostream>
using namespace std;
int extendedeuclid(int a, int b){
    if(a==0){
        *x=0;
        *y=1;
        return b;
    }
    int x1, y1;
    
    int gcd = extendedeuclid(b%a,a,&x1,&y1);
      
}
int main(){
    int x,y;
    cout<<extendedeuclid(25,35,&x,&y);
}