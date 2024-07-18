package exA;

import java.util.*;

public class InsertionSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    public void sort(ArrayList<Item<E>> arr) {
        /*
         * Begin at index 1, move into variable storage (for ex. "temp") then examine
         * elements to the left,
         * if left is larger then move to the right else leave unchanged
         */

        for (int i = 1; i < arr.size(); i++) {
            Item<E> temp = arr.get(i);
            int j = i - 1;

            while (j >= 0 && arr.get(j).getItem().compareTo(temp.getItem()) > 0) {
                arr.set(j + 1, arr.get(j));
                j--;
            }
            arr.set(j + 1, temp);
        }

    }
}
