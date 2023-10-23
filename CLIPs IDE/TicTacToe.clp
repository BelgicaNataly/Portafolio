(deftemplate tablero
	(slot fila)
	(slot columna)
	(slot ficha )
)

(deffacts inicio
     (tablero (fila 1) (columna 1) (ficha v))
     (tablero (fila 1) (columna 2) (ficha v))
     (tablero (fila 1) (columna 3) (ficha v))
     (tablero (fila 2) (columna 1) (ficha v))
     (tablero (fila 2) (columna 2) (ficha v))
     (tablero (fila 2) (columna 3) (ficha v))
     (tablero (fila 3) (columna 1) (ficha v))
     (tablero (fila 3) (columna 2) (ficha v))
     (tablero (fila 3) (columna 3) (ficha v))
     (decide ninguno)
     (ganador ninguno)
)


;
;Regla que grafica el tablero
;

(defrule grafica
	 (declare (salience 10))
     (tablero (fila 1) (columna 1) (ficha ?f1))
     (tablero (fila 1) (columna 2) (ficha ?f2))
     (tablero (fila 1) (columna 3) (ficha ?f3))
     (tablero (fila 2) (columna 1) (ficha ?f4))
     (tablero (fila 2) (columna 2) (ficha ?f5))
     (tablero (fila 2) (columna 3) (ficha ?f6))
     (tablero (fila 3) (columna 1) (ficha ?f7))
     (tablero (fila 3) (columna 2) (ficha ?f8))
     (tablero (fila 3) (columna 3) (ficha ?f9))
	=>
	(printout t "        COLUMNA" crlf)
	(printout t "     | 1 | 2 | 3 |" crlf)
	(printout t "  ---|-----------|" crlf)
	(printout t "F  1 | ")
	(if (eq ?f1 v)
		then
        	(printout t " ")
        else
        (printout t ?f1)
    )
	(printout t " | ") 
	(if (eq ?f2 v)
		then
        	(printout t " ")
        else
        (printout t ?f2)
    )
	(printout t " | ") 
	(if (eq ?f3 v)
		then
        	(printout t " ")
        else
        (printout t ?f3)
    )
	(printout t " |" crlf)
	(printout t "I ---|-----------|" crlf)
	(printout t "L  2 | ") 
	(if (eq ?f4 v)
		then
        	(printout t " ")
        else
        (printout t ?f4)
    )
    (printout t " | ") 
    (if (eq ?f5 v)
		then
        	(printout t " ")
        else
        (printout t ?f5)
    )
    (printout t " | ") 
    (if (eq ?f6 v)
		then
        	(printout t " ")
        else
        (printout t ?f6)
    )
    (printout t " |" crlf)
	(printout t "A ---|-----------|" crlf)
	(printout t "   3 | ") 
	(if (eq ?f7 v)
		then
        	(printout t " ")
        else
        (printout t ?f7)
    )
    (printout t " | ") 
    (if (eq ?f8 v)
		then
        	(printout t " ")
        else
        (printout t ?f8)
    )
    (printout t " | ") 
    (if (eq ?f9 v)
		then
        	(printout t " ")
        else
        (printout t ?f9)
    )
    (printout t " |" crlf)
	(printout t "  ---|-----------|" crlf)
)


;
;Regla que le pregunta al usuario si desa empezar en caso contrario
;iniciara la ia 
;

(defrule decision
	=>
	(printout t "¿Desea iniciar el juego?," crlf "escriba si, caso contrario escriba no" crlf)
	(bind ?decidir (read))
		(if (eq ?decidir si)    
		then
		 (printout t "ES HORA DE EMPEZAR HUMANO" crlf)  
		 (assert (turno humano)))
		(if (eq ?decidir no)      
		then 
		 (printout t "EMPEZARA LA IA" crlf)
		 (assert (turno ia)))
)

;
;Regla que ingresa los datos por parte del humano
;

(defrule turno-humano
	(turno humano)
	(not (fila-columna ?f ?c))
	=>
	(printout t "Juega el humano" crlf)
	(printout t "Escoja su posicion" crlf)
	(printout t "Ingrese la fila y la columna:" crlf)
    (printout t "Fila:")
    (bind ?f (read)) 
    (printout t "Columna:")
    (bind ?c (read))
    (assert (fila-columna ?f ?c)) 
    (assert (verificar-posicion-correctos))
)

