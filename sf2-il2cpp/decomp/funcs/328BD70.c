// Nekki.SF2.GUI.Dialogs.LotteryDialog$$PEIBNBAMFFE @ RVA 0x328BD70

void Nekki_SF2_GUI_Dialogs_LotteryDialog__PEIBNBAMFFE
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  DG_Tweening_Core_DOGetter_Vector3__o *getter;
  DG_Tweening_Core_DOSetter_Vector3__o *setter;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *extraout_x1;
  DMGOIPBMOJI_o *pDVar1;
  float fVar2;
  float duration;
  UnityEngine_Vector3_o endValue;
  
  if ((DAT_045672df & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&KHLGHHMCKAE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_JNPPMPMIPGN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_NJCAIMNNMPC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_PJMHKMDNNKF__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_045672df = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_LotteryDialog__OIJGCNKKINI(__this,method);
  getter = (DG_Tweening_Core_DOGetter_Vector3__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
  DG_Tweening_Core_DOGetter<Vector3>___ctor();
  setter = (DG_Tweening_Core_DOSetter_Vector3__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
  DG_Tweening_Core_DOSetter<Vector3>___ctor();
  pDVar1 = KHLGHHMCKAE_TypeInfo->static_fields->MCOFINNAPEE;
  if (pDVar1 != (DMGOIPBMOJI_o *)0x0) {
    fVar2 = (pDVar1->fields).CGGGKIKDMCK;
    duration = (pDVar1->fields).BIEBIDDJGKC;
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    endValue.fields.y = fVar2;
    endValue.fields.x = fVar2;
    endValue.fields.z = 0.0;
    t = DG_Tweening_DOTween__To(getter,setter,endValue,duration,(MethodInfo *)0x0);
    action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 0338beec to 0348c4d3 has its CatchHandler @ 0338beec
                       catch() { ... } // from try @ 0338beec with catch @ 0338beec
                       catch() { ... } // from try @ 0338c594 with catch @ 0338beec
                       catch() { ... } // from try @ 0338c644 with catch @ 0338beec
                       catch() { ... } // from try @ 0338c6f8 with catch @ 0338beec */
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__OnComplete<object>
              ((Il2CppObject *)t,action,
               Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

