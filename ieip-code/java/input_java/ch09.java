
public class ch09 {
  public static void main(String[] args) {
    int a = 5, b = 9, c;
    c = b % 5 < 5 ? 1 : 0;
    System.out.printf("check, %d\n", c);
    c = c | c << 3;
    System.out.printf("check, %d\n", c);
    c = a < 5 || c >= 10 ? c - a : c + a;
    System.out.printf("%d", c);
  }
}
