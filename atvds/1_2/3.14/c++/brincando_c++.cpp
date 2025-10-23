#include <iostream>
#include <string>
#include <vector>
#include <cstdint>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"
#include <opencv2/opencv.hpp> 

void extrair_planos_de_bits_cpp(const std::string& caminho_entrada, const std::string& diretorio_saida) {
    // Em C++, para garantir que um diretório existe e, caso não, cria-ló torna uma tarefa desnecessária, portanto,
    // Para que esse código funcione corretamente, garanta que já existe o caminho da imagem e a pasta para salvar as imagens.
    std::cout << "--- Iniciando processamento em C++ ---" << std::endl;
    std::cout << " Verificando o caminho " << caminho_entrada << std::endl;

    cv::Mat imagem = cv::imread(caminho_entrada, cv::IMREAD_GRAYSCALE);
    
    if (imagem.empty()){
        std::cout << "Erro ao carregar a imagem!" << std::endl;
    }

    int altura = imagem.rows;
    int largura = imagem.cols;

    std::cout << "Imagem carregada: " << largura << "x" << altura << " pixels." << std::endl;

    for (int i = 0; i < 8; ++i) {
        // Cria uma nova imagem (cv::Mat) para o plano de bit, inicializada com zeros (preto)
        cv::Mat imagem_plano_bit = cv::Mat::zeros(altura, largura, CV_8UC1);
        // Itera sobre cada pixel da imagem original
        for (int y = 0; y < altura; ++y) {
            for (int x = 0; x < largura; ++x) {
                // Pega o valor do pixel da imagem original DA FORMA CORRETA
                unsigned char valor_pixel = imagem.at<unsigned char>(y, x);

                // Isola o i-ésimo bit. Se for 1, o pixel no plano será branco.
                if ((valor_pixel >> i) & 1) {
                    imagem_plano_bit.at<unsigned char>(y, x) = 255;
                }
            }
        }

        // Monta o nome do arquivo de saída
        std::string caminho_saida = diretorio_saida + "/plano_bit_cpp_" + std::to_string(i) + ".png";
        // Salva a imagem do plano de bit usando a função do OpenCV
        std::cout << "passando" << std::endl;
        if (!cv::imwrite(caminho_saida, imagem_plano_bit)) {
            std::cerr << "Erro: Nao foi possivel salvar o arquivo '" << caminho_saida << "'" << std::endl;
        } else {
            std::cout << "Plano de Bit " << i << " salvo em: '" << caminho_saida << "'" << std::endl;
        }
    }

    std::cout << "Processamento em C++ concluido." << std::endl;
}

int main() {
    // Como essa tarefa foi realizada na minha máquina pessoal o caminho colocado na função reflete um caminho PESSOAL
    // Portando, quando for testar esse código, por favor substitua pelo caminho correto.
    extrair_planos_de_bits_cpp("/home/felipe/Desktop/graduation/2025.2/PDI/CH03_Original_Images/Fig0314(a)(100-dollars).tif", "atvds/1_2/3.14/c++/planos_de_bits_cpp");
    return 0;
}