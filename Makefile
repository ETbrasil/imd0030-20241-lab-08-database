make: fonte header
	g++ -o dna_profiler fonte/main.cpp fonte/str.cpp fonte/perfil.cpp fonte/banco.cpp fonte/nomes.cpp

fonte: fonte/main.cpp fonte/str.cpp fonte/perfil.cpp fonte/banco.cpp fonte/nomes.cpp

header: header/str.h header/perfil.h header/banco.h header/nomes.h