#include <fstream>
#include <iostream>
#include <vector>

#define F "test.txt"

using namespace std;

void showArray(vector<long> array) {
   cout << array.size() << ": [";
   for (int i = 0; i < array.size(); i++) {
      cout << array[i];
      if (i != array.size() - 1) {
         cout << ", ";
      }
   }
   cout << "]" << endl;
}

void exportText(vector<long> array) {
   ofstream outputfile(F);
   outputfile << array.size() << ": [";
   for (int i = 0; i < array.size(); i++) {
      outputfile << array[i];
      if (i != array.size() - 1) {
         outputfile << ", ";
      }
   }
   outputfile << "]" << endl;
   outputfile.close();
}

int main() {
   long n = 103693973672629630;
   vector<long> array;
   array.push_back(n);

   //for (int i = 0; n != 1; i++)
   //for (; n != 1;)
   while (n != 1) {
      if (n % 2 == 0) {
         n = n / 2;
      } else {
         n = n * 3 + 1;
      }
      array.push_back(n);
   }
   showArray(array);
   exportText(array);
   return 0;
}
