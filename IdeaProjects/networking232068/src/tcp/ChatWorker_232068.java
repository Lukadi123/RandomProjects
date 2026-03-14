package tcp;

import java.io.*;
import java.net.Socket;

public class ChatWorker_232068 extends Thread {

    private Socket socket;

    public ChatWorker_232068(Socket socket) {
        this.socket = socket;
    }

    @Override
    public void run() {
        try (BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream()));
             BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()))) {

            String message = reader.readLine();
            System.out.println("Received: " + message);

            if (message.startsWith("login:")) {
                String index = message.split(":")[1];
                System.out.println("Login attempt with index: " + index);
                writer.write("Login successful");
                writer.newLine();
                writer.flush();
                System.out.println("Login successful for index: " + index);

                message = reader.readLine();
                System.out.println("Received: " + message);

                if (message.startsWith("hello:")) {
                    writer.write("Hello, client " + index);
                    writer.newLine();
                    writer.flush();
                    System.out.println("Hello message sent to client " + index);
                }
            } else {
                writer.write("bad greeting, not logged in!");
                writer.newLine();
                writer.flush();
                System.out.println("Bad greeting, not logged in!");
            }

            socket.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
