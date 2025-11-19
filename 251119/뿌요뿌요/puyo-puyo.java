import java.util.Scanner;

public class Main {
    public static int n;
    public static boolean [][] visited;
    public static int[][] grid;
    public static int maxSize = 0;
    public static int currentSize;

    public static boolean InRange(int x, int y){
        if(x < 0 || x >= n || y < 0 || y >= n){
            return false;
        }
        return true;
    }

    public static boolean Cango(int x, int y){
        if(InRange(x, y) && !visited[x][y]){
            return true;
        }
        return false;
    }

    public static void dfs(int x, int y, int k){
        int [] dx = {1, 0, -1, 0};
        int [] dy = {0, -1, 0, 1};

        visited[x][y] = true;
        currentSize ++;

        for(int i = 0; i < 4; i++){
            int newX = x + dx[i];
            int newY = y + dy[i];
            

            if(Cango(newX, newY)){
                int newK = grid[newX][newY];
                if(newK == k){
                     dfs(newX, newY, newK);
                }
               
            }
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        visited = new boolean[n][n];
        grid = new int[n][n];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                grid[i][j] = sc.nextInt();

        // Please write your code here.
        // 시작지점 + 블럭크기 4개 이상 -> 터지게 되는 블럭의 시작점 
        // 최대 블럭의 크기 -> 시작지점으로부터 하나씩 세기 
        // 추가조건 : 블럭의 크기가 4이상일때 터진다. => 탐색 마무리할때 크기 측정 후에 계산한다. 
        // 같은 숫자로 이루어져있는 ->
        int count = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(Cango(i, j)){
                    currentSize = 0;
                    int k = grid[i][j];
                    dfs(i, j, k);
                    if(currentSize >= 4){
                        count++;
                    }
                }

                if(currentSize > maxSize){
                    maxSize = currentSize;
                }
            }
        }

        System.out.print(count + " " + maxSize);


    }
}