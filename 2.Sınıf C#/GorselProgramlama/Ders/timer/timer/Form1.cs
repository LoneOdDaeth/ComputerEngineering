using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace timer
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        int sls, sn, dk, sa;

        private void timer1_Tick(object sender, EventArgs e)
        {
            sls++;
            if (sls == 59)
            {
                sls = 0;
                sn++;
                lblsaniye.Text = sn.ToString();

                if (sn == 59)
                {
                    sn = 0;
                    dk++;
                    lbldakika.Text = dk.ToString();

                    if (dk == 59)
                    {
                        dk = 0;
                        sa++;
                        lblsaat.Text = sa.ToString();
                    }
                }
            }

            lblsalise.Text = sls.ToString();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (timer1.Enabled == false)
            {
                timer1.Enabled = true;
                button1.Text = "DURAKLAT";
            }
            else
            {
                timer1.Enabled = false;
                button1.Text = "DEVAM ETTİR";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            listBox1.Items.Add(lblsaat.Text + ":" + lbldakika.Text + ":" + lblsaniye.Text + ":" + lblsalise.Text);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            sifirla();
            timer1.Enabled = false;
            listBox1.Items.Clear();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            sifirla();
        }
        public void sifirla()
        {
            sls = 0;
            sn = 0;
            dk = 0;
            sa = 0;
            lblsaat.Text = "00";
            lblsalise.Text = "00";
            lblsaniye.Text = "00";
            lbldakika.Text = "00";
        }
    }
}
