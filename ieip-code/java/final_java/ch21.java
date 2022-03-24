public class ch21 {
  public static void main(String[] args) {
    int i = 0, hap = 0;
    do {
      ++i;
      hap += i;
    } while (i < 5);
    // 0 => 1
    // 1 => 2
    // 2 => 3
    // 3 => 4
    // 4 => 5
    // hap = 1 + 2 + 3 + 4 + 5 = 15
    System.out.printf("%d, %d\n", i, hap);
  }

}
