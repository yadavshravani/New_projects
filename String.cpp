#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to check if two strings are equal
bool equal(const string& str1, const string& str2) {
  return str1 == str2;
}

// Function to copy one string to another
void copy(string& dest, const string& src) {
  dest = src;
}

// Function to concatenate two strings
string concat(const string& str1, const string& str2) {
  return str1 + str2;
}

// Function to display a string
void display(const string& str) {
  cout << str << endl;
}

// Function to reverse a string
string reverse(string& str) {
  reverse(str.begin(), str.end());
  return str;
}

// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {
  string temp = str;
  reverse(temp.begin(), temp.end());
  return str == temp;
}

// Function to find the number of occurrences of a substring
int findSubstrOccurrences(const string& str, const string& substr) {
  int count = 0;
  size_t pos = 0;
  while ((pos = str.find(substr, pos)) != string::npos) {
    count++;
    pos++;
  }
  return count;
}

// Overloading the << operator to display a string
ostream& operator<<(ostream& os, const string& str) {
  os << str;
  return os;
}

// Overloading the == operator to check string equality
bool operator==(const string& str1, const string& str2) {
  return str1.compare(str2) == 0;
}

int main() {
  string str1 = "Hello World!";
  string str2 = "Hi!";
  string subStr = "llo";

  cout << "String 1: " << str1 << endl;
  cout << "String 2: " << str2 << endl;

  // Check equality
  if (equal(str1, str2)) {
    cout << "Strings are equal" << endl;
  } else {
    cout << "Strings are not equal" << endl;
  }

  // Copy and display
  copy(str2, str1);
  cout << "Copied string: " << str2 << endl;

  // Concatenation
  string str3 = concat(str1, "!");
  cout << "Concatenated string: " << str3 << endl;

  // Reverse and display
  reverse(str2);
  cout << "Reversed string: " << str2 << endl;

  // Check palindrome
  if (isPalindrome(str1)) {
    cout << "String is a palindrome" << endl;
  } else {
    cout << "String is not a palindrome" << endl;
  }

  // Find substring occurrences
  int occurrences = findSubstrOccurrences(str1, subStr);
  cout << "Substring '" << subStr << "' occurs " << occurrences << " times" << endl;

  // Demonstrate operator overloading
  cout << str1 << " == " << str2 << "? " << (str1 == str2) << endl;
  cout << "Output using overloaded <<: " << str1 << endl;

  return 0;
}
