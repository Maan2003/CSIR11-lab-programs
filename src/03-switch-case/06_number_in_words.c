#include <stdio.h>

// returns the number of bytes written to out_buf
int digit_to_words(int n, char* out_buf) {
  switch (n) {
  case 1:
    strcpy(out_buf, "one ");
    return 4;

  case 2:
    strcpy(out_buf, "two ");
    return 4;

  case 3:
    strcpy(out_buf, "three ");
    return 6;

  case 4:
    strcpy(out_buf, "four ");
    return 5;

  case 5:
    strcpy(out_buf, "five ");
    return 5;

  case 6:
    strcpy(out_buf, "six ");
    return 4;

  case 7:
    strcpy(out_buf, "seven ");
    return 6;

  case 8:
    strcpy(out_buf, "eight ");
    return 6;

  case 9:
    strcpy(out_buf, "nine ");
    return 5;

  case 10:
    strcpy(out_buf, "ten ");
    return 4;

  case 11:
    strcpy(out_buf, "eleven ");
    return 7;

  case 12:
    strcpy(out_buf,"twelve ");
    return 7;

  case 13:
    strcpy(out_buf, "thirteen ");
    return 9;

  case 14:
    strcpy(out_buf, "fourteen ");
    return 9;

  case 15:
    strcpy(out_buf, "fifteen ");
    return 8;

  case 16:
    strcpy(out_buf, "sixteen ");
    return 8;

  case 17:
    strcpy(out_buf, "seventeen ");
    return 10;

  case 18:
    strcpy(out_buf, "eighteen ");
    return 9;

  case 19:
    strcpy(out_buf, "nineteen ");
    return 9;

  case 0:
    return 0;
  }
}

int prefix_for_digit(int n, char* out_buf) {
  switch (n) {
  case 1:
    return -1;

  case 2:
    strcpy(out_buf, "twenty ");
    return 7;

  case 3:
    strcpy(out_buf, "thirty ");
    return 7;

  case 4:
    strcpy(out_buf, "fourty ");
    return 7;

  case 5:
    strcpy(out_buf, "fifty ");
    return 6;

  case 6:
    strcpy(out_buf, "sixty ");
    return 6;

  case 7:
    strcpy(out_buf, "seventy ");
    return 8;

  case 8:
    strcpy(out_buf, "eighty ");
    return 7;

  case 9:
    strcpy(out_buf, "ninety ");
    return 7;

  case 0:
    return -1;
  }
}

int ten_pow_to_words(int n, char* out_buf) {
  switch (n) {
  case 0:
    return 0;
  case 2:
    strcpy(out_buf, "hundered ");
    return 9;
  case 3:
    strcpy(out_buf, "thousand ");
    return 9;
  case 5:
    strcpy(out_buf, "lakh ");
    return 5;
  case 7:
    strcpy(out_buf, "crore ");
    return 6;
  }
  return -1;
}

void print_num(int n, char* buf) {
  int order = 0;
  int temp = n;
  // get the order
  while(temp != 0) {
    order += 1;
    temp /= 10;
  }

  if(order == 0) {
    strcpy(buf, "zero");
    return;
  }
  while(order != 0) {
    int ten_to_ord = pow(10, order - 1);
    int dig = n / ten_to_ord;

    // dry run
    if (ten_pow_to_words(order - 1, buf) == -1) {
      int two_dig = n / (ten_to_ord / 10);
      if(two_dig < 20) {
	buf += digit_to_words(two_dig, buf);
      } else {
	buf += prefix_for_digit(dig, buf);
	buf += digit_to_words(two_dig % 10, buf);
      }
      buf += ten_pow_to_words(order - 2, buf);
      order -= 2;
      n %= ten_to_ord / 10;
    }
    else {
      int written = digit_to_words(dig, buf);
      buf += written;
      if (written) {
	buf += ten_pow_to_words(order - 1, buf);
      }
      order -= 1;
      n %= ten_to_ord;
    }
  }
}

int main()
{
  int n, flag = 0;
  printf("Enter n --> ");
  scanf("%d", &n);
  char buf[100];

  print_num(n, &buf[0]);

  puts(buf);
}
