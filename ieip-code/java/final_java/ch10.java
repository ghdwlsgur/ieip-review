
public class ch10 {
  public static void main(String[] args) {
    byte a = 15, b = 19;
    /**
     * 15 = 00001111
     * 19 = 00010011
     * a&b = 00000011 => 3
     * a|b = 00011111 => 31
     * a^b = 00011100 => 28 (다르면 1, 같으면 0)
     * ~a = 11110000
     * 00010000 => -16
     */
    System.out.printf("%d\n", ~a);
    System.out.printf("%d\n", a ^ b);
    System.out.printf("%d\n", a & b);
    System.out.printf("%d\n", a | b);
  }

}
