// Nekki.SF2.GUI.Pvp.SelectModule.BLNDOKIIEMO$$MoveNext @ RVA 0x3178B68

bool Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO__MoveNext
               (Nekki_SF2_GUI_Pvp_SelectModule_BLNDOKIIEMO_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  NCNCKGBEGGF_o *__this_00;
  Il2CppObject **ppIVar5;
  Nekki_SF2_GUI_Pvp_SelectModule_o *pNVar6;
  float NACILJPLKBG;
  undefined1 auVar7 [16];
  ulong uVar4;
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = __this;
  if ((DAT_0456696c & 1) == 0) {
    auVar7 = FUN_01bab630(&NCNCKGBEGGF_TypeInfo);
    DAT_0456696c = 1;
  }
  uVar4 = auVar7._0_8_;
  iVar1 = (__this->fields).__1__state;
  pNVar6 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    uVar3 = EDFDANKEBGF__ACAAGIAPGAG((MethodInfo *)0x0);
    uVar4 = (ulong)uVar3;
    if (pNVar6 == (Nekki_SF2_GUI_Pvp_SelectModule_o *)0x0) {
LAB_03278c2c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(uVar4);
    }
    bVar2 = false;
    (pNVar6->fields).LGJBHOIAOOG = false;
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (pNVar6 == (Nekki_SF2_GUI_Pvp_SelectModule_o *)0x0) goto LAB_03278c2c;
    NACILJPLKBG = (pNVar6->fields).selectorMoveTime;
    __this_00 = (NCNCKGBEGGF_o *)thunk_FUN_01bda818(NCNCKGBEGGF_TypeInfo,auVar7._8_8_);
    NCNCKGBEGGF___ctor(__this_00,NACILJPLKBG,(MethodInfo *)0x0);
    ppIVar5 = &(__this->fields).__2__current;
    *ppIVar5 = (Il2CppObject *)__this_00;
    thunk_FUN_01c20e04(ppIVar5,__this_00);
    bVar2 = true;
    (__this->fields).__1__state = 1;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

