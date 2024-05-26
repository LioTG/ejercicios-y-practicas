struct direccion_trabajador {
	string direccion;
	string distrito;
	string provincia;
};

struct informacion_trabajador {
	string nombre;
	int edad;
	char sexo;
	direccion_trabajador direc;
	int venta;
} trabajadores[100];


void registrar_informacion(int ntrabajadores) {
	for (int i = 0; i < ntrabajadores; i++) {
		cout << "Ingrese el nombre de trabajador: "; getline(cin, trabajadores[i].nombre); cin.ignore();
		cout << "Ingrese edad: "; cin >> trabajadores[i].edad; cin.ignore();
		cout << "Ingrese sexo: "; cin >> trabajadores[i].sexo; cin.ignore();
		cout << "Ingrese direccion: "; getline(cin, trabajadores[i].direc.direccion); cin.ignore();
		cout << "Ingrese distrito: "; getline(cin, trabajadores[i].direc.distrito); cin.ignore();
		cout << "Ingrese provincia: "; getline(cin, trabajadores[i].direc.provincia); cin.ignore();
		cout << "Ingrese venta: ";cin>> trabajadores[i].venta; cin.ignore();
	}
}

void venta_promedio(int ntrabajadores) {
	int prom = 0;
	for (int i = 0; i < ntrabajadores; i++) {
		prom += trabajadores[i].venta;
	}
	cout << "El promedio es: " << prom / ntrabajadores;
}


void venta_mayor(int ntrabajadores) {
	int max_venta = 0, min_venta = 0, indice=0;
	for (int i = 0; i < ntrabajadores; i++) {
		if (trabajadores[i].venta > max_venta) {
			max_venta = trabajadores[i].venta;
			indice = i;
		}
		else if (trabajadores[i].venta < max_venta) {
			min_venta = trabajadores[i].venta;
		}
	}
	cout << "La mayor venta lo tiene [ " << trabajadores[indice].nombre << " ] Con la direccion {" << trabajadores[indice].direc.direccion
		<< endl << trabajadores[indice].direc.distrito << endl << trabajadores[indice].direc.provincia << endl;
}


void menor_venta(int ntrabajadores) {
	int menor_venta = INT_MAX, indice=0;
	for (int i = 0; i < ntrabajadores; i++) {
		if (trabajadores[i].venta < menor_venta) {
			menor_venta = trabajadores[i].venta;
			indice = i;
		}
	}
	cout << "La menor venta lo tiene [" << trabajadores[indice].nombre << "]" << endl;
}

void ordenar_edad(int ntrabajadores) {
	int* edades = new int[ntrabajadores];
	for (int i = 0; i < ntrabajadores; i++) {
		edades[i] = trabajadores[i].edad;
	}
	for (int i = 1; i < ntrabajadores; i++) {
		int key = edades[i];
		int j = i - 1;

		while (j >= 0 && edades[i] > key) {
			edades[j + 1] = edades[j];
			j = j - 1;
		}
		edades[j + 1] = key;
	}
	for (int i = 0; i < ntrabajadores; i++) {
		cout << "[" << edades[i] << "]";
	}
}

int main() {
	registrar_informacion(2);
	venta_promedio(2);
	venta_mayor(2);
	menor_venta(2);
	ordenar_edad(2);
}
