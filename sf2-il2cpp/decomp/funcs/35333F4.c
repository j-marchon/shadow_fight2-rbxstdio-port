// JJPNLEPEAFM$$IALCPMFBLHK @ RVA 0x35333F4

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__IALCPMFBLHK
          (AFFHKININGD_o *FBFPLEFCDOK,System_String_o *JEHFOBHMGJM,System_String_o *NJLKBEHCEKD,
          bool EGHMKECHFME,System_Action_int__o *BLMFLPJJMPF,MethodInfo *method)

{
  MPMBFKHOAKB_o *__this;
  System_String_o **ppSVar1;
  System_Action_int__o **ppSVar2;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar3;
  
  if ((DAT_04568a70 & 1) == 0) {
    FUN_01bab630(&MPMBFKHOAKB_TypeInfo);
    DAT_04568a70 = 1;
  }
  __this = (MPMBFKHOAKB_o *)thunk_FUN_01bda818(MPMBFKHOAKB_TypeInfo);
  MPMBFKHOAKB___ctor(__this,(MethodInfo *)0x0);
  if (__this != (MPMBFKHOAKB_o *)0x0) {
    (__this->fields).FAMILKPGDOC = FBFPLEFCDOK;
    thunk_FUN_01c20e04(&__this->fields,FBFPLEFCDOK);
    ppSVar1 = &(__this->fields).IKIINEOIIAK;
    *ppSVar1 = JEHFOBHMGJM;
    thunk_FUN_01c20e04(ppSVar1,JEHFOBHMGJM);
    ppSVar1 = &(__this->fields).JMMIJNFKAAN;
    *ppSVar1 = NJLKBEHCEKD;
    thunk_FUN_01c20e04(ppSVar1,NJLKBEHCEKD);
    (__this->fields).MIMPBIMAAHL = EGHMKECHFME;
    ppSVar2 = &(__this->fields).MIMKJIKCPGP;
    *ppSVar2 = BLMFLPJJMPF;
    thunk_FUN_01c20e04(ppSVar2,BLMFLPJJMPF);
    pNVar3 = GCIFMNHADDF__ACDDKABEBAP(10,(Il2CppObject *)__this,(MethodInfo *)0x0);
    return pNVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

