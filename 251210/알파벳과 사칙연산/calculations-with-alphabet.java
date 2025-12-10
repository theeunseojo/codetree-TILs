import java.util.*;

public class Main {
    public static int m;
    public static ArrayList<Integer> realOperand = new ArrayList<>();
    public static int sum = 0;
    public static int answer = 0;
    public static String expression;
    
    // choose(curr) : curr위치에 1부터 4까지를 선택하는 함수 
    public static void choose(int curr){
        if(curr == m){
            // 한번에 계산한 후에 , 최대값 찾기 
            sum = calculateAll();
            answer = Math.max(sum, answer);
            return;
        }
        // 1부터 4까지 하나를 선택했을때
        for(int i = 1; i <= 4; i++){
            realOperand.add(i);
            choose(curr + 1);
            realOperand.remove(realOperand.size() - 1);
        }

    }
    public static int calculateAll(){
       
        // realOperand 1 2 4 
        int index = 0;
        int sum = realOperand.get(index++);
        
        for(int i = 0; i < expression.length(); i++){
            char temp = expression.charAt(i);

            if(temp == '+' || temp == '-' || temp == '*'){
                int b = realOperand.get(index++);
                sum = calculate(sum,b,temp);
            }
            else continue;
        }
        return sum;
    }

    public static int calculate(int a, int b , char op){
        switch (op) {
            case '+':
                return a + b;
            case '-':
                return a - b;
            case '*':
                return a * b;
        }
        return 0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        expression = sc.next();
        // init 
        int expSize = expression.length();
        m = expSize / 2 + 1;
        // Please write your code here.
        choose(0);
        
        System.out.println(answer);
    }
}