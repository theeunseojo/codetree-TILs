import java.util.Scanner;
import java.util.Arrays;

public class Main {
    
    static boolean[][] visited;
    static int[][] grid;
    static int k = 0;
    static int n;
    static int m;
    static int count = 0;

    public static boolean InRange(int x, int y){
        if(x < 0 || x >= n || y < 0 || y >= m){
            return false;
        }
        return true;
    }

    public static boolean Cango(int x, int y, int k ){

        if(InRange(x, y) && !visited[x][y] && grid[x][y] > k){
            return true;
        }
        return false;
    }

    static void dfs(int x, int y, int k){
        int[] dx = {1, 0, -1, 0};
        int[] dy = {0, -1, 0, 1};
        
        
        visited[x][y] = true;
        
        for(int i = 0; i < 4; i++){
            int newX = x + dx[i];
            int newY = y + dy[i];

            if(Cango(newX, newY, k)){
                dfs(newX, newY, k);
            }
        }
    }

   
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        grid = new int[n][m];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                grid[i][j] = sc.nextInt();

        // Please write your code here.
       
        

        // 한지점 방문하기 
        // 한지점에서 인접한 영역이 안전하지 않은 영역일때까지 방문
        // 안전영역의 갯수는 방문 시작할때
        // k의 후보는 1 ~ 마을의 높이의 최댓값
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                k = Math.max(k, grid[i][j]);
            }
        }
        
        int minK = 0;
        int maxCount = 0; 

        for(int s = 1; s < k; s++){
            count = 0;
            visited = new boolean[n][m];

            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    if(Cango(i, j, s)){
                        count ++;
                        dfs(i,j,s);
                    }
                }
            }

            // 바뀔때만 기록
            if(maxCount < count){
                maxCount = count;
                minK = s;
            }
            
        }

        // 출력
        
        System.out.print(minK);
        System.out.print(" ");
        System.out.print(maxCount);
    }
     

}