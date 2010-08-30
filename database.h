#include "utf.h"
#include "sys.h"

struct database;

database* db_open(const wchar* db_file = 0);
void db_close(database* db);
void db_init(database* db);
void db_add_search_dir(database* db, const wchar* dir);
int db_rm_search_dir(database* db, const wchar* dir);
void db_print_search_dir(database* db, void (*print)(const wchar* dir, void* UP), void* UP);
void db_inject_library_directories(database* db);
void db_add_local_file(database* db, const wchar* file, time64 time);
wchar* db_get_local_file_copy(database* db);
void db_add_local_file_hash(database* db, const wchar* file, const char* hash);
void db_add_local_dir(database* db, const wchar* file);
wchar* db_get_local_dir_copy(database* db);
void db_remove_local_dir(database* db, const wchar* dir);
