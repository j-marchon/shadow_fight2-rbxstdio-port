// Nekki.SF2.GUI.ProgressButton$$SetPercentage @ RVA 0x30ADAA0

void Nekki_SF2_GUI_ProgressButton__SetPercentage
               (Nekki_SF2_GUI_ProgressButton_o *__this,float MGMCFABFCIF,float FKIENOGJHNN,
               MethodInfo *method)

{
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *pDVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  float endValue;
  float fVar2;
  
  if ((DAT_045661ba & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ProgressButton_CCPHMDPNFKM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ProgressButton_PJEPCOCGGMH__);
    DAT_045661ba = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_ProgressButton__CCPABLFBFFA(__this,method);
  endValue = (__this->fields).FFAANJKJBFJ;
  fVar2 = (__this->fields).CCIKLAFHFAH;
  if (MGMCFABFCIF <= endValue) {
    endValue = MGMCFABFCIF;
  }
  if (MGMCFABFCIF < fVar2) {
    endValue = fVar2;
  }
  if ((__this->fields).CPCHMIPKLCO != endValue) {
    if (FKIENOGJHNN / 60.0 == 0.0) {
      Nekki_SF2_GUI_ProgressButton__PNJAKFADLMH(__this,endValue,method_00);
      return;
    }
    getter = (DG_Tweening_Core_DOGetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    DG_Tweening_Core_DOGetter<float>___ctor();
    setter = (DG_Tweening_Core_DOSetter_float__o *)
             thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
    DG_Tweening_Core_DOSetter<float>___ctor();
                    /* try { // try from 031adbc8 to 032add37 has its CatchHandler @ 031adbc8
                       catch() { ... } // from try @ 031adbc8 with catch @ 031adbc8
                       catch() { ... } // from try @ 031ade58 with catch @ 031adbc8
                       catch() { ... } // from try @ 031adf58 with catch @ 031adbc8
                       catch() { ... } // from try @ 031adfe0 with catch @ 031adbc8
                       catch() { ... } // from try @ 031ae1f4 with catch @ 031adbc8
                       catch() { ... } // from try @ 031ae208 with catch @ 031adbc8 */
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar1 = DG_Tweening_DOTween__To(getter,setter,endValue,FKIENOGJHNN / 60.0,(MethodInfo *)0x0);
    (__this->fields).OGBOMAHLDKN = (DG_Tweening_Tween_o *)pDVar1;
    thunk_FUN_01c20e04(&(__this->fields).OGBOMAHLDKN);
    return;
  }
  return;
}

