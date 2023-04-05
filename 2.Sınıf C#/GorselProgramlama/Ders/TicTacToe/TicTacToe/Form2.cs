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
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        public static string playerNmae1, playerNmae2;

        private void btncıkıs_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void btnGirisBasla_Click(object sender, EventArgs e)
        {
            if ((txtPlayer1Name.Text == "") || (txtPlayer2Name.Text == ""))
            {
                MessageBox.Show("Oyuncu isimlerini giriniz!!!", "UYARI", MessageBoxButtons.OKCancel, MessageBoxIcon.Warning);
            }
            else
            {
                playerNmae1 = txtPlayer1Name.Text;
                playerNmae2 = txtPlayer2Name.Text;
                Form1 frm1 = new Form1();
                frm1.Show();
                this.Hide();
            }
        }
    }
}
