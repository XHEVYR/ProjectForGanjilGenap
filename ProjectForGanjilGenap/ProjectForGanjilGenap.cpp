//Danang Sugeng Widagdo
//23104410068
#include <iostream>

using namespace std;

int main()
{
    //Inisalisasi Variabel
    int n;
    int bilanganGenap = 0;
    int bilanganGanjil = 0;
    cout << "Masukkan Angka:";
    cin >> n;

    //Input Data
    for (int i=0; i<n; i++)
    {
        if (i % 2 == 0) {
            bilanganGenap += i;
     }
        else {
            bilanganGanjil += i;
        }
    }
    //Output bilangan ganjil dan genap
    cout << "Banyaknya bilangan genap: " << bilanganGenap << "\n";
    cout << "Banyaknya bilangan ganjil: " << bilanganGanjil << "\n";

    return 0;
}