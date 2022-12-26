package JAVA.Basic.p1001;
import java.util.Scanner;
class Scan{
    public int in(){
        Scanner input = new Scanner(System.in);
        return input.nextInt();
    }
}

public class p1001 {
    public static void main(String[] args){
        Scan scan = new Scan();
        int num = scan.in();
    
        System.out.println(calcStep(num));
    }
    
    static int calcStep(int num){
        if(num==1)return 0;
        if(num%2==0){
            return calcStep(num/2)+1;
        }else{
            return calcStep((num*3+1)/2)+1;
        }
    }

}
