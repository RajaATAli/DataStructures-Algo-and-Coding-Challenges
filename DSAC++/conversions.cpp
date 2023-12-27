/* 
* Binary to Decimal
* Octal to Decimal
* Hexadecimal to Decimal
* Decimal to Binary
* Decimal to Octal
* Decimal to Hexadecimal
*/

#include <iostream>
#include <string>
#include <cmath>

int BinarytoDecimal(std::string binary){
  int decimal = 0;
  // loop through each string (right to left) -> start from end of string and move towards beginning
  // Typecast string and multiply it with 2^(loop number) and then add it to int decimal
  // loop number is len(string)-1 and starts with 0
  // Repeat the process until end of string
  int length = binary.length();

  for (int i = 0; i < length; i++){
    // Convert the character to integer (0 or 1)
    int bit;
    if (binary[length - 1 - i] == '1') {
      bit = 1;
      }
    else {
      bit = 0;
      }

    int value = bit * pow(2,i);
    decimal += value;
  }
  return decimal;
}

int OctalToDecimal(std::string octal){
  int decimal = 0;
  int length = octal.length();

  for (int i = 0; i < length; i++){
    // Convert the character to integer (0 to 7)
    int digit = octal[length - 1 - i] - '0';

    // Check if the digit is valid for octal
    if (digit < 0 || digit > 7) {
      std::cerr << "Invalid octal number" << std::endl;
      return -1;
      }

    int value = digit * pow(8,i);
    decimal += value;
  }
  return decimal;
}

int HexaToDecimal(std::string hexadecimal){
  int decimal = 0;
  int length = hexadecimal.length();

  for (int i = 0; i < length; i++){
    // Convert the character to integer (0 to 9) or if character is string (10-15)
    char hexValue = std::toupper(hexadecimal[length - 1 - i]); // Convert to uppercase
    int digit;
    if (hexValue >= '0' && hexValue <= '9'){ // The '0' and '9' represent their ASCII Values
      digit = hexValue - '0';
    }
    else if (hexValue >= 'A' && hexValue <= 'F'){
      digit = 10 + (hexValue - 'A');
    }
    else {
      std::cerr << "Invalid hexadecimal number" << std::endl;
      return -1;
    }
    decimal += digit * pow(16,i);
  }
  return decimal;
}



int main() {
  int choice;
  int decimal;
  std::string binary, hexadecimal, octal;
  std::cout << "Welcome to the conversion calculator!" << std::endl;
  std::cout << std::string(40, '=') << std::endl;
  std::cout << std::endl; // Adds an extra line
  std::cout << "Please enter your choice:" << std::endl;
  std::cout << "1. Binary to Decimal Conversion:\n";
  std::cout << "2. Octal to Decimal Conversion:\n";
  std::cout << "3. Hexadecimal to Decimal Conversion:\n";
  std::cout << "4. Decimal to Binary Conversion:\n";
  std::cout << "5. Decimal to Octal Conversion:\n";
  std::cout << "6. Decimal to Hexadecimal Conversion:\n";
  std::cout << "7. Exit\n";
  std:: cin >> choice;


  switch (choice)
  {
  case 1:
    std::cout << "Enter a binary number: ";
    std::cin >> binary;
    std::cout << BinarytoDecimal(binary) << std::endl;
    break;
  case 2:
    std::cout << "Enter an octal number: ";
    std::cin >> octal;
    std::cout << OctalToDecimal(octal) << std::endl;
    break;
  case 3:
    std::cout << "Enter a hexadecimal number: ";
    std::cin >> hexadecimal;
    std::cout << HexaToDecimal(hexadecimal) << std::endl;
    break;
  /*  
  case 4:
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    std::cout << DecimalToBinary(decimal) << std::endl;
    break;
  case 5:
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    std::cout << DecimalToOctal(decimal) << std::endl;
    break;
  case 6:
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;
    std::cout << DecimalToHexa(decimal) << std::endl;
    break;*/
  case 7:
    std::cout << "Thank you for using the conversion calculator!" << std::endl;
    break;
  }

  return 0;
}