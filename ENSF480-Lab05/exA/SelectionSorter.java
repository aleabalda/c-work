package exA;

import java.util.ArrayList;

public class SelectionSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    public void sort(ArrayList<Item<E>> arr) {
        Item<E> min, temp;
        for (int i = 0; i < arr.size() - 1; i++) {
            min = arr.get(i);
            int minIndex = i;
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr.get(j).getItem().compareTo(min.getItem()) < 0) {
                    min = arr.get(j);
                    minIndex = j;
                }
            }
            temp = arr.get(i);
            arr.set(i, min);
            arr.set(minIndex, temp);
        }
    }
}
