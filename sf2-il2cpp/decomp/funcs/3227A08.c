// GNNIOHGGHAF.FMJJKFICHKL$$MoveNext @ RVA 0x3227A08

bool GNNIOHGGHAF_FMJJKFICHKL__MoveNext(GNNIOHGGHAF_FMJJKFICHKL_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *pNVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  UnityEngine_WaitForSeconds_o **ppUVar3;
  UniRx_SerialDisposable_o *__this_01;
  Il2CppObject **ppIVar4;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o **ppNVar5;
  GNNIOHGGHAF_o *pGVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_04566f81 & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04566f81 = 1;
  }
  iVar1 = (__this->fields).__1__state;
  pGVar6 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (pGVar6 == (GNNIOHGGHAF_o *)0x0) goto LAB_03327bb8;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    pNVar2 = Nekki_SF2_GUI_Dialogs_DownloadingScreen__get_Instance((MethodInfo *)0x0);
    ppNVar5 = &(__this->fields)._screen_5__2;
    *ppNVar5 = pNVar2;
    thunk_FUN_01c20e04(ppNVar5,pNVar2);
    if (((*ppNVar5 == (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *)0x0) ||
        (Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_Progress(*ppNVar5,0.0,(MethodInfo *)0x0),
        pGVar6 == (GNNIOHGGHAF_o *)0x0)) ||
       (*ppNVar5 == (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *)0x0)) goto LAB_03327bb8;
    Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_TitleAlias
              (*ppNVar5,(pGVar6->fields).FHPNAJENHNG,(MethodInfo *)0x0);
    (__this->fields)._alive_5__3 = 0.0;
    fVar7 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._timer_5__4 = fVar7;
    __this_00 = (UnityEngine_WaitForSeconds_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(__this_00,0.016666668,(MethodInfo *)0x0);
    ppUVar3 = &(__this->fields)._delay_5__5;
    *ppUVar3 = __this_00;
    thunk_FUN_01c20e04(ppUVar3,__this_00);
  }
  fVar7 = (__this->fields)._alive_5__3;
  if (fVar7 <= (pGVar6->fields).HLJCHNGJMLB) {
    fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._alive_5__3 = fVar7 + (fVar8 - (__this->fields)._timer_5__4);
    fVar7 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    pNVar2 = (__this->fields)._screen_5__2;
    (__this->fields)._timer_5__4 = fVar7;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_Progress
                (pNVar2,(__this->fields)._alive_5__3 / (pGVar6->fields).HLJCHNGJMLB,
                 (MethodInfo *)0x0);
      ppIVar4 = &(__this->fields).__2__current;
      *ppIVar4 = (Il2CppObject *)(__this->fields)._delay_5__5;
      thunk_FUN_01c20e04(ppIVar4);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  else {
    Nekki_SF2_GUI_Dialogs_DownloadingScreen__Destroy((MethodInfo *)0x0);
    __this_01 = (pGVar6->fields).PIGOLBGJAEA;
    if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_01 != (UniRx_SerialDisposable_o *)0x0) {
      UniRx_SerialDisposable__set_Disposable
                (__this_01,UniRx_Disposable_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      return false;
    }
  }
LAB_03327bb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

