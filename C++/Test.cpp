#include <iostream>
using namespace std;

int main ()
{
    char candidatos[4];
    char *pcandidatos = NULL;
    pcandidatos = &candidatos[0];
    
    int votosCandi[4][5];
    int *pvotosCandi = NULL;
    pvotosCandi = &votosCandi[0][0];
    
    int totalVotos = 0; // Para el total de votos en todas las zonas
    
    for (int i = 0; i < 4; i++)
    {
        cout << "Ingresar la letra del candidato en mayúscula: ";
        cin >> *(pcandidatos + i);
        for (int j = 0; j < 5; j++)
        {
            cout << "Zona: " << j + 1 << endl;
            cout << "Ingresar los votos: ";
            cin >> votosCandi[i][j];
            totalVotos += votosCandi[i][j];
        }
        cout << endl;
    }
    cout << endl << endl;
    
    // Mostrar matriz
    cout << "        MOSTRAR MATRIZ      ";
    cout << endl << endl;
    
    cout << "Zona\t";
    for (int i = 0; i < 4; i++)
    {
        cout << *(pcandidatos + i) << "\t";
    }
    cout << "Total" << endl;
    
    int totalPorCandidato[4] = {0}; 
    
    for (int j = 0; j < 5; j++)
    {
        int totalPorZona = 0; 
        cout << j + 1 << "\t"; 
        for (int i = 0; i < 4; i++)
        {
            cout << votosCandi[i][j] << "\t"; 
            totalPorZona += votosCandi[i][j];  
            totalPorCandidato[i] += votosCandi[i][j];  
        }
        cout << totalPorZona << endl;
    }
    
    cout << "Total\t";
    for (int i = 0; i < 4; i++)
    {
        cout << totalPorCandidato[i] << "\t";
    }
    cout << endl;
    
    cout << "Porcentaje\t";
    for (int i = 0; i < 4; i++)
    {
        float porcentaje = (totalPorCandidato[i] / totalVotos) * 100;
        cout << porcentaje << "%\t";
    }
    cout << endl;
    
    int maxVotos = 0;
    int ganador = -1;
    for (int i = 0; i < 4; i++)
    {
        if (totalPorCandidato[i] > maxVotos)
        {
            maxVotos = totalPorCandidato[i];
            ganador = i;
        }
    }
    
    if (maxVotos > 0.5 * totalVotos)
    {
        cout << "El ganador es el candidato: " << *(pcandidatos + ganador) << " con " << maxVotos << " votos." << endl;
    }
    else
    {
        int segundoMaxVotos = 0;
        int segundoGanador = -1;
        for (int i = 0; i < 4; i++)
        {
            if (i != ganador && totalPorCandidato[i] > segundoMaxVotos)
            {
                segundoMaxVotos = totalPorCandidato[i];
                segundoGanador = i;
            }
        }
        cout << "Los dos candidatos con más votos son:" << endl;
        cout << *(pcandidatos + ganador) << " con " << maxVotos << " votos." << endl;
        cout << *(pcandidatos + segundoGanador) << " con " << segundoMaxVotos << " votos." << endl;
    }
    
    return 0;
}
