//============================================================================
// Name        : longest.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int longest_common_subsequence(string str1,string str2)
{
	int n=str1.length();
	int m=str2.length();
	int dp[n+1][m+1];
	for(int i=0;i<=n;i++)
		dp[i][0]=0;
	for(int i=0;i<=n;i++)
			dp[0][i]=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(str1[i-1]==str2[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}

	}
	return dp[n][m];
}
int main() {
	string str1,str2;
	cin>>str1>>str2;
	int x=longest_common_subsequence(str1,str2);
	cout<<x<<endl;
	return 0;
}
