#include <iostream>
using namespace std;

int main(){
    string word2 = "stone";
    string word1 = "longest";
    auto rows = word1.length()+1, columns = word2.length()+1;
    int matrix[rows][columns];

    ///Initializing
    for (int i = 0; i < columns; i++)
        matrix[0][i] = 0;
    for (int i = 0; i < rows; i++)
        matrix[i][0] = 0;

    ///Comparing
    for (int i = 1; i < rows ; ++i) {
        for (int j = 1; j < columns; ++j) {
            if(word1[i-1] == word2[j-1])
                matrix[i][j] = matrix[i-1][j-1] + 1;
            else
                matrix[i][j] = (matrix[i][j-1] > matrix[i-1][j])? matrix[i][j-1] : matrix[i-1][j];
        }
    }

    ///Display
    for (int k = 0; k < rows ; ++k) {
        for (int i = 0; i < columns ; ++i) {
            cout<<matrix[k][i]<< "   ";
        }
        cout<<"\n";
    }
}

//
// Created by atrivedi on 8/14/18.
//

