using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Drawing;

namespace Snake
{
    class govde : PictureBox
    {
        public govde()
        {
            this.BackColor = Color.ForestGreen;
            this.Size = new Size(10, 10);
        }
    }

    class yem : govde
    {
        public yem()
        {
            this.BackColor = Color.GreenYellow;
            this.Size = new Size(10, 10);
        }
    }

}
