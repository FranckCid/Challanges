public boolean posNeg(int a, int b, boolean negative) {
  if(negative){
    if((a < 0 && b < 0))
      return negative;
    return false;
  }
  if(a < 0 && b > 0)
    return true;
  if(a > 0 && b < 0)
    return true;
  return false;
}
