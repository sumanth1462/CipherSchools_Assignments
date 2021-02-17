#include <iostream>
#include <string>
using namespace std;
void possibleDecoding(string num,string s1){
    if(num.length()==0){
        cout<<s1<<" ";
        return;
    }
    string firstCharacter=num.substr(0,1);
    int firstNumber=stoi(firstCharacter);
    //cout<<firstNumber;
    if(firstNumber!=0){
        char character=(char)('a'+firstNumber-1);
        //cout<<character;
        possibleDecoding(num.substr(1),s1+character);
    }
    if(num.length()<=1){
        return;
    }
    string firstTwoChar=num.substr(0,2);
    int firstTwoNum=stoi(firstTwoChar);
    if(firstTwoNum<=26){
        char character=(char)('a'+firstTwoNum-1);
        possibleDecoding(num.substr(2),s1+character);
    }
}
int main(){
    possibleDecoding("1234","");
}
