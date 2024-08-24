import java.util.Scanner;

public class ATM {
    static int pin = 0000;
    static int currentAmmount = 5000;
    static Scanner sc = new Scanner(System.in);

    public static void menu() {
        System.out.println("1.Check Ammount");
        System.out.println("2.Withdraw Ammount");
        System.out.println("3.Deposit Ammount");
        System.out.println("4.Exit");
        int choice = sc.nextInt();
        System.out.print("\033[H\033[2J");
        switch (choice) {
            case 1:
                checkAmmount();
                break;
            case 2:
                withdrawAmmount();
                break;
            case 3:
                depositAmmount();
                break;
            case 4:
                return;
        }
    }

    public static void checkAmmount() {
        System.out.print("\033[H\033[2J");
        System.out.println("Current Ammount: " + currentAmmount);
        menu();
    }

    public static void withdrawAmmount() {
        System.out.print("\033[H\033[2J");
        System.out.println("Enter Ammount: ");
        int withdrawalAmmount = sc.nextInt();
        if (withdrawalAmmount > currentAmmount)
            System.out.println("Insufficient Ammount");
        else {
            currentAmmount -= withdrawalAmmount;
            checkAmmount();
        }
    }

    public static void depositAmmount() {
        System.out.print("\033[H\033[2J");
        System.out.println("Enter Ammount: ");
        currentAmmount += sc.nextInt();
        checkAmmount();
        System.out.println("press Enter for continue: ");
        menu();
    }

    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");
        int tempPin;
        System.out.println("Enter pin: ");
        tempPin = sc.nextInt();
        if (tempPin == pin) {
            System.out.print("\033[H\033[2J");
            menu();
        } else
            System.out.println("Wrong Pin");
    }
}