package exA;

import java.util.*;

public class MyVector<E extends Number & Comparable<E>> {

    private ArrayList<Item<E>> storageM;
    private Sorter<E> sorter;

    public MyVector(int n) {
        this.storageM = new ArrayList<Item<E>>(n);
    }

    public MyVector(ArrayList<Item<E>> arr) {
        int length = arr.size();
        this.storageM = new ArrayList<Item<E>>(length);
        for (int i = 0; i < length - 1; i++) {
            this.storageM.add(arr.get(i));
        }
    }

    public void add(Item<E> value) {
        this.storageM.add(value);
    }

    public void setSortStrategy(Sorter<E> s) {
        this.sorter = s;
    }

    public void performSort() {
        sorter.sort(storageM);
    }

    public void display() {
        for (Item<E> value : storageM) {
            System.out.print(value.getItem() + " ");
        }
    }
}