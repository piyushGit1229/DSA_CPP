#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>generatepascal(int numrows){
    vector<vector<int>>result(numrows); //create the number of rows for example numrows= 5;
    for(int i=0;i<numrows;i++){
    result[i]=vector<int>(i+1,1);
    for(int j=1;j<i;i++){
        result[i][j] = result[i - 1][j] + result[i - 1][j - 1];   
     }
    }
    return result;
}

int main() {
    int n = 5;
    vector<vector<int>> triangle = generatepascal(n);

    // Print the triangle
    for (const auto& row : triangle) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}