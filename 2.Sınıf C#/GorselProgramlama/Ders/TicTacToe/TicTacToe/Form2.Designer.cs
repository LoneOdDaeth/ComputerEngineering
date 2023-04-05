namespace TicTacToe
{
    partial class Form2
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.lbGirisPlayer1Name = new System.Windows.Forms.Label();
            this.lblGirisPlayer2Name = new System.Windows.Forms.Label();
            this.txtPlayer1Name = new System.Windows.Forms.TextBox();
            this.txtPlayer2Name = new System.Windows.Forms.TextBox();
            this.btnGirisBasla = new System.Windows.Forms.Button();
            this.btncıkıs = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // lbGirisPlayer1Name
            // 
            this.lbGirisPlayer1Name.AutoSize = true;
            this.lbGirisPlayer1Name.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.lbGirisPlayer1Name.Location = new System.Drawing.Point(88, 120);
            this.lbGirisPlayer1Name.Name = "lbGirisPlayer1Name";
            this.lbGirisPlayer1Name.Size = new System.Drawing.Size(106, 24);
            this.lbGirisPlayer1Name.TabIndex = 0;
            this.lbGirisPlayer1Name.Text = "Oyuncu 1:";
            // 
            // lblGirisPlayer2Name
            // 
            this.lblGirisPlayer2Name.AutoSize = true;
            this.lblGirisPlayer2Name.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.lblGirisPlayer2Name.Location = new System.Drawing.Point(88, 225);
            this.lblGirisPlayer2Name.Name = "lblGirisPlayer2Name";
            this.lblGirisPlayer2Name.Size = new System.Drawing.Size(106, 24);
            this.lblGirisPlayer2Name.TabIndex = 1;
            this.lblGirisPlayer2Name.Text = "Oyuncu 2:";
            // 
            // txtPlayer1Name
            // 
            this.txtPlayer1Name.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.txtPlayer1Name.Location = new System.Drawing.Point(255, 120);
            this.txtPlayer1Name.Multiline = true;
            this.txtPlayer1Name.Name = "txtPlayer1Name";
            this.txtPlayer1Name.Size = new System.Drawing.Size(189, 24);
            this.txtPlayer1Name.TabIndex = 2;
            // 
            // txtPlayer2Name
            // 
            this.txtPlayer2Name.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.txtPlayer2Name.Location = new System.Drawing.Point(255, 225);
            this.txtPlayer2Name.Multiline = true;
            this.txtPlayer2Name.Name = "txtPlayer2Name";
            this.txtPlayer2Name.Size = new System.Drawing.Size(189, 24);
            this.txtPlayer2Name.TabIndex = 3;
            // 
            // btnGirisBasla
            // 
            this.btnGirisBasla.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnGirisBasla.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnGirisBasla.Location = new System.Drawing.Point(92, 302);
            this.btnGirisBasla.Name = "btnGirisBasla";
            this.btnGirisBasla.Size = new System.Drawing.Size(173, 75);
            this.btnGirisBasla.TabIndex = 10;
            this.btnGirisBasla.Text = "BAŞLA";
            this.btnGirisBasla.UseVisualStyleBackColor = true;
            this.btnGirisBasla.Click += new System.EventHandler(this.btnGirisBasla_Click);
            // 
            // btncıkıs
            // 
            this.btncıkıs.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btncıkıs.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btncıkıs.Location = new System.Drawing.Point(271, 302);
            this.btncıkıs.Name = "btncıkıs";
            this.btncıkıs.Size = new System.Drawing.Size(173, 75);
            this.btncıkıs.TabIndex = 11;
            this.btncıkıs.Text = "Çıkış";
            this.btncıkıs.UseVisualStyleBackColor = true;
            this.btncıkıs.Click += new System.EventHandler(this.btncıkıs_Click);
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(563, 572);
            this.Controls.Add(this.btncıkıs);
            this.Controls.Add(this.btnGirisBasla);
            this.Controls.Add(this.txtPlayer2Name);
            this.Controls.Add(this.txtPlayer1Name);
            this.Controls.Add(this.lblGirisPlayer2Name);
            this.Controls.Add(this.lbGirisPlayer1Name);
            this.Name = "Form2";
            this.Text = "Form2";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lbGirisPlayer1Name;
        private System.Windows.Forms.Label lblGirisPlayer2Name;
        private System.Windows.Forms.TextBox txtPlayer1Name;
        private System.Windows.Forms.TextBox txtPlayer2Name;
        private System.Windows.Forms.Button btnGirisBasla;
        private System.Windows.Forms.Button btncıkıs;
    }
}