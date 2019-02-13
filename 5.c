char* longestPalindrome(char* s) {
  char *h = s;
  int retn=1;
  char *retp = h;
  while(*s) {
    char *l = s-1;
    char *r = s;

    // find duplicate
    while (*r && *r==*s) r++;
    int dup = (r - l - 1);

    // search
    while (l>=h && *r && *l==*r) {
      --l; ++r;
    }
    if ((r-l-1)>retn) {
      retn = (r-l-1);
      retp=l+1;
    }

    s+=dup;
    if (r==0) break;
  }
  retp[retn]=0;
  return retp;
}
