\\checks if the string contains the digits(0-9)
#include<iostream>
using namespace std;
void solve(){
    int flag=0;
    string s;
    cin>>s;
    for(char c:s){
        flag|=(1<<(c-'0'));
    }
    if(flag==((1<<10)-1)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}
int main(){
    solve();
    return 0;
}

\\checks if the string contains both lowercase alphabets and uppercase alphabets 
#include<iostream>
using namespace std;
void solve(){
    long flag=0;
    string s;
    cin>>s;
    for(char c:s){
        if(c>='a'&&c<='z'){
            flag|=(1ULL<<(c-'a'));
        }else if(c>='A'&&c<='Z'){
            flag|=(1ULL<<(26+(c-'A')));
        }
    }if(flag==((1ULL<<52)-1)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}
int main(){
    solve();
    return 0;
}