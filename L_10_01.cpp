#include <bits/stdc++.h>

using namespace std;
int convert(string n){
    int b=0;
    for(int i=0;i<n.size();++i){
        b*=10;
        b+=n[i] - '0';
    }
    return b;
}
int convert_1(string n){
    for(int i=0;i<n.size();++i){
        if(n[i]=='.'){
            return n.size()-i;}
    }
}
float conver_2(int a,int b){
    float c;
    for (int i=0;i<b;++i){
        c=a/10;
    }
    return c;
}
int main()
{
    string a="234";
    int b=convert(a);
    float c=conver_2(b,convert_1(a));
    cout<<c;
}
