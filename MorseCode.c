// kurz = 500ms
// lang = 1000ms
// kurze Pause = 500ms (zwischen "kurz" oder "lang")
// lange Pause = 1000ms (zwischen Buchstaben)
// lange lange Pause = 1500ms (zwischen Wörtern)
// end Pause = 2000ms (Ende der Übertragung)

bool lightDetector() {
	if(sensor > x){
		return true;
	} else {
		return false;
	}
}

void setup() {
    bool fertig = false;
    char ausgabe[];
    string ausgabeFertig;
    int charAt = 0;
}

void loop () {
    bool light = lightDetector();
    switch(light) {
        case true:									// true
            delay(500);
            light = lightDetector();
            switch(light) {
                case true:							// true true

                    break;
				case false:							// true false => .
					ausgabe[charAt] = "E";
					delay(500);
					light = lightDetector();
					switch(light) {
						case true:					//true false true

						break;
						case false:					// true false false => E
						charAt= charAt + 1;
						break;
					}

					break;
            }
            break;
        case false:							//false
            break;
    }
}
