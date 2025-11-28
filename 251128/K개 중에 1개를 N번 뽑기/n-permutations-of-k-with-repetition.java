import java.util.Scanner;
import java.util.*;

public class Main {
    static int n;
    static int k;
    static List<Integer> list;

    static void printAnswer(){
        for(int num : list){
            System.out.print(num);
            System.out.print(" ");
        }
        System.out.println();
    }

    public static void select(int curr){

        if(curr == n + 1 ){
            printAnswer();
            return;
        }

        for(int i = 1; i <= k; i++){
            list.add(i);
            select(curr + 1);
            list.remove(list.size() - 1);
        }

        return;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        k = sc.nextInt();
        n = sc.nextInt();
        // Please write your code here.
        // select(int curr) : curr자리에 1부터 K이하의 숫자를 하나 선택한다. 
        list = new ArrayList<>();
        select(1);
        

    }
}