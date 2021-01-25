import javax.swing.*;
import java.awt.event.*;
class add
{
	add()
	{
		JFrame f= new JFrame("Calculator");
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		f.setSize(300,300);
		f.setVisible(true);
		JLabel l= new JLabel("Press Button to Add");
		JLabel l1=new JLabel("First Number");
		JLabel l2=new JLabel("Second Number");
		JTextField t1=new JTextField();
		JTextField t2=new JTextField();		
		JButton b=new JButton("ADD");
		JButton b1= new JButton("SUBTRACT");
		JButton b2= new JButton("MULTIPLY");
		JButton b3= new JButton("DIVIDE");

		JPanel p=new JPanel();		
		 p.setBounds(40,160,200,200);  

		 // JPanel p1=new JPanel();
		 // p1	.setBounds(40,160,200,200);  
		 // p1.setSize(100,100);
 		// ImageIcon i= new ImageIcon("./calci.png");
 		// i.setSize(50,50);
		// JLabel img=new JLabel("Calculator",i,JLabel.CENTER);
		// p1.add(img);

		f.setLayout(null);
		l1.setBounds(50,50,150,10);
		l2.setBounds(50,70,150,10);
		t1.setBounds(190,50,50,15);
		t2.setBounds(190,70,50,15);
		l.setBounds(100,100,150,50);
		b.setBounds(130,150,75,30);
		
		// f.add(p1);
		
		f.add(l1);
		f.add(l2);
		f.add(t1);
		f.add(t2);
		f.add(l);
		// f.add(b);
		p.add(b);
		p.add(b1);
		p.add(b2);
		p.add(b3);
		f.add(p);

		b.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e)
			{
				int a=Integer.parseInt(t1.getText());
				int b=Integer.parseInt(t2.getText());
				int c=a+b;
				String s=Integer.toString(c);
				l.setText("Result : "+s);
			}
		});
		b1.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e)
			{
				int a=Integer.parseInt(t1.getText());
				int b=Integer.parseInt(t2.getText());
				int c=a-b;
				String s=Integer.toString(c);
				l.setText("Result : "+s);
			}
		});
		b2.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e)
			{
				int a=Integer.parseInt(t1.getText());
				int b=Integer.parseInt(t2.getText());
				int c=a*b;
				String s=Integer.toString(c);
				l.setText("Result : "+s);
			}
		});
		b3.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e)
			{
				int a=Integer.parseInt(t1.getText());
				int b=Integer.parseInt(t2.getText());
				int c=a/b;
				String s=Integer.toString(c);
				l.setText("Result : "+s);
			}
		});
	}
	public static void main(String args[])
	{
		SwingUtilities.invokeLater(new Runnable(){
			public void run()
			{
				add s=new add();
			}
		});
	}
}