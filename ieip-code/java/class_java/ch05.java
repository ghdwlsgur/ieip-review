import java.util.Scanner;

public class ch05 {
  public static void main(String[] args) {
    int i;
    Scanner s = new Scanner(System.in);
    System.out.print("숫자를 입력하시오: ");
    i = s.nextInt();
    recursive(i);
    s.close();
  }

  static int recursive(int n) {
    int i;
    if (n < 1)
      return 2;
    else {
      i = (2 * recursive(n - 1)) + 1;
      System.out.println(i);
      return i;
    }
  }
}

// n = 5 recursive(4)
// recursive(3)
// recursive(2)
// recursive(1)
// 2
// 2 * 2 * 2 * 2 * 2 + 1 + 1 + 1 + 1
// 2^5 + 4 = 36
