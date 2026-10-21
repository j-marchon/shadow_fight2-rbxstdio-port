// Nekki.SF2.GUI.Fight.PointsTable$$set_LeftScore @ RVA 0x3529854

void Nekki_SF2_GUI_Fight_PointsTable__set_LeftScore
               (Nekki_SF2_GUI_Fight_PointsTable_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int32_t *piVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
  if ((DAT_04568a11 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a11 = 1;
  }
  piVar3 = &(__this->fields).OHAPNGPPJPH;
  if (*piVar3 != CJNHFNHJHPE) {
    pNVar4 = (__this->fields).leftScoreText;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar4 = (__this->fields).leftScoreText;
      (__this->fields).OHAPNGPPJPH = CJNHFNHJHPE;
      pSVar2 = System_Int32__ToString((int32_t)piVar3,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03629900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                  (pNVar4,pSVar2,(pNVar4->klass->vtable)._75_set_text.method);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

