#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool isSame(int freq[], int windFreq[]){
   
    for(int i = 0; i < 26; i++){
        if(freq[i] != windFreq[i]){
            return false;
        }
    }
    return true;
}

bool permutationInString(string s1, string s2){
    int freq[26] = {0};
    int s1Size = s1.length();

    //counting the s1 frequency
    for(int i = 0; i < s1Size; i++){
        freq[s1[i] - 'a']++;
    }

    //searching s1 in s2 using window sliding method

    for(int i = 0; i < s2.size(); i++){
        
        int windSize = s1Size;
        int windIdx = 0;
        int idx = i;
        int windFreq[26] = {0};

        while(windIdx < windSize && idx < s2.length()){
            windFreq[s2[idx] - 'a']++;
            windIdx++;
            idx++;
        }

        if(isSame(freq, windFreq)){
            return true;
        }
    }
    return false;
}

int main(){
    string s1 = "ab";
    string s2 = "yiedbhadoe";

    cout << permutationInString(s1, s2);

    return 0;
}