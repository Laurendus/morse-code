// kurz = 500ms
// lang = 1000ms
// kurze Pause = 500ms (zwischen "kurz" oder "lang")
// lange Pause = 1000ms (zwischen Buchstaben)
// lange lange Pause = 1500ms (zwischen Wörtern)
// end Pause = 2000ms (Ende der Übertragung)

int sensorEingang = A0;
int sensorWert = analogRead(sensorEingang);

bool lightDetector() {
	if(sensorWert > x){
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

	int x = sensorWert + toleranz;

	Serial.begin(9600);
	pinMode ()
}

void loop () {
    bool light = lightDetector();
    switch(light) {
        case true:									// 1
            delay(500);
            light = lightDetector();
            switch(light) {
                case true:							// 11

                    break;
				case false:							// 10 => .
					ausgabe[charAt] = "E";
					delay(500);
					light = lightDetector();
					switch(light) {
						case true:					// 101
							ausgabe[charAt] = "I";
							delay(500);
							light = lightDetector();
							switch (light) {
								case true:			// 1011
										ausgabe[charAt] = "A";
									break;
								case false:			//1010
										charAt++;
									break;
							}
						break;
						case false:					// 100 => E
						charAt++;
						break;
					}

					break;
            }
            break;
        case false:							//false
            break;
    }
}
