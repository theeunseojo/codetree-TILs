import java.util.*;

public class Main {
    static class Point{
        int x;
        int y;
        Point(int x, int y){
            this.x = x;
            this.y = y;
        }
    }
    static int n;
    static int[] visited;
    static ArrayList<Point> list;
    static int count = 0;
    static int answer = 0;
    
    static boolean isOverlap(int x, int y){
        for(int i = x; i <= y; i++){
            if(visited[i] == 1){
                return true;
            }
        }
        return false;
    }

    static void visit(int x, int y){
        for(int i = x; i <= y; i++){
            visited[i] = 1;
        }
    }


    static void unvisit(int x, int y){
        for(int i = x; i <= y; i++){
            visited[i] = 0;
        }
    }

    static void choose(int currIdx){
        if(currIdx == n){
            // 최댓값 기록하기 
            answer = Math.max(answer, count);
            return;
        }

        // 다음 선분을 선택한다. 
        choose(currIdx + 1);

        // 현재 선분 
        Point p = list.get(currIdx);
        if(!isOverlap(p.x, p.y)){
            visit(p.x, p.y);
            count++;
            choose(currIdx + 1);
            count--;
            unvisit(p.x, p.y);
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int[][] segments = new int[n][2];
        list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            segments[i][0] = sc.nextInt();
            segments[i][1] = sc.nextInt();
            list.add(new Point(segments[i][0], segments[i][1]));
            
        }
        // Please write your code here.
        visited = new int[1001];
        
        choose(0);
        System.out.println(answer);


        
    }
}