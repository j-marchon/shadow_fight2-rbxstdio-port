// LBMOOFGGPEB$$LLCONNGHGKD @ RVA 0x31D31F0

void LBMOOFGGPEB__LLCONNGHGKD(LBMOOFGGPEB_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_object__o *pSVar2;
  Nekki_SF2_GUI_TimerLabel_o *pNVar3;
  
                    /* try { // try from 032d3204 to 033d320f has its CatchHandler @ 032d40ec */
  if ((DAT_04566cbf & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566cbf = 1;
    method = extraout_x1;
  }
  pSVar2 = (__this->fields).FBKGGPDECHB;
  if (pSVar2 != (System_Action_object__o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(__this->fields).PKADGMAGGMK,
               (pSVar2->fields).super.super.method);
    method = extraout_x1_00;
  }
  pNVar3 = (__this->fields).NFCJGLPMIHH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 032d3258 to 033d325f has its CatchHandler @ 032d40f0 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).NFCJGLPMIHH;
    if (pNVar3 != (Nekki_SF2_GUI_TimerLabel_o *)0x0) {
      Nekki_SF2_GUI_TimerLabel__set_CurrentTime
                (pNVar3,(__this->fields).JAODINPKJLN,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

