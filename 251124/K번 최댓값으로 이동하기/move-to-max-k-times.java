
import java.util.*;

public class Main {

    static class Pair{
        int x;
        int y;
        Pair(int x, int y){
            this.x = x;
            this.y = y;
        }
    }

    // init
    static int n;
    static boolean[][] visited;
    static int[][] grid;
    static Queue<Pair> q;
    static int r;
    static int c;

    // 시작점 찾기
    static int bestX = -1;
    static int bestY = -1;
    static int bestVal = -1;


    public static boolean InRange(int x, int y){
        if(x < 0 || x >= n || y < 0 || y >= n){
            return false;
        }
        return true;
    }

    // 인접한 타일을 이동할 수 있는가?
    public static boolean Cango(int x, int y){

        if(InRange(x, y) && !visited[x][y]){
            int currVal = grid[x][y];
            int startVal = grid[r][c];

            if(startVal > currVal){
                return true;
            }

        }
        return false;
    }


    public static void push(int x, int y){
        visited[x][y] = true;
        q.add(new Pair(x, y));
    }

    public static void updateBest(int x, int y){
        int currVal = grid[x][y];


        if(currVal > bestVal){
            bestVal = currVal;
            bestX = x;
            bestY = y;

        }
        else if(currVal == bestVal){
            if(bestX > x ){
                bestX = x;
                bestY = y;
            }
            else if(bestX == x && bestY > y){
                bestY = y;
            }
        }


    }

    public static void bfs(){
        int[] dx = {1, 0, -1, 0};
        int[] dy = {0, -1, 0, 1};


        // 갈수 있는 모든 범위가 큐에 들어간다.
        while(!q.isEmpty()){
            Pair curr = q.poll();
            int x = curr.x;
            int y = curr.y;


            // 인접한 값들 큐에 넣으면서 이동하기
            for(int i = 0; i < 4; i++){
                int newX = x + dx[i];
                int newY = y + dy[i];


                if(Cango(newX, newY)){
                    push(newX, newY);

                    // 최대값 위치 업데이트
                    updateBest(newX, newY);
                    //System.out.println(newX + " , "  + newY);
                }

            }

        }//while 종료

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int k = sc.nextInt();
        grid = new int[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                grid[i][j] = sc.nextInt();
        r = sc.nextInt() - 1;
        c = sc.nextInt() - 1;
        // Please write your code here.

        q = new LinkedList<>();
        // 갈 수 있는 범위 중에
        // 최댓값으로 이동 -> 조건 만족하는 => 시작점 갱신


        while(k-- > 0){

            bestX = -1;
            bestY = -1;
            bestVal = -1;
            visited = new boolean[n][n];

            push(r,c);
            bfs();

            r = bestX;
            c = bestY;


            //System.out.println(k + " , " + r + " , " + c);
        }

        System.out.println((r + 1) + " " + (c + 1));
    }
}

