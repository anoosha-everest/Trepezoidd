#include<bits/stdc++.h>
using namespace std;
int multiplication(double d,int h){
    return (d*h);
}
int main(){
    int a,b;
    cin>>a>>b;
    int h;
    cin>>h;
    int sum=addition(a,b);
    double div=division(sum);
    double area=multiplication(div,h);
    cout<<"Trepezoid area="<<area;
}
