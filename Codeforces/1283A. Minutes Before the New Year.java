import java.util.Scanner;

public class CF_1283A {
    public static void main(String[] args) {
        Scanner input =  new Scanner(System.in);
        int testCase = input.nextInt();
        for (int t = 1; t <= testCase; t++) {
            int h = input.nextInt(); int m = input.nextInt();
            int temp = 24*60;
            int check = 60*h+m;
            System.out.println(temp-check);
        }
    }
}
