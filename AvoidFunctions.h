
  bool CalculationsDoneAvoid(){
    return true;
    }

  bool TurnDoneAvoid(){
    return false;
    }

  bool MoveDoneAvoid(){
    return false;
    }

  bool ShouldAvoid(){
    if(RobotAx <10){
    return true;
    }
    if(RobotAx >150){
    return true;
    }
    if(RobotAy <10){
    return true;
    }
    if(RobotAy >150){
    return true;
    }
    
    if(abs(RobotAx - RobotBx)<30){
      return true;
    }
    
    
    if(abs(RobotAy - RobotBy)<30){
      return true;
    }
    
    return false;
  }
    
  void CalculateAvoid(){
      planState = wait;
  }

  void TurnValidateAvoid(){
  
  }

  void MovnvalidateAvoid(){
  
  }

  void ConsiderResultAvoid(){
  
  }
  

