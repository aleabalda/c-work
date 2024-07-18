package exA;

import java.awt.*;

public class BorderDecorator extends Decorator {

    BorderDecorator(Component component, int x, int y, int width, int height) {
        super(component, x, y, width, height);
    }

    @Override
    public void draw(Graphics g) {
        cmp.draw(g);
        Graphics2D g2d = (Graphics2D) g;
        Stroke oldStroke = g2d.getStroke();
        Color oldColor = g2d.getColor();
        g2d.setStroke(new BasicStroke(3, BasicStroke.CAP_BUTT, BasicStroke.JOIN_BEVEL, 0, new float[] { 9 }, 0));
        g2d.setColor(Color.black);
        g2d.drawRect(x, y, width, height);
        g2d.setStroke(oldStroke);
        g2d.setColor(oldColor);
    }
}
