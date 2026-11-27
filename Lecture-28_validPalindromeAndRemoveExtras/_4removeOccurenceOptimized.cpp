//stack method

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string removeOccurence(string str, string part){
    string result = "";
    int partSize = part.length();

    for(char c : str){
        result.push_back(c);

        if(result.length() >= partSize && result.substr(result.length() - partSize) == part){
            result.erase(result.length() - partSize);
        }
    }

    return result;
}

int main(){
    string str = "abcdabcghab";
    string part = "abc";

    cout << removeOccurence(str, part);

    return 0;
}