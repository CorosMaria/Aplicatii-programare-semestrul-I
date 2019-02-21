using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Afisare_cerc_la_click_pe_form
{
    public partial class Form1 : Form
    {
        System.Drawing.Graphics Desen;
        System.Drawing.Pen Creion_albastru;
        public Form1()
        {
            InitializeComponent();
            Desen = this.CreateGraphics();
            Creion_albastru = new System.Drawing.Pen(System.Drawing.Color.Blue);
        }

        private void Form1_MouseClick(object sender, MouseEventArgs e)
        {
            Point[] Cerc = new Point[]
           {
               new Point {X = e.X , Y = e.Y }
           };
            Desen.DrawEllipse(Creion_albastru, Cerc[1], 50, 50);
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            
        }

        private void Form1_Click(object sender, EventArgs e)
        {
            this.label1.Text = Convert.ToInt16(e.ToString(MouseUp.Value));
        }
    }
}
