class Kisi{
private:
  string adi;
protected:
  string soyadi;

public:
  static int nesneSayisi;
  Kisi(string a,string s){
    std::cout << "Nesne Oluşturuluyor..." << '\n';
    this->adi=a;
    this->soyadi=s;
    Kisi::nesneSayisi++;
  }

}





string yazdir(){
  return this->adi+""+this->soyadi;
}
