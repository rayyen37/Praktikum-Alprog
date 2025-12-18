#include <iostream>
using namespace std;
void pyramid(int height, int bentuk);
int main()
{
	int height = 5;
	int bentuk;
	cout << "pilih angka: ";
	cin >> bentuk;

	pyramid(height, bentuk);
	system("pause");
	return 0;
}
// fungsi pyramid()
// menggambar piramida menggunakan karakter ASCII 178
// parameter: height – tinggi piramida
// return: void
void pyramid(int height, int bentuk)
{
	switch (bentuk) {
	case 0:
		for (int i = 1; i <= height; i++) {
			// Cetak karakter ASCII 178
			for (int k = 0; k < (2 * i - 1); k++) {
				cout << char(178);
			}
			cout << endl;
		}
		break;
	case 1:
		for (int i = 1; i <= height; i++) {
			// Cetak spasi sebelum bintang
			for (int j = 0; j < height - i; j++) {
				cout << " ";
			}
			// Cetak karakter ASCII 178
			for (int k = 0; k <  i; k++) {
				cout << char(178);
			}
			cout << endl;
		}
		break;
	case 2:
		for (int i = 1; i <= height; i++) {
			// Cetak spasi sebelum bintang
			for (int j = 0; j < height - i; j++) {
				cout << " ";
			}
			// Cetak karakter ASCII 178
			for (int k = 0; k < (2 * i - 1); k++) {
				cout << char(178);
			}
			cout << endl;
		}
		break;
	}
}