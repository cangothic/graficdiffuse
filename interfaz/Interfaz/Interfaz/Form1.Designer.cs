namespace Interfaz
{
    partial class Form1
    {
        /// <summary>
        /// Variable del diseñador necesaria.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpiar los recursos que se estén usando.
        /// </summary>
        /// <param name="disposing">true si los recursos administrados se deben desechar; false en caso contrario.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código generado por el Diseñador de Windows Forms

        /// <summary>
        /// Método necesario para admitir el Diseñador. No se puede modificar
        /// el contenido de este método con el editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.button1 = new System.Windows.Forms.Button();
            this.funcionAGraficar = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.a = new System.Windows.Forms.DomainUpDown();
            this.b = new System.Windows.Forms.DomainUpDown();
            this.c = new System.Windows.Forms.DomainUpDown();
            this.d = new System.Windows.Forms.DomainUpDown();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(310, 277);
            this.button1.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(112, 35);
            this.button1.TabIndex = 0;
            this.button1.Text = "enviar";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // funcionAGraficar
            // 
            this.funcionAGraficar.FormattingEnabled = true;
            this.funcionAGraficar.Location = new System.Drawing.Point(301, 115);
            this.funcionAGraficar.Name = "funcionAGraficar";
            this.funcionAGraficar.Size = new System.Drawing.Size(121, 28);
            this.funcionAGraficar.TabIndex = 1;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(297, 47);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(133, 20);
            this.label1.TabIndex = 2;
            this.label1.Text = "escoja un funcion";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // a
            // 
            this.a.Location = new System.Drawing.Point(24, 194);
            this.a.Name = "a";
            this.a.Size = new System.Drawing.Size(120, 26);
            this.a.TabIndex = 3;
            this.a.Text = "domainUpDown1";
            this.a.SelectedItemChanged += new System.EventHandler(this.a_SelectedItemChanged);
            // 
            // b
            // 
            this.b.Location = new System.Drawing.Point(203, 194);
            this.b.Name = "b";
            this.b.Size = new System.Drawing.Size(120, 26);
            this.b.TabIndex = 4;
            this.b.Text = "domainUpDown2";
            // 
            // c
            // 
            this.c.Location = new System.Drawing.Point(408, 194);
            this.c.Name = "c";
            this.c.Size = new System.Drawing.Size(120, 26);
            this.c.TabIndex = 5;
            this.c.Text = "domainUpDown3";
            // 
            // d
            // 
            this.d.Location = new System.Drawing.Point(584, 194);
            this.d.Name = "d";
            this.d.Size = new System.Drawing.Size(120, 26);
            this.d.TabIndex = 6;
            this.d.Text = "domainUpDown4";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(738, 402);
            this.Controls.Add(this.d);
            this.Controls.Add(this.c);
            this.Controls.Add(this.b);
            this.Controls.Add(this.a);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.funcionAGraficar);
            this.Controls.Add(this.button1);
            this.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.ComboBox funcionAGraficar;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.DomainUpDown a;
        private System.Windows.Forms.DomainUpDown b;
        private System.Windows.Forms.DomainUpDown c;
        private System.Windows.Forms.DomainUpDown d;
    }
}

