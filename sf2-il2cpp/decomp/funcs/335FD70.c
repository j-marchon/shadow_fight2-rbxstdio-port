// PEJCGNNAPHG.NFAPJCNAOGN$$MoveNext @ RVA 0x335FD70

bool PEJCGNNAPHG_NFAPJCNAOGN__MoveNext(PEJCGNNAPHG_NFAPJCNAOGN_o *__this,MethodInfo *method)

{
  int iVar1;
  NCNCKGBEGGF_o *__this_00;
  OLKKAIFGGAK_o *__this_01;
  PEJCGNNAPHG_o *CPECAEHDDDB;
  Il2CppObject **ppIVar2;
  float NACILJPLKBG;
  
  if ((DAT_04567a7d & 1) == 0) {
    FUN_01bab630(&NCNCKGBEGGF_TypeInfo);
    DAT_04567a7d = 1;
  }
  iVar1 = (__this->fields).__1__state;
  CPECAEHDDDB = (__this->fields).__4__this;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).model;
    (__this->fields).__1__state = -1;
    if (__this_01 == (OLKKAIFGGAK_o *)0x0) goto LAB_0345fe2c;
    OLKKAIFGGAK__AHNAGGGOLBK(__this_01,CPECAEHDDDB,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (CPECAEHDDDB != (PEJCGNNAPHG_o *)0x0) {
      NACILJPLKBG = (CPECAEHDDDB->fields).BJIKPLGMOMI;
      __this_00 = (NCNCKGBEGGF_o *)thunk_FUN_01bda818(NCNCKGBEGGF_TypeInfo);
      NCNCKGBEGGF___ctor(__this_00,NACILJPLKBG,(MethodInfo *)0x0);
      ppIVar2 = &(__this->fields).__2__current;
      *ppIVar2 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar2,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_0345fe2c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

