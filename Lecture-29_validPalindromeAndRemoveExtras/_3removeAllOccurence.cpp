//sliding window method

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string removeOccurrences(string s, string part) {
        //sliding window and restarting from 0,
        int partSize = part.length();
        int i = 0;

        while(i <= (s.length() - partSize)){
            string temp = s.substr(i, partSize);

            if(temp == part){
                s.erase(i, partSize);
                i = 0;
            }else{
                i++;
            }
        }

    return s;
}

int main(){
    string str = "ababcabd";
    string part = "ab";

    cout << removeOccurrences(str, part);

    return 0;
}