import java.util.Scanner;
import java.util.*;

public class Main {

    static int k;
    static int n;
    static int m;

    static int maxScore = 0;
    static int[] nums;
    
    static List<Integer> game = new ArrayList<>();

  

    public static void calculate(){
        int score = 0;
        int[] move = new int[k + 1];

        for(int i = 0; i < n; i++){
            int hosreNum = game.get(i);
            move[hosreNum] += nums[i]; 
        }

        // 점수 계산
        for(int i = 1; i <= k; i++){
            if(move[i] >= m - 1){
                score++;
            }
        }
        maxScore = Math.max(maxScore, score);
    }

    public static void choose(int curr){
         
        if(curr == n){
            // 점수 계산
            calculate();
            return;
        }

        // 어떤 말을 선택할 것인가
        for(int i = 1; i <=k; i++){
            game.add(i);
            choose(curr + 1);
            game.remove(game.size() - 1);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        k = sc.nextInt();
        nums = new int[n]; // 각턴의 거리 
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }
        
        // Please write your code here.
        // 각턴에 어떤 말을 선택할 것인가 
        // 말은 M에 도달햇을때 1점을 얻고, 이동하지 않음 
        // 종료 조건 : 턴이 끝났을때 

        choose(0);
        System.out.println(maxScore);


    }
}