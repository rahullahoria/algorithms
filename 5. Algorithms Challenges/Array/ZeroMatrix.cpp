/*
Zero Matrix: Write an algorithm such that if an element in an MxN matrix is 0, its entire row and
column are set to 0. 
*/

#include <iostream>
using namespace std;
 
// M x N matrix
#define M 5
#define N 5
 
// function to print the matrix
void printMatrix(int mat[M][N])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
            cout << mat[i][j] << "  ";
        cout << '\n';
    }
    cout << '\n';
}
 
// change all elements of row x and column y to -1
void changeRowColumn(int mat[M][N], int x, int y)
{
    for (int j = 0; j < N; j++)
        if (mat[x][j] != 0)
            mat[x][j] = -1;
 
    for (int i = 0; i < M; i++)
        if (mat[i][y] != 0)
            mat[i][y] = -1;
}
 
// Function to convert the matrix
void convert(int mat[M][N])
{
    // traverse the matrix
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] == 0)    // cell (i, j) has value 0
                // change each non-zero element in row i and column j to -1
                changeRowColumn(mat, i, j);
 
    // traverse the matrix once again and replace cells having
    // value -1 with 0
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] == -1)
                mat[i][j] = 0;
}
 
int main()
{
    int mat[M][N] =
    {
        { 1, 1, 0, 1, 1 },
        { 1, 1, 1, 1, 1 },
        { 1, 1, 0, 1, 1 },
        { 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1 }
    };
 
    // convert the matrix
    convert(mat);
 
    // print matrix
    printMatrix(mat);
 
    return 0;
}