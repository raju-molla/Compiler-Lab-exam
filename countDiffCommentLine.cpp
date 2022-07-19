#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    string s;
    int cnt = 0; /*dfsda*/
    int flag = 0;
    int commentLine=1;
    int nonComment = 0;
    while(getline(cin,s)){
        int singleLine2=0;
        int n = s.size();
        for(int i=0; i<s.size(); i++){
            if(s[i]=='/' && s[i+1]=='/'){
                nonComment = 1;
                cout<<"commentLine: "<<commentLine<<endl;
                cnt++;
                break;
            }
        }

        for(int i=0; i<n; i++){
            if((s[i]=='/' && s[i+1]=='*') && (s[n-2]=='*'&& s[n-1] =='/')){
                cout<<"commentLine: "<<commentLine<<endl;
                nonComment = 1;
                singleLine2= 1;
                cnt++;
                break;
            }
        }
        for(int i=0; i<n; i++){
            if(s[i]=='/' && s[i+1]=='*'){
                if(singleLine2==0){
                    flag = 1;
                    //cout<<commentLine<<endl;
                }

            }
        }
        if(flag==1){
            nonComment = 1;
            cout<<"commentLine: "<<commentLine<<endl;
        }
        if(flag== 1 && singleLine2==0 ){
            if(s[n-2]=='*' && s[n-1]=='/'){
                flag = 0;
                cnt++;
            }
        }

        if(flag ==1 && singleLine2 == 0){
            for(int i=0; i<n; i++){
                if(s[i]=='*' && s[i+1]=='/'){
                    flag=0;
                    cnt++;
                    break;
                }
            }
        }
        commentLine++;
        if(nonComment==0){
            cout<<s<< " -----line number:   "<<commentLine<<endl;
        }

        //cout<<s<<endl;

    }
    cout<<"Total comment: "<<cnt<<endl;



}
