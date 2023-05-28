#include <iostream>

using namespace std;

int penjumlahan (int a, int b) {
    if (a <= 0 && b <= 0)
        return 0;
    else if (a > 0)
        return 1 + penjumlahan (a - 1, b);
    else if (b > 0)
        return 1 + penjumlahan (a, b - 1);
}

int pengurangan (int a, int b) {
    if (a <= 0 && b <= 0)
        return 0;
    else if (a > 0)
        return 1 + pengurangan (a - 1, b);
    else if (b > 0)
        return -1 + pengurangan (a, b - 1);
}

int perkalian (int a, int b) {
    if (a == 0 || b == 0)
        return 0;
    else if (a > 0)
        return b + perkalian (a - 1, b);
    else if (b > 0)
        return a + perkalian (a, b - 1);
}

int pembagian (int a, int b) {
    if (a < b)
        return 0;
    else if (a == b)
        return 1;
    else
        return 1 + pembagian (a - b, b);
}

int pangkat (int a, int b) {
    if (a == 0)
        return 0;
    else if (b == 0)
        return 1;
    else if (a > 0)
        return a * pangkat (a, b - 1);
}

int main()
{
    cout << penjumlahan (5,9) << endl;
    cout << pengurangan (8,9) << endl;
    cout << perkalian (5,0) << endl;
    cout << pembagian (9,3) << endl;
    cout << pangkat (0,2) << endl;
    return 0;
}
