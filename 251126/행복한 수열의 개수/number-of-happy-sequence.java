import java.util.Scanner;

public class Main {
    public static int[][] grid;
    static int n;
    public static boolean IsHaveByRow(int row, int m){
        int count = 1;
        for(int i = 0; i < n - 1; i++){
            int before = grid[row][i];
            int after = grid[row][i + 1];

            if(before == after){
                count++;
                if(count  == m){
                    return true;
                }
            }
            // 다를 경우
            else{
                count = 1;
                if(count  == m){
                    return true;
                }
            }
        }

        return false;
    }

    public static boolean IsHaveByCol(int col, int m){
        int count = 1;

        for(int i = 0; i < n - 1; i++){
            int before = grid[i][col];
            int after = grid[i + 1][col];

            if(before == after){
                count++;
                if(count == m){
                    return true;
                }
            }
            else{
                count = 1;
                if(count  == m){
                    return true;
                }
            }
        }

        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        int m = sc.nextInt();
        grid = new int[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                grid[i][j] = sc.nextInt();

        // Please write your code here.
        // 행기준 연속된 갯수가 있는지 찾는 함수
        // 열기준 연속된 갯수가 있는지 찾는 함수

        int total = 0;
        for(int row = 0; row < n; row++){
            if(IsHaveByRow(row, m)){
                total++;
                //System.out.println("row : " + row + "count = " + total);
            }
        }

        for(int col = 0; col < n; col++){
            if(IsHaveByCol(col, m)){
                total++;
               // System.out.println("col : " + col + "count = " + total);
            }
        }

        System.out.println(total);
    }
}