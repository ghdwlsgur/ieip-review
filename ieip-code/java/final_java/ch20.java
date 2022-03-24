public class ch20 {
  public static void main(String[] args) {
    int a = 3, b = 4, c = 5, d = 5;
    a += 6 + --b;
    // a = a + (6 + 3)
    // a = a + 9
    // a = 12
    d *= 7 - c++;
    // d = d * (7 - 5)
    // d = d * 2
    // d = 10
    // 12, 3, 6, 10
    System.out.printf("%d, %d, %d, %d\n", a, b, c, d);
  }

}
