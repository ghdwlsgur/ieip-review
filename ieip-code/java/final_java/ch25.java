public class ch25 {
  public static int a = 1;

  public static void main(String[] args) {
    increase(); // a = 2, b = 3
    increase(); // a = 3, b = 3
  }

  static void increase() {
    int b = 2;
    System.out.printf("%d, %d\n", ++a, ++b);
  }
}
