/*
Problem Link: 
#############################################
Author: Siddharth Mishra
GitHub: https://github.com/Hard-Coder05
#############################################
*/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define INF INT_MAX
#define vi vector<int>
#define pii pair<int, int>
#define ll long long
#define ld long double
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define max(a, b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })
#define min(a, b) ({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a < _b ? _a : _b; })
#define FIO                           \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cout.tie(NULL);

int main()
{
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	int p, q;
	cin >> p >> q >> n;
	int mat[p][q];
	for (int i = 0; i < p; i++)
	{
		for (int j = 0; j < q; j++)
		{
			mat[i][j] = 0;
		}
	}
	int tc = n;
	while (tc--)
	{
		int x, y, val;
		cin >> x >> y >> val;
		mat[x][y] = val;
	}
	int a, b;
	cin >> a >> b;

	int low_row = a;
	int row = 1;
	int column = 1;
	int low_column = b;
	int i;
	int cnt = 0;
	while (cnt < n)
	{
		if (cnt == n)
			break;
		for (i = 0; i <= row && low_row + i < p; i++)
		{
			if (mat[low_row + i][low_column] != 0)
			{
				cout << low_row + i << " " << low_column << " " << mat[low_row + i][low_column] << " 1" << endl;
				cnt++;
				mat[low_row + i][low_column] = 0;
			}
		}
		low_row += row;
		row++;

		if (cnt == n)
			break;

		for (i = 0; i <= column && low_column + i < q; i++)
		{
			if (mat[low_row][low_column + i] > 0)
			{
				cout << low_row << " " << low_column + i << " " << mat[low_row][low_column + i] << " 2" endl;
				cnt++;
				mat[low_row][low_column + i] = 0;
			}
		}
		low_column += column;
		column++;

		if (cnt == n)
			break;

		for (i = 0; i <= row && low_row - i >= 0; i++)
		{
			if (mat[low_row - i][low_column] != 0)
			{
				cout << low_row - i << " " << low_column << " " << mat[low_row - i][low_column] << " 3" << endl;
				cnt++;
				mat[low_row - i][low_column] = 0;
			}
		}
		low_row -= row;
		row++;

		if (cnt == n)
			break;

		for (i = 0; i <= column && low_column - i >= 0; i++)
		{
			if (mat[low_row][low_column - i] > 0)
			{
				cout << low_row << " " << low_column - i << " " << mat[low_row][low_column - i] << " 4" endl;
				cnt++;
				mat[low_row][low_column - i] = 0;
			}
		}
		low_column -= column;
		column++;
	}
}
