/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * @author Aleksandar
 */
// Java Program to check if a queue
// of first n natural number can
// be sorted using a stack

import java.io.*;
import java.util.*;


import java.util.NoSuchElementException;

 interface Queue<E> {
    // Elementi na redicata se objekti od proizvolen tip.
    // Metodi za pristap:
    public boolean isEmpty();
    // Vrakja true ako i samo ako redicata e prazena.

    public int size();
    // Ja vrakja dolzinata na redicata.

    public E peek();
    // Go vrakja elementot na vrvot t.e. pocetokot od redicata.

    // Metodi za transformacija:

    public void clear();
    // Ja prazni redicata.

    public void enqueue(E x);
    // Go dodava x na kraj od redicata.

    public E dequeue();
    // Go otstranuva i vrakja pochetniot element na redicata.
}

class ArrayQueue<E> {
    // Redicata e pretstavena na sledniot nacin:
    // length go sodrzi brojot na elementi.
    // Ako length > 0, togash elementite na redicata se zachuvani vo elems[front...rear-1]
    // Ako rear > front, togash vo  elems[front...maxlength-1] i elems[0...rear-1]
    E[] elems;
    int length, front, rear;

    // Konstruktor ...

    @SuppressWarnings("unchecked")
    public ArrayQueue(int maxlength) {
        elems = (E[]) new Object[maxlength];
        clear();
    }

    public boolean isEmpty() {
        // Vrakja true ako i samo ako redicata e prazena.
        return (length == 0);
    }

    public int size() {
        // Ja vrakja dolzinata na redicata.
        return length;
    }

    public E peek() {
        // Go vrakja elementot na vrvot t.e. pocetokot od redicata.
        if (length > 0)
            return elems[front];
        else
            throw new NoSuchElementException();
    }

    public void clear() {
        // Ja prazni redicata.
        length = 0;
        front = rear = 0;  // arbitrary
    }

    public void enqueue(E x) {
        // Go dodava x na kraj od redicata.
        if (length == elems.length)
            throw new NoSuchElementException();
        elems[rear++] = x;
        if (rear == elems.length) rear = 0;
        length++;
    }

    public E dequeue() {
        // Go otstranuva i vrakja pochetniot element na redicata.
        if (length > 0) {
            E frontmost = elems[front];
            elems[front++] = null;
            if (front == elems.length) front = 0;
            length--;
            return frontmost;
        } else
            throw new NoSuchElementException();
    }
}


public class zadaca2{
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int Studenti=cin.nextInt();
        cin.nextLine();
        ArrayQueue<String> naukaQueue=new ArrayQueue<>(Studenti);
        ArrayQueue<String> naucnaQueue=new ArrayQueue<>(Studenti);
        ArrayQueue<String> istorijaQueue=new ArrayQueue<>(Studenti);
        for (int i = 0; i < Studenti; i++) {
            String ime=cin.nextLine();
            int nauka=cin.nextInt();
            int naucna=cin.nextInt();
            int istorija=cin.nextInt();
            cin.nextLine();
            if (nauka==1)
            {
                naukaQueue.enqueue(ime);
            }
            if (naucna==1)
            {
                naucnaQueue.enqueue(ime);
            }
            if (istorija==1)
            {
                istorijaQueue.enqueue(ime);
            }
        }

        ArrayQueue<String> finalna = new ArrayQueue<>(Studenti * 3);
        ArrayQueue<String> temp = new ArrayQueue<>(Studenti * 3);

        while (!naukaQueue.isEmpty()) {
            String ime = naukaQueue.dequeue();
            boolean exists = false;

            while (!finalna.isEmpty()) {
                String x = finalna.dequeue();
                if (x.equals(ime)) {
                    exists = true;
                }
                temp.enqueue(x);
            }

            while (!temp.isEmpty()) {
                finalna.enqueue(temp.dequeue());
            }

            if (!exists) {
                finalna.enqueue(ime);
            }
        }

        while (!naucnaQueue.isEmpty()) {
            String ime = naucnaQueue.dequeue();
            boolean exists = false;

            while (!finalna.isEmpty()) {
                String x = finalna.dequeue();
                if (x.equals(ime)) {
                    exists = true;
                }
                temp.enqueue(x);
            }

            while (!temp.isEmpty()) {
                finalna.enqueue(temp.dequeue());
            }

            if (!exists) {
                finalna.enqueue(ime);
            }
        }

        while (!istorijaQueue.isEmpty()) {
            String ime = istorijaQueue.dequeue();
            boolean exists = false;

            while (!finalna.isEmpty()) {
                String x = finalna.dequeue();
                if (x.equals(ime)) {
                    exists = true;
                }
                temp.enqueue(x);
            }

            while (!temp.isEmpty()) {
                finalna.enqueue(temp.dequeue());
            }

            if (!exists) {
                finalna.enqueue(ime);
            }
        }

        while (!finalna.isEmpty()) {
            System.out.println(finalna.dequeue());
        }

    }
}