;
;Regla que permite verificar las posiciones que estan ocupadas
;
		
(defrule verificar-posicion-incorrectos
	(turno humano)
	?m<-(fila-columna ?f ?c)
	?v<-(verificar-posicion-correctos)
	(tablero (fila ?f) (columna ?c) (ficha ?p&~v))
	=>
	(printout t "Posición ocupada, vuelva a reintentar" crlf)
	(retract ?m ?v)
	(assert (turno humano))
)

;
;Regla que verifica que la posicion marcada por el usuario sea correcta
;

(defrule verificar-posicion-correctos
	?h <- (turno humano)
	?m <- (fila-columna ?f ?c)
	?v <- (verificar-posicion-correctos)
	?t <- (tablero (fila ?f) (columna ?c) (ficha v))
	=>
	(retract ?h ?m ?v)
	(modify ?t (ficha x))	
	(assert (turno ia))	
)

;
;Regla que hace que la ia tome el centro del tablero en caso de estar vacio
;

(defrule iniciar-partida-centro
	?i <- (turno ia)
	?t <- (tablero (fila 2) (columna 2) (ficha v))
	=>
	(retract ?i)
    (modify ?t (ficha o))
    (assert (turno humano))	
)
;
;Regla de que si el tablero esta vacio y el centro esta ocupado por el humano tomar la esquina
;

(defrule tomar-esquina
	(declare (salience 4))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	?t<-(tablero (fila 3) (columna 3) (ficha v))
	=>
	(retract ?i)
    (modify ?t (ficha o))
    (assert (turno humano))	
)

;
;Regla para tomar la esquina (1,3) en caso del que el jugador haya puesto en la esquina (1,1)
;


(defrule tomar-esquina-1-1
	(declare (salience 5))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 1) (columna 1) (ficha x))
	?t <- (tablero (fila 1) (columna 3) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)

(defrule tomar-esquina-1-1-2
	(declare (salience 6))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 1) (columna 2) (ficha x))
	(tablero (fila 3) (columna 1) (ficha x))
	?t <- (tablero (fila 1) (columna 1) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)

(defrule tomar-esquina-1-1-3
	(declare (salience 6))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 1) (columna 2) (ficha x))
	(tablero (fila 3) (columna 3) (ficha x))
	?t <- (tablero (fila 1) (columna 3) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)

;
;Regla para tomar la esquina (1,1) en caso del que el jugador haya puesto en la esquina (1,3)
;

(defrule tomar-esquina-1-3
	(declare (salience 5))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 1) (columna 3) (ficha x))
	?t <- (tablero (fila 1) (columna 1) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)

(defrule tomar-esquina-1-3-0
	(declare (salience 6))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 3) (columna 2) (ficha x))
	?t <- (tablero (fila 1) (columna 3) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)

(defrule tomar-esquina-1-3-1
	(declare (salience 6))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 1) (columna 1) (ficha x))
	(tablero (fila 3) (columna 2) (ficha x))
	?t <- (tablero (fila 3) (columna 1) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)

(defrule tomar-esquina-1-3-2
	(declare (salience 6))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 1) (columna 3) (ficha x))
	(tablero (fila 3) (columna 2) (ficha x))
	?t <- (tablero (fila 3) (columna 3) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)

;
;Regla para tomar la esquina (3,3) en caso del que el jugador haya puesto en la esquina (3,1)
;

(defrule tomar-esquina-3-1
	(declare (salience 5))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 3) (columna 1) (ficha x))
	?t <- (tablero (fila 3) (columna 3) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)

(defrule tomar-esquina-3-1-0
	(declare (salience 6))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 2) (columna 3) (ficha x))
	?t <- (tablero (fila 3) (columna 1) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)


(defrule tomar-esquina-3-1-1
	(declare (salience 6))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 2) (columna 3) (ficha x))
	(tablero (fila 3) (columna 1) (ficha x))
	?t <- (tablero (fila 3) (columna 3) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)


(defrule tomar-esquina-3-1-2
	(declare (salience 6))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 2) (columna 3) (ficha x))
	(tablero (fila 1) (columna 1) (ficha x))
	?t <- (tablero (fila 1) (columna 3) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)

;
;Regla para tomar la esquina (3,3) en caso del que el jugador haya puesto en la esquina (1,3)
;

