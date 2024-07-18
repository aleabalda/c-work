package exC;

import java.util.ArrayList;

public class ThreeColumnTable_Observer implements Observer {

    private Subject subject;
    ArrayList<Double> data = new ArrayList<Double>();

    ThreeColumnTable_Observer(DoubleArrayListSubject sub) {
        this.subject = sub;
        this.subject.registerObserver(this);
        update(sub.data);
    }

    public void update(ArrayList<Double> data) {
        this.data = data;
        display();
    }

    public void display() {
        System.out.println("\nNotification to Three-Column Table_Observer: Data Changed:");

        for (int i = 0; i < this.data.size(); i++) {
            System.out.print(this.data.get(i) + "\t");

            if ((i + 1) % 3 == 0) {
                System.out.println();
            }
        }

        System.out.println("\n");
    }
}
