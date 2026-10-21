// Nekki.SF2.GUI.Fight.TextAndMoneyLine$$KCHPGFNJJPA @ RVA 0x31502E8

void Nekki_SF2_GUI_Fight_TextAndMoneyLine__KCHPGFNJJPA
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Globalization_NumberFormatInfo_o *__this_01;
  DG_Tweening_Sequence_o *pDVar2;
  DG_Tweening_Core_DOGetter_long__o *pDVar3;
  DG_Tweening_Core_DOSetter_long__o *pDVar4;
  DG_Tweening_Core_TweenerCore_long__long__NoOptions__o *pDVar5;
  DG_Tweening_TweenCallback_o *callback;
  UnityEngine_Events_UnityEvent_o *__this_02;
  MethodInfo *extraout_x1;
  DG_Tweening_Sequence_o **ppDVar6;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar7;
  int64_t iVar8;
  float fVar9;
  
  if ((DAT_04566803 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_COHHMJJFAAD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_DKFLJLGIHMF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_FBJDHDNHOAC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_JFODEOJOHGB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_NCOHGDFHGHK__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<long>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<long>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&System_Globalization_NumberFormatInfo_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    DAT_04566803 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_TextAndMoneyLine_CIBOFJKMAAA_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_01 = (System_Globalization_NumberFormatInfo_o *)
                thunk_FUN_01bda818(System_Globalization_NumberFormatInfo_TypeInfo);
    System_Globalization_NumberFormatInfo___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (System_Globalization_NumberFormatInfo_o *)0x0) {
      System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
                (__this_01,StringLiteral_167,(MethodInfo *)0x0);
      __this_00[1].monitor = __this_01;
      thunk_FUN_01c20e04(&__this_00[1].monitor,__this_01);
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      ppDVar6 = &(__this->fields).FNMDIKCCJAN;
      *ppDVar6 = pDVar2;
      thunk_FUN_01c20e04(ppDVar6,pDVar2);
      pNVar7 = (__this->fields).moneyCount;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar7 = (__this->fields).rubyCount;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pDVar3 = (DG_Tweening_Core_DOGetter_long__o *)
                   thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<long>_TypeInfo);
          DG_Tweening_Core_DOGetter<long>___ctor();
          pDVar4 = (DG_Tweening_Core_DOSetter_long__o *)
                   thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<long>_TypeInfo);
          DG_Tweening_Core_DOSetter<long>___ctor();
          iVar8 = (__this->fields).ODEAKOGFMPE;
          fVar9 = (__this->fields).moneyAddTime;
          if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pDVar5 = DG_Tweening_DOTween__To(pDVar3,pDVar4,iVar8,fVar9,(MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__Append
                    ((__this->fields).FNMDIKCCJAN,(DG_Tweening_Tween_o *)pDVar5,(MethodInfo *)0x0);
          if (0 < (__this->fields).HGFBBMJNBPI) {
            pDVar3 = (DG_Tweening_Core_DOGetter_long__o *)
                     thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<long>_TypeInfo);
            DG_Tweening_Core_DOGetter<long>___ctor();
            pDVar4 = (DG_Tweening_Core_DOSetter_long__o *)
                     thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<long>_TypeInfo);
            DG_Tweening_Core_DOSetter<long>___ctor();
            iVar8 = (__this->fields).HGFBBMJNBPI;
            fVar9 = (__this->fields).moneyAddTime;
            if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pDVar5 = DG_Tweening_DOTween__To(pDVar3,pDVar4,iVar8,fVar9,(MethodInfo *)0x0);
            DG_Tweening_TweenSettingsExtensions__Join
                      (*ppDVar6,(DG_Tweening_Tween_o *)pDVar5,(MethodInfo *)0x0);
          }
          pDVar2 = *ppDVar6;
          callback = (DG_Tweening_TweenCallback_o *)
                     thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
          DG_Tweening_TweenCallback___ctor();
          DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar2,callback,(MethodInfo *)0x0);
          return;
        }
      }
      __this_02 = (__this->fields).JLKPBAGACID;
      if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__Invoke(__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

