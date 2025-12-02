import java.util.Scanner;
public class Main {
    public static int n;
    public static int[] arr;

    public static int count = 0;

    public static void select(int curr){
        // 종료조건
       
        if( curr == n + 1){
            count++;
            return;
        }
        for(int i = 1; i <= n; i++){
            if(curr + i - 1 <= n){
                // curr ~ curr + i - 1까지 
                for(int j = 0; j < i; j++){
                    arr[curr + j] = i;
                }

                // curr + i부터 블록 채우기
                select(curr + i);
            }
            
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        // Please write your code here.
        arr = new int[n + 1];
        select(1);

        System.out.println(count);
    }
}