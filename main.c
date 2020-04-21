void * syscall5(long, long, long, long, long, long);

int main() {
  char s[3];
  s[0] = 'H';
  s[1] = 'i';
  s[2] = '\n';
  syscall5(1, 1, (long)s, (long)3, 0, 0);
  return 0;
}
