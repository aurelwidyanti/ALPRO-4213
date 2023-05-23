#include <iostream>

using namespace std;
void  minEven (int array[], int n);
bool isOdd (int x);

int main()
{
    int n;

    cout << "Masukkan panjang array : ";
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++){
        cout << "Masukkan nilai array ke-" << i << " : ";
        cin >> array[i];
    }

    cout << "\nArray : ";
    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }

    cout << "\n";

    minEven (array, n);
    return 0;
}

void minEven (int array[], int n)
{
    int min_Even = array[0];
    int minIndex = 0;

    for (int i = 0; i < n; i++){
        if (!isOdd(array[i]) && array[i] < min_Even){
            min_Even = array[i];
            minIndex = i;
        }
    }
    if (min_Even == array[0]){
        cout << "Tidak ada bilangan genap dalam array.";
    } else {
        cout << "Nilai genap terkecil dalam array : " << min_Even << endl;
        cout << "Index dari nilai genap terkecil : " << minIndex << endl;
    }
}

bool isOdd (int x)
{
    if (x % 2 != 0){
        return true;
    } else {
        return false;
    }
}
