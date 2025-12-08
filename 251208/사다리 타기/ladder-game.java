//package CodeTree;

import java.util.*;

public class Main {

    static int[][] ladder;
    static int[] temp;
    static int[] answer;
    static int n;
    static int m;
    static int count;

    static int minCount = 16;
    static class Point{
        int x;
        int y;

        Point(int x, int y){
            this.x = x;
            this.y = y;
        }
    }

    static List<Point> points;

    static void swap(int index, int[] arr){
        int temp = arr[index];
        arr[index] = arr[index +1];
        arr[index + 1] = temp;
    }

    static void ride(){
        for(int i = 0; i < 15; i++){
            for(int j = 0; j < 11; j++){
                if(ladder[i][j] == 1){
                    swap(j, temp);
                }
            }
        }
    }

    static void copy(int[] temp, int[] answer){
        for(int i = 0; i < n; i++){
            answer[i] = temp[i];
        }
    }

    static boolean isEquals(int[] temp, int[] answer){
        for(int i = 0; i < n; i++){
            if(temp[i] != answer[i]){
                return false;
            }
        }
        return true;
    }
    static void init(){
        for(int i = 0; i < n; i++){
            temp[i] = i + 1;
        }
    }

    static void choose(int curr){
        if(curr == m){
            init();
            ride(); 

            if(isEquals(temp, answer)){
                minCount = Math.min(minCount, count);
            }

            return;
        }

        Point p = points.get(curr);

        
        
        // 가로줄 선택 X
        ladder[p.x][p.y] = 0;
        choose(curr + 1);
        ladder[p.x][p.y] = 1;
        


        // 가로줄 선택 O
        count++;
        choose(curr + 1);
        count--;
        
        

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        //init
        ladder = new int[15][11];
        points = new ArrayList<>();


        for(int i = 0; i < m; i++){
            int a = sc.nextInt() - 1;
            int b = sc.nextInt() - 1;
            ladder[b][a] = 1;   // 사다리 시작점 기록하기
            points.add(new Point(b, a));
        }

        // Please write your code here.
        // init data
        temp = new int[n];
        answer = new int[n];

        init();
        ride();  // 사다리타기
        copy(temp, answer);
        init();
        
        choose(0);
        System.out.println(minCount);


    }
}