(defrule tomar-esquina-3-3
	(declare (salience 5))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 3) (columna 3) (ficha x))
	?t <- (tablero (fila 1) (columna 3) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)


(defrule tomar-esquina-3-3-1
	(declare (salience 6))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 2) (columna 1) (ficha x))
	(tablero (fila 3) (columna 3) (ficha x))
	?t <- (tablero (fila 3) (columna 1) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)

(defrule tomar-esquina-3-3-2
	(declare (salience 6))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 2) (columna 1) (ficha x))
	(tablero (fila 1) (columna 3) (ficha x))
	?t <- (tablero (fila 1) (columna 1) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)



(defrule tomar-lateral-izquierda
	(declare (salience 6))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 3) (columna 3) (ficha x))
	(tablero (fila 1) (columna 1) (ficha x))
	?t <- (tablero (fila 2) (columna 1) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)


(defrule tomar-lateral-derecha
	(declare (salience 6))
	?i <- (turno ia)
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 1) (columna 3) (ficha x))
	(tablero (fila 3) (columna 1) (ficha x))
	?t <- (tablero (fila 2) (columna 3) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)

;
;Regla que termina de completar cualquier fila 
;

(defrule terminar-fila
  (declare (salience 100))
  ?i <- (turno ia)
  (tablero (fila ?f) (columna ?c1) (ficha o))
  (tablero (fila ?f) (columna ?c2&~?c1) (ficha o))
  ?t <- (tablero (fila ?f) (columna ?c3&~?c2&~?c1) (ficha v))
  =>
  (retract ?i)
  (modify ?t (ficha o))
)

;
;Regla que termina de completar cualquier columna 
;

(defrule terminar-columna
  (declare (salience 100))
  ?i <- (turno ia)
  (tablero (fila ?f1) (columna ?c) (ficha o))
  (tablero (fila ?f2&~?f1) (columna ?c) (ficha o))
  ?t <- (tablero (fila ?f3&~?f2&~?f1) (columna ?c) (ficha v))
  =>
  (retract ?i)
  (modify ?t (ficha o))
)

;
;Regla que termina una diagonal ya sea la diagonal principal o la inversa
;

(defrule terminar-diagonal
  (declare (salience 100))
  ?i <- (turno ia)
  (tablero (fila 2) (columna 2) (ficha o))
  (tablero (fila ?f&~2) (columna ?c&~2)(ficha o))
  ?t <- (tablero (fila ?f1&~?f&~2)(columna ?c1&~?c&~2)(ficha v))
  =>
  (retract ?i)
  (modify ?t (ficha o))
)


;
;Regla que impide que el jugador humano haga un tres en raya en fila
;

(defrule bloqueo-fila
  (declare (salience 10))
  ?i <- (turno ia)
  (tablero (fila ?f) (columna ?c1) (ficha x))
  (tablero (fila ?f) (columna ?c2&~?c1) (ficha x))
  ?t <- (tablero (fila ?f) (columna ?c3&~?c2&~?c1) (ficha v))
  =>
  (retract ?i)
  (modify ?t (ficha o))
  (assert (turno humano))
)

;
;Regla que impide que el jugador humano haga un tres en raya en columna
;

(defrule bloqueo-columna
  (declare (salience 10))
  ?i <- (turno ia)
  (tablero (fila ?f1) (columna ?c) (ficha x))
  (tablero (fila ?f2&~?f1) (columna ?c) (ficha x))
  ?t <- (tablero (fila ?f3&~?f2&~?f1) (columna ?c) (ficha v))
  =>
  (retract ?i)
  (modify ?t (ficha o))
  (assert (turno humano))
)

;
;Regla que impide que el jugador humano haga un tres en raya en diganal principal o inversa
;

(defrule bloqueo-diagonal
  (declare (salience 10))
  ?i <- (turno ia)
  (tablero (fila 2) (columna 2) (ficha x))
  (tablero (fila ?f&~2) (columna ?c&~2)(ficha x))
  ?t <- (tablero (fila ?f1&~?f&~2)(columna ?c1&~?c&~2)(ficha v))
  =>
  (retract ?i)
  (modify ?t (ficha o))
  (assert (turno humano))
)

;
;Regla que permite que se termine de completar el triquitraka cuando solo hace falta un casillero
;

(defrule seguir-jugando
	?i <- (turno ia)
	?t <-(tablero (fila ?f) (columna ?c) (ficha v))
	=>
	(retract ?i)
    (modify ?t (ficha o))
)

