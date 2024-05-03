#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the dimensions of the matrices to multiply:" << endl;
    cout << "Number of rows: ";
    cin >> rows;
    cout << "Number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix1(rows, vector<int>(cols));
    vector<vector<int>> matrix2(rows, vector<int>(cols));
    vector<vector<int>> result(rows, vector<int>(cols));

    cout << "Enter the elements of Matrix 1:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the elements of Matrix 2:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Matrix 1:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Matrix 2:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Product of matrices:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}