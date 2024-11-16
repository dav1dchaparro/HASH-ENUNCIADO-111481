#include "pa2m.h"
#include "src/hash.h"

void creo_un_hash_valido_pasandole_la_cantidad_correcta_me_debe_devolver_el_hash_creado_correctamente_con_la_cantidad_asignada()
{
	size_t cantidad = 20;
	hash_t *hash = hash_crear(cantidad);
	pa2m_afirmar(
		hash != NULL,
		"hash con mas de la cantidad correcta: se ha creado correctamente");
	pa2m_afirmar(hash_cantidad(hash) == 0,
		     "hash vacio: no tiene elementos al inicializarse");
	hash_destruir(hash);
}

void creo_un_hash_valido_pasandole_menos_de_la_cantidad_minima_me_debe_devolver_un_hash_con_la_cantidad_de_espacios_3()
{
	size_t cantidad = 1;
	hash_t *hash = hash_crear(cantidad);
	pa2m_afirmar(
		hash != NULL,
		"hash con menos de la cantidad minima: se ha creado correctamente");
	pa2m_afirmar(hash_cantidad(hash) == 0,
		     "hash vacio: no tiene elementos al inicializarse");
	hash_destruir(hash);
}
int main()
{
	pa2m_nuevo_grupo("Pruebas crear HASH");
	creo_un_hash_valido_pasandole_la_cantidad_correcta_me_debe_devolver_el_hash_creado_correctamente_con_la_cantidad_asignada();
	creo_un_hash_valido_pasandole_menos_de_la_cantidad_minima_me_debe_devolver_un_hash_con_la_cantidad_de_espacios_3();

	return pa2m_mostrar_reporte();
}
