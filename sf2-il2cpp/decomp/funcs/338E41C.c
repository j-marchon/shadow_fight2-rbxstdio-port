// Nekki.SF2.GUI.Fight.TextLine$$FinishAnimation @ RVA 0x338E41C

void Nekki_SF2_GUI_Fight_TextLine__FinishAnimation
               (Nekki_SF2_GUI_Fight_TextLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  DG_Tweening_Sequence_o **ppDVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04567c00 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c00 = 1;
    method = extraout_x1;
  }
  ppDVar2 = &(__this->fields).NPGLPGLADBF;
  if (*ppDVar2 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar2,false,(MethodInfo *)0x0);
    *ppDVar2 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar2,0);
    method = extraout_x1_00;
  }
  pNVar3 = (__this->fields).textLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).textLabel;
    if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_0348e544;
    value.fields.z = 0.0;
    value.fields._0_8_ = (__this->fields).LGEHFOCNFGF.fields;
    UnityEngine_Transform__set_localPosition(__this_00,value,(MethodInfo *)0x0);
  }
  if ((__this->fields).CFJPINKJPOD != (System_String_o *)0x0) {
    pNVar3 = (__this->fields).statValue;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).statValue;
      if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).statValue;
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0348e534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                    (pNVar3,(__this->fields).CFJPINKJPOD,(pNVar3->klass->vtable)._75_set_text.method
                    );
          return;
        }
      }
LAB_0348e544:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

