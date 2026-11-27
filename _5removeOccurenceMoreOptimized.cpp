#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string removeOccurence(string str, string part){
    int partSize = part.length();

    while(str.length() > str.find(part)){
        if(str.substr(str.find(part), partSize) == part){
            str.erase(str.find(part), partSize);
        }
    }

    return str;
}

//Note : str.find(part) return the position of that substring...


int main(){
    string str = "abcdabcghiabc";
    string part = "abc";

    cout << removeOccurence(str, part);

    return 0;
}