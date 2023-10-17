#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
//Useful function for Q 3
bool check(char ch){
return (ch == 'a' ||ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
 int main(){string s;
cout<<"Enter the string : ";
getline(cin,s);
for(int i =s.size();i>=0;i--){
    s+=s[i];
}
cout<<"Required string is : "<<s ;
//Q 2
sort(s.begin(),s.end());
for(int i = s.size()-2;i>=0;i++){
    if((s[i]) != (s[i+1])){ cout<<"Second largest element is "<<(s[i]);
    break;}
}
//Q 3
//Function check declared above
int ans =0;
// while(i<s.size()){
int c = 0;
    for(int j =0 ;j<s.size();j++){
        if(j == s.size()-1 && check(s[j])) {ans+=((++c)*((c)+1)/2);
        }
        else if(check(s[j])) c++;
        else {ans+=(c*(c+1)/2);
            c = 0;}
    }

cout<<endl<<"Number of required substrings : "<<ans;
// int p = 2;
// cout<<endl<<(((p)*((++p)+1))/2);// output 3*((3+1))/2 = 6
// cout<<endl<<((++p)*((++p)+1))/2);// output 4*((4+1))/2 = 10
//Q 4
string s2;
cout<<"Enter the 2nd string : ";
getline(cin,s2);
sort(s.begin(),s.end());
sort(s2.begin(),s2.end());
if(s == s2) cout<<"True";
else cout<<"False";
//  Q 5
stringstream ss(s);
string temp = "";
vector<string> v;
while(ss>>temp){
    v.push_back(temp);
}
sort(v.begin(),v.end());
cout<<v[v.size()-1];
}