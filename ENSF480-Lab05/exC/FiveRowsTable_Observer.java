package exC;

import java.util.ArrayList;

public class FiveRowsTable_Observer implements Observer {

    private Subject subject;
    ArrayList<Double> data = new ArrayList<Double>();

    FiveRowsTable_Observer(DoubleArrayListSubject sub) {
        this.subject = sub;
        this.subject.registerObserver(this);
        update(sub.data);

    }

    public void update(ArrayList<Double> data) {
        this.data = data;
        display();
    }

    public void display() {
        System.out.println("Notification to FiveRows Table_Observer: Data Changed:");

        int cols = (int) Math.ceil((double) data.size() / 5);
        int rows = (int) Math.ceil((double) data.size() / cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                if (((j * 5) + i) >= this.data.size()) {
                    break;
                }

                System.out.print(this.data.get((j * 5) + i) + "\t");

                if ((j + 1) % cols == 0) {
                    System.out.println();
                }
            }
        }

        System.out.println("\n");
    }
}
