#include<stdio.h>
int anagram(string s) {
    if(s.length()%2 != 0) {
        return -1;
    }
    int n = s.length()/2;
    string s1 = s.substr(0,n);
    string s2 = s.substr(n);
    vector<int>count1(26,0) , count2(26,0);
    for(char c : s1) {
        count1[c-'a']++;
    }
    for(char c : s2) {
        count2[c-'a']++;
    }
    int changes = 0;
    for(int i =0; i<26;i++) {
        if(count1[i]>count2[i]) {
           changes += (count1[i] - count2[i]); 
        }
    }
    return changes;
}
