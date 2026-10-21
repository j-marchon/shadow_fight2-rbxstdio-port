// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$Init @ RVA 0x312B2BC

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__Init
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,int64_t COAIOPFEFHM,
               int64_t DCDLMCEEOCC,System_Func_long__string__o *CDBMJENDHFM,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar2;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar3;
  System_Func_long__string__o **ppSVar4;
  
  if ((DAT_04566692 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566692 = 1;
  }
  ppSVar4 = &(__this->fields).BHBICCNLODE;
  *ppSVar4 = CDBMJENDHFM;
  (__this->fields).ABIOEEDDMJN = true;
  (__this->fields).PBPKEPIIAEJ = COAIOPFEFHM;
  (__this->fields).LOGNCHJEHMN = 0;
  (__this->fields).ODEAKOGFMPE = DCDLMCEEOCC;
  (__this->fields).PGGDJIGFIHK = 0;
  thunk_FUN_01c20e04(ppSVar4,CDBMJENDHFM);
  pNVar3 = (__this->fields).moneyCount;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).moneyCount;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar2 == (ACHLOMELAJE_o *)0x0) || (pNVar3 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Fight_IconAndText__SetIcon(pNVar3,(pAVar2->fields).FAAJGHKHEBI,(MethodInfo *)0x0);
  }
  Nekki_SF2_GUI_Fight_ExpAndMoneyLine__VisibleExpAndMoney(__this,false,method_00);
  return;
}

