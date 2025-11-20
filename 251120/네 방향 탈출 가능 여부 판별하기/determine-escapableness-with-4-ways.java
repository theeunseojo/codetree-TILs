import java.util.Scanner;
import java.util.*;

public class Main {

    static public class Pair{
        int x;
        int y;
        public Pair(int x, int y) {
            this.x = x;
            this.y = y;
        }
    }

    static int n;
    static int m;
    static boolean[][] visited;
    static int[][] grid;
    static Queue<Pair> q = new LinkedList();

    public static void push(int x, int y){
        visited[x][y] = true;
        q.add(new Pair(x, y));
    }
    

    public static boolean inRange(int x, int y){
        if(x < 0 || x >= n || y < 0 || y >= n){
            return false;
        }
        return true;
    }
    
    public static boolean CanGo(int x, int y){
        if(inRange(x, y) && !visited[x][y] && grid[x][y] == 1 ){
            return true;
        }   
        return false;
    }

    static void bfs(){
        int[] dx = new int[] {1, 0, -1, 0};
        int[] dy = new int[] {0, -1, 0, 1};

        while(!q.isEmpty()){
            Pair curr = q.poll();
            int x = curr.x, y = curr.y;

            for(int i = 0; i < 4; i++){
                int newX = x + dx[i];
                int newY = y + dy[i];

                if(CanGo(newX, newY)){
                    push(newX, newY);
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        grid = new int[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                grid[i][j] = sc.nextInt();
        // Please write your code here.
        visited = new boolean[n][m];

        push(0,0);
        bfs();

        int answer = visited[n-1][m-1] ? 1 : 0;

        System.out.println(answer);

        


        
    }
}