package exA;

abstract class Decorator implements Component {
    Component cmp;
    int x;
    int y;
    int width;
    public int height;

    Decorator(Component component, int x, int y, int width, int height) {
        this.cmp = component;
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }
}
