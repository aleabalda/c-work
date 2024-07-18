package exA;

import java.awt.*;

public class ColouredFrameDecorator extends Decorator {

    private int thickness;

    ColouredFrameDecorator(Component component, int x, int y, int width, int height, int thick) {
        super(component, x, y, width, height);
        thickness = thick;
    }

    @Override
    public void draw(Graphics g) {
        cmp.draw(g);
        Graphics2D g2d = (Graphics2D) g;
        Stroke oldStroke = g2d.getStroke();
        Color oldColor = g2d.getColor();
        g2d.setStroke(new BasicStroke(thickness));
        g2d.setColor(Color.red);
        g2d.drawRect(x, y, width, height);
        g2d.setStroke(oldStroke);
        g2d.setColor(oldColor);
    }
}
