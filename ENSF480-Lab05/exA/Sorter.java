package exA;

import java.util.*;

public interface Sorter<E extends Number & Comparable<E>> {
    public void sort(ArrayList<Item<E>> storage);
}
