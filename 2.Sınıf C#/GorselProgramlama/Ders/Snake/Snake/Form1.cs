using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml.Serialization;

namespace Snake
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        Random rasgele = new Random();
        string yon;
        int gecenSure = 0, score = 0, alinanYemSayisi = 0, sonrakiGovdeX, sonrakiGovdeY;

        govde[] govdeler;
        yem yeniYem;

        private void Form1_Load(object sender, EventArgs e)
        {
            //yeniOyun();
            lblMesaj.Text = "Space tuşu ile oyunu başlat";
            lblMesaj.ForeColor = Color.Red;

            this.BackColor = Color.DarkGray;
            panel1.BackColor = Color.Black;
        }

        public void yeniOyun()
        {
            panel1.Controls.Clear();

            govdeler = new govde[100];

            govdeler[0] = new govde();
            govdeler[0].Parent = panel1;
            govdeler[0].Location = new Point(rasgele.Next(49) * 10, rasgele.Next(49) * 10);
            govdeler[0].BackColor = Color.ForestGreen;

            yon = "sag";
            lblMesaj.Text = "";
            gecenSure = 0;
            score = 0;
            alinanYemSayisi = 0;
            lblscore.Text = score.ToString();

            yeniYem = new yem();
            yemCikar();
        }

        public void yemCikar()
        {
            yeniYem.Parent =panel1;
            yeniYem.Location = new Point(rasgele.Next(49) * 10, rasgele.Next(49) * 10);
        }

        private void timerYilan_Tick(object sender, EventArgs e)
        {

            sonrakiGovdeX = govdeler[0].Left;
            sonrakiGovdeY = govdeler[0].Top;

            for (int govdePracaNo = alinanYemSayisi; govdePracaNo > 0; govdePracaNo--)
            {
                govdeler[govdePracaNo].Location = govdeler[govdePracaNo - 1].Location;
            }

            if (yon == "sag")
            {
                govdeler[0].Left += 10;
            }

            else if (yon == "sol")
            {
                govdeler[0].Left -= 10;
            }

            else if (yon == "alt")
            {
                govdeler[0].Top += 10;
            }

            else if (yon == "ust")
            {
                govdeler[0].Top -= 10;
            }
            konumKontrol();
            yemKontrol();
        }

        public void oyunDurdur()
        {
            timerYilan.Enabled = false;
            timerGecenSure.Enabled = false;
            lblMesaj.Text = "OYUN BİTTİ!! " + lblSure.Text + "saniye oynadınız. Skorunuz: " + score;
        }

        public void konumKontrol()
        {
            if((govdeler[0].Left < 0) || (govdeler[0].Left > 490) || (govdeler[0].Top < 0) || (govdeler[0].Top > 490))
            {
                oyunDurdur();
            }

            for (int goveParcaNo = 1; goveParcaNo < alinanYemSayisi; goveParcaNo++)
            {
                if (govdeler[0].Location == govdeler[goveParcaNo].Location)
                {
                    oyunDurdur();
                }
            }
        }

        public void yemKontrol()
        {
            if (govdeler[0].Location == yeniYem.Location)
            {
                alinanYemSayisi++;
                score += 10;
                lblscore.Text = score.ToString();

                yemCikar();
                yilaniBuyut();
            }
        }

        public void yilaniBuyut()
        {
            govdeler[alinanYemSayisi] = new govde();

            govdeler[alinanYemSayisi].Parent = panel1;
            govdeler[alinanYemSayisi].Location = govdeler[0].Location;
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            if(e.KeyCode == Keys.Space)
            {
                timerYilan.Enabled = true;
                timerGecenSure.Enabled = true;
                yeniOyun();
                yemCikar();
            }

            if (e.KeyCode == Keys.Up)
            {
                yon = "ust";
            }

            else if (e.KeyCode == Keys.Down)
            {
                yon = "alt";
            }

            else if (e.KeyCode == Keys.Right)
            {
                yon = "sag";
            }

            else if (e.KeyCode == Keys.Left)
            {
                yon = "sol";
            }
        }

        private void timerGecenSure_Tick(object sender, EventArgs e)
        {
            gecenSure++;
            TimeSpan zaman = TimeSpan.FromSeconds(gecenSure);

            string strsure = zaman.ToString(@"mm\:ss");
            lblSure.Text = strsure;
        }
    }
}
