package exC;

import java.util.ArrayList;

public class DoubleArrayListSubject implements Subject {

    public ArrayList<Double> data;
    private ArrayList<Observer> observers = new ArrayList<Observer>();

    DoubleArrayListSubject() {
        data = new ArrayList<Double>();
    }

    public void addData(double data) {
        this.data.add(data);
        notifyAllObservers();
    }

    public void setData(double data, int i) {
        this.data.set(i, data);
        notifyAllObservers();
    }

    public void populate(ArrayList<Double> arr) {
        this.data = arr;
        notifyAllObservers();
    }

    public void populate(double[] arr) {
        for (double data : arr) {
            this.data.add(data);
        }
        notifyAllObservers();
    }

    public double get(int index) {
        return this.data.get(index);
    }

    public int size() {
        return this.data.size();
    }

    public void display() {
        notifyAllObservers();
    }

    public void registerObserver(Observer observer) {
        this.observers.add(observer);
    }

    public void remove(Observer observer) {
        this.observers.remove(observer);
    }

    public void notifyAllObservers() {
        for (Observer observer : this.observers) {
            observer.update(data);
        }
    }

}
