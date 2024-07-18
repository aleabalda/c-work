package exC;

public interface Subject {
    public void registerObserver(Observer observer);

    public void notifyAllObservers();

    public void remove(Observer observer);
}
