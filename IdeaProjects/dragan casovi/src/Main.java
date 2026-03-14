


class Student{    //Friendly class
    private String ime;
    private String prezime;
    private int index;
    private float prosek;
    private static float kotizacija;  // vazi za site

    public Student() {
    }

    public Student(String ime, String prezime, int index, float prosek) {
        this.ime = ime;
        this.prezime = prezime;
        this.index = index;
        this.prosek = prosek;
    }

    public String getIme() {
        return ime;
    }
    public String toString(){
        return ime+" "+prezime+" "+index+" "+prosek; // mora da se pisuva za pecatenje
    }

    public String getPrezime() {
        return prezime;
    }

    public int getIndex() {
        return index;
    }

    public float getProsek() {
        return prosek;
    }

    public static float getKotizacija() {
        return kotizacija;
    }

    public void setIme(String ime) {
        this.ime = ime;
    }

    public void setPrezime(String prezime) {
        this.prezime = prezime;
    }

    public void setIndex(int index) {
        this.index = index;
    }

    public void setProsek(float prosek) {
        this.prosek = prosek;
    }


    public static void setKotizacija(float kotizacija) {
        Student.kotizacija = kotizacija;
    }
}

public class Main {
    public static void main(String[] args) {
        Student s=new Student();
        Student s1=new Student("Luka","Dimitrijoski",232068,10);
        Student s2=s1; //s2 e referenca kon objektot s1
        s2.setIme("Marija");
        int a=10;
        System.out.println("Test" + " " +a);
        System.out.println(s2);
    }
}