#include <iostream> 

using namespace std;

int main()

{

    int n;

    cout << "Enter a number: ";

    cin >> n;

    int arr[3] = { n, n * 2, n * 4 };

    cout << "The array is: ";

    for (int i = 0; i < 3; i++)

        cout << arr[i] << " ";

    return 0;

}




#include <iostream>

using namespace std;

int main()

{

    int n;

    cout << "Enter number: ";

    cin >> n;

    int arr[n];

    arr[0] = n;

    for (int i = 1; i < n; i++) {

        arr[i] = arr[i - 1] + 1;

    }

    for (int i = 0; i < n; i++) {

        cout << arr[i] << " ";

    }

    cout << endl;

    return 0;

}