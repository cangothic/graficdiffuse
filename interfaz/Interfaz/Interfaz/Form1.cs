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
            funcionAGraficar.SelectedItem = "Trapezoidal";
            textBox1.Text = "0";
            textBox2.Text = "0";
            textBox3.Text = "0";
            textBox4.Text = "0";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //los parametros van separados por espacios
            ProcessStartInfo info = new ProcessStartInfo();

            info.UseShellExecute = true;
            info.FileName = "graficadora.exe";
            info.WorkingDirectory = @"..\..\..\..\..\graficadora\bin\Debug\";
            //los parametros van separados por espacios
            validarNoVacios();
            string valorFuncion = (string)funcionAGraficar.SelectedItem;
            string valorA = textBox1.Text;
            string valorB = textBox2.Text;
            string valorC = textBox3.Text;
            string valorD = textBox4.Text;
            if (validar(valorFuncion, valorA, valorB, valorC, valorD)==true)
            {
                info.Arguments = valorFuncion + " " + valorA + " " + valorB + " " + valorC + " " + valorD;
                Process.Start(info);
            }
        }
        private bool validar(string valorFuncion,string valorA,string valorB,string valorC,string valorD)
        {
            if (valorFuncion == "Trapezoidal")
            {
                if(valorA == valorB)
                {
                    MessageBox.Show("A y B deben ser distintos en la funcion trapezoidal");
                    return false;
                }
                else if(Double.Parse(valorA)>Double.Parse(valorB)|| Double.Parse(valorB)>Double.Parse(valorC)|| Double.Parse(valorC) > Double.Parse(valorD))
                {
                    MessageBox.Show("los parametros deben ser A>=B>=C>=D");
                    return false;
                }
            }
            else if(valorFuncion== "Gaussiana" && valorA == "0")
            {
                MessageBox.Show("a no puede ser 0 en la funcion Gaussiana");
                return false;
            }
            else if(valorFuncion=="Bell" && valorA == "0")
            {
                MessageBox.Show("a no puede ser 0 en la funcion Bell");
                return false;
            }
            return true;
       
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void a_SelectedItemChanged(object sender, EventArgs e)
        {

        }
        private void showA()
        {
            textBox1.Show();
            labelA.Show();
        }
        private void hiddenA()
        {
            textBox1.Hide();
            labelA.Hide();
        }
        private void showB()
        {
            textBox2.Show();
            labelB.Show();
        }
        private void hiddenB()
        {
            textBox2.Hide();
            labelB.Hide();
        }
        private void showC()
        {
            textBox3.Show();
            labelC.Show();
        }
        private void hiddenC()
        {
            textBox3.Hide();
            labelC.Hide();
        }
        private void showD()
        {
            textBox4.Show();
            labelD.Show();
        }
        private void hiddenD()
        {
            textBox4.Hide();
            labelD.Hide();
        }

        private void showTrapezoidal()
        {
            showA();
            showB();
            showC();
            showD();
        }
        private void showGaussiana()
        {
            showA();
            hiddenB();
            showC();
            hiddenD();
        }
        private void showBell()
        {
            showA();
            showB();
            showC();
            hiddenD();
        }
        private void showSigmoide()
        {
            showA();
            showB();
            hiddenC();
            hiddenD();
        }

        private void funcionAGraficar_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (funcionAGraficar.SelectedItem.Equals("Trapezoidal"))
            {
                showTrapezoidal();
            }else if (funcionAGraficar.SelectedItem.Equals("Gaussiana"))
            {
                showGaussiana();
            }else if (funcionAGraficar.SelectedItem.Equals("Bell"))
            {
                showBell();
            }else if (funcionAGraficar.SelectedItem.Equals("Sigmoide"))
            {
                showSigmoide();
            }
        }
        private void validarEntradaNumero(KeyPressEventArgs e,TextBox textBox)
        {
            char ch = e.KeyChar;

            if (ch==45 && textBox.Text.Length!=0 && textBox.SelectedText.Length != textBox.Text.Length)
            {
                e.Handled = true;
                return;
            }
            if(ch==46 && textBox.Text.IndexOf('.') != -1)
            {
                e.Handled = true;
                return;
            }
            if(!char.IsDigit(ch) && ch!=8 && ch != 46 && ch!=45)
            {
                e.Handled = true;
            }

        }
        private void validarNoVacios()
        {
            if (textBox1.Text.Equals(""))
            {
                textBox1.Text = "0;";
            } else if (textBox2.Text.Equals(""))
            {
                textBox2.Text = "0;";
            }
            else if (textBox3.Text.Equals(""))
            {
                textBox3.Text = "0;";
            }
            else if (textBox4.Text.Equals(""))
            {
                textBox4.Text = "0;";
            }
        }
        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            validarEntradaNumero(e, textBox1);

        }

        private void textBox2_KeyPress(object sender, KeyPressEventArgs e)
        {
            validarEntradaNumero(e, textBox2);
        }

        private void textBox3_KeyPress(object sender, KeyPressEventArgs e)
        {
            validarEntradaNumero(e, textBox3);
        }

        private void textBox4_KeyPress(object sender, KeyPressEventArgs e)
        {
            validarEntradaNumero(e, textBox4);
        }
    }
}
