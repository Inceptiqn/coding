public class Main {
    public static void main(String[] args) {
        Car myCar = new Car();
        Human human = new Human("ace", 16, 40.00);
        Diceroller diceroller = new Diceroller();
        System.out.println(myCar.make);
        System.out.println(myCar.model);
        myCar.drive();
        myCar.brake();
        System.out.println(human.name);

    }
}