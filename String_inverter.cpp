//PROGRAM TO INVERT ALL THE LETTERS .ie, 'a' becomes 'z','B' becomes 'Y';

#include<iostream>
#include<string>

using namespace std;

int main(){
string s;
cout<<"Enter the sentence :";
getline(cin,s);

for(int i=0;i<s.length();i++){
        if(s[i]>=65&&s[i]<=90)
            { s[i]=90+65-s[i]; }

        else if(s[i]>=97&&s[i]<=122)
            { s[i]=122+97-s[i]; }

        else{ s[i]=s[i]; }

}
cout<<"The inverted sentence is : "<<s<<endl;
return 0;
}
