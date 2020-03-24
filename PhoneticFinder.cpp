//
// Created by uriel on 22.3.2020.
//
#include <iostream>
#include "PhoneticFinder.hpp"
#include <stdexcept>
#include <string>
#define c ' '

using namespace std;
string getLittleLetter(string word)
{

    string s = word ;
    for (int i = 0; i < word.size(); ++i) {
        if(word[i] <= 90 && word[i] >= 65) s[i] = s[i]+32;
    }
    return s;
}

int check(string Original , string Check)
{
    //if(Original.size() != Check.size()) return 0 ;

    string word = getLittleLetter(Original);
    string wordCheck = getLittleLetter(Check);
    int flag = 1 ;
    for (int i = 0; i < word.size(); ++i) {
        if(word[i] == 'w' || word[i] == 'v'){
            if(wordCheck[i] != 'v' && wordCheck[i] != 'w') flag = 0;
        }
        else if(word[i] == 'b' || word[i] == 'f' || word[i] == 'p'){
            if(wordCheck[i] != 'b' && wordCheck[i] != 'f' && wordCheck[i] != 'p') flag = 0;
        }
        else if(word[i] == 'g' || word[i] == 'j'){
            if(wordCheck[i] != 'j' && wordCheck[i] != 'g') flag = 0;
        }
        else if(word[i] == 'c' || word[i] == 'k' || word[i] == 'q'){
            if(wordCheck[i] != 'c' && wordCheck[i] != 'k' && wordCheck[i] != 'q') flag = 0;
        }
        else if(word[i] == 's' || word[i] == 'z'){
            if(wordCheck[i] != 'z' && wordCheck[i] != 's') flag = 0;
        }
        else if(word[i] == 'd' || word[i] == 't'){
            if(wordCheck[i] != 'd' && wordCheck[i] != 't') flag = 0;
        }
        else if(word[i] == 'u' || word[i] == 'o'){
            if(wordCheck[i] != 'u' && wordCheck[i] != 'o') flag = 0;
        }
        else if(word[i] == 'i' || word[i] == 'y'){
            if(wordCheck[i] != 'y' && wordCheck[i] != 'i') flag = 0;
        }
        else {
            if(word[i] != wordCheck[i]) flag = 0 ;
        }

    }
    return flag ;
}

string substring(string text ,int start , int end ) {
    string ans = "" ;
    for(int i = start ; i <= end ; i++ ){
        ans += text[i];
    }
    return ans ;
}



     string phonetic::find(string text, string word) {
// hai      bye     ha  \n
        int start = 0;
        int flag = 0;
        string ans;
        for (int i = 0; i < text.size(); ++i) {
            if (text[i] == c && i != 0) {
                ans = substring(text ,start, i-1);
                //  cout << ans << " || " << word << endl ;
                flag = check(ans, word);
                if (flag) return ans;
                while(i != text.size()-1 && text[i+1] == c){
                    i++;
                }
                start = i + 1;
            }
            if(i == text.size()-1){
                ans = substring(text ,start, i);
                flag = check(ans, word);
                if (flag) return ans;
                start = i + 1;
            }

        }

        throw out_of_range{"Did not find the word: " +word+ " in the text"} ;
    }


