// LabelButton$$Awake @ RVA 0x308B190

void LabelButton__Awake(LabelButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_UI_LayoutGroup_o *pUVar3;
  Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *pNVar4;
  float fVar5;
  float in_s1;
  float in_s2;
  float in_s3;
  
  if ((DAT_04566053 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<ButtonHintUI>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<LayoutGroup>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566053 = 1;
  }
  Nekki_SF2_GUI_ResolutionButton__Awake
            ((Nekki_SF2_GUI_ResolutionButton_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super.super._EnableClickAnimation = true;
  pNVar2 = (__this->fields).Label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    pNVar2 = (__this->fields).Label;
    if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar5 = (float)(*(pNVar2->klass->vtable)._22_get_color.methodPtr)
                             (pNVar2,(pNVar2->klass->vtable)._22_get_color.method);
    (__this->fields).EGMBJLELLPB.fields.r = fVar5;
    (__this->fields).EGMBJLELLPB.fields.g = in_s1;
    (__this->fields).EGMBJLELLPB.fields.b = in_s2;
    (__this->fields).EGMBJLELLPB.fields.a = in_s3;
    method_00 = extraout_x1_00;
  }
  LabelButton__NDGAACOPDKG(__this,method_00);
  pNVar2 = (__this->fields).Label;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (pNVar2->fields).super.FitImageLineHeightParam =
         (Nekki_SF2_GUI_TextPic_FitImageLineHeightParams_o *)__this;
    thunk_FUN_01c20e04(&(pNVar2->fields).super.FitImageLineHeightParam,__this);
  }
  pUVar3 = (__this->fields)._Layout;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityEngine_UI_LayoutGroup_o *)
             UnityEngine_Component__GetComponentInChildren<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponentInChildren<LayoutGroup>__);
    (__this->fields)._Layout = pUVar3;
    thunk_FUN_01c20e04(&(__this->fields)._Layout,pUVar3);
  }
  pNVar4 = (__this->fields)._Hint;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (Nekki_SF2_GUI_Common_Hints_ButtonHintUI_o *)
             UnityEngine_Component__GetComponentInChildren<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponentInChildren<ButtonHintUI>__);
    (__this->fields)._Hint = pNVar4;
    thunk_FUN_01c20e04(&(__this->fields)._Hint,pNVar4);
    return;
  }
  return;
}

