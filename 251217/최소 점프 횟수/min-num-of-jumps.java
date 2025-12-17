import java.util.Scanner;

public class Main {
    static int minJumps = 1000;
    static int[] arr;
    static int n;

    public static void choose(int curr, int cnt){
        if(curr == n - 1 || curr >= n){
            minJumps = Math.min(minJumps, cnt);
            return;
        }
        
        int maxJump = arr[curr];
        for(int i = 1; i <= maxJump; i++){
            choose(curr + i, cnt + 1);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        // Please write your code here.
        // 현재위치에서 최대 점프 가능 거리 범위안에서 이동한다. 예) 최대점프가능거리가 2이면, 1칸 점프, 2칸 점프 가능 
        // 현재 위치가 최대 칸인지를 체크 
        // 구하는건? N번째 위치에 도달하기 위해 필요한 최소 점프 횟수 
        choose(0, 0);
        if(minJumps >= 1000){
            minJumps = -1;
        }
        System.out.println(minJumps);
    }
}