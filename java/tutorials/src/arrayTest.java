public class arrayTest {
    public static void main(String[] args) {
        String[] cars = {"Camaro", "Corvette", "Tesla"};

        cars[0] = "Mustang";

        System.out.println(cars[0]);

        String[] cars2 = new String[3];
        cars2[0] = "Camaro";
        cars2[1] = "Corvette";
        cars2[2] = "Tesla";
        for (int i = 0; i < cars.length; i++) {
            System.out.println(cars2[i]);
        }

        String[][] cars3 = new String[3][3];

        String[][] cars4 = 	{
                {"Camaro","Corvette","Silverado"},
                {"Mustang","Ranger","F-150"},
                {"Ferrari","Lambo","Tesla"}
        };


    }
}
