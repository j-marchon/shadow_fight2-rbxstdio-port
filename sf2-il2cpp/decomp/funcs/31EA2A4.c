// WideScreenController$$RunCustom @ RVA 0x31EA2A4

void WideScreenController__RunCustom(UnityEngine_RectTransform_o *JNPCENEINON,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_RectTransform_o *LCMJHHCNGBL;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float BLENDMCELBE;
  
  if ((DAT_04566d8a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04566d8a = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)JNPCENEINON,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    if (1.7777778 < (float)iVar2 / (float)iVar3) {
      if (JNPCENEINON == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 032ea368 to 033ea36f has its CatchHandler @ 032ea650 */
      LCMJHHCNGBL = (UnityEngine_RectTransform_o *)
                    UnityEngine_Transform__get_root
                              ((UnityEngine_Transform_o *)JNPCENEINON,(MethodInfo *)0x0);
      if (LCMJHHCNGBL == (UnityEngine_RectTransform_o *)0x0) {
        LCMJHHCNGBL = (UnityEngine_RectTransform_o *)0x0;
      }
      else if (LCMJHHCNGBL->klass != UnityEngine_RectTransform_TypeInfo) {
        LCMJHHCNGBL = (UnityEngine_RectTransform_o *)0x0;
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)LCMJHHCNGBL,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
                    /* try { // try from 032ea3bc to 033ea3cf has its CatchHandler @ 032ea63c */
        method_00 = extraout_x1_00;
        if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_01;
        }
        BLENDMCELBE = WideScreenController__MOFOODOFDIO(LCMJHHCNGBL,method_00);
                    /* try { // try from 032ea3e0 to 033ea3f3 has its CatchHandler @ 032ea620 */
        WideScreenController__NKLGCNHLBAF(JNPCENEINON,BLENDMCELBE,method_01);
        return;
      }
    }
  }
  return;
}

