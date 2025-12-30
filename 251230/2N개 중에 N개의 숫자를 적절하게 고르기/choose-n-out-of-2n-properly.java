
import java.util.*;
// 두그룹을 나눈다?
// 일단 내가 N개를 구하면 무조건 나머지 N개는 확정이다.
// 그룹을 나눈후 차를 구한다.
// 최소값을 갱신한다.
// sum = a + b
// b = sum - a
// a - b = 2 * a - sum


public class Main {
    public static int answer = Integer.MAX_VALUE;
    public static int sum;
    public static int[] arr;

    public static int n;
    public static void choose(int idx, int cnt, int localSum){
        if(cnt == n){
            answer = Math.min(answer, Math.abs(2 * localSum - sum));
            //System.out.println(answer);
            return;
        }
        if(idx == 2 * n){
            return;
        }
        // 선택 O
        choose(idx + 1, cnt + 1, localSum + arr[idx]);
        // 선택X
        choose(idx + 1, cnt, localSum);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        arr = new int[2 * n];
        sum = 0;
        for (int i = 0; i < 2 * n; i++) {
            arr[i] = sc.nextInt();
            sum += arr[i];
        }
        // Please write your code here.
        choose(0, 0, 0);
        System.out.println(answer);

    }
}