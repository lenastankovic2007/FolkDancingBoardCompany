#include "./mp3tf16p.h"

MP3Player mp3(10, 11);

void setup(void)
{
  mp3.initialize();
  delay(5000);
  mp3.playTrackNumber(1, 25,false);
}

void loop(void)
{
  
}