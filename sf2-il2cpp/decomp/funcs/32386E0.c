// LBMBHDPPOOH.PDGEBHKHMLI$$MoveNext @ RVA 0x32386E0

bool LBMBHDPPOOH_PDGEBHKHMLI__MoveNext(LBMBHDPPOOH_PDGEBHKHMLI_o *__this,MethodInfo *method)

{
  int iVar1;
  NCNCKGBEGGF_o *__this_00;
  System_Collections_IEnumerator_o **ppSVar2;
  MethodInfo *method_00;
  Il2CppObject **ppIVar3;
  LBMBHDPPOOH_o *__this_01;
  float NACILJPLKBG;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_0456703a & 1) == 0) {
    auVar4 = FUN_01bab630(&NCNCKGBEGGF_TypeInfo);
    DAT_0456703a = 1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_01 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_01 == (LBMBHDPPOOH_o *)0x0) goto LAB_033387a8;
    ppSVar2 = &(__this_01->fields).AIHIJKKCDNO;
    *ppSVar2 = (System_Collections_IEnumerator_o *)0x0;
    thunk_FUN_01c20e04(ppSVar2,0);
    LBMBHDPPOOH__NBNOEKGHMFG(__this_01,method_00);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_01 != (LBMBHDPPOOH_o *)0x0) {
      NACILJPLKBG = (__this_01->fields).GGBDGJAEEBA;
      __this_00 = (NCNCKGBEGGF_o *)thunk_FUN_01bda818(NCNCKGBEGGF_TypeInfo);
      NCNCKGBEGGF___ctor(__this_00,NACILJPLKBG,(MethodInfo *)0x0);
      ppIVar3 = &(__this->fields).__2__current;
      *ppIVar3 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar3,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_033387a8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
  }
  return false;
}

