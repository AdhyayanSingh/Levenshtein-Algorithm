#include <bits/stdc++.h> using
namespace std; int d[100][100]; void
levenshtien(string a, string b){
int n = a.length(),m =
b.length(); for(int i=1;i<=n;i++)
d[i][0] = i; for(int
j=1;j<=m;j++) d[0][j] = j;
for(int i=1;i<=n;i++){
for(int j=1;j<=m;j++){
d[i][j] =
min(d[i-1][j-1]+((a[i-1]==b[j-1])?0:1),min(d[i-1][j],d[i][j-1])+1);
} } } vector<int> backtrack(string
a,string b){
vector<int>pos; int n =
a.length(),m = b.length();
for(int i=n;i>0;){
for(int
j=m;j>0;){
if(d[i-1][j]+1==d[i][j])
{
pos.push_back(i); i--; } else
if(d[i-1][j-1]+((a[i-1]==b[j-1])?0:1)==d[i][j]){
if(a[i-1]!=b[j-1])pos.push_back(i); i--;
j--; } else{
j--; } } } return pos; }
int main(){
string a,b; cin>>a>>b; int n =
a.length(); int m = b.length();
levenshtien(a,b); vector<int>
pos = backtrack(a,b); int sum =
n*pos.size();
for(int i=0;i<pos.size();i++) sum-=(pos[i]-1);
cout<<"Percentage match :
"<<(1-(float)sum/((float)n*((float)n+1)/2))*100; }
