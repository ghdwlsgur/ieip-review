public class ch27 {
  public static void main(String[] args) {
    int i, hap = 0;
    for (i = 1; i <= 10; ++i, hap += i)
      ;

    // 1 => 2
    // 2 => 3
    // 3 => 4
    // ...
    // 10 => 11
    // i = 11, hap = 2 + 3 + 4 + ... + 11 = 65
    System.out.printf("%d, %d\n", i, hap);
  }

}
