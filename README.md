# Vigenère Cipher Program

## **Project Description**
This project implements the **Vigenere Cipher**, a method of encrypting alphabetic text. It uses a simple form of polyalphabetic substitution. A polyalphabetic cipher is any cipher based on substitution, using multiple substitution
alphabets.The encryption of the original text is done using the Vigenere square or Vigenere table.

The table consists of the alphabets written out 26 times in different rows, each alphabet shifted cyclically to the left compared to the previous alphabet, corresponding to the 26 possible Caesar Ciphers.
At different points in the encryption process, the cipher uses a different alphabet from one of the rows.

The cipher is implemented in **C++** and demonstrates the use of modular arithmetic, loops, and string manipulation to achieve polyalphabetic substitution.

---
## **Authors**
- **Desiree Luevano**

---

## **Date Published**
- 12.08.2024 

---
## **Basic Instructions**
When prompted, enter a plaintext message consisting of only letters. User will then be prompted to enter a keyword for encryption consisting only of letters. 
The program will then output the encrypted ciphertext along with the decrypted text for verification. 

---
## **Programming Approach**
The program is structured into three main components:
1. **Key Generation**:
   - The keyword is repeated cyclically until it matches the length of the plaintext.
   - Ensures every character in the plaintext has a corresponding key character for encryption and decryption.

2. **Encryption**:
   - Each character in the plaintext is shifted forward in the alphabet based on the position of the corresponding key character.
   - Formula:  
     \[
     Ei = (Pi + Ki) \mod 26
     \]
     Where:
     - \( Ei \): Ciphertext character.
     - \( Pi \): Plaintext character offset (A=0, ..., Z=25).
     - \( Ki \): Key character offset (A=0, ..., Z=25).

3. **Decryption**:
   - Reverses the encryption process by shifting each character in the ciphertext backward.
   - Formula:  
     \[
     Di = (Ei - Ki + 26) \mod 26
     \]
     Where:
     - \( Di \): Plaintext character offset.
     - \( Ei \): Ciphertext character offset.
     - \( Ki \): Key character offset.

---




