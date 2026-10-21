// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$CMCCFDDPKKJ @ RVA 0x312B55C

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__CMCCFDDPKKJ
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  DG_Tweening_Sequence_o *pDVar4;
  Il2CppObject *__this_00;
  DG_Tweening_Core_DOGetter_int__o *getter;
  DG_Tweening_Core_DOSetter_int__o *setter;
  DG_Tweening_Core_TweenerCore_int__int__NoOptions__o *t;
  MethodInfo *extraout_x1;
  DG_Tweening_Sequence_o **ppDVar5;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_04566693 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<int>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<int>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ExpAndMoneyLine_LDIMAGHKOPB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ExpAndMoneyLine_NLGIILGAJGL_AICJGKEGNGI__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ExpAndMoneyLine_NLGIILGAJGL_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566693 = 1;
    method = extraout_x1;
  }
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DG_Tweening_DOTween_TypeInfo,method);
  }
  pDVar4 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  ppDVar5 = &(__this->fields).FKHAMLFIAIG;
  *ppDVar5 = pDVar4;
  thunk_FUN_01c20e04(ppDVar5,pDVar4);
  pNVar6 = (__this->fields).moneyCount;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (Il2CppObject *)
                thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ExpAndMoneyLine_NLGIILGAJGL_TypeInfo);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    pNVar6 = (__this->fields).moneyCount;
    if ((pNVar6 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) &&
       (iVar3 = Nekki_SF2_GUI_Fight_IconAndText__GetFontSize(pNVar6,(MethodInfo *)0x0),
       __this_00 != (Il2CppObject *)0x0)) {
      *(int32_t *)&__this_00[1].klass = iVar3;
      pNVar6 = (__this->fields).moneyCount;
      if (pNVar6 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
        Nekki_SF2_GUI_Fight_IconAndText__SetBestFit(pNVar6,true,(MethodInfo *)0x0);
        getter = (DG_Tweening_Core_DOGetter_int__o *)
                 thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<int>_TypeInfo);
        DG_Tweening_Core_DOGetter<int>___ctor();
        setter = (DG_Tweening_Core_DOSetter_int__o *)
                 thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<int>_TypeInfo);
        DG_Tweening_Core_DOSetter<int>___ctor();
        iVar1 = *(int *)&__this_00[1].klass;
        fVar8 = (__this->fields).moneyAddTime;
        fVar9 = (__this->fields).HIPCFGDMJGF;
        if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        fVar7 = (float)iVar1 * 1.2;
        iVar3 = -0x80000000;
        if (fVar7 != INFINITY) {
          iVar3 = (int)fVar7;
        }
        t = DG_Tweening_DOTween__To(getter,setter,iVar3,fVar8 + fVar9,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__Append
                  (*ppDVar5,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

