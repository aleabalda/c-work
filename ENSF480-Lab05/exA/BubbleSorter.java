package exA;

import java.util.*;

public class BubbleSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    public void sort(ArrayList<Item<E>> arr) {
        int size = arr.size();
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr.get(j).getItem().compareTo(arr.get(j + 1).getItem()) > 0) {
                    Item<E> swap = arr.get(j);
                    arr.set(j, arr.get(j + 1));
                    arr.set(j + 1, swap);
                }
            }
        }
    }
}
