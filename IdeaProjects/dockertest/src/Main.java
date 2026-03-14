import java.io.*;
import java.net.Socket;
import java.util.concurrent.Semaphore;
public class Main {
    class CovidStats {
        static Semaphore toWrite = new Semaphore(1);

        class TcpServer {
            private int port;
            private String fileOutput;

            TcpServer(int port, String fileOutput) {
                this.port = port;
                this.fileOutput = fileOutput;
            }
            String getFileOutput(){
                return fileOutput;
            }
            public void listen() {

            }

        }

        static class ServerThread extends Thread {
            private TcpServer serverSocket;
            public ServerThread(TcpServer serverSocket) throws IOException{
                serverSocket = new TcpServer(5555,"data.csv");
            }
            @Override
            public void run() {
                System.out.println("Server is started!!!");
                Socket client;

                System.out.println("Waiting for client to connect...");
                while (true){
                    try{
                        client = serverSocket.accept();
                        System.out.println("Client is connected");
                        ServerWorkerThread worker= new ServerWorkerThread(client,serverSocket.getFileOutput());

                    }catch (IOException e)
                    {
                        e.printStackTrace();
                    }

                }
            }

        }

        static class ServerWorkerThread extends Thread {
            private Socket socket;
            private DataInputStream reader;
            private String fileOutput;

            public ServerWorkerThread(Socket client, DataOutputStream reader, String fileOutput) throws IOException {
                this.socket = client;
                this.fileOutput = fileOutput;
                this.reader = new DataOutputStream(client.getInputStream());
            }

            @Override
            public void run() {
                try {
                    File f = new File("data.csv");
                    if (!f.exists()) {
                        f.createNewFile();
                    }
                    BufferedWriter bw = new BufferedWriter(new FileWriter(f, true));
                    String greed=reader.readLine();

                    bw.write();
                    BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));


                } catch (Exception e) {
                    e.printStackTrace();
                } finally {

                }
            }


        }
    }

    public static void main(String[] args) {
        ServerThread server = new ServerThread(server);
    }
}