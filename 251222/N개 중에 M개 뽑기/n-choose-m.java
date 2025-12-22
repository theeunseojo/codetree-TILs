import java.util.*;

// choose(curr, cnt)
// 지금까지 선택한 특정숫자의 갯수가 cnt라고 했을때, curr의 숫자가 1~N까지의 숫자를 선택하는 함수
// curr = 1부터 시작한다고 가정

public class Main {
    public static int n; 
    public static int m;
    static ArrayList<Integer> answer = new ArrayList<>();

    public static void printAnswer(){
        for(int num : answer){
            System.out.printf("%d ", num);
        }
        System.out.println();
    }
    public static void choose(int curr, int cnt){
        if(cnt == m){
            printAnswer();
            return;
        }
        
        for(int i = curr; i <= n; i++){
            answer.add(i);
            choose(i + 1, cnt + 1);
            answer.remove(answer.size() - 1);
            
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        // Please write your code here.
        choose(1, 0);
    }
}