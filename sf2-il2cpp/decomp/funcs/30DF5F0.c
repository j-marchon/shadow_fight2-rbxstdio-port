// Nekki.SF2.GUI.Fight.ValueLine$$NFFKNHDMGJA @ RVA 0x30DF5F0

void Nekki_SF2_GUI_Fight_ValueLine__NFFKNHDMGJA
               (Nekki_SF2_GUI_Fight_ValueLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Sequence_o *pDVar2;
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *pDVar3;
  MethodInfo *extraout_x1;
  DG_Tweening_Sequence_o **ppDVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  UnityEngine_Vector3_o endValue;
  
  if ((DAT_0456638f & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ValueLine_DHFJNHPCJNL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ValueLine_EILGKEOFAJE__);
    DAT_0456638f = 1;
    method = extraout_x1;
  }
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DG_Tweening_DOTween_TypeInfo,method);
  }
  pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  ppDVar4 = &(__this->fields).NPGLPGLADBF;
  *ppDVar4 = pDVar2;
  thunk_FUN_01c20e04(ppDVar4,pDVar2);
  pNVar5 = (__this->fields).textLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields).textLabel;
    if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pDVar2 = (__this->fields).NPGLPGLADBF;
    target = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
    endValue.fields.z = 0.0;
    endValue.fields._0_8_ = (__this->fields).LGEHFOCNFGF.fields;
    t = DG_Tweening_ShortcutExtensions__DOLocalMove
                  (target,endValue,(__this->fields).textMoveTime,false,(MethodInfo *)0x0);
    DG_Tweening_TweenSettingsExtensions__Append(pDVar2,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
  }
  pDVar2 = (__this->fields).NPGLPGLADBF;
  pDVar3 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar2,pDVar3,(MethodInfo *)0x0);
  pDVar2 = (__this->fields).NPGLPGLADBF;
  pDVar3 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
  DG_Tweening_TweenCallback___ctor();
  DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar2,pDVar3,(MethodInfo *)0x0);
  return;
}

