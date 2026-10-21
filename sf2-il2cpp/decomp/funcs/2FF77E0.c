// JMDPBFOCHHP$$HKKGCOJHKGP @ RVA 0x2FF77E0

void JMDPBFOCHHP__HKKGCOJHKGP(JMDPBFOCHHP_o *__this,System_String_o *MFOBJMOIKBA,MethodInfo *method)

{
  JMDPBFOCHHP_o *method_00;
  JMDPBFOCHHP_o *extraout_x0;
  System_String_o *AAIHDEKMIJG;
  System_Action_o *pSVar1;
  
                    /* try { // try from 030f77e8 to 031f782b has its CatchHandler @ 030f7ed4 */
  method_00 = __this;
  if ((DAT_04565ab6 & 1) == 0) {
    method_00 = (JMDPBFOCHHP_o *)FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_04565ab6 = 1;
  }
  if (MFOBJMOIKBA != (System_String_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError((Il2CppObject *)MFOBJMOIKBA,(MethodInfo *)0x0);
    method_00 = extraout_x0;
  }
  pSVar1 = (__this->fields).FHJBJEIIMOB;
  if (pSVar1 != (System_Action_o *)0x0) {
    method_00 = (JMDPBFOCHHP_o *)
                (*(code *)(pSVar1->fields).super.super.invoke_impl)
                          ((pSVar1->fields).super.super.method_code,
                           (pSVar1->fields).super.super.method);
  }
  AAIHDEKMIJG = JMDPBFOCHHP__EMHGIBKDBOG((MethodInfo *)method_00);
  NEHNBJKKABI__MGLIGNDGBCN(AAIHDEKMIJG,(MethodInfo *)0x0);
  return;
}

