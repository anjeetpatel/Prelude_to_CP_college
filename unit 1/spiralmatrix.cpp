#include<iostream>
using namespace std;

void print_spiral(vector<vector<int>> &v, int r, int c){
    int top = 0;
    int bottom = r - 1;
    int left = 0;
    int right = c - 1;
    while(top <= bottom && left <= right){
        // Print from left to right
        for(int i = left; i <= right; i++){
            cout << v[top][i] << " ";
            }
            top++;
            }
            // Print from top to bottom
            for(int i = top; i <= bottom; i++){
                cout << v[i][right] << " ";
                }
                right--;
                }
                // Print from right to left
                for(int i = right; i >= left; i--){
                    cout << v[bottom][i] << " ";
                    }
                    bottom--;
                    }
                    // Print from bottom to top
                    for(int i = bottom; i >= top; i--){
                        cout << v[i][left] << " ";
                        }
                        
}

int main(){

}