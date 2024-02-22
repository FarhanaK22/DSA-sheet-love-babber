
// Given a matrix of size r*c. Traverse the matrix in spiral form.

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiral_traverse(vector<vector<int>> matrix, int r, int c) {
    int top = 0, right = c - 1, left = 0, bottom = r - 1;
    vector<int > ans;
    while (left <= right && top <= bottom) {
        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;
        
        if(top<=bottom){
             for (int i = right; i >= left; i--) {
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
        }
       
        if(left<=right){

        for (int i = bottom; i >= top; i--) {
            ans.push_back(matrix[i][left]);
        }
        left++;
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    vector<int> temp = spiral_traverse(matrix, 4, 4);
    for (auto &x : temp) {
        cout << x << " ";
    }
    return 0;
}
