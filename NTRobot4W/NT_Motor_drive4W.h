
void motor(int pin, int Speeds) {
  int _SpeedsA;
  int _SpeedsB;
  int _SpeedsC;
  int _SpeedsD;
  if (pin == 1) {
    _SpeedsA = abs(Speeds);
    _SpeedsA = _SpeedsA * 2.55;
    if (_SpeedsA > 255){_SpeedsA = 255;}
    else if (_SpeedsA < -255){_SpeedsA = -255;}
    if (Speeds > 0) {
      ledcWrite(6, 255 - abs(_SpeedsA));
      ledcWrite(7, 255);
    }
    else if (Speeds <= 0) {
      ledcWrite(6, 255);
      ledcWrite(7, 255 - abs(_SpeedsA));
    }
  }
  if (pin == 2) {
    _SpeedsB = abs(Speeds);
    
    _SpeedsB = _SpeedsB * 2.55;
    if (_SpeedsB > 255){_SpeedsB = 255;}
    else if (_SpeedsB < -255){_SpeedsB = -255;}
    if (Speeds > 0) {
      ledcWrite(4, 255 - abs(_SpeedsB));
      ledcWrite(5, 255);
    }
    else if (Speeds <= 0) {
      ledcWrite(4, 255);
      ledcWrite(5, 255 - abs(_SpeedsB));
    }
  }
  if (pin == 3) {
    _SpeedsC = abs(Speeds);
    
    _SpeedsC = _SpeedsC * 2.55;
    if (_SpeedsC > 255){_SpeedsC = 255;}
    else if (_SpeedsC < -255){_SpeedsC = -255;}
    if (Speeds > 0) {
      ledcWrite(3, 255 - abs(_SpeedsC));
      ledcWrite(2, 255);
    }
    else if (Speeds <= 0) {
      ledcWrite(3, 255);
      ledcWrite(2, 255 - abs(_SpeedsC));
    }
  }
  if (pin == 4) {
    _SpeedsD = abs(Speeds);
    
    _SpeedsD = _SpeedsD * 2.55;
    if (_SpeedsD > 255){_SpeedsD = 255;}
    else if (_SpeedsD < -255){_SpeedsD = -255;}
    if (Speeds > 0) {
      ledcWrite(8, 255 - abs(_SpeedsD));
      ledcWrite(9, 255);
    }
    else if (Speeds <= 0) {
      ledcWrite(8, 255);
      ledcWrite(9, 255 - abs(_SpeedsD));
    }
  }
}
void MT(int speeda, int speedb,int time_speed){ 
  motor(1,speeda);
  motor(2,speedb);
  delay(time_speed);
}
void ao(){
  ledcWrite(2, 1);
  ledcWrite(3, 1);
  ledcWrite(4, 1);
  ledcWrite(5, 1);
  ledcWrite(6, 1);
  ledcWrite(7, 1);
  ledcWrite(8, 1);
  ledcWrite(9, 1);

}
void aot(int _time){
  motor(1,0);
  motor(2,0);
  delay(_time);
}
void fd(int _Speed){
  motor(1,_Speed);
  motor(2,_Speed);
  motor(3,_Speed);
  motor(4,_Speed);
}
void bk(int _Speed){
  motor(1, - _Speed);
  motor(2, - _Speed);
  motor(3, - _Speed);
  motor(4, - _Speed);
}
void sl(int _Speed){
  motor(1,-_Speed);
  motor(2,-_Speed);
  motor(3,_Speed);
  motor(4,_Speed);
}
void sr(int _Speed){
  motor(1,_Speed);
  motor(2,_Speed);
  motor(3,-_Speed);
  motor(4,-_Speed);
}
void fd2(int _Speed){
  motor(1,_Speed);
  motor(2,_Speed);
}
void bk2(int _Speed){
  motor(1, - _Speed);
  motor(2, - _Speed);
}
void sl2(int _Speed){
  motor(1, - _Speed);
  motor(2,  _Speed);
}
void sr2(int _Speed){
  motor(1,  _Speed);
  motor(2, - _Speed);
}

