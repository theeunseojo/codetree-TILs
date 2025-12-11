import java.util.Scanner;
public class Main {
    static int n;
    static int m;
    static int c;
    static int[][] grid;
    // 범위안에 존재하는가?
    static boolean IsRange(int x, int y){
        if(x < 0 || x >= n || y < 0 || y >= n){
            return false;
        }
        return true;
    }
    
    // M개중 M개이하 갯수만큼 선택해서 합이 최대를 돌려준다 
    // a와 b는 시작점의 행과 열 
    // c(무게의합) <= sum 
    // 각 가치^2 = 가치
    static int answer = 0;
   
    // x, y 시작점 
    public static void choose(int x, int y, int curr, int currW, int value){
        if(curr == m){
            answer = Math.max(answer, value);
            return;
        }
        
        if(IsRange(x, y + curr)){
            int w = grid[x][y + curr];
            // 현재칸을 선택하지 않을 것인가
            choose(x, y, curr + 1, currW, value);
            // 현재칸을 선택할 것인가
            if(currW + w <= c){
                choose(x, y, curr + 1, currW + w, value + (w*w));
            }
        }
        
        
    }
   
    
    public static boolean isOverlap(int i, int j , int k, int l ){
        // 행이 다르면 안겹침
        if(i != k){
            return false;
        }
        // 행이 같으면 열 체크 
        else{
            // 도둑 A가 먼저 있을 경우
            if(j < l && j + m - 1 < l){
                return false;
            }
            // 도둑 B가 먼저 있을 경우 
            else if(l < j && l + m - 1 < j){
                return false;
            }

            return true;
        }
    
        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        c = sc.nextInt();
        grid = new int[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                grid[i][j] = sc.nextInt();
        // Please write your code here.
        // 조건 : 두 도둑 , 각각 최대 무게 : C 이하 , 겹치면 안댐 
        // 구하려고 하는 것 -> 조건 만족하면서 가치의 총 합 중 최댓값
        // M개중 1~M갯수만큼 선택해서  최대의 값을 구한다. => 제곱해서 합산 
        
        
        // 도둑 A 
        int value = 0;
        int value2 = 0;
        int result = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                // 도둑 B
                for(int k = 0; k < n; k++){
                    for(int l = 0; l < n; l++){
                       // 겹치지 않으면
                        if(!isOverlap(i, j, k, l)){
                            answer = 0;
                            choose(i, j, 0,0,0);
                            value  = answer;
                            answer = 0;
                            choose(k, l, 0,0,0);
                            value2 = answer;
                            result = Math.max(result, value + value2);
                            //System.out.println("result : " + result + "i,j,k,l" + i + "," + j + "," + k + "," + l);
                        }
                       
                    }
                }

            }
        }

       System.out.println(result);
    }
}
