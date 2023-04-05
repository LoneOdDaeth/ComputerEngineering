using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TicTacToe
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        string siraKimde;
        int scorePlayer1, scorePlayer2, adimSayisi = 0, skoroyuncu1 = 0, skoroyuncu2 = 0;

        public void temizle()
        {
            btn1.Text = "";
            btn2.Text = "";
            btn3.Text = "";
            btn4.Text = "";
            btn5.Text = "";
            btn6.Text = "";
            btn7.Text = "";
            btn8.Text = "";
            btn9.Text = "";
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            lblPlayer1Score.Text = "0";
            lblPlayer2Score.Text = "0";
            temizle();
            pasifEtme();
            btnbasla.Enabled = true;
            lblPlayer1Name.Text = Form2.playerNmae1;
            lblPlayer2Name.Text = Form2.playerNmae2;
        }

        private void btnbasla_Click(object sender, EventArgs e)
        {
            temizle();
            aktifEtme();
            siraKimde = "X";
            adimSayisi = 0;
            btnbasla.Enabled = false;
        }

        private void Form1_FormClosed(object sender, FormClosedEventArgs e)
        {
            Form2 frm2 = new Form2();
            frm2.Show();
        }

        private void btn1_Click(object sender, EventArgs e)
        {
            (sender as Button).Text = siraKimde;
            (sender as Button).Enabled = false;
            adimSayisi++;
            kontrol();
            ilerle();
        }

        public void ilerle()
        {
            if (siraKimde == "X")
            {
                siraKimde = "O";
            }
            else
            {
                siraKimde = "X";
            }
        }

        public void kontrol()
        {
            if(
                ((btn1.Text == btn2.Text) && (btn1.Text == btn3.Text) && (btn1.Text != "")) ||
                ((btn1.Text == btn4.Text) && (btn1.Text == btn7.Text) && (btn1.Text != "")) ||
                ((btn5.Text == btn2.Text) && (btn5.Text == btn8.Text) && (btn2.Text != "")) ||
                ((btn3.Text == btn6.Text) && (btn9.Text == btn3.Text) && (btn3.Text != "")) ||
                ((btn4.Text == btn5.Text) && (btn4.Text == btn6.Text) && (btn4.Text != "")) ||
                ((btn7.Text == btn8.Text) && (btn8.Text == btn9.Text) && (btn9.Text != "")) ||
                ((btn1.Text == btn9.Text) && (btn1.Text == btn5.Text) && (btn1.Text != "")) ||
                ((btn5.Text == btn7.Text) && (btn5.Text == btn3.Text) && (btn3.Text != ""))
                )
            {
                if (siraKimde == "X")
                {
                    skoroyuncu1++;
                    lblPlayer1Score.Text = skoroyuncu1.ToString();
                    MessageBox.Show(lblPlayer1Name.Text + " Kazandı!", "KAZANAN");
                }
                else
                {
                    skoroyuncu2++;
                    lblPlayer2Score.Text = skoroyuncu2.ToString();
                    MessageBox.Show(lblPlayer2Name.Text + " Kazandı!", "KAZANAN");
                }
                btnbasla.Enabled = true;
                pasifEtme();
            }
            else
            {
                if(adimSayisi == 9)
                {
                    MessageBox.Show("Beraberlik durumu tespit edildi!","BERABERLİK");
                }
            }
        }

        public void aktifEtme()
        {
            btn1.Enabled = true;
            btn2.Enabled = true;
            btn3.Enabled = true;
            btn4.Enabled = true;
            btn5.Enabled = true;
            btn6.Enabled = true;
            btn7.Enabled = true;
            btn8.Enabled = true;
            btn9.Enabled = true;
        }

        public void pasifEtme()
        {
            btn1.Enabled = false;
            btn2.Enabled = false;
            btn3.Enabled = false;
            btn4.Enabled = false;
            btn5.Enabled = false;
            btn6.Enabled = false;
            btn7.Enabled = false;
            btn8.Enabled = false;
            btn9.Enabled = false;
        }
    }
}
