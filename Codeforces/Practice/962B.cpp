#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define testcases ll t;cin>>t;while(t--)
#define pb push_back
#define all(x) x.begin(), x.end()
#define dec(x) greater<x>()


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("C:/Users/91731/Documents/input.txt","r",stdin);
	freopen("C:/Users/91731/Documents/output.txt","w",stdout);
	freopen("C:/Users/91731/Documents/error.txt","w",stderr);
  #endif
	
	ll n,a,b,z=0;
	string s;
	cin>>n>>a>>b;
	cin>>s;
	
	loop(i,0,n)
	{
		if(a<b)
			swap(a,b);
		
		while(s[i]=='.' && i<n)
		{
			if(a>0)z++;
			a--;
			swap(a,b);
			i++;
		}
	}
	cout<<z<<endl;

}