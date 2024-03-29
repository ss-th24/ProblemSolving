/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन।
मा कर्मफलहेतुर्भूर्मा ते सङ्गोऽस्त्वकर्मणि॥
*/

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<algorithm>
#include<iostream>
#include<iterator>
#include<map>
#include<vector>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<numeric>
#include<queue>
#include<stack>
#include<climits>
#include<bits/stdc++.h>
#define f                       first
#define s                       second
#define ll                      long long
#define pb                      push_back
#define mp                      make_pair
#define pii                     pair<int,int>
#define vi                      vector<int>
#define mii                     unordered_map<int,int>
#define me(i,start,end)         for(int i =start; i<end; ++i)
#define she(i,start,end)        for(int i =end-1; i>=start; --i)
#define all(v)                  v.begin() , v.end()
#define w(x)                    int x;cin>>x;while(x--)

using namespace std;
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
bool isprime(int n);
void sieve();
void solve();
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t ;
    cin>>t;
    while(t--)
    {
        
        solve();
    }return 0;
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
bool isprime(int n)
{
    for(int i =2; i*i<=n; ++i)
    {
        if(n%i ==0)return false;
    }
    return n>1;
}

const int N = 1e7+13;
vector<bool>prime(N,true);

void sieve()
{
    prime[0] = prime[1] = false;

    for(int i =2; i*i<=N; ++i)
    {
        if(isprime(i))
        {
            for(int j = i*i; j<=N; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

vi primefactor(int n)
{

    vi primevector;
    while(n%2 == 0)
    {
        primevector.pb(2);
        n/=2;
    }

    for(int i =3;i*i<=n;i+=2)
    {
            while(prime[i]&& n%i ==0)
            {
                primevector.pb(i);
                n/=i;
            }
        
    }
    if(n>1)primevector.pb(n);
    return primevector;

    
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

void solve()
{
    //your code goes here
    
    int n;cin>>n;
    int m =n;
    int a =0, b =0,c = 0;
    for(int i =2;i*i<=n;++i)
    {
        if(n%i == 0)
        {
            a = i;
            n/=i;
            break;
        }
    }

    for(int  i =a+1;i*i<=n;++i)
    {
        if(n%i ==0)
        {
            b = i;
            n/=i;
            break;
        }
    }
    c = n;
    if((a*b*c != m) ||a == b|| b==c ||c==a)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<endl;
    }

   
}

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


// © Copyright 2022 swastiksharma09_Template.ex