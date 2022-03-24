public class ch18 {
  public static void main(String[] args) {
    String str = "Information!";
    int n = str.length(); // 12
    char[] st = new char[n]; // char[] st = new char[12]
    System.out.printf("%c\n", str.charAt(11));
    n--;
    for (int k = n; k >= 0; k--) {
      // k = 11
      // st[11-11]
      // st[0] = charAt(11);
      // st[11-10]
      // st[1] = charAt(10);
      // ...
      st[n - k] = str.charAt(k);
    }
    for (char c : st) {
      System.out.printf("%c", c);
    }
  }

}
