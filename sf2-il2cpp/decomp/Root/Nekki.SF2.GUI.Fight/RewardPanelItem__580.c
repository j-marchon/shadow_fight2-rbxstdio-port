// TypeDefIndex 580
// Namespace: Nekki.SF2.GUI.Fight
// [RequireComponent(typeof(RectTransform))]
// public class RewardPanelItem : MonoBehaviour
// Fields:
//   private ResolutionImage _image; // 0x20
//   private Text _text; // 0x28
//   private Sequence HOJHFHLCPNL; // 0x30

// ===== private void PEPJOGNOLPB()  [RVA 0x35B1EB0]
// Nekki.SF2.GUI.Fight.RewardPanelItem$$PEPJOGNOLPB @ RVA 0x35B1EB0

void Nekki_SF2_GUI_Fight_RewardPanelItem__PEPJOGNOLPB
               (Nekki_SF2_GUI_Fight_RewardPanelItem_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).HOJHFHLCPNL;
  if (*ppDVar1 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar1,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}


// ===== public void SetTextLerpValue(float IMCJLJNEMKH, float CGLPGJBDIDL, float JDIDBCGAMGG)  [RVA 0x35B1EE8]
// Nekki.SF2.GUI.Fight.RewardPanelItem$$SetTextLerpValue @ RVA 0x35B1EE8

void Nekki_SF2_GUI_Fight_RewardPanelItem__SetTextLerpValue
               (Nekki_SF2_GUI_Fight_RewardPanelItem_o *__this,float IMCJLJNEMKH,float CGLPGJBDIDL,
               float JDIDBCGAMGG,MethodInfo *method)

{
  Il2CppObject *__this_00;
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  DG_Tweening_Tween_o *t_00;
  DG_Tweening_TweenCallback_o *callback;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  DG_Tweening_Sequence_o **ppDVar2;
  
  if ((DAT_04568ea1 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RewardPanelItem_NLOGCLAKJFB_CNIONHFINIF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RewardPanelItem_NLOGCLAKJFB_MJCKMECOGIF__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_RewardPanelItem_NLOGCLAKJFB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RewardPanelItem_PEPJOGNOLPB__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<float,_float,_FloatOptions>>__
                );
    DAT_04568ea1 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_RewardPanelItem_NLOGCLAKJFB_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].monitor = __this;
    *(float *)&__this_00[1].klass = CGLPGJBDIDL;
    thunk_FUN_01c20e04(&__this_00[1].monitor,__this);
    Nekki_SF2_GUI_Fight_RewardPanelItem__PEPJOGNOLPB(__this,method_00);
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    getter = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    setter = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
    t = DG_Tweening_DOTween__To(getter,setter,JDIDBCGAMGG,IMCJLJNEMKH,(MethodInfo *)0x0);
    t_00 = (DG_Tweening_Tween_o *)
           DG_Tweening_TweenSettingsExtensions__SetEase<object>
                     ((Il2CppObject *)t,5,
                      Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<float,_float,_FloatOptions>>__
                     );
    pDVar1 = DG_Tweening_TweenSettingsExtensions__Append(pDVar1,t_00,(MethodInfo *)0x0);
    ppDVar2 = &(__this->fields).HOJHFHLCPNL;
    *ppDVar2 = pDVar1;
    thunk_FUN_01c20e04(ppDVar2);
    pDVar1 = *ppDVar2;
    callback = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
    ;
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar1,callback,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(string HCAAAAMDCNO, string EHNFGMGKCHO, float PFIFJCMHGGB, int ABMDLEIKNBO)  [RVA 0x35B2110]
// Nekki.SF2.GUI.Fight.RewardPanelItem$$Init @ RVA 0x35B2110

void Nekki_SF2_GUI_Fight_RewardPanelItem__Init
               (Nekki_SF2_GUI_Fight_RewardPanelItem_o *__this,System_String_o *HCAAAAMDCNO,
               System_String_o *EHNFGMGKCHO,float PFIFJCMHGGB,int32_t ABMDLEIKNBO,MethodInfo *method
               )

{
  bool bVar1;
  UnityEngine_Transform_o *transform;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_04568ea2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ea2 = 1;
  }
  pNVar3 = (__this->fields)._image;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._image;
    if (pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_036b228c;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar3,HCAAAAMDCNO,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._image;
    if (pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_036b228c;
    (*(pNVar3->klass->vtable)._45_SetNativeSize.methodPtr)
              (pNVar3,(pNVar3->klass->vtable)._45_SetNativeSize.method);
    pNVar3 = (__this->fields)._image;
    if (pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_036b228c;
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalScale(transform,PFIFJCMHGGB,(MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty(EHNFGMGKCHO,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._text;
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    if (bVar1) {
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                (pUVar2,EHNFGMGKCHO,(pUVar2->klass->vtable)._75_set_text.method);
      if (ABMDLEIKNBO < 1) {
        return;
      }
      pUVar2 = (__this->fields)._text;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        UnityEngine_UI_Text__set_resizeTextMaxSize(pUVar2,ABMDLEIKNBO,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._text;
        if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
          UnityEngine_UI_Text__set_fontSize(pUVar2,ABMDLEIKNBO,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_036b228c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35B2290]
// Nekki.SF2.GUI.Fight.RewardPanelItem$$.ctor @ RVA 0x35B2290

void Nekki_SF2_GUI_Fight_RewardPanelItem___ctor
               (Nekki_SF2_GUI_Fight_RewardPanelItem_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void OnDestroy()  [RVA 0x35B2298]
// Nekki.SF2.GUI.Fight.RewardPanelItem$$OnDestroy @ RVA 0x35B2298

void Nekki_SF2_GUI_Fight_RewardPanelItem__OnDestroy
               (Nekki_SF2_GUI_Fight_RewardPanelItem_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).HOJHFHLCPNL;
  if (*ppDVar1 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar1,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}

