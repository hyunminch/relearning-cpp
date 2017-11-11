namespace nitrogenice {
  class Vector {
  public:
    explicit Vector(int s);

    double& operator[](int i);

    int size();
  private:
    double* elem;

    int sz;
  };
}
