#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0

// define structure
struct store {
  char name[20];
  float price;
  int quantity;
};

// define fnction
struct store update(struct store product, float p, int q) {
  product.price += p;
  product.quantity += q;

  return product; // IMPORTANT
}
float mul(struct store stock) { return (stock.price) * (stock.quantity); }

// main()
int main(void) {
  float p_increment, value;
  int q_increment;

  struct store item = {"XYZ", 25.75, 20};

  printf("\nPut increment values: Price Inc, Quantity Inc");
  scanf("%f %d", &p_increment, &q_increment);
  // item is a structure type variable which will receive return value from
  // Update named function
  item = update(item, p_increment, q_increment);
  // careful, "item" will be passed as first argument inside finction call
  printf("Updated values:\nname\tprice\tquantity");
  printf("%s\t%f\t%d", item.name, item.price, item.quantity);

  value = mul(item); // item is a structure type variable

  printf("\n\nThe value of item = %f", value);
  // EOF
} // DONE