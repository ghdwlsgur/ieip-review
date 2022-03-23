
public class ch12 {
  public static void main(String[] args) {
    int j, k, L, result;
    j = 10;
    k = 20;
    L = 30;
    result = j < k ? k++ : --L; // 10 < 20 -> true -> k++
    System.out.printf("%d %d %d\n", result, k, L); // result = 20, k = 21, L = 30
  }
}
