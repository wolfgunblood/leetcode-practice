#include <bits/stdc++.h>

  bool isPalindrome(string s) {
        
        string mod = "";
        for(int i =0;i<s.length();i++){
            
            // if(s[i] == 32) continue;

            if(s[i]>= 64 && s[i] < 97) s[i] = s[i]+32;
            if(s[i]>=97) mod = mod + s[i];
        }
        for(int i =0,j=mod.length()-1;i<j;i++,j--){
            cout<<mod[i]<<mod[j];
            if(mod[i] != mod[j]) return false;
        }

        cout<<mod;

        return true;
    }

    int main(){

        isPalindrome("A man, a plan, a canal: Panama");
        isPalindrome("0P")
    }