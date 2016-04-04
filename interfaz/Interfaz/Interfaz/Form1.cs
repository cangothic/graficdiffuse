using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Interfaz
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //los parametros van separados por espacios
            ProcessStartInfo info = new ProcessStartInfo();

            info.UseShellExecute = true;
            info.FileName = "graficadora.exe";
            info.WorkingDirectory = @"..\..\..\..\..\graficadora\bin\Debug\";
            //los parametros van separados por espacios
            info.Arguments = "brian carlos";
            Process.Start(info);
        }
    }
}
