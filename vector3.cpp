class Vector3
{
 protected:
    float x, y, z;

 public:
    Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z)
    {
   
    }    
    void inverse(float v[3])
    {
        v[0] = -v[0];  // x
        v[1] = -v[1];  // y
        v[2] = -v[2];  // z
    }
};