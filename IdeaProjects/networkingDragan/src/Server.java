import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;

public class Server {
    public static void main(String[] args) throws IOException {
        int port = 2134; // valid port number
        ServerSocket serverSocket = new ServerSocket(port);
        System.out.println("Server starting... Waiting for client...");

        while (true) {
            Socket clientSocket = serverSocket.accept();
            System.out.println("Client connected...");

            BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
            PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);

            String line;
            while ((line = in.readLine()) != null) {
                System.out.println("Received: " + line);
                out.println("Response "+line); // sending response back to client
            }

            clientSocket.close();
            System.out.println("Client disconnected...");
        }
    }
}
