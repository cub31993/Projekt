class Player
{
  private:
    float x, y, speed, gravity;
    bool movingLeft, movingRight, jumping;
    
  public:
    float getX(void);
    float getY(void);
    
    void moveLeft(void);
    void moveRight(void);
    void jump(void);
    void setSpeed(float);
    
    void update();
    void draw();
};