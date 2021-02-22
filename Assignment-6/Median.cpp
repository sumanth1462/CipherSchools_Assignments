#include <bits/stdc++.h>
using namespace std;
void printMedians(double a1[],int n){
    priority_queue<double>s;
    priority_queue<double,vector<double>,greater<double>>g;
    double med=a1[0];
    s.push(a1[0]);
    cout<<med<<endl;
    
    for(int i=1;i<n;i++){
        double x=a1[i];
        if(s.size()>g.size()){
            if(x<med){
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            else{
                g.push(x);
            }
            med=(s.top()+g.top())/2.0;
        }
        else if(s.size()==g.size()){
            if(x<med){
                s.push(x);
                med=(double)s.top();
            }
            else{
                g.push(x);
                med=(double)g.top();
            }
        }
        else{
            if(x>med){
                s.push(g.top());
                g.pop();
                g.push(x);
            }
            else{
                s.push(x);
            }
            med=(s.top()+g.top())/2.0;
        }
        cout<<med<<endl;
    }
}
int main()
{
    double a1[]={5,15,10,20,3};
    int n=sizeof(a1)/sizeof(a1[0]);
    printMedians(a1,n);
    return 0;
}
