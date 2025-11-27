import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] blocks = new int[n];
        for (int i = 0; i < n; i++) {
            blocks[i] = sc.nextInt();
        }
        int s1 = sc.nextInt() - 1;
        int e1 = sc.nextInt() - 1;
        int s2 = sc.nextInt() - 1;
        int e2 = sc.nextInt() - 1;
        // Please write your code here.

        int IndexOfTemp = 0;
        int [] temp = new int[n];
        // 첫번째 빼기
        for(int i = 0; i < blocks.length; i++){
            if(i < s1 || i > e1){
                temp[IndexOfTemp] = blocks[i];
                IndexOfTemp++;
                
            }


        }
        blocks = temp;

        // 두번째 빼기 
        int blockCount = IndexOfTemp;
        IndexOfTemp = 0;
        temp = new int[n];

        for(int i = 0; i < blockCount; i++){
            if(i < s2 || i > e2){
                temp[IndexOfTemp] = blocks[i];
                IndexOfTemp++;
                //System.out.println(IndexOfTemp);
            }
           
        }

        blocks = temp;
        // size 출력
        System.out.println(IndexOfTemp);
        // 내용 출력
        for(int i = 0; i < IndexOfTemp; i++){
            System.out.println(blocks[i]);
        }

    }
}