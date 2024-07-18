package exA;

import java.awt.*;

public class Text implements Component {

    int x;
    int y;
    String text;

    public Text(String text, int x, int y) {
        this.text = text;
        this.x = x;
        this.y = y;
    }

    @Override
    public void draw(Graphics g) {
        Graphics2D g2d = (Graphics2D) g;
        g.setFont(new Font("Merriweather", Font.PLAIN, 11));
        g2d.drawString(text, x, y);
    }
}
