#include <kazi.c>
#include <stdmovement.c> // std movement

int main(void) {
  int count = 0, biya_register = 0;
  speakf("৩ বার বল, কবুল");

  while (3) {
    if (listenf("কবুল") == 1) {
      count++;
    }
    if (count == 3) {
      biya_register = 1;
      escape();
    }
  }

  if (biya_bari_kisu_khai_nai() == 1) {
    মনে_মনে_speakf("না খেয়ে আইসিস কেন");
    return_biya_bari();
  }
}