// Nekki.SF2.GUI.Map.BattleButton$$Shake @ RVA 0x3474C6C

void Nekki_SF2_GUI_Map_BattleButton__Shake
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,UnityEngine_Vector2_o CJGKODCGPGM,
               MethodInfo *method)

{
  DG_Tweening_Core_DOGetter_Vector3__o *getter;
  DG_Tweening_Core_DOSetter_Vector3__o *setter;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3____Vector3ArrayOptions__o *pDVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o direction;
  
  fVar3 = CJGKODCGPGM.fields.y;
  fVar4 = CJGKODCGPGM.fields.x;
  if ((DAT_0456831f & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattleButton_HJMEGMDAINK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattleButton_LOIMEFPOLCL__);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    DAT_0456831f = 1;
  }
  EDFDANKEBGF__AEBGICHHJED((MethodInfo *)0x0);
  getter = (DG_Tweening_Core_DOGetter_Vector3__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
  DG_Tweening_Core_DOGetter<Vector3>___ctor();
  setter = (DG_Tweening_Core_DOSetter_Vector3__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
  DG_Tweening_Core_DOSetter<Vector3>___ctor();
  if (DAT_045602fb == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045602fb = '\x01';
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  if (fVar2 <= 1e-05) {
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    fVar4 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
    fVar3 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
  }
  else {
    fVar4 = fVar4 / fVar2;
    fVar3 = fVar3 / fVar2;
  }
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  direction.fields.y = fVar3 * 10.0;
  direction.fields.x = fVar4 * 10.0;
  direction.fields.z = 0.0;
  pDVar1 = DG_Tweening_DOTween__Punch(getter,setter,direction,0.4,0x10,1.0,(MethodInfo *)0x0);
  (__this->fields).IDMFMIPALLP = (DG_Tweening_Tween_o *)pDVar1;
  thunk_FUN_01c20e04(&(__this->fields).IDMFMIPALLP);
  return;
}

