import javax.swing.*;
class SwingDemo
{
	SwingDemo()
	{
		JFrame f=new JFrame("Sample Swing App");
		f.setSize(275,100);
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		JLabel l=new JLabel("Swing is powerful for GUI");
		f.add(l);
		f.setVisible(true);
	}
	public static void main(String args[])
	{
		SwingUtilities.invokeLater(new Runnable(){
			public void run()
			{
				SwingDemo s=new SwingDemo();
			}
		});
	}
}