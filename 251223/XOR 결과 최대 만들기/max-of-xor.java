import java.util.Scanner;

public class Main {
    static int answer;
    static int n, m;
    static int[] A;
    
    // choose(curr, cnt)
    // 지금까지 선택한 숫자의 갯수를 세고, .
    // 이전까지의 기록을 기록한다.

    static void choose(int curr, int cnt, int result){
        if(cnt == m){
            answer = Math.max(answer, result);
            result = 0;
            return;
        }
        for(int i = curr; i < n; i++){
            int num = A[i];
            choose(i + 1, cnt + 1, result ^ num);
        }

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        A = new int[n];
        for (int i = 0; i < n; i++) {
            A[i] = sc.nextInt();
        }
        // Please write your code here.
        choose(0, 0, 0);
        System.out.println(answer);

    }
}