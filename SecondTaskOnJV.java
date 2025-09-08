import java.util.*;  
  
public class ListSplitter {  
    public static void main(String[] args) {  
        List<String> inputList = Arrays.asList("a", "1", "b", "2", "c", "3");  
          
        List<String> letters = new ArrayList<>();  
        List<String> numbers = new ArrayList<>();  
          
        for (String item : inputList) {  
            if (Character.isLetter(item.charAt(0))) {  
                letters.add(item);  
            } else if (Character.isDigit(item.charAt(0))) {  
                numbers.add(item);  
            }  
        }  
          
        System.out.println("Буквы: " + letters);  
        System.out.println("Числа: " + numbers);  
    }  
}  
