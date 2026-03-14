import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.Socket;
import java.sql.SQLOutput;

public class Client
{
    public static void main(String[] args) throws IOException {
        String host = "localhost";
        int port = 2134;
        Socket socket = new Socket(host,port);
        BufferedReader userInput = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(socket.getOutputStream(),true);

        System.out.println("Connected to Server....Type messages: ");
        BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
        String input;
        while((input=userInput.readLine())!=null)
        {
            out.println(input); // send to server
            String response= in.readLine();
            System.out.println(response);
        }
    }
}