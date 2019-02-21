using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace _4_butoane
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.button1.Text = "X";
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.button3.Text = "X";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.button2.Text = "X";
        }

        private void button4_Click(object sender, EventArgs e)
        {
            this.button4.Text = "X";
        }

        private void button1_MouseHover(object sender, EventArgs e)
        {
            this.button1.Text = "0";
        }

        private void button3_MouseHover(object sender, EventArgs e)
        {
            this.button3.Text = "0";
        }

        private void button2_MouseHover(object sender, EventArgs e)
        {
            this.button2.Text = "0";
        }

        private void button4_MouseHover(object sender, EventArgs e)
        {
            this.button4.Text = "0";
        }
    }
}
