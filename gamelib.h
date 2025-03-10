//DEBUG



//Definizioni per classi
typedef enum {
    principe, doppleganger
    } tipo_giocatore;

//Definizioni per tipi stanza
typedef enum {
    corridoio, scala, sala_banchetto, magazzino, posto_guardia, prigione, armeria, moschea, torre, bagni
    } Tipo_stanza;

//Definizioni per tipi trabocchetto
typedef enum {
    nessuno, tegola, lame, caduta, burrone
    } Tipo_trabocchetto;

//Definizioni per tipi tesoro
typedef enum {
    nessun_tesoro, verde_veleno, blu_guarigione, rosso_aumenta_vita, spada_tagliente, scudo
    } Tipo_tesoro;

//Definizioni per tipi nemici (Un'anno per arrivarci)
typedef enum {
    nessun_nemico, scheletro, guardia, jaffar
    } Nemico;

//Struct dati giocatore
typedef struct Giocatore {

    char nome_giocatore[20]; 
    tipo_giocatore classe_giocatore;
    struct Stanza* posizione; //Memorizzatore pos. mappa
    unsigned char p_vita_max; //Vita massima
    unsigned char p_vita;  //Vita attuale
    unsigned char dadi_attacco; //N. dadi attacco
    unsigned char dadi_difesa;  //N. dadi difesa
    unsigned char numero_scappate; //N. di volte che il giocatore e fuggito
    unsigned char trabocchetto_ignorato;
}Giocatore;

//Struct dati stanza
typedef struct Stanza {

    struct Stanza* stanza_destra;
    struct Stanza* stanza_sinistra;   
    struct Stanza* stanza_sopra;  //Puntatori a stanze nelle deiverse direzioni
    struct Stanza* stanza_sotto;
    struct Stanza* stanza_precedente; 

    Tipo_stanza stanza;              //Tipo stanza
    Tipo_trabocchetto trabocchetto; //Tipo trabocchetto in stanza
    Tipo_tesoro tesoro;            //Tipo tesoro in stanza
    unsigned char trabocchetto_attivato;

}Stanza;

//Funzioni del gioco
void imposta_gioco();
void gioca();
void termina_gioco();
void crediti();

extern struct Stanza* pFirst;
extern int n_giocatori;
