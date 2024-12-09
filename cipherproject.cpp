/** 
* Vigenere Cipher Project
* This program does the following:
* generates a circular repeating key 
* encrypts plaintext into ciphertext
* decrypts ciphertext back into plaintext
*/

#include <iostream>
#include <string>	
using namespace std;
// generator
string keyGen(const string& plaintext, const string& input) {
	string key = input; 
	while (key.length() < plaintext.length()) {
		key += input;
	}
	return key.substr(0, plaintext.length());
}
// encryption
string encrypt(const string& plaintext, const string& key) {
	string ciphertext = "";
	for (size_t i = 0; i < plaintext.length(); i++) {
		char encryptChar = ((plaintext[i] - 'A') + (key[i] - 'A')) % 26 + 'A';
		ciphertext += encryptChar;
	}
	return ciphertext;
}

//decryption
string decrypt(const string& ciphertext, const string& key) {
	string plaintext = "";
	for (size_t i = 0; i < ciphertext.length(); i++) {
		char decryptChar = ((ciphertext[i] - 'A') - (key[i] - 'A') + 26) % 26 + 'A';
		plaintext += decryptChar;
	}
	return plaintext;
}

int main() {
	string plaintext, input;

	cout << "Enter text: ";
		cin >> plaintext;
		cout << "Enter keyword: ";
		cin >> input;

		for (char& c : plaintext) c = toupper(c);
		for (char& c : input) c = toupper(c);

	
		string key = keyGen(plaintext, input);
		// encrypt
		string ciphertext = encrypt(plaintext, key);
		cout << "Ciphertext: " << ciphertext << endl;
		//decrypt
		string decryptText = decrypt(ciphertext, key);
		cout << "Decrypted text: " << decryptText << endl; 

		return 0;
}