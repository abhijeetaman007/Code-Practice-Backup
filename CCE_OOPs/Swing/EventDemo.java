import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class EventDemo
{
	EventDemo()
	{
		JFrame f=new JFrame("Event handling App");
		f.setSize(400,400);
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		JLabel l=new JLabel("Button Pressed Label");
		JButton b1=new JButton("Alpha");
		JButton b2=new JButton("Beta");
		
		
		b1.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent ae)
			{
				l.setText("Alpha was Pressed");
			}
		});
		b2.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent ae)
			{
				l.setText("Beta was Pressed");
			}
		});
		f.add(b1,BorderLayout.SOUTH);
		f.add(b2,BorderLayout.NORTH);
		f.add(l);
    	f.setLayout((new FlowLayout(FlowLayout.CENTER)));  
		
		f.setVisible(true);
	}
	public static void main(String args[])
	{
		SwingUtilities.invokeLater(new Runnable(){
			public void run()
			{
				EventDemo s= new EventDemo();
			}
		});
	}

}