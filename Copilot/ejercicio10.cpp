#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows, columns;

    cout << "Enter a matrix to transpose..." << endl;
    cout << "Number of rows: ";
    cin >> rows;
    cout << "Number of columns: ";
    cin >> columns;

    vector<vector<int>> matrix(rows, vector<int>(columns));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Matrix" << endl;
            cout << "Enter a number, row " << i + 1 << ", column " << j + 1 << ": " << endl;
            cin >> matrix[i][j];
        }
    }

    cout << endl;
    cout << "Matrix" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Transpose..." << endl;
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            cout << matrix[j][i] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}