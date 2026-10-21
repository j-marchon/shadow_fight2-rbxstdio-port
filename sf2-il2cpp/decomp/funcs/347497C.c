// Nekki.SF2.GUI.Map.BattleButton$$SetAlpha @ RVA 0x347497C

void Nekki_SF2_GUI_Map_BattleButton__SetAlpha
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,float HFEIFAJHLCK,float LFJGFLNMBMC,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_0456831e & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattleButton_AJEEBHALGCM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattleButton_GFFKCDMGLNJ__);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    DAT_0456831e = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Map_BattleButton__CCPABLFBFFA(__this,method);
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if ((0.0 < LFJGFLNMBMC) && (bVar1)) {
    getter = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    setter = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar2 = DG_Tweening_DOTween__To(getter,setter,HFEIFAJHLCK,LFJGFLNMBMC,(MethodInfo *)0x0);
    (__this->fields).IDMFMIPALLP = (DG_Tweening_Tween_o *)pDVar2;
    thunk_FUN_01c20e04(&(__this->fields).IDMFMIPALLP);
    return;
  }
  Nekki_SF2_GUI_Map_BattleButton__CNOCKOGHKJO(__this,HFEIFAJHLCK,method_00);
  return;
}

