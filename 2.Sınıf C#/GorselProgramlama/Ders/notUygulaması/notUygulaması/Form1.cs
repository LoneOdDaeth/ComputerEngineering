using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace notUygulaması
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        int AA_sinir = 90, BA_sinir = 85, BB_sinir = 75, CB_sinir = 70, CC_sinir = 60, DC_sinir = 55, DD_sinir = 50, FD_sinir = 40, FF_sinir = 0;
        double vizeGetirisi, finalGetirisi, butunlemeGetirisi, finalHedefi, butHedefi, ortalama, gecmenotu;

        private void lblgecmenotu_TextChanged(object sender, EventArgs e)
        {
            if (secim == "Yönetmelik")
            {
                if (lbluyari.Text == "Bütünlemeye girecek")
                {
                    if (gecmenotu >= 90) { harfnotu = "AA"; }
                    else if (gecmenotu >= 85) { harfnotu = "BA"; }
                    else if (gecmenotu >= 75) { harfnotu = "BB"; }
                    else if (gecmenotu >= 70) { harfnotu = "CB"; }
                    else if (gecmenotu >= 60) { harfnotu = "CC"; }
                    else if (gecmenotu >= 55) { harfnotu = "DC"; }
                    else if (gecmenotu >= 55) { harfnotu = "DD"; }
                    else if (gecmenotu >= 40) { harfnotu = "FD"; }
                    else { harfnotu = "FF"; }
                    lblharfnotu.Text = harfnotu.ToString();
                }
                else if (lbluyari.Text == "Bütünlemeye gerek yok")
                {
                    if (gecmenotu >= 90) { harfnotu = "AA"; }
                    else if (ortalama >= 85) { harfnotu = "BA"; }
                    else if (ortalama >= 75) { harfnotu = "BB"; }
                    else if (ortalama >= 70) { harfnotu = "CB"; }
                    else if (ortalama >= 60) { harfnotu = "CC"; }
                    else if (ortalama >= 55) { harfnotu = "DC"; }
                    else if (ortalama >= 55) { harfnotu = "DD"; }
                    else if (ortalama >= 40) { harfnotu = "FD"; }
                    else { harfnotu = "FF"; }
                    lblharfnotu.Text = harfnotu.ToString();
                }
            }
            else if(secim == "Belirlenen")
            {
                if (lbluyari.Text == "Bütünlemeye girecek")
                {
                    if (gecmenotu >= AA_sinirB) { harfnotu = "AA"; }
                    else if (gecmenotu >= BA_sinirB) { harfnotu = "BA"; }
                    else if (gecmenotu >= BB_sinirB) { harfnotu = "BB"; }
                    else if (gecmenotu >= CB_sinirB) { harfnotu = "CB"; }
                    else if (gecmenotu >= CC_sinirB) { harfnotu = "CC"; }
                    else if (gecmenotu >= DC_sinirB) { harfnotu = "DC"; }
                    else if (gecmenotu >= DD_sinirB) { harfnotu = "DD"; }
                    else if (gecmenotu >= FD_sinirB) { harfnotu = "FD"; }
                    else { harfnotu = "FF"; }
                    lblharfnotu.Text = harfnotu.ToString();
                }
                else if (lbluyari.Text == "Bütünlemeye gerek yok")
                {
                    if (gecmenotu >= AA_sinirB) { harfnotu = "AA"; }
                    else if (ortalama >= BA_sinirB) { harfnotu = "BA"; }
                    else if (ortalama >= BB_sinirB) { harfnotu = "BB"; }
                    else if (ortalama >= CB_sinirB) { harfnotu = "CB"; }
                    else if (ortalama >= CC_sinirB) { harfnotu = "CC"; }
                    else if (ortalama >= DC_sinirB) { harfnotu = "DC"; }
                    else if (ortalama >= DD_sinirB) { harfnotu = "DD"; }
                    else if (ortalama >= FD_sinirB) { harfnotu = "FD"; }
                    else { harfnotu = "FF"; }
                    lblharfnotu.Text = harfnotu.ToString();
                }
            }
        }

        private void txtbut_TextChanged(object sender, EventArgs e)
        {
            if (txtbut.Text == "")
            {
                butunlemeNotu = 0;
                butunlemeGetirisi = 0;
            }
            else
            {
                butunlemeNotu = Convert.ToInt16(txtbut.Text);
                butunlemeGetirisi = butunlemeNotu * 0.6;
            }
            lblbutget.Text = butunlemeGetirisi.ToString();
            gecmenotu = butunlemeGetirisi + vizeGetirisi;

            if(lbluyari.Text == "Bütünlemeye girecek")
            {
                lblgecmenotu.Text = gecmenotu.ToString();
            }
            else if(lbluyari.Text == "Bütünlemeye gerek yok")
            {
                lblgecmenotu.Text = ortalama.ToString();
            }
        }

        private void txtfinal_TextChanged(object sender, EventArgs e)
        {
            if (txtfinal.Text == "")
            {
                finalNotu = 0;
                finalGetirisi = 0;
            }
            else
            {
                finalNotu = Convert.ToInt16(txtfinal.Text);
                finalGetirisi = finalNotu * 0.6;
            }
            lblfinalget.Text = finalGetirisi.ToString();

            ortalama = finalGetirisi + vizeGetirisi;
            lblortalama.Text = ortalama.ToString();

            if (ortalama >= CC_sinirB)
            {
                lbluyari.Text = "Bütünlemeye gerek yok";
                txtbut.Visible = false;
                lblbutget.Visible = false;
                label23.Visible = false;
                lblgecmenotu.Text = ortalama.ToString();
            }
            else
            {
                lbluyari.Text = "Bütünlemeye girecek";
                txtbut.Visible = true;
                lblbutget.Visible = true;
                label23.Visible = true;
            }
        }

        int vizeNotu, finalNotu, butunlemeNotu, devamsizlikSayisi;

        private void txtvize_TextChanged(object sender, EventArgs e)
        {
            if (txtvize.Text == "")
            {
                vizeNotu = 0;
                vizeGetirisi = 0;
            }
            else
            {
                vizeNotu = Convert.ToInt16(txtvize.Text);
                vizeGetirisi = vizeNotu * 0.4;
            }
            lblvizeget.Text = vizeGetirisi.ToString();

            finalHedefi  = (CC_sinirB - vizeGetirisi) / 0.6;
            lblfinalhedef.Text = finalHedefi.ToString();
        }



        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            secim = "Belirlenen";
        }

        private void numericUpDown1_ValueChanged(object sender, EventArgs e)
        {
            btnsinir.Text = "-" + numericUpDown1.Value.ToString();
            degisim = (int)numericUpDown1.Value;
        }

        int AA_sinirB = 90, BA_sinirB = 85, BB_sinirB = 75, CB_sinirB = 70, CC_sinirB = 60, DC_sinirB = 55, DD_sinirB = 50, FD_sinirB = 40, FF_sinirB = 0;
        int degisim = 10;
        string secim = "Yönetmelik", harfnotu;

        private void btnsinir_Click(object sender, EventArgs e)
        {
            AA_sinirB = AA_sinir - degisim;
            BA_sinirB = BA_sinir - degisim;
            BB_sinirB = BB_sinir - degisim;
            CB_sinirB = CB_sinir - degisim;
            CC_sinirB = CC_sinir - degisim;
            DC_sinirB = DC_sinir - degisim;
            DD_sinirB = DD_sinir - degisim;
            FD_sinirB = FD_sinir - degisim;
            FF_sinirB = FF_sinir - degisim;

            txtaa.Text = AA_sinirB.ToString();
            txtba.Text = BA_sinirB.ToString();
            txtbb.Text = BB_sinirB.ToString();
            txtcb.Text = CB_sinirB.ToString();
            txtcc.Text = CC_sinirB.ToString();
            txtdc.Text = DC_sinirB.ToString();
            txtdd.Text = DD_sinirB.ToString();
            txtfd.Text = FD_sinirB.ToString();
        }
    }
}
