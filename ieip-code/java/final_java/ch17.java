public class ch17 {
  public static void main(String[] args) {
    int a, b, c, hap;
    a = b = c = 2;
    hap = ++a | b-- & c--;
    // 3 | 2 & 2
    // 3 | 2
    // 3

    // 3, 3, 1, 1
    System.out.printf("%d %d %d %d", hap, a, b, c);
  }
}