// IKCANHIFLGJ$$KKGBFEKOKBE @ RVA 0x35C05C8

void IKCANHIFLGJ__KKGBFEKOKBE(IKCANHIFLGJ_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  int32_t startIndex;
  System_String_o *pSVar1;
  MethodInfo *in_x3;
  System_String_o *str0;
  
  if (HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0) {
    pSVar1 = IKCANHIFLGJ__KKGBFEKOKBE
                       (__this,(HEHMPFLAEGE->fields).LLBEKLPKDHK,(HEHMPFLAEGE->fields).ANAJGHJEEOC,
                        in_x3);
    GKLPDMLELJF__OFDBFMLANAH(HEHMPFLAEGE,pSVar1,(MethodInfo *)0x0);
    pSVar1 = (HEHMPFLAEGE->fields).FFOIEHLJLDA;
    if (pSVar1 != (System_String_o *)0x0) {
      startIndex = System_String__IndexOf(pSVar1,0x23,(MethodInfo *)0x0);
      if (-1 < startIndex) {
        str0 = (HEHMPFLAEGE->fields).LLBEKLPKDHK;
        pSVar1 = System_String__Substring(pSVar1,startIndex,(MethodInfo *)0x0);
        pSVar1 = System_String__Concat(str0,pSVar1,(MethodInfo *)0x0);
      }
                    /* try { // try from 036c063c to 037c0717 has its CatchHandler @ 036c063c
                       catch() { ... } // from try @ 036c063c with catch @ 036c063c
                       catch() { ... } // from try @ 036c0734 with catch @ 036c063c
                       catch() { ... } // from try @ 036c077c with catch @ 036c063c
                       catch() { ... } // from try @ 036c07ac with catch @ 036c063c */
      GKLPDMLELJF__GCAEKDKFFKK(HEHMPFLAEGE,pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

