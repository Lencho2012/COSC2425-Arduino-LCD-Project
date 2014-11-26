
void PlayMusic::song2(int bpm) {       //   Castlevania - Poison Mind - BACKWARDS!
    
    int melody[] = {nC5, nG5, nDS5, nG5, nC5, nG5, nDS5, nG5,
        nD5, nG5, nF5, nG5, nD5, nG5, nF5, nG5,
        nC5, nG5, nDS5, nG5, nC5, nG5, nDS5, nG5,
        nC5, nG5, nDS5, nG5, nC5, nG5, nDS5, nG5,
        nC5, nGS5, nF5, nGS5, nC5, nGS5, nF5, nGS5,
        nC5, nG5, nDS5, nG5, nC5, nG5, nDS5, nG5,
        nD5, nG5, nF5, nG5, nD5, nG5, nF5, nG5,
        nC5, nG5, nF5, nG5, nC5, nG5, nF5, nG5};
    
    // Array of all the note durations in order. Number is the note type. 16 = 16th note, 4 = 4th note, etc.
    int duration[] = {16};
    
    for (int note = 63; note > 0; note--) {
        int noteDuration = 240000/duration[0]/bpm;  // duration in ms
        toneAC(melody[note], 1, noteDuration, 1);
        delay(noteDuration*4/3);
    }
    
    toneAC();
}

void PlayMusic::song3(int bpm) {        //DEMO ALL REGULAR NOTES
    
    int melody[] = {nC4, nCS4, nD4, nDS4, nE4, nF4, nFS4, nG4, nGS4, nA4, nAS4, nB4, nC5}
    
    int duration[] = {8};
    
    for (int note = 0; note < 13; note++) {
        int noteDuration = 240000/duration[0]/bpm;  // duration in ms
        toneAC(melody[note], 1, noteDuration, 1);
        delay(noteDuration*4/3);
    }
    toneAC();
}

void PlayMusic::song4(int bpm) {    //demo extra notes
    
    int melody[] = {nCS5, nD5, nDS5, nE5, nF5, nFS5, nG5, nGS5, nA5, nAS5, nB5, nC6};
    
    int duration[] = {4};
    
    for (int note = 0; note < 12; note++) {
        int noteDuration = 240000/duration[0]/bpm;  // duration in ms
        toneAC(melody[note], 1, noteDuration, 1);
        delay(noteDuration*4/3);
    }
    toneAC();
  
}
