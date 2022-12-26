package JAVA.Basic.p1002;
import java.util.Scanner;
import java.util.ArrayList;
public class p1002{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String str = input.next();
        char[] num = str.toCharArray();
        int sum = 0;
        for(int i=0; i<num.length; i++){
            sum += num[i]-'0';
        }
        ArrayList<String> result = transferCharArrayToChinese(Integer.toString(sum).toCharArray());
        for (int i=0; i<result.size()-1; i++){
            System.out.printf("%s ",result.get(i));
        }
        System.out.printf("%s",result.get(result.size()-1));
    }
    public static ArrayList<String> transferCharArrayToChinese(char[] num){
        String[] numArray = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
        ArrayList<String> result = new ArrayList<String>();
        for (int i=0; i<num.length; i++){
            String strChinese = numArray[Integer.valueOf(num[i]-'0')];
            result.add(strChinese);
        }
        return result;
    }
}