;
;Regla que permite que se termine de completar el triquitraka cuando hace falta dos casillero en
;la fila del medio, dandole el paso para que el jugador termine de completar
;

(defrule seguir-jugando-1
	(declare (salience 2))
	?i <- (turno ia)
	(tablero (fila 1) (columna 1) (ficha ~v))
	(tablero (fila 1) (columna 2) (ficha ~v))
	(tablero (fila 1) (columna 3) (ficha ~v))
	(tablero (fila 2) (columna 1) (ficha v))
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 3) (columna 1) (ficha ~v))
	(tablero (fila 3) (columna 2) (ficha ~v))
	(tablero (fila 3) (columna 3) (ficha ~v))
	?t <- (tablero (fila 2) (columna 3) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)

;
;Regla que permite que se termine de completar el triquitraka cuando hace falta dos casillero en
;columna del medio, dandole el paso para que el jugador humano termine de completar
;

(defrule seguir-jugando-2
	(declare (salience 2))
	?i <- (turno ia)
	(tablero (fila 1) (columna 1) (ficha ~v))
	(tablero (fila 1) (columna 3) (ficha ~v))
	(tablero (fila 2) (columna 1) (ficha ~v))
	(tablero (fila 2) (columna 2) (ficha ~v))
	(tablero (fila 2) (columna 3) (ficha ~v))
	(tablero (fila 3) (columna 1) (ficha ~v))
	(tablero (fila 3) (columna 2) (ficha v))
	(tablero (fila 3) (columna 3) (ficha ~v))
	?t <- (tablero (fila 1) (columna 2) (ficha v))
	=>
	(retract ?i)
	(modify ?t (ficha o))
    (assert (turno humano))	
)

;Reglas ganadoras
(defrule horizontal-gana
	(declare (salience 100))
	?h <- (ganador ninguno)
 	(tablero (fila ?f) (columna 1) (ficha ?s&~v))
 	(tablero (fila ?f) (columna 2) (ficha ?s))
 	(tablero (fila ?f) (columna 3) (ficha ?s))
 	=>
 	(retract ?h)
 	(assert (ganador ?s))
 	(printout t "-GANADOR- " ?s crlf)
)

(defrule vertical-gana
	(declare (salience 100))
	?h <- (ganador ninguno)
 	(tablero (fila 1) (columna ?c) (ficha ?s&~v))
 	(tablero (fila 2) (columna ?c) (ficha ?s))
 	(tablero (fila 3) (columna ?c) (ficha ?s))
 	=>
 	(retract ?h)
 	(assert (ganador ?s))
 	(printout t "-GANADOR- " ?s crlf)
)

(defrule diagonal-1-gana
	(declare (salience 100))
	?h <-(ganador ninguno)
 	(tablero (fila 1) (columna 1) (ficha ?s&~v))
 	(tablero (fila 2) (columna 2) (ficha ?s))
 	(tablero (fila 3) (columna 3) (ficha ?s))
 	=>
 	(retract ?h)
 	(assert (ganador ?s))
 	(printout t "-GANADOR- " ?s crlf)
)

(defrule diagonal-2-gana
	(declare (salience 100))
	?h <- (ganador ninguno)
 	(tablero (fila 1) (columna 3) (ficha ?s&~v))
 	(tablero (fila 2) (columna 2) (ficha ?s))
 	(tablero (fila 3) (columna 1) (ficha ?s))
 	=>
 	(retract ?h)
 	(assert (ganador ?s))
 	(printout t "-GANADOR- " ?s crlf)
)
;
;Reglas de empate
;
(defrule empate-1
(declare (salience 20))
	 (ganador ninguno)
	 (tablero (fila 1) (columna 1) (ficha ~v))
     (tablero (fila 1) (columna 2) (ficha ~v))
     (tablero (fila 1) (columna 3) (ficha ~v))
     (tablero (fila 2) (columna 1) (ficha ~v))
     (tablero (fila 2) (columna 2) (ficha ~v))
     (tablero (fila 2) (columna 3) (ficha ~v))
     (tablero (fila 3) (columna 1) (ficha ~v))
     (tablero (fila 3) (columna 2) (ficha ~v))
     (tablero (fila 3) (columna 3) (ficha ~v))
 	=>
 	(printout t "-EMPATE XO- " crlf)
)

