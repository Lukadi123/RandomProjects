package tcp;

import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;

public class ChatServer_232068  {

    private int port;

    public ChatServer_232068(int port) {
        this.port = port;
    }

    public void start() {
        try (ServerSocket serverSocket = new ServerSocket(port)) {
            System.out.println("SERVER: started");
            System.out.println("SERVER: waiting for connections...");

            while (true) {
                Socket socketToClient = serverSocket.accept();
                System.out.println("SERVER: new client - creating new worker thread...");
                ChatWorker_232068 worker = new ChatWorker_232068(socketToClient);
                worker.start();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        ChatServer_232068 server = new ChatServer_232068(9753);
        server.start();
    }
}
