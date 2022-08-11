#include <bits/stdc++.h>
using namespace std;

#define N 8

int solve(int x, int y, int movei, int sol[N][N], int xMove[], int yMove[]);

int isSafe(int x, int y, int sol[N][N])
{
	return (x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == -1);  /// return true or 1
}

void printSolution(int sol[N][N])
{
    int x, y;
	for(x = 0; x < N; x++)
    {
		for(y = 0; y < N; y++)
		{
            cout << " " << setw(3) << sol[x][y] << " ";
		}
		cout << endl;
	}
}

int KT()
{
	int sol[N][N], x, y, val;

	for(x = 0; x < N; x++)
		for(y = 0; y < N; y++)
			sol[x][y] = -1;

	int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 }; /// xMove[] is for next value of x coordinate
	int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 }; /// yMove[] is for next value of y coordinate

	sol[0][0] = 0;  /// first block

	/// Start from 0,0 and explore all tours using solveKTUtil()
	val = solve(0, 0, 1, sol, xMove, yMove);

	if(val == 0)
		cout << "Solution does not exist";
	else
		printSolution(sol);

	return 0;
}

/* A recursive utility function to solve Knight Tour problem */
int solve(int x, int y, int movei, int sol[N][N], int xMove[], int yMove[])
{
	int k, next_x, next_y;

	if(movei == N*N) /// all place booked
		return 1;

	/// Try all next moves from the current coordinate x, y
	for(k = 0; k < 8; k++)
    {
		next_x = x + xMove[k];
		next_y = y + yMove[k];

		if(isSafe(next_x, next_y, sol))  /// if return true or 1
		{
			sol[next_x][next_y] = movei;
			if( solve(next_x, next_y, movei + 1, sol, xMove, yMove) == 1)
				return 1;
			else
                sol[next_x][next_y] = -1;  /// backtracking
		}
	}
	return 0;
}

int main()
{
	KT();
	return 0;
}
