#include <iostream>

using namespace std;

struct mahasiswa
{
    string nama, nim;
    float score[5];

    void printData()
    {
        cout << "Nama : " << nama << endl;
        cout << "NIM : " << nim << endl;
            for (int i = 0; i < 5; i++) {
                cout << "Nilai " << i+1 << " : " << score[i] << endl;
            }
     }

    void swapScore(float* score1, float* score2)
    {
        float temp = *score1;
        *score1 = *score2;
        *score2 = temp;
    }

    float sumScore(const float* score, int n)
    {
        if (n == 0)
            return 0;
        return score[n-1] + sumScore(score, n-1);
    }

    #include <iostream>

   void selectionSort(float* score, int n)
    {
        if (n <= 1) {
            return;
        }
        int minIndex = 0;
        for (int i = 1; i < n; i++) {
            if (score[i] < score[minIndex]) {
                minIndex = i;
            }
        }
        if (minIndex != 0)
            swapScore(&score[0], &score[minIndex]);

        selectionSort(score + 1, n - 1);
    }
};


int main()
{
    cout << "Program Data Mahasiswa" << endl;

    // Declare m1
    mahasiswa m1 = {"Aurel Putri Widyanti", "A11.2022.14494", {90, 91, 92, 95, 97}};
    cout << "\nBefore Swap" << endl;
    m1.printData();

    // After swap first and last element
    cout << "\nAfter Swap" << endl;
    m1.swapScore(&m1.score[2], &m1.score[3]);
    m1.printData();

    // Average
    int n = sizeof(m1.score)/sizeof(m1.score[0]);
    cout << "\nNilai Rata-Rata : " << m1.sumScore(m1.score, n) / n << endl;

    // Sort
    cout << "\nNilai Setelah Disortir Menggunakan Selection Sort\n";
    m1.selectionSort(m1.score, n);
    for (int i = 0; i < 5; i++) {
        cout << "Nilai " << i+1 << " : " << m1.score[i] << endl;
    }
    return 0;
}
