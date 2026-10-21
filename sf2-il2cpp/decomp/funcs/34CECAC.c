// Nekki.SF2.GUI.Fight.RaitingString$$set_Value @ RVA 0x34CECAC

void Nekki_SF2_GUI_Fight_RaitingString__set_Value
               (Nekki_SF2_GUI_Fight_RaitingString_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_0456869e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456869e = 1;
  }
  pNVar2 = (__this->fields)._ratingValue;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._ratingValue;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035ced34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,CJNHFNHJHPE,(pNVar2->klass->vtable)._75_set_text.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

