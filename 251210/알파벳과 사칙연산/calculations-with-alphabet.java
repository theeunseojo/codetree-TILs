import java.util.Scanner;
public class Main {
    public static String expression;
    // a~f까지
    public static int[] alphabets= new int[6];
    public static int answer = Integer.MIN_VALUE;
    public static void choose(int curr){
        if(curr == 6){
            int sum = calculate();
            answer = Math.max(answer, sum);
            return;
        }

        // 현재 알파벳에 1~4까지 저장
        for(int i = 1; i <= 4; i++){
            alphabets[curr] = i;
            choose(curr + 1);
        }
    }

    public static int calculate(){
        int sum = alphabets[expression.charAt(0) - 'a']; // alphabets[0] 
        for(int i = 1; i < expression.length(); i += 2){
            char op = expression.charAt(i);
            char next = expression.charAt(i + 1);
            int num = alphabets[next - 'a'];
           
            switch(op){
                case '+': sum += num; break;
                case '-': sum -= num; break;
                case '*': sum *= num; break;
            }
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        expression = sc.next();
        // Please write your code here.
        choose(0);
        System.out.println(answer);
    }
}