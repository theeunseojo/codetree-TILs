import java.util.Scanner;
import java.util.*;

public class Main {

    public static int n ;
    public static boolean [][] visited;
    public static int[][] grid;
    public static Queue<Pair> q = new LinkedList<>();
    public static int count = 0; 
    
    static public class Pair{
        int x;
        int y;
        public Pair(int x, int y) {
            this.x = x;
            this.y = y;
        }
    }

    public static void push(int x, int y){
        
        // System.out.println("x : " + x + " y : " + y +  " " + visited[x][y]);
       if(!visited[x][y]){
        visited[x][y] = true;
        q.add(new Pair(x, y));
        count++;
       }
       
        
    }
    
    public static boolean InRange(int x, int y){
        if(x < 0 || x >= n || y < 0 || y >= n){
            return false;
        }
        return true;
    }

    public static boolean Cango(int x, int y){
        if(InRange(x, y) && !visited[x][y] && grid[x][y] == 0){
            return true;
        }
        return false;
    }

    public static void bfs(){
        int[] dx = {1, 0, -1, 0};
        int[] dy = {0, -1, 0, 1};

        
        while(!q.isEmpty()){
            Pair curr = q.poll();
            int x = curr.x ;
            int y = curr.y;

            for(int i = 0; i < 4; i++){
                int newX = x + dx[i]; 
                int newY = y + dy[i];

                if(Cango(newX, newY)){
                    push(newX, newY);
                }

            }
            
            
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int k = sc.nextInt();
        grid = new int[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                grid[i][j] = sc.nextInt();
        int[][] starts = new int[k][2];
        for (int i = 0; i < k; i++) {
            starts[i][0] = sc.nextInt();
            starts[i][1] = sc.nextInt();
            
        }
        // Please write your code here.
        visited = new boolean[n][n];
        // 방문이 가능한 서로 다른 칸 -> 다른 시작지점에서 방문한 곳은 방문하지 않는다

        // 시작지점 방문
        for(int i = 0; i < k; i++){
            int x = starts[i][0] - 1;
            int y = starts[i][1] - 1;
            push(x,y);
            bfs(); 
        }
        System.out.println(count);
        
    }
}