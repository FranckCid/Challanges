public String notString(String str) {
  if(str.length() > 2){
    if(str.substring(0, 3).contains("not"))
      return str;
  }
  return "not " + str;
}
