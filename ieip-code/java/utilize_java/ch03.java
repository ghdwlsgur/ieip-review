class Parent {
  int compute(int num) {
    if (num <= 1)
      return num;
    return compute(num - 1) + compute(num - 3);
  }
}

class Child extends Parent {
  int compute(int num) {
    if (num <= 1)
      return num;
    return compute(num - 1) + compute(num - 3);
  }
}

public class ch03 {
  public static void main(String[] args) {
    Parent obj = new Child();
    System.out.print(obj.compute(4));
  }
}
