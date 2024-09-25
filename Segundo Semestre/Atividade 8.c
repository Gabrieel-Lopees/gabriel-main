#include<stdio.h>
#include <windows.h>

int dinheiro = 0;
int experiencia = 0;
char dinheiroTexto[50], experienciaTexto[50];

// Função para atualizar o texto dos labels
void AtualizarLabels(HWND hWnd) {
    sprintf(dinheiroTexto, "Dinheiro: %d", dinheiro);
    sprintf(experienciaTexto, "Experiência: %d", experiencia);
    SetWindowText(GetDlgItem(hWnd, 1), dinheiroTexto);
    SetWindowText(GetDlgItem(hWnd, 2), experienciaTexto);
}

// Função callback da janela
LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_COMMAND:
            if (LOWORD(wParam) == 3) { // Botão de roubo
                dinheiro += 1;
                experiencia += 1;
                AtualizarLabels(hWnd);
            }
            break;
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hWnd, uMsg, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Definir e registrar a classe da janela
    const char CLASS_NAME[] = "SimuladorRoubador";

    WNDCLASS wc = { };
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    RegisterClass(&wc);

    // Criar a janela
    HWND hWnd = CreateWindowEx(0, CLASS_NAME, "Simulador de Roubador", WS_OVERLAPPEDWINDOW,
                               CW_USEDEFAULT, CW_USEDEFAULT, 300, 200,
                               NULL, NULL, hInstance, NULL);
    if (hWnd == NULL) {
        return 0;
    }

    // Mostrar a janela
    ShowWindow(hWnd, nCmdShow);

    // Adicionar os elementos da interface
    CreateWindow("STATIC", "Dinheiro: 0", WS_VISIBLE | WS_CHILD, 20, 20, 150, 20, hWnd, (HMENU) 1, hInstance, NULL);
    CreateWindow("STATIC", "Experiência: 0", WS_VISIBLE | WS_CHILD, 20, 50, 150, 20, hWnd, (HMENU) 2, hInstance, NULL);
    CreateWindow("BUTTON", "Roubar o troco da cantina", WS_VISIBLE | WS_CHILD, 20, 80, 200, 30, hWnd, (HMENU) 3, hInstance, NULL);

    // Loop de mensagens
    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
