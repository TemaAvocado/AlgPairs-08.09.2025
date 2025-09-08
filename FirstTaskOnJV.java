public class StringSplitter {  
    public static void main(String[] args) {  
        String input = "AaBbCcDd";  
          
        StringBuilder uppercase = new StringBuilder();  
        StringBuilder lowercase = new StringBuilder();  
          
        for (char c : input.toCharArray()) {  
            if (Character.isUpperCase(c)) {  
                uppercase.append(c);
            } else if (Character.isLowerCase(c)) {  
                lowercase.append(c);
            }  
        }  
          
        System.out.println("Заглавные буквы: " + uppercase.toString());  
        System.out.println("Строчные буквы: " + lowercase.toString());  
    }  
}  
