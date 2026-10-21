// Nekki.SF2.GUI.LockScreen$$MHENCNPBING @ RVA 0x3539D68

void Nekki_SF2_GUI_LockScreen__MHENCNPBING
               (Nekki_SF2_GUI_LockScreen_o *__this,bool CMPKOOEKFKF,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_TweenCallback_o *callback;
  DG_Tweening_Tween_o *pDVar2;
  DG_Tweening_Tween_o **ppDVar3;
  
  if ((DAT_04568abc & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_LockScreen_HHGJCPADNOJ__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    DAT_04568abc = 1;
  }
  ppDVar3 = &(__this->fields).OCBEBGEKOIA;
  if (*ppDVar3 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(*ppDVar3,false,(MethodInfo *)0x0);
    *ppDVar3 = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(ppDVar3,0);
  }
  if (CMPKOOEKFKF) {
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    pDVar1 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                       (pDVar1,(__this->fields).rotationInterval,(MethodInfo *)0x0);
    callback = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
    ;
    DG_Tweening_TweenCallback___ctor();
    pDVar1 = DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar1,callback,(MethodInfo *)0x0);
    pDVar2 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                       ((Il2CppObject *)pDVar1,-1,0,
                        Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    (__this->fields).OCBEBGEKOIA = pDVar2;
    thunk_FUN_01c20e04(ppDVar3,pDVar2);
    return;
  }
  return;
}

