#pragma once
#include <sql.h>
#include <iostream>
using namespace std;
class conexionBD{
    private : SQL* conectar;
    public :
    void abrir_conexion() {
    conectar = sql_init(0);
    conectar = sql_real_connect(conectar, "localhost", "user", "" );
    }
SQL* getConectar() {
    return conectar;
}
    void cerrar_conexion() {
        sql_close(conectar);
    }

};