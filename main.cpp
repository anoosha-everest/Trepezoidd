#include<bits/stdc++.h>
using namespace std;
int addition(int a,int b{
    return (a+b);
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
