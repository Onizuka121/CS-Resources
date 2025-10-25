Impareremo a usare docker , docker-compose 

# Teoria 

un servizio è un'applicazione non installata nel pc , ma collegata ad un svr
con accesso 24h 

### Cosa è il self-hosting ? 

Ci da accesso a molti servizi avviati sul nostro svr ( Linux ) , accesso h24 ( con Internet ) 
esempi : 
- httpd , nginx : web 
- vikunja , planka : todo 
- cloud personale : nextcloud 
- streaming : navidrome , jellyfin , plex 
- hub per casa smart : home assistant 
- backup : immich , photoprism ( content multimediale ) 

### Vantaggi self-hosting  
 
- privacy 
- risparmio 
- custom
- apprendimento tecnico reale 

### Cosa è un container ?  

- bare metal : ( no VM )  installare servizi sulla macchina hardware  
- container : ambiente isolato con le sue dipendenze 
	vantaggi sono ripetibilità , modularità , isolamento ( a livello di security  )  


### Containers vs VM 

- livello di isolamento nei containers 
- avvio rapido nei containers 
- kernel condiviso nei containers 
- uso CPU basso nei containers 


### Cosa è Docker ? 

piattaforma open-source per creare e distribuire containers , più diffuso per la containerizzazione 

### Images in Docker 

template di sola lettura , come un screenshot di un sistema in quel momento , quindi possiamo avviare un container sempre da quel punto utilizzando il template

### Come funziona Docker 
- scarica image da un registry ( Docker Hub ) 
- crea il container 
- container eseguito in modo isolato 
- possibile eseguire più container ( assegnato un IP che possone comunicare )

### Vantaggi Docker 

- rapida install 
- update semplici 
- conf riproducibili e condivisibili 


---------------------------------


# Parte Pratica 

### Sintassi base 

```
docker run [opzioni] image [comando]

```

### Esempio 

```
docker run hello-world
```
- genera image hello-world 
- se non lo trova , lo scarica da DockerHub 
- crea container 
- esegue


### Esempio pratico apache 

```
docker run -d -p 8080:80 httpd
```

```
docker exec <nome-container> bash <comando all'interno del container>

```

esegue un processo dentro il container ( comando ) 
se aggiungiamo `-i` otteniamo un bash itterattivo 



### Aggiungiamo qualche opzione 

- `--r` : cancella in container quando esce 
- `-p` : porta 
- `--name` : dare un nome 
- `-v` : alias di volume , che crea un link tra una directory dell'host ed una interna del container , in questo modo si possono mantenere i dati anche dopo la distruzione del container 


Ricordare tutte queste opzioni diventano difficili , per questo c'è la possibilità di scrivere un file `.yaml` con **docker compose**. 

- `docker compose up -d` : con `-d` lo metto diciamo in modalità detuch
- `docker compose down` : stoppa il container e cancella ( anche il network creato in up)


### Dockerfile 

quando serve : 
- creare una image personalizzata 
- modificare una immagine già esistente
- automatizzare la configurazione 


```
FROM image:tag  # parti da questa image 
WORKDIR /app    # dir di lavoro del container
COPY . /app     # copia i file dall'host 
RUN comando     # comando da eseguire 
ENV VAR=valore 
EXPOSE 80:80    # quale porta interna deve aprire 
CMD ["comando" , "arg"]     # comando che esegue all'avvio il container 

```




















 























 






















 













