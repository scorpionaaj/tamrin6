#include <stdio.h>
#include <string.h>


char users[10][20] = {"Ali", "Reza", "Sara", "Maryam", "Mohammad", "Zahra", "Hossein", "Narges", "Amir", "Fatemeh"};


int is_user(char name[20]) {
  for (int i = 0; i < 10; i++) {
    if (strcmp(users[i], name) == 0) {
      return 1;

    }
  }
  return 0;

}


void add_user(char name[20]) {
  for (int i = 0; i < 10; i++) {
    if (strlen(users[i]) == 0) {
      strcpy(users[i], name);

      break;
    }
  }
}

int main() {
  char name[20];

  printf("لطفا نام خود را وارد کنید:\n");
  scanf("%s", name);

  if (is_user(name)) {

    printf("با موفقیت وارد شدید.\n");
  } else {
    add_user(name);

    printf("کاربر جدید خوش آمدید. نام شما %s است.\n", name);
  }
  return 0;
}
