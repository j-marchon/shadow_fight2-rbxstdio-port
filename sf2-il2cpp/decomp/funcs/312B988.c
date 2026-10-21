// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$ICONPKJNHCP @ RVA 0x312B988

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine__ICONPKJNHCP
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *pDVar2;
  DG_Tweening_Core_DOGetter_long__o *pDVar3;
  DG_Tweening_Core_DOSetter_long__o *pDVar4;
  DG_Tweening_Core_TweenerCore_long__long__NoOptions__o *pDVar5;
  DG_Tweening_TweenCallback_o *callback;
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *extraout_x1;
  DG_Tweening_Sequence_o **ppDVar6;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar7;
  int64_t endValue;
  float fVar8;
  float fVar9;
  
  if ((DAT_04566696 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<long>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<long>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ExpAndMoneyLine_GEPPKNKMHEE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ExpAndMoneyLine_GOPCEIJEELD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ExpAndMoneyLine_IGFOCPCDHJN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ExpAndMoneyLine_LGKAMGAJOCJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ExpAndMoneyLine_OOFDHGENFIG__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04566696 = 1;
    method = extraout_x1;
  }
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DG_Tweening_DOTween_TypeInfo,method);
  }
  pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  ppDVar6 = &(__this->fields).HCLACPMIFEB;
  *ppDVar6 = pDVar2;
  thunk_FUN_01c20e04(ppDVar6,pDVar2);
  pNVar7 = (__this->fields).moneyCount;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar7 = (__this->fields).exp;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pDVar3 = (DG_Tweening_Core_DOGetter_long__o *)
               thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<long>_TypeInfo);
      DG_Tweening_Core_DOGetter<long>___ctor();
      pDVar4 = (DG_Tweening_Core_DOSetter_long__o *)
               thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<long>_TypeInfo);
      DG_Tweening_Core_DOSetter<long>___ctor();
      endValue = (__this->fields).ODEAKOGFMPE;
      fVar8 = (__this->fields).moneyAddTime;
      fVar9 = (__this->fields).HIPCFGDMJGF;
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar5 = DG_Tweening_DOTween__To(pDVar3,pDVar4,endValue,fVar8 + fVar9,(MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__Append
                ((__this->fields).HCLACPMIFEB,(DG_Tweening_Tween_o *)pDVar5,(MethodInfo *)0x0);
      pDVar3 = (DG_Tweening_Core_DOGetter_long__o *)
               thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<long>_TypeInfo);
      DG_Tweening_Core_DOGetter<long>___ctor();
      pDVar4 = (DG_Tweening_Core_DOSetter_long__o *)
               thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<long>_TypeInfo);
      DG_Tweening_Core_DOSetter<long>___ctor();
      pDVar5 = DG_Tweening_DOTween__To
                         (pDVar3,pDVar4,(__this->fields).PBPKEPIIAEJ,
                          (__this->fields).moneyAddTime + (__this->fields).HIPCFGDMJGF,
                          (MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__Join
                ((__this->fields).HCLACPMIFEB,(DG_Tweening_Tween_o *)pDVar5,(MethodInfo *)0x0);
      pDVar2 = (__this->fields).HCLACPMIFEB;
      callback = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
      DG_Tweening_TweenCallback___ctor();
      DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar2,callback,(MethodInfo *)0x0);
      return;
    }
  }
  __this_00 = (__this->fields).JLKPBAGACID;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

