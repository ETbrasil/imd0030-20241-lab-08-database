# Banco de DNAs adicional para o projeto DNAProfiler

Este repositório contém 2 bases de dados de DNA para testa o seu DNAProfiler:

- **data/small/database.csv:** base pequena contendo 3 indíviduos e 3 STRs de comprimento fixo
- **data/large/database.csv:** base grande contendo 23 indivíduos e 8 STRs de comprimento diverso

## Repostas:
```
Rode seu programa: ./dnaprofiler -d data/small/database.csv -s data/large/1.txt. Sua saída deve ser: Bob.
Rode seu programa: ./dnaprofiler -d data/small/database.csv -s data/large/2.txt. Sua saída deve ser: No match.
Rode seu programa: ./dnaprofiler -d data/small/database.csv -s data/large/3.txt. Sua saída deve ser: No match.
Rode seu programa: ./dnaprofiler -d data/small/database.csv -s data/large/4.txt. Sua saída deve ser: Alice.
Rode seu programa: ./dnaprofiler -d data/large/database.csv -s data/large/5.txt. Sua saída deve ser: Lavender.
Rode seu programa: ./dnaprofiler -d data/large/database.csv -s data/large/6.txt. Sua saída deve ser: Luna.
Rode seu programa: ./dnaprofiler -d data/large/database.csv -s data/large/7.txt. Sua saída deve ser: Ron.
Rode seu programa: ./dnaprofiler -d data/large/database.csv -s data/large/8.txt. Sua saída deve ser: Ginny.
Rode seu programa: ./dnaprofiler -d data/large/database.csv -s data/large/9.txt. Sua saída deve ser: Draco.
Rode seu programa: ./dnaprofiler -d data/large/database.csv -s data/large/10.txt. Sua saída deve ser: Albus.
Rode seu programa: ./dnaprofiler -d data/large/database.csv -s data/large/11.txt. Sua saída deve ser: Hermione.
Rode seu programa: ./dnaprofiler -d data/large/database.csv -s data/large/12.txt. Sua saída deve ser: Lily.
Rode seu programa: ./dnaprofiler -d data/large/database.csv -s data/large/13.txt. Sua saída deve ser: No match.
Rode seu programa: ./dnaprofiler -d data/large/database.csv -s data/large/14.txt. Sua saída deve ser: Severus.
Rode seu programa: ./dnaprofiler -d data/large/database.csv -s data/large/15.txt. Sua saída deve ser: Sirius.
Rode seu programa: ./dnaprofiler -d data/large/database.csv -s data/large/16.txt. Sua saída deve ser: No match.
Rode seu programa: ./dnaprofiler -d data/large/database.csv -s data/large/17.txt. Sua saída deve ser: Harry.
Rode seu programa: ./dnaprofiler -d data/large/database.csv -s data/large/18.txt. Sua saída deve ser: No match.
Rode seu programa: ./dnaprofiler -d data/large/database.csv -s data/large/19.txt. Sua saída deve ser: Fred.
Rode seu programa: ./dnaprofiler -d data/large/database.csv -s data/large/20.txt. Sua saída deve ser: No match.
```
