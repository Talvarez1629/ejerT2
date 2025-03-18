class Solution {
    public:
        string addStrings(string num1, string num2) {
         int i = num1.length() - 1;// i es el indice del string num1
            int j = num2.length() - 1;// j es el indice del string num2
            int carry = 0;// carry es el acarreo
            string result = "";// result es el string que contendra la suma de los dos strings
    
            // Recorremos los strings de derecha a izquierda
            while (i >= 0 || j >= 0 || carry > 0) {
                int digit1 = (i >= 0) ? num1[i] - '0' : 0;
                int digit2 = (j >= 0) ? num2[j] - '0' : 0;
    
                int sum = digit1 + digit2 + carry; // sum es la suma de los digitos de los strings y el acarreo
                carry = sum / 10;// carry es la division de la suma entre 10    
                int digit = sum % 10;// digit es el modulo de la suma entre 10
    
                result += (digit + '0');// Agregamos el digito a result
    
                i--;
                j--;
            }
    
            reverse(result.begin(), result.end());// Invertimos el string result
            return result;   
        }
    };