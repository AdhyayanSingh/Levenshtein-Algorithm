#include<bits/stdc++.h> using
namespace std;
int d[100][100]={0};
int leven(string a,string b){
int n=a.length();
int m=b.length();
d[0][0]=0;
for(int i=1;i<=n;++i)
d[i][0]=i;

for(int j=1;j<=m;++j)
d[0][j]=j;
for(int i=1;i<=n;++i) {
for(int j=1;j<=m;++j) {
d[i][j]=min(d[i-1][j-1]+(a[i]==b[j]?0:1), min(d[i-1][j],d[i][j-1])+1);
 } 
}
return d[n][m];
}
int main() {
string a,b;
 cin>>a>>b;
  int n=a.length(),m=b.length();
   cout<<”Number of edits to convert “<<a<<” to “<<b<<” is “<<leven(a,b)<<endl;
   for(int i=0;i<=n;++i) {
   for(int j=0;j<=m;++j)
   cout<<d[i][j]<<" ";
cout<<endl;
}
}
