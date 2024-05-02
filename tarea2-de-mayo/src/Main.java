import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("Hola usuario, bienvenido");
        System.out.print("Ingrese un numero: ");
        Integer numero=scanner.nextInt();

        Integer divisores=0;

        while(divisores<10){
            for (Integer i=1;i<=numero;i++){
                if(numero%i==0){
                    if(i>1){
                        System.out.print(", "+i);
                        divisores++;
                    } else {
                        System.out.print(i);
                    }
                    if(divisores==10){
                        break;
                    }
                }
            }
        }
        System.out.println("\nPresione una tecla para continuar");
        waitforKeypress();
        clearConsole();

        String palabra="";
        do{
            System.out.println("Ahora ingrese una palabra usuario");
            palabra= scanner.nextLine();
            if(palabra.equals("si")){
                System.out.println("Bienvenido");
            } else {
                System.out.println("Adios, se pasara al siguiente evento");
            }
        } while(!palabra.equals("no"));

        System.out.println("Presione una tecla para continuar");
        waitforKeypress();
        clearConsole();

        System.out.println("Ingrese dos lados por favor");
        System.out.print("L1: ");
        double l1,l2,aFaltante,sumLados;
        l1=scanner.nextDouble();
        System.out.print("L2: ");
        l2=scanner.nextDouble();
        sumLados=l1+l2;
        aFaltante=180-sumLados;
        System.out.println("El lado faltante es: "+aFaltante);
    }
    public static void clearConsole() {
        System.out.print("\033[H\033[2J");
        System.out.flush();
    }
    public static void waitforKeypress(){
        Scanner scan=new Scanner(System.in);
        scan.nextLine();
    }
}