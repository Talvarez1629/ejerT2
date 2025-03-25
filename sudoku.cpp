class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {false};   // Verificar filas
        bool col[9][9] = {false};   // Verificar columnas
        bool box[9][9] = {false};   // Verificar sub-cuadros 3x3

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') { // Solo verificamos celdas con números
                    int num = board[i][j] - '1';  // Convertir '1'-'9' a índice 0-8
                    int box_index = (i / 3) * 3 + (j / 3); // Índice del sub-cuadro 3x3

                    // Si ya existe en la fila, columna o subcuadro, no es válido
                    if (row[i][num] || col[j][num] || box[box_index][num])
                        return false;

                    // Marcar el número como visto
                    row[i][num] = true;
                    col[j][num] = true;
                    box[box_index][num] = true;
                }
            }
        }
        return true;
    }
};