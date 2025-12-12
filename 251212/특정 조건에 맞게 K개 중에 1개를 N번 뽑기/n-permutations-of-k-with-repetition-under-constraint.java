import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {
    static int n;
    static int k;
    static List<Integer> answer = new ArrayList<>();
    
    static void printAnswer(){
        for(Integer ans : answer){
            System.out.print(ans + " ");
        }
        System.out.println();
    }

    
    static void choose(int curr){
        if(curr == n + 1){
            printAnswer();
            return;
        }

        // 현재 위치에서 1이상 K이하를 선택한다
        // 연속하여 같은 숫자가 3번 이상 나오는 경우 제외  // 연속이 포인트
        for(int i = 1; i <= k; i++){    
           
            int size = answer.size();
            // 현재위치에서 연속해서 3번이상 나오는 경우가 아닐 경우
            if(curr == 1 ||  curr == 2 || answer.get(size - 1) != answer.get(size - 2) || answer.get(size-1) == answer.get(size -2) && answer.get(size -1) != i){
                answer.add(i);
                choose(curr + 1);
                answer.remove(answer.size() - 1);
            }
            
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        k = sc.nextInt();
        n = sc.nextInt();
        // Please write your code here.
        choose(1);
    }
}