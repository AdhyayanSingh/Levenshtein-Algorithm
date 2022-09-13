#include <bits/stdc++.h>
using namespace std;
int Map(char
c){
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='h'||c=='w'||c=='y')
return '0';
if(c=='b'||c=='f'||c=='p'||c=='v') return '1';
if(c=='c'||c=='g'||c=='j'||c=='q'||c=='s'||c=='x'||c=='z') return '2';
if(c=='d'||c=='t') return '3';
if(c=='l') return '4';
if(c=='m'||c=='n') return '5';
if(c=='r') return '6'; } string
reducecode(string a){ string code =
""; for(int i=0;i<a.length();i++){
int j=i;
while(a[i]==a[j])
{
j++; } code+=a[i]; i=j-1; }
if(a==code) return code; else
return reducecode(code); } string
removezeroes(string a){ string code
= ""; for(int
i=0;i<a.length();i++){
if(a[i]!='0') code+=a[i]; }
return code; } string
phonetic(string a){ string code="";
code+=a[0]; for(int
i=1;i<a.length();i++){
code+=Map(a[i]); }
code = reducecode(code); code =
removezeroes(code); return
code; } int main(){
string a; cin>>a;
cout<<phonetic(a); return 0; }
