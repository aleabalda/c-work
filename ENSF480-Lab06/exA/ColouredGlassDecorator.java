package exA;

import java.awt.*;

public class ColouredGlassDecorator extends Decorator {
    ColouredGlassDecorator(Component component, int x, int y, int width, int height) {
        super(component, x, y, width, height);
    }

    @Override
    public void draw(Graphics g) {
        cmp.draw(g);
        Graphics2D g2d = (Graphics2D) g;
        g2d.setColor(Color.green);
        g2d.setComposite(AlphaComposite.getInstance(AlphaComposite.SRC_OVER, 1 * 0.1f));
        g2d.fillRect(25, 25, 110, 110);
    }
}
