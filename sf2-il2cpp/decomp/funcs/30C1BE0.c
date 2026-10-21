// Nekki.SF2.Core.ApplicationController.DMIGJKEJFBN$$MoveNext @ RVA 0x30C1BE0

bool Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN__MoveNext
               (Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN_o *__this,MethodInfo *method)

{
  int iVar1;
  NCNCKGBEGGF_o *__this_00;
  Il2CppObject **ppIVar2;
  float NACILJPLKBG;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04566291 & 1) == 0) {
    auVar3 = FUN_01bab630(&NCNCKGBEGGF_TypeInfo);
    DAT_04566291 = 1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    Nekki_SF2_Core_ApplicationController__Quit(auVar3._0_8_);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    NACILJPLKBG = (__this->fields).p_delay;
    __this_00 = (NCNCKGBEGGF_o *)thunk_FUN_01bda818(NCNCKGBEGGF_TypeInfo,auVar3._8_8_);
    NCNCKGBEGGF___ctor(__this_00,NACILJPLKBG,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = (Il2CppObject *)__this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}

