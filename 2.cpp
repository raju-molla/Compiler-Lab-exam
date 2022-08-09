
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s;
    int cnt=0;
    int flag2= 0;
    int lineCount = 1;
    while(getline(cin,s)){
        int flag=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='/' && s[i+1]=='/'){
               cout<<lineCount<<endl;
            }
            else if(s[i]=='/' && s[i+1]=='*'){
                flag=1;
                flag2=1;
                cout<<lineCount<<endl;
            }
            else if(flag==1 && s[i]=='*' && s[i+1]=='/'){
                cnt++;
                flag=0;
                cout<<lineCount<<endl;
            }
            else if(flag2==1 && flag==0 && s[i]=='*' && s[i+1]=='/' ){
                cnt++;
                flag2=0;
                cout<<lineCount<<endl;
            }
        }
        lineCount++;
    }
    //cout<<cnt<<endl;


    //int n; /*this is int
    //gsagjksjga*/sdfsafsd
    /*sdfasdfsadfsadfsad
    adsfasdf//dsafsadfdsa*/




}
