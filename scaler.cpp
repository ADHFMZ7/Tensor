class Scaler
{
  public: 
  Scaler(float value=0.0, float grad=0.0)
  {
    value = value;
    grad  = grad;
  }

  Scaler operator +(Scaler const &other)
  {
    Scaler res;
    res.value = value = other.value;
    
    return res;
  }

  Scaler operator -(Scaler const &other)
  {
    Scaler res;
    res.value = value = other.value;
    
    return res;
  }

  Scaler operator *(Scaler const &other)
  {
    Scaler res;
    res.value = value = other.value;
    
    return res;
  }
private:
  float value;    
  float grad;
  
};






