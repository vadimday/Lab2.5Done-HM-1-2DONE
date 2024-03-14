#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ArrayStats {
    int sum;
    double average;
    int min_element;
    int max_element;
};

ArrayStats calculateArrayStats(const vector<vector<int>>& array) {
    ArrayStats stats;
    stats.sum = 0;
    stats.min_element = array[0][0];
    stats.max_element = array[0][0];

    int total_elements = 0;

    for (const auto& row : array) {
        for (int element : row) {
            stats.sum += element;
            stats.min_element = min(stats.min_element, element);
            stats.max_element = max(stats.max_element, element);
            total_elements++;
        }
    }

    stats.average = static_cast<double>(stats.sum) / total_elements;

    return stats;
}

int main() {
    vector<vector<int>> array = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    ArrayStats stats = calculateArrayStats(array);

    cout << "SumMA: " << stats.sum << endl;
    cout << " average: " << stats.average << endl;
    cout << "Minimum: " << stats.min_element << endl;
    cout << "Maximum: " << stats.max_element << endl;

    return 0;
}





#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> array = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = array.size();
    int cols = array[0].size();

    cout << "Sum row:" << endl;
    for (int i = 0; i < rows; ++i) {
        int row_sum = 0;
        for (int j = 0; j < cols; ++j) {
            row_sum += array[i][j];
        }
        cout << "Row " << i + 1 << ": " << row_sum << endl;
    }
    cout << endl;

    cout << "Sum column:" << endl;
    for (int j = 0; j < cols; ++j) {
        int col_sum = 0;
        for (int i = 0; i < rows; ++i) {
            col_sum += array[i][j];
        }
        cout << "Column " << j + 1 << ": " << col_sum << endl;
    }
    cout << endl;
    int total_sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            total_sum += array[i][j];
        }
    }
    cout << "Summa: " << total_sum << endl;

    return 0;
}




#include <iostream>
#include <cstdlib> 
using namespace std;

const int ROWS1 = 5;
const int COLS1 = 10;
const int ROWS2 = 5;
const int COLS2 = 5;

void fillArrayWithRandomNumbers(int arr[][COLS1], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = rand() % 51; 
        }
    }
}

void fillSecondArray(int arr1[][COLS1], int arr2[][COLS2], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr2[i][j] = arr1[i][2 * j] + arr1[i][2 * j + 1];
        }
    }
}

void printArray(int arr[][COLS1], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    srand(time(0)); 

    int array1[ROWS1][COLS1];
    int array2[ROWS2][COLS2];

    fillArrayWithRandomNumbers(array1, ROWS1, COLS1);
    ????????????????????????????????????????????????

