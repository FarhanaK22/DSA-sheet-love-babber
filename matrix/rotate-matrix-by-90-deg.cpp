#include <iostream>
#include <vector>
using namespace std;

//You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
void reverse(vector<vector<int>>& mat, int r, int c)
{
    for(int i=0;i<r;i++)
    { int j=0,k=c-1;
        while(k>j)
        {   
            swap(mat[i][j], mat[i][k]);
            --k;
            ++j;
        }
    }
}
void transpose(vector<vector<int>>& mat, int r, int c) {
    
    
    for (int i = 0; i < r; ++i) {
        for (int j = i + 1; j < c; ++j) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    
}
    void rotate(vector<vector<int>>& matrix,int r,int c) {
        
        transpose(matrix,r,c);
         reverse(matrix,r,c);
    }


int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
        int r= matrix.size();
        int c= matrix[0].size();
        
        rotate(matrix,r,c);
                for (int i = 0; i < r; ++i) {
                for (int j = 0; j <c; ++j) {
                    cout << matrix[i][j] << " ";
                }
                cout << endl;
            }
            return 0;
}