using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace hafizaOyunu
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        kart[] kartlar;
        kart kart1, kart2;
        List<int> sayilar = new List<int>();
        Random rastgele = new Random();
        int rastgeleSayi, acikKartSayisi = 0, bulunanEslesmeSayisi = 0, hamleSayisi = 0;
        Boolean oyunuBeklet = false;

        private void timer1_Tick(object sender, EventArgs e)
        {
            timer1.Enabled = false;
            kart1.cevir();
            kart2.cevir();
            kart1.Enabled = true;
            kart2.Enabled = true;
            oyunuBeklet = false;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            for (int sayiNo = 0; sayiNo < 6; sayiNo++)
            {
                sayilar.Add(sayiNo);
                sayilar.Add(sayiNo);
            }

            kartlar = new kart[12];

            for(int satirNo = 0; satirNo < 3; satirNo++)
            {
                for(int sutunNo = 0; sutunNo < 4; sutunNo++)
                {
                    rastgeleSayi = rastgele.Next(sayilar.Count - 1);

                    kartlar[satirNo * 4 + sutunNo] = new kart(sayilar[rastgeleSayi]);
                    kartlar[satirNo * 4 + sutunNo].Parent = this;
                    kartlar[satirNo * 4 + sutunNo].Name = (satirNo * 4 + sutunNo).ToString();
                    kartlar[satirNo * 4 + sutunNo].Size = new Size(100, 100);
                    kartlar[satirNo * 4 + sutunNo].SizeMode = PictureBoxSizeMode.StretchImage;
                    kartlar[satirNo * 4 + sutunNo].Location = new Point(satirNo * 110+100, sutunNo * 110+75);
                    kartlar[satirNo * 4 + sutunNo].Click += kartSecildi;

                    sayilar.RemoveAt(rastgeleSayi);
                }
            }
        }
        public void kartSecildi(object sender, EventArgs e)
        {
            if (oyunuBeklet == false)
            {
                if (acikKartSayisi < 2)
                {
                    (sender as kart).cevir();
                    hamleSayisi++;
                    (sender as kart).Enabled = false;
                    if (acikKartSayisi == 0)
                    {
                        kart1 = (sender as kart);
                    }
                    else
                    {
                        kart2 = (sender as kart);
                    }
                    acikKartSayisi++;
                }

                if (acikKartSayisi == 2)
                {
                    oyunuBeklet = true;
                    kontrolEt();
                }
            }
        }
        public void kontrolEt()
        {
            if (kart1.ArkaYuz == kart2.ArkaYuz)
            {
                bulunanEslesmeSayisi++;
                if (bulunanEslesmeSayisi == 6)
                {
                    MessageBox.Show(hamleSayisi + " adet hamlede bitirdiniz!");
                }
                oyunuBeklet = false;
            }
            else
            {
                timer1.Enabled = true;
            }
            acikKartSayisi = 0;
        }
    }
}
