#include <iostream>
#include <string.h>

using namespace std;

void encrypt(string sentences);

		int main() {
			string sentences;
			cout << "masukkan sebuah kalimat: ";
			cin >> sentences;
			cout << endl;
			encrypt(sentences);
			

}

void encrypt(string sentences) {
	 string vocal = "AIUEOaiueo";

	for(int i = 0; i < sentences.length(); i++) {
		for (int j = 0; j < vocal.length(); j++) {
			if (sentences[i] == vocal[j]) {
				sentences[i] = char(42);
				break;
			}
		}
	}
	cout << "Hasilnya: " << sentences;
}