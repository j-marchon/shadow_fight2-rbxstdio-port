// Nekki.SF2.GUI.Map.MoveableMapPanel$$INFGPIFPJGH @ RVA 0x3257410

void Nekki_SF2_GUI_Map_MoveableMapPanel__INFGPIFPJGH
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  DG_Tweening_TweenCallback_o *callback;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float duration;
  
  if ((DAT_04567174 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MoveableMapPanel_ACMFPMGPPEE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MoveableMapPanel_GFECOLFOILC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MoveableMapPanel_KILOIOEILFL__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04567174 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Map_MoveableMapPanel__FHHDIIMNKNJ(__this,method);
  (__this->fields).NEGADKBHGOM = 1;
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  (__this->fields).BGPAMNDALNP = pDVar1;
  thunk_FUN_01c20e04();
  duration = Nekki_SF2_GUI_Map_MoveableMapPanel__FHEANCOCLEL(__this,0.0,method_00);
  if (0.0 < duration) {
    pDVar1 = (__this->fields).BGPAMNDALNP;
    getter = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    setter = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    t = DG_Tweening_DOTween__To(getter,setter,0.0,duration,(MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__Append(pDVar1,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
    pDVar1 = (__this->fields).BGPAMNDALNP;
    callback = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
    ;
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar1,callback,(MethodInfo *)0x0);
    return;
  }
  Nekki_SF2_GUI_Map_MoveableMapPanel__ACMFPMGPPEE(__this,method_01);
  return;
}

