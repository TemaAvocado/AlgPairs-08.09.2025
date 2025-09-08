#include <iostream>  
#include <vector>  
#include <string>  
  
using namespace std;  
  
int main() {  
    vector<string> input = {"a", "1", "b", "2", "c", "3"};  
      
    vector<string> letters;  
    vector<string> numbers;  
      
    for (const string& item : input) {  
        if (isalpha(item[0])) {  
            letters.push_back(item);  
        }  
        else if (isdigit(item[0])) {  
            numbers.push_back(item);  
        }  
    }  
      
    cout << "Буквы: ";  
    for (const string& letter : letters) {  
        cout << letter << " ";  
    }  
    cout << endl;  
      
    cout << "Числа: ";  
    for (const string& number : numbers) {  
        cout << number << " ";  
    }  
    cout << endl;  
      
    return 0;  
}  
