import java.util.*;
public class Main {

    // 폭탄 위치 관리 
    static class Point {
        int r;
        int c;
        public Point(int r, int c) {
            this.r = r;
            this.c = c;
        }
    }
    public static ArrayList<Point> bombPositions = new ArrayList<>();
    
    public static int n;
    public static int bombCount;
    // 색칠된 영역를 구할 수 있도록 하는 배열 
    public static boolean[][] visited;
    public static int answer = 0;

    public static int countArea(){
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                // 색칠되었다면
                if(visited[i][j]){
                    count++;
                }
            }
        }
        // 탐색이 종료
        return count;
    }

    public static boolean InRange(int x, int y){
        if(x < 0 || x >= n || y < 0 || y >= n){
            return false;
        }
        return true;
    }

    public static void bomb(int x, int y, int choose){
        // 폭탄위치 터뜨리기
        visited[x][y] = true;
        // 1번이라면, 해당하는 열 터뜨리기
        if(choose == 1){
            for(int i = 0; i < n; i++){
                visited[i][y] = true;
            }
        }
        // 2번이라면, 상하좌우 터뜨리기
        else if(choose == 2){
            // 상하좌우 
            int[] dx = {-1, 1, 0, 0};  // row
            int[] dy = {0, 0, -1, 1};  // col

            for(int i = 0; i < 4; i++){
                int X = x + dx[i];
                int Y = y + dy[i];
                if(InRange(X,Y)){
                    visited[X][Y] = true;
                }
                
            }
        }
        // 3번이라면, 대각선 터뜨리기
        else{
            int[] dx = {-1, -1, 1, 1};
            int[] dy = {-1, 1, -1, 1};
            for(int i = 0; i < 4; i++){
                int X = x + dx[i];
                int Y = y + dy[i];
                if(InRange(X,Y)){
                    visited[X][Y] = true;
                }
            }
        }
    }

    public static void select(int curr){

        // 종료조건 
        if(curr  == bombCount + 1){
            answer = Math.max(answer,countArea());
            return;
        }

        // 현재 폭탄 위치 
        Point currentBomb = bombPositions.get(curr - 1); 
        int r = currentBomb.r;
        int c = currentBomb.c;

        for(int i = 1; i <=3; i++){
            boolean[][] tempVisited = new boolean[n][n];
            for (int j = 0; j < n; j++) {
                System.arraycopy(visited[j], 0, tempVisited[j], 0, n); // 1차원 배열 복사
            }
            // 폭탄 터뜨리기
            bomb(r, c, i);

            select(curr + 1);

            // 되돌리기 
            for (int j = 0; j < n; j++) {
                System.arraycopy(tempVisited[j], 0, visited[j], 0, n); // 저장했던 상태로 복원
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int[][] grid = new int[n][n];
        bombCount = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                grid[i][j] = sc.nextInt();
                // 폭탄 갯수 세기 
                if(grid[i][j] == 1){
                   bombPositions.add(new Point(i,j));
                   bombCount++;
                }
            }
        }
        // Please write your code here.
        visited = new boolean[n][n];
        select(1);
        System.out.println(answer);

    }
}