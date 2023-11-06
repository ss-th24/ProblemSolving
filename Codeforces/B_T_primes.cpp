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
void solve();
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t=1;
    
    while(t--)
    {
        solve();
    }return 0;
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
bool isprime(ll int n)
{
 
    for(ll int i =2; i*i<=n; ++i)
    {
        if(n%i ==0)return false;
    }
    return n>1;
}
vector<ll int> primefactors(ll n)
{
    vector<ll int> factor;
    while(n%2 ==0)
    {
        factor.pb(2);
        n/=2;
    }
     
    for(ll i =3;i*i<=n; i += 2)
    {
        
        while(n%i ==0)
        {
            factor.pb(i);
            n /=i;
        }
        
    }
   if(n>1) factor.pb(n);
    return factor;
}

ll sqrte(ll n)
{
    ll ans = 1;
    for(ll i =1; i*i<=n+1; ++i)
    {   
        ans = max(i,ans);
    }
    
    return ans;
    
}

bool prfsqr(ll n)
{   if(n <= 1) return false;

    else{
        ll num1 = sqrte(n);
        if(isprime(num1))
        {
            if(num1*num1 == n) return true;
            else return false;
        } else return false;
    }
}

const int N = 1e6+13;
vector<bool> p (N,true);
void seive()
{
     p[0] = p[1] = false;
    for(ll i =2; i*i<=N; ++i)
    {
        if(isprime(i))
        {
            for(int j =i*i; j<=N; j+=i)
            {
                p[j] = false;
            }
        }
    }
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

void solve()
{
    // your code goes here
    seive();
    ll n;
    cin>>n;
    
    me(i,0,n)
    {
            ll el;
            cin>>el;
            string ans = "NO";
            ll ss = sqrt(el);
            if(p[ss] == true && ss*ss == el)ans = "YES";

            cout<<ans<<endl;
    }


    
}

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


// © Copyright 2022 swastiksharma09_Template.ex