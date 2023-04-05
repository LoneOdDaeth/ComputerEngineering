namespace TicTacToe
{
    partial class Form1
    {
        /// <summary>
        ///Gerekli tasarımcı değişkeni.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///Kullanılan tüm kaynakları temizleyin.
        /// </summary>
        ///<param name="disposing">yönetilen kaynaklar dispose edilmeliyse doğru; aksi halde yanlış.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer üretilen kod

        /// <summary>
        /// Tasarımcı desteği için gerekli metot - bu metodun 
        ///içeriğini kod düzenleyici ile değiştirmeyin.
        /// </summary>
        private void InitializeComponent()
        {
            this.btn1 = new System.Windows.Forms.Button();
            this.btn2 = new System.Windows.Forms.Button();
            this.btn3 = new System.Windows.Forms.Button();
            this.btn6 = new System.Windows.Forms.Button();
            this.btn5 = new System.Windows.Forms.Button();
            this.btn4 = new System.Windows.Forms.Button();
            this.btn9 = new System.Windows.Forms.Button();
            this.btn8 = new System.Windows.Forms.Button();
            this.btn7 = new System.Windows.Forms.Button();
            this.btnbasla = new System.Windows.Forms.Button();
            this.lblPlayer1Name = new System.Windows.Forms.Label();
            this.lblPlayer1Score = new System.Windows.Forms.Label();
            this.lblPlayer2Score = new System.Windows.Forms.Label();
            this.lblPlayer2Name = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // btn1
            // 
            this.btn1.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btn1.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btn1.Location = new System.Drawing.Point(175, 124);
            this.btn1.Name = "btn1";
            this.btn1.Size = new System.Drawing.Size(75, 75);
            this.btn1.TabIndex = 0;
            this.btn1.UseVisualStyleBackColor = true;
            this.btn1.Click += new System.EventHandler(this.btn1_Click);
            // 
            // btn2
            // 
            this.btn2.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btn2.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btn2.Location = new System.Drawing.Point(256, 124);
            this.btn2.Name = "btn2";
            this.btn2.Size = new System.Drawing.Size(75, 75);
            this.btn2.TabIndex = 1;
            this.btn2.UseVisualStyleBackColor = true;
            this.btn2.Click += new System.EventHandler(this.btn1_Click);
            // 
            // btn3
            // 
            this.btn3.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btn3.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btn3.Location = new System.Drawing.Point(337, 124);
            this.btn3.Name = "btn3";
            this.btn3.Size = new System.Drawing.Size(75, 75);
            this.btn3.TabIndex = 2;
            this.btn3.UseVisualStyleBackColor = true;
            this.btn3.Click += new System.EventHandler(this.btn1_Click);
            // 
            // btn6
            // 
            this.btn6.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btn6.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btn6.Location = new System.Drawing.Point(337, 205);
            this.btn6.Name = "btn6";
            this.btn6.Size = new System.Drawing.Size(75, 75);
            this.btn6.TabIndex = 5;
            this.btn6.UseVisualStyleBackColor = true;
            this.btn6.Click += new System.EventHandler(this.btn1_Click);
            // 
            // btn5
            // 
            this.btn5.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btn5.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btn5.Location = new System.Drawing.Point(256, 205);
            this.btn5.Name = "btn5";
            this.btn5.Size = new System.Drawing.Size(75, 75);
            this.btn5.TabIndex = 4;
            this.btn5.UseVisualStyleBackColor = true;
            this.btn5.Click += new System.EventHandler(this.btn1_Click);
            // 
            // btn4
            // 
            this.btn4.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btn4.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btn4.Location = new System.Drawing.Point(175, 205);
            this.btn4.Name = "btn4";
            this.btn4.Size = new System.Drawing.Size(75, 75);
            this.btn4.TabIndex = 3;
            this.btn4.UseVisualStyleBackColor = true;
            this.btn4.Click += new System.EventHandler(this.btn1_Click);
            // 
            // btn9
            // 
            this.btn9.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btn9.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btn9.Location = new System.Drawing.Point(337, 286);
            this.btn9.Name = "btn9";
            this.btn9.Size = new System.Drawing.Size(75, 75);
            this.btn9.TabIndex = 8;
            this.btn9.UseVisualStyleBackColor = true;
            this.btn9.Click += new System.EventHandler(this.btn1_Click);
            // 
            // btn8
            // 
            this.btn8.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btn8.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btn8.Location = new System.Drawing.Point(256, 286);
            this.btn8.Name = "btn8";
            this.btn8.Size = new System.Drawing.Size(75, 75);
            this.btn8.TabIndex = 7;
            this.btn8.UseVisualStyleBackColor = true;
            this.btn8.Click += new System.EventHandler(this.btn1_Click);
            // 
            // btn7
            // 
            this.btn7.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btn7.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btn7.Location = new System.Drawing.Point(175, 286);
            this.btn7.Name = "btn7";
            this.btn7.Size = new System.Drawing.Size(75, 75);
            this.btn7.TabIndex = 6;
            this.btn7.UseVisualStyleBackColor = true;
            this.btn7.Click += new System.EventHandler(this.btn1_Click);
            // 
            // btnbasla
            // 
            this.btnbasla.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnbasla.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.btnbasla.Location = new System.Drawing.Point(175, 461);
            this.btnbasla.Name = "btnbasla";
            this.btnbasla.Size = new System.Drawing.Size(237, 75);
            this.btnbasla.TabIndex = 9;
            this.btnbasla.Text = "BAŞLA";
            this.btnbasla.UseVisualStyleBackColor = true;
            this.btnbasla.Click += new System.EventHandler(this.btnbasla_Click);
            // 
            // lblPlayer1Name
            // 
            this.lblPlayer1Name.AutoSize = true;
            this.lblPlayer1Name.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.lblPlayer1Name.Location = new System.Drawing.Point(62, 33);
            this.lblPlayer1Name.Name = "lblPlayer1Name";
            this.lblPlayer1Name.Size = new System.Drawing.Size(28, 24);
            this.lblPlayer1Name.TabIndex = 10;
            this.lblPlayer1Name.Text = "...";
            // 
            // lblPlayer1Score
            // 
            this.lblPlayer1Score.AutoSize = true;
            this.lblPlayer1Score.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.lblPlayer1Score.Location = new System.Drawing.Point(62, 85);
            this.lblPlayer1Score.Name = "lblPlayer1Score";
            this.lblPlayer1Score.Size = new System.Drawing.Size(28, 24);
            this.lblPlayer1Score.TabIndex = 11;
            this.lblPlayer1Score.Text = "...";
            // 
            // lblPlayer2Score
            // 
            this.lblPlayer2Score.AutoSize = true;
            this.lblPlayer2Score.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.lblPlayer2Score.Location = new System.Drawing.Point(471, 85);
            this.lblPlayer2Score.Name = "lblPlayer2Score";
            this.lblPlayer2Score.Size = new System.Drawing.Size(28, 24);
            this.lblPlayer2Score.TabIndex = 13;
            this.lblPlayer2Score.Text = "...";
            // 
            // lblPlayer2Name
            // 
            this.lblPlayer2Name.AutoSize = true;
            this.lblPlayer2Name.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.lblPlayer2Name.Location = new System.Drawing.Point(471, 33);
            this.lblPlayer2Name.Name = "lblPlayer2Name";
            this.lblPlayer2Name.Size = new System.Drawing.Size(28, 24);
            this.lblPlayer2Name.TabIndex = 12;
            this.lblPlayer2Name.Text = "...";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(563, 572);
            this.Controls.Add(this.lblPlayer2Score);
            this.Controls.Add(this.lblPlayer2Name);
            this.Controls.Add(this.lblPlayer1Score);
            this.Controls.Add(this.lblPlayer1Name);
            this.Controls.Add(this.btnbasla);
            this.Controls.Add(this.btn9);
            this.Controls.Add(this.btn8);
            this.Controls.Add(this.btn7);
            this.Controls.Add(this.btn6);
            this.Controls.Add(this.btn5);
            this.Controls.Add(this.btn4);
            this.Controls.Add(this.btn3);
            this.Controls.Add(this.btn2);
            this.Controls.Add(this.btn1);
            this.Name = "Form1";
            this.FormClosed += new System.Windows.Forms.FormClosedEventHandler(this.Form1_FormClosed);
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btn1;
        private System.Windows.Forms.Button btn2;
        private System.Windows.Forms.Button btn3;
        private System.Windows.Forms.Button btn6;
        private System.Windows.Forms.Button btn5;
        private System.Windows.Forms.Button btn4;
        private System.Windows.Forms.Button btn9;
        private System.Windows.Forms.Button btn8;
        private System.Windows.Forms.Button btn7;
        private System.Windows.Forms.Button btnbasla;
        private System.Windows.Forms.Label lblPlayer1Name;
        private System.Windows.Forms.Label lblPlayer1Score;
        private System.Windows.Forms.Label lblPlayer2Score;
        private System.Windows.Forms.Label lblPlayer2Name;
    }
}

