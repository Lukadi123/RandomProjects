package tcp;

import java.io.*;
import java.net.InetAddress;
import java.net.Socket;
import java.util.Scanner;

public class ChatClient_232068 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your index number: ");
        String index = scanner.nextLine();

        try {
            Socket socket = new Socket(InetAddress.getByName("194.149.135.49"), 9753);

            BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));
            BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));

            String loginMessage = "login:" + index;
            bw.write(loginMessage);
            bw.newLine();
            bw.flush();
            System.out.println("Sent to server: " + loginMessage);

            String response = br.readLine();
            System.out.println("Server response: " + response);

            if ("Login successful".equals(response)) {
                String helloMessage = "hello:" + index;
                bw.write(helloMessage);
                bw.newLine();
                bw.flush();
                System.out.println("Sent to server: " + helloMessage);

                response = br.readLine();
                System.out.println("Server response: " + response);
            } else {
                System.out.println("Login failed.");
            }

            socket.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
