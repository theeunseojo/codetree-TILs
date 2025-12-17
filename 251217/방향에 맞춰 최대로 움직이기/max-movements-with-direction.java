import java.util.Scanner;
public class Main {
    static int n;
    public static int maxCount = 0;
    static int[] dx = {-1,-1,0,1,1,1,0,-1};
    static int [] dy ={0,1,1,1,0,-1,-1,-1};
    static int[][] num;
    static int[][] moveDir;
    public static boolean InRange(int x, int y){
        if(x < 0 || x >= n || y < 0 || y >= n){
            return false;
        }
        return true;
    }

    public static void choose(int x, int y, int cnt){
        // 이동하지 않을 수도 있으므로 최대값 카운팅 갱신 
        maxCount = Math.max(maxCount, cnt);

        int dir = moveDir[x][y] -1;
        // 현재위치에 적힌 방향대로 진행 
        for(int i = 1; i < n; i++){
            int nx = x + dx[dir] * i;
            int ny = y + dy[dir] * i;

            if(!InRange(nx,ny)) break;

            // 현재위치보다 큰가?
            if(num[x][y] < num[nx][ny]){
                choose(nx,ny,cnt+1);
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        num = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                num[i][j] = sc.nextInt();
            }
        }
        moveDir = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                moveDir[i][j] = sc.nextInt();
            }
        }
        int r = sc.nextInt();
        int c = sc.nextInt();
        // Please write your code here.
        // 현재 위치에서 갈 수 있는 칸으로 이동한다.
        // 조건 : 현재위치보다 숫자가 큰가? 방향이 맞는가?
        // 이동시, 카운팅 
        choose(r-1, c-1, 0);

        System.out.println(maxCount);
    }
}