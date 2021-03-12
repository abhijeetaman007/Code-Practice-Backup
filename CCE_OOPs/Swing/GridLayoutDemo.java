import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class GridLayoutDemo extends JFrame
{
static final int n = 4;
public static void main(String[] args)
{ GridLayoutDemo gld = new GridLayoutDemo();
gld.setLayout(new GridLayout(n, n));
gld.setFont(new Font("SansSerif", Font.BOLD,
24));
for(int i = 0; i < n; i++)
{
for(int j = 0; j < n; j++)
{
int k = i * n + j;
if(k > 0)
gld.add(new Button(""+ k));
}
}gld.setSize(300, 300); gld.setVisible(true);}
}