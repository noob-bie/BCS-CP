//https://vjudge.net/contest/563111?fbclid=IwAR0w_PweCxLw3d3zrEEr83g0JzoUn1CIRXFQiTQPCyx65VLp_7DabESUK0g#problem/A


#include<bits/stdc++.h>
using namespace std;
void  digit1(string a,string b)
{
    int c=a.length();

    for(int i=0; i<c; ++i)
    {

        if(a[i]!=b[i])
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }

    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a,b;
    cin>>a>>b;
    digit1(a,b);

}
