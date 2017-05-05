  //int32_t pulses = 1920; // pulses per revolution
  //double circumference = 30.9211; // the wheels circumference
  int32_t rightpos; 
  int32_t leftpos;
  int32_t tmprightpos;
  int32_t tmpleftpos;
  int32_t startTurnRightPos;
  int32_t startTurnLeftPos;
  //int32_t encoderVinkel1 = 350;
  int32_t runDistance = 400;
  double degreeToEncoder=21.67;
  double timeLastLoop = 0;
  double cmToEncoder = (1920/30.9211);


  bool CalculationsDoneAvoid(){
    return true;
    }

  bool TurnDoneAvoid(){
    return false;
    }

  bool MoveDoneAvoid(){
    return false;
    }

    
  void CalculateAvoid(){
  
  }

  void TurnValidateAvoid(){
  
  }

  void MovnvalidateAvoid(){
  
  }

  void ConsiderResultAvoid(){
  
  }
  

