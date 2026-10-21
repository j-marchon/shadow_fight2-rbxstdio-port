// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$FinishAnimation @ RVA 0x312B810

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__FinishAnimation
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  int64_t *__this_00;
  System_String_o *pSVar2;
  int64_t iVar3;
  MethodInfo *in_x2;
  System_Func_long__string__o *pSVar4;
  DG_Tweening_Sequence_o **ppDVar5;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar6;
  
  if ((DAT_04566694 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566694 = 1;
  }
  ppDVar5 = &(__this->fields).HCLACPMIFEB;
  if (*ppDVar5 != (DG_Tweening_Sequence_o *)0x0) {
    in_x2 = (MethodInfo *)0x0;
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar5,false,(MethodInfo *)0x0);
    *ppDVar5 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar5,0);
  }
  ppDVar5 = &(__this->fields).FKHAMLFIAIG;
  if (*ppDVar5 != (DG_Tweening_Sequence_o *)0x0) {
    in_x2 = (MethodInfo *)0x0;
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar5,false,(MethodInfo *)0x0);
    *ppDVar5 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar5,0);
  }
  Nekki_SF2_GUI_Fight_ExpAndMoneyLine__VisibleExpAndMoney(__this,true,in_x2);
  pNVar6 = (__this->fields).exp;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = &(__this->fields).LOGNCHJEHMN;
    *__this_00 = (__this->fields).PBPKEPIIAEJ;
    pNVar6 = (__this->fields).exp;
    pSVar2 = System_Int64__ToString((int64_t)__this_00,(MethodInfo *)0x0);
    if (pNVar6 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) goto LAB_0322b968;
    Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar6,pSVar2,(MethodInfo *)0x0);
  }
  pNVar6 = (__this->fields).moneyCount;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  iVar3 = (__this->fields).ODEAKOGFMPE;
  pSVar4 = (__this->fields).BHBICCNLODE;
  (__this->fields).PGGDJIGFIHK = iVar3;
  if (pSVar4 != (System_Func_long__string__o *)0x0) {
    pNVar6 = (__this->fields).moneyCount;
    pSVar2 = (System_String_o *)
             (*(code *)(pSVar4->fields).super.super.invoke_impl)
                       ((pSVar4->fields).super.super.method_code,iVar3,
                        (pSVar4->fields).super.super.method);
    if (pNVar6 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
      Nekki_SF2_GUI_Fight_IconAndText__SetText(pNVar6,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0322b968:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

