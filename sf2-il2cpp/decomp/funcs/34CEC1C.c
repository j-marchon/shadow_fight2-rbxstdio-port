// Nekki.SF2.GUI.Fight.RaitingString$$get_Value @ RVA 0x34CEC1C

System_String_o *
Nekki_SF2_GUI_Fight_RaitingString__get_Value
          (Nekki_SF2_GUI_Fight_RaitingString_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_0456869d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456869d = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._ratingValue;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._ratingValue;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035cec94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(pNVar3->klass->vtable)._74_get_text.methodPtr)
                         (pNVar3,(pNVar3->klass->vtable)._74_get_text.method);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return (System_String_o *)0x0;
}

