#include <iostream>  
#include <string>  
  
int main() {  
    std::string input = "AaBbCcDd";  
      
    std::string uppercase;  
    std::string lowercase;  
      
    for (char c : input) {  
        if (isupper(c)) {  
            uppercase += c;
        } else if (islower(c)) {  
            lowercase += c;
        }  
    }  
      
    std::cout << "Строка с заглавными буквами: " << uppercase << std::endl;  
    std::cout << "Строка со строчными буквами: " << lowercase << std::endl;  
      
    return 0;  
}  
