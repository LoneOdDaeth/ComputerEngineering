using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace hafizaOyunu
{
    internal class kart: PictureBox
    {
        private string arkaYuz;
        private Boolean acikMi = false;

        public kart(int resimNo)
        {
            arkaYuz = resimNo.ToString();
            //this.ImageLocation =arkaYuz + ".png";
            this.ImageLocation = "soru.png";
        }

        public void cevir()
        {
            if (acikMi == false)
            {
                this.ImageLocation = arkaYuz + ".png";
                acikMi = true;
            }
            else
            {
                this.ImageLocation = "soru.png";
                acikMi = false;
            }
        }
        public string ArkaYuz {
            get { return arkaYuz; }
            set { arkaYuz = value; }
        }

    }
}
