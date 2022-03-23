
public class ch08 {
  public static void main(String[] args) {
    int i, j = 0;
    for (i = 0; i < 8; i++) {
      j += i;
      System.out.println(i);
    }
    System.out.printf("final = %d\n", i);
    System.out.printf("%d, %d\n", i, j); // 0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28(j)
  }
}