#include<bits/stdc++.h>
using namespace std;
double division(int sum){
    return (sum/2);
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
