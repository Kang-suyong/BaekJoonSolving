import java.util.Scanner;
 
 public class Main {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        String str = scan.nextLine();

        int i = 0;
        int result = 1; //끝 포함

        if(str.charAt(i) == ' ')
        result--;
        if(str.charAt(str.length()-1) == ' ')
        result--;

        while(i < str.length())
        {
            if(str.charAt(i) == ' ')
            {
                result++;
            }
            i++;

        }

        System.out.println(result);
    }
        
 }