// TypeDefIndex 2603
// Namespace: Nekki.SF2.GUI.Fight
// public class RaidDamageResultContent : RaidEndFightBaseContent
// Fields:
//   private LabelAlias _BaseDmgValue; // 0x28
//   private LabelAlias _MissileDmgValue; // 0x30
//   private LabelAlias _TotalDmgValue; // 0x38
//   private LabelAlias _HintText; // 0x40
//   private string _RaidRoundAdvice; // 0x48
//   private string _RaidFightTimeout; // 0x50

// ===== public void .ctor()  [RVA 0x33ABAC0]
// Nekki.SF2.GUI.Fight.RaidDamageResultContent$$.ctor @ RVA 0x33ABAC0

void Nekki_SF2_GUI_Fight_RaidDamageResultContent___ctor
               (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *__this,MethodInfo *method)

{
                    /* try { // try from 034abae4 to 035abaef has its CatchHandler @ 034ab6e0 */
  if ((DAT_04567d0e & 1) == 0) {
                    /* try { // try from 034abaf0 to 035abaf7 has its CatchHandler @ 034abaf8 */
    FUN_01bab630(&StringLiteral_10961/*"RaidRoundAdvice"*/);
                    /* catch() { ... } // from try @ 034aba7c with catch @ 034abaf8
                       catch() { ... } // from try @ 034abaf0 with catch @ 034abaf8 */
                    /* try { // try from 034abafc to 035abf87 has its CatchHandler @ 034abafc
                       catch() { ... } // from try @ 034abafc with catch @ 034abafc
                       catch() { ... } // from try @ 034ac938 with catch @ 034abafc
                       catch() { ... } // from try @ 034ac9d0 with catch @ 034abafc
                       catch() { ... } // from try @ 034acb64 with catch @ 034abafc
                       catch() { ... } // from try @ 034acb6c with catch @ 034abafc
                       catch() { ... } // from try @ 034acd58 with catch @ 034abafc */
    FUN_01bab630(&StringLiteral_10846/*"RaidFightTimeout"*/);
    DAT_04567d0e = 1;
  }
  (__this->fields)._RaidRoundAdvice = StringLiteral_10961/*"RaidRoundAdvice"*/;
  thunk_FUN_01c20e04();
  (__this->fields)._RaidFightTimeout = StringLiteral_10846/*"RaidFightTimeout"*/;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Fight_RaidEndFightBaseContent___ctor
            ((Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void HCIIGPFJFDO()  [RVA 0x33ABB44]
// Nekki.SF2.GUI.Fight.RaidDamageResultContent$$HCIIGPFJFDO @ RVA 0x33ABB44

void Nekki_SF2_GUI_Fight_RaidDamageResultContent__HCIIGPFJFDO
               (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  CHDGOFBHAFI_o *pCVar2;
  int64_t iVar3;
  Il2CppObject *arg1;
  MethodInfo *extraout_x1;
  int32_t *piVar4;
  System_String_o *pSVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  int32_t local_28;
  int32_t local_24;
  
  if ((DAT_04567d0f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_22448/*"{0}{1}"*/);
    DAT_04567d0f = 1;
    method = extraout_x1;
  }
  pNVar6 = (__this->fields)._HintText;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar2 != (CHDGOFBHAFI_o *)0x0) {
    iVar3 = OOBBAGLCFPF__EMCFJLGHAOE((pCVar2->fields).AABMLCNHHPN,(MethodInfo *)0x0);
    pNVar6 = (__this->fields)._HintText;
    if ((float)(int)((float)iVar3 / 1000.0) <= 0.0) {
      pSVar5 = (__this->fields)._RaidFightTimeout;
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_28 = LIIFLGALGNK__HLMBDJOGONJ(1,5,(MethodInfo *)0x0);
      piVar4 = &local_28;
    }
    else {
      pSVar5 = (__this->fields)._RaidRoundAdvice;
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_24 = LIIFLGALGNK__HLMBDJOGONJ(1,8,(MethodInfo *)0x0);
      piVar4 = &local_24;
    }
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,piVar4);
    pSVar5 = System_String__Format
                       (StringLiteral_22448/*"{0}{1}"*/,(Il2CppObject *)pSVar5,arg1,(MethodInfo *)0x0);
    if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar6,pSVar5,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(bool MKFEFOONDMO)  [RVA 0x33ABCEC]
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


// ===== public void OnButtonOkClick()  [RVA 0x33ABEDC]
// Nekki.SF2.GUI.Fight.RaidDamageResultContent$$OnButtonOkClick @ RVA 0x33ABEDC

void Nekki_SF2_GUI_Fight_RaidDamageResultContent__OnButtonOkClick
               (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields).super.NHNIOGOEAJB;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

