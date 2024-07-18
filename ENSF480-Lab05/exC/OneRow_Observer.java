package exC;

import java.util.ArrayList;

public class OneRow_Observer implements Observer {

    private Subject subject;
    ArrayList<Double> data = new ArrayList<Double>();

    OneRow_Observer(DoubleArrayListSubject sub) {
        this.subject = sub;
        this.subject.registerObserver(this);
        update(sub.data);
    }

    public void update(ArrayList<Double> data) {
        this.data = data;
        display();
    }

    public void display() {
        System.out.println("Notification to One-Row Observer: Data Changed:");

        for (int i = 0; i < this.data.size(); i++) {
            System.out.print(this.data.get(i) + "\t");

        }
        System.out.println();
    }
}
