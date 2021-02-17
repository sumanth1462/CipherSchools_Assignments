#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string getValue(char c){
    if(c=='1'){
        return "";
    }
    if(c=='2'){
        return "ABC";
    }
    if(c=='3'){
        return "DEF";
    }
    if(c=='4')
    {
        return "GHI";
    }
    if(c=='5'){
        return "JKL";
    }
    if(c=='6'){
        return "MNO";
    }
    if(c=='7'){
        return "PQRS";
    }
    if(c=='8'){
        return "TUV";
    }
    if(c=='9'){
        return "WXYZ";
    }
    return "";
}
vector<string> getAllCombinations(string stg){
    if(stg.length()==0){
        vector<string> empty;
        empty.push_back("");
        return empty;
    }
    string firstCharacterValue=getValue(stg.at(0));
    vector<string>smallerProblemCombinations=getAllCombinations(stg.substr(1));
    vector<string>s;
    for(int i=0;i<firstCharacterValue.length();i++){
        for(int j=0;j<smallerProblemCombinations.size();j++){
            string output=firstCharacterValue.at(i)+smallerProblemCombinations.at(j);
            s.push_back(output);
        }
    }
    return s;
    
}
int main()
{
    vector<string>s= getAllCombinations("134");
    for(string s1:s){
        cout<<s1<<endl;
    }
}
