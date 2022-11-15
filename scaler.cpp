class Scaler
{

  Scaler(float value=0.0, float grad=0.0)
  {
     
    float value = value;
    float grad  = grad;

    float _backward()
    {
      return 1.0;
    }
    void* _backward = _backward; 
  }
   
  Scaler operator +(Scaler const &other)
  {
    Scaler res;
    res.value = value = a.value;
    
    float _backward()
    {
      this->grad = other.grad
      other.grad = this->grad
    }
    this->_backward = _backward;
    return res;
  }

  

};
