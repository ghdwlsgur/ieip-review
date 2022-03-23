
public class ch11 {
  public static void main(String[] args) {
    int a = 035, b = 0x35, c = 35;
    System.out.printf("%d\n", a); // (3 x 8^1) + (3 x 8^0)
    System.out.printf("%d\n", b); // (3 x 16^1) + (3 x 16^0)
    System.out.printf("%d\n", c);
  }
}
