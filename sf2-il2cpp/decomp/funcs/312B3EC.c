// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$VisibleExpAndMoney @ RVA 0x312B3EC

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__VisibleExpAndMoney
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,bool CCOCAIEPCOJ,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_Func_long__string__o *pSVar4;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar5;
  
  if ((DAT_04566695 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566695 = 1;
  }
  pNVar5 = (__this->fields).exp;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).exp;
    pSVar2 = System_Int64__ToString((int64_t)&(__this->fields).LOGNCHJEHMN,(MethodInfo *)0x0);
    if (pNVar5 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) goto LAB_0322b52c;
    Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar5,pSVar2,(MethodInfo *)0x0);
    pNVar5 = (__this->fields).exp;
    if ((pNVar5 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0322b52c;
    UnityEngine_GameObject__SetActive(pUVar3,CCOCAIEPCOJ,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields).moneyCount;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pSVar4 = (__this->fields).BHBICCNLODE;
  if (pSVar4 != (System_Func_long__string__o *)0x0) {
    pNVar5 = (__this->fields).moneyCount;
    pSVar2 = (System_String_o *)
             (*(code *)(pSVar4->fields).super.super.invoke_impl)
                       ((pSVar4->fields).super.super.method_code,(__this->fields).PGGDJIGFIHK,
                        (pSVar4->fields).super.super.method);
    if (pNVar5 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
      Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar5,pSVar2,(MethodInfo *)0x0);
      pNVar5 = (__this->fields).moneyCount;
      if ((pNVar5 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,CCOCAIEPCOJ,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0322b52c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

