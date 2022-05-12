size(400,400);
int x1 = 200;//widht/2
int x2 = 200;//widht/2
int y1 = 200;//height/2
int y2 = 200;//height/2
int n = 100;
int m = 1;
for(int i = 1; i <= n; i++){
  if (i % 2 == 0)m = 1;
  else m = -1;
  x2 = x1 + 10*i*m;
  line(x1, y1, x2, y2);
  x1 = x2;
  y1 = y2;
  y2 = y1 +10*i*m;
  line(x1, y1, x2, y2);
  x1 = x2;
  y1 = y2;

}
save("espiral.png");
