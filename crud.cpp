#include <iostream>
#include <string>
#include <mysql.h>
using namespace std;
int q_estado;
int opcion = 0;
void leer_proveedor();
void actualizar_proveedor();
void crear_proveedor();
void borrar_proveedor();

int main()
{
	system("cls");
	cout << "\t____________Base De Datos De Proveedores____________" << endl;
	cout << "\t\t1. Crear un proveedor" << endl;
	cout << "\t\t2. observar proveedor" << endl;
	cout << "\t\t3. Actualizar proveedor" << endl;
	cout << "\t\t4. eliminar proveedor" << endl;
	cout << "\t\t5. Salir" << endl << endl;
	cout << "\t\t\tEliga su opcion: ";
	cin >> opcion;
	system("cls");



	switch (opcion) {
	case 1: crear_proveedor(); ; break;
	case 2: leer_proveedor(); ; break;
	case 3: actualizar_proveedor(); ; break;
	case 4: borrar_proveedor(); ; break;
	case 5: exit(-1); ; break;
	default:cout << "Opcion no valida";
	}
};
void leer_proveedor()
{
	
	cn.abrir_conexion();
	if (cn.getConectar()) {
		string consulta = "SELECT * FROM db_tienda.proveedor";
		const char* c = consulta.c_str();
		q_estado = mysql_query(cn.getConectar(), c);
		if (!q_estado) {
			resultado = mysql_store_result(cn.getConectar());
			while (fila = mysql_fetch_row(resultado)) {
				cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << endl;
			}
		}
		else {
			cout << "Error en Consulta : " << mysql_error(cn.getConectar()) << endl;
		}
		if (cn.getConectar()) {

		}
	}
	else {
		cout << "ERROR EN LA CONEXION..." << endl;
	}
		cn.cerrar_conexion();
		system("pause");	system("cls"); main();
}
void crear_proveedor()
{
	system("cls");
	CONEXIONPV cn = CONEXIONPV();
	cn.abrir_conexion();
	string proveedor;
	string nit;
	string telefono;
	string direccion;
	cout << "Ingrese Proveedor: ";
	cin >> proveedor;
	cout << "Ingrese Nit: ";
	cin >> nit;
	cout << "Ingrese Direccion: ";
	cin >> direccion;
	cout << "Ingrese Telefono: ";
	cin >> telefono;
	if (cn.getConectar()) {
		string insert = "insert into db_tienda.proveedor(proveedor,nit,direccion,telefono) values('" + proveedor + "','" + nit + "', '" + direccion + "','" + telefono + "')";
		const char* i = insert.c_str();
		q_estado = mysql_query(cn.getConectar(), i);
		if (!q_estado) {
			cout << "Ingresos Exitosos" << endl;
		}
		else {
			cout << "Error al Ingresar" << endl;
		}
	}
	else {
		cout << "ERROR EN LA CONEXION..." << endl;
	}
	cn.cerrar_conexion();
	system("pause");	system("cls"); main();
	}
void actualizar_proveedor() {
	system("cls");
	cn.abrir_conexion();
	string id_proveedor;
	string proveedor;
	string nit;
	string telefono;
	string direccion;
	cout << "Ingrese la ID que desea modificar: " << endl;
	cin >> id_proveedor;
	cout << "Ingrese Proveedor: ";
	cin >> proveedor;
	cout << "Ingrese Nit: ";
	cin >> nit;
	cout << "Ingrese Direccion: ";
	cin >> direccion;
	cout << "Ingrese Telefono: ";
	cin >> telefono;
	if (cn.getConectar()) {
		string update = "update db_tienda.proveedor set proveedor = ('" + proveedor + "'), nit = ('" + nit + "'), direccion = ('" + direccion + "'), telefono = ('" + telefono + "') where id_proveedor = ('" + id_proveedor + "')  ";
		const char* i = update.c_str();
		q_estado = mysql_query(cn.getConectar(), i);
		if (!q_estado) {
			cout << "Modificacion Exitosa..." << endl;
		}
		else {
			cout << "Error en la Modificacion..." << endl;
		}
	}
	else {
		cout << "ERROR EN LA CONEXION..." << endl;
	}
	cn.cerrar_conexion();
	system("pause");	system("cls"); main();
}
void borrar_proveedor() {
	system("cls");
	cn.abrir_conexion();
	string id_proveedor;
	cout << "Ingrese la ID que desea eliminar: " << endl;
	cin >> id_proveedor;
	if (cn.getConectar()) {
		string borrar = "delete from db_tienda.proveedor where id_proveedor = ('" + id_proveedor + "')";
		const char* i = borrar.c_str();
		q_estado = mysql_query(cn.getConectar(), i);
		if (!q_estado) {
			cout << "Eliminacion Exitosa..." << endl;
		}
		else {
			cout << "Error en la Eliminacion..." << endl;
		}
	}
	else {
		cout << "ERROR EN LA CONEXION..." << endl;
	}
	cn.cerrar_conexion();
	system("pause");	system("cls"); main();
}

