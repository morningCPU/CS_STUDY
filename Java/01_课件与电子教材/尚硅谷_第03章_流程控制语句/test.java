import java.util.Scanner;
public class test{
    public static void main(String[] argv){
        Scanner scan = new Scanner(System.in);
        int obj = (int)(Math.random()*96) + 5;
        System.out.println("请输入一个5~100的数:");
        int num = -1;
        int count = 0;
        while(true)
        {
            count ++;
            num = scan.nextInt();
            if(num < obj){
                System.out.println("小了");
            }else if(num > obj){
                System.out.println("大了");
            }else{
                System.out.println("恭喜你猜对了!");
                break;
            }
        }
        scan.close();
    }
}