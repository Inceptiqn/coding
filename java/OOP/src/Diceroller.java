import java.util.Random;

public class Diceroller {
    Random random = new Random();
    int number;
    Diceroller(){
        roll();
    }

    void roll() {
        number = random.nextInt(6)+1;
        System.out.println(number);
    }
}
