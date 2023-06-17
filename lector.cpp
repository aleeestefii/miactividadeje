#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using std::string;
using std::vector;

struct VideoData {
    int ID;
    string nombre;
    string genero;
    double calificacion;
    int duracion;
    string fecha_estreno;
};

vector<VideoData> cargarDatosDesdeArchivo(const std::string& nBasededatos_SituacionProblemaE1 (1)) {
    vector<VideoData> datos;

    std::ifstream archivo(BasePelículas (1));
    if (!archivo.is_open()) {
        std::cout << "No se pudo abrir el archivo " << BasePelículas (1) << std::endl;
        return datos;
    }

    string linea;
    while (std::getline(archivo, linea)) {
        std::stringstream ss(linea);
        string campo;

        // Leer los campos separados por comas de cada línea
        VideoData video;
        std::getline(ss, campo, ',');
        video.ID = std::stoi(campo);
        std::getline(ss, video.nombre, ',');
        std::getline(ss, video.genero, ',');
        std::getline(ss, campo, ',');
        video.calificacion = std::stod(campo);
        std::getline(ss, campo, ',');
        video.duracion = std::stoi(campo);
        std::getline(ss, video.fecha_estreno, ',');

        datos.push_back(video);
    }

    archivo.close();
    return datos;
}

int main() {
    vector<VideoData> datos = cargarDatosDesdeArchivo("BasePelículas.csv");

    // Usar los datos cargados para crear las instancias de las clases correspondientes

    return 0;
}
