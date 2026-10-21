// Nekki.SF2.GUI.Fight.RaidDamageResultContent$$Init @ RVA 0x33ABCEC

void Nekki_SF2_GUI_Fight_RaidDamageResultContent__Init
               (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *__this,bool MKFEFOONDMO,
               MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  int32_t CJNHFNHJHPE_00;
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MGNPHCAAEIO_ABAALAENAKC_o *pMVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
  if ((DAT_04567d10 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567d10 = 1;
  }
  if (!MKFEFOONDMO) {
    return;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar3 = MGNPHCAAEIO_TypeInfo->static_fields->FDIJMKPILBI;
  if (pMVar3 != (MGNPHCAAEIO_ABAALAENAKC_o *)0x0) {
    CJNHFNHJHPE = (pMVar3->fields).MAOLKFCJGLD;
    CJNHFNHJHPE_00 = (pMVar3->fields).HPPAGNLEOEJ;
    pNVar4 = (__this->fields)._BaseDmgValue;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar4 = (__this->fields)._BaseDmgValue;
      if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = BJFCCEEPHOF__NHECJOHFFBI(CJNHFNHJHPE,(MethodInfo *)0x0);
      if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_034abed8;
      (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                (pNVar4,pSVar2,(pNVar4->klass->vtable)._75_set_text.method);
    }
    pNVar4 = (__this->fields)._MissileDmgValue;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar4 = (__this->fields)._MissileDmgValue;
      if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = BJFCCEEPHOF__NHECJOHFFBI(CJNHFNHJHPE_00,(MethodInfo *)0x0);
      if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_034abed8;
      (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                (pNVar4,pSVar2,(pNVar4->klass->vtable)._75_set_text.method);
    }
    pNVar4 = (__this->fields)._TotalDmgValue;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1;
    if (bVar1) {
      pNVar4 = (__this->fields)._TotalDmgValue;
      if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = BJFCCEEPHOF__NHECJOHFFBI(CJNHFNHJHPE_00 + CJNHFNHJHPE,(MethodInfo *)0x0);
      if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_034abed8;
      (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                (pNVar4,pSVar2,(pNVar4->klass->vtable)._75_set_text.method);
      method_00 = extraout_x1_00;
    }
    Nekki_SF2_GUI_Fight_RaidDamageResultContent__HCIIGPFJFDO(__this,method_00);
    return;
  }
LAB_034abed8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

