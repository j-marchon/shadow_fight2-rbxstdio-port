// LabelButton$$NDGAACOPDKG @ RVA 0x308AA1C

void LabelButton__NDGAACOPDKG(LabelButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_04566051 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_ColorBlock_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566051 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.super.super.super.m_Transition == 1) {
    pNVar3 = (__this->fields).Label;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).Label;
      fVar4 = (__this->fields).EGMBJLELLPB.fields.r;
      fVar5 = (__this->fields).EGMBJLELLPB.fields.g;
      fVar6 = (__this->fields).EGMBJLELLPB.fields.b;
      fVar7 = (__this->fields).EGMBJLELLPB.fields.a;
      if ((__this->fields)._textInvolvedTintTransaction == false) {
        if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0318ab7c;
        UNRECOVERED_JUMPTABLE = (pNVar3->klass->vtable)._23_set_color.methodPtr;
        pMVar2 = (pNVar3->klass->vtable)._23_set_color.method;
      }
      else {
        if ((__this->fields).super.super.super.super.m_Interactable == false) {
          fVar8 = (__this->fields).super.super.super.super.m_Colors.fields.m_DisabledColor.fields.r;
          fVar9 = (__this->fields).super.super.super.super.m_Colors.fields.m_DisabledColor.fields.g;
          fVar10 = (__this->fields).super.super.super.super.m_Colors.fields.m_DisabledColor.fields.b
          ;
          fVar11 = (__this->fields).super.super.super.super.m_Colors.fields.m_DisabledColor.fields.a
          ;
          if ((UnityEngine_UI_ColorBlock_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
        }
        else {
          fVar8 = 1.0;
          fVar9 = 1.0;
          fVar10 = 1.0;
          fVar11 = 1.0;
        }
        if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
LAB_0318ab7c:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        fVar7 = fVar7 * fVar11;
        fVar6 = fVar6 * fVar10;
        fVar5 = fVar5 * fVar9;
        UNRECOVERED_JUMPTABLE = (pNVar3->klass->vtable)._23_set_color.methodPtr;
        pMVar2 = (pNVar3->klass->vtable)._23_set_color.method;
        fVar4 = fVar4 * fVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x0318ab78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                ((ulong)(uint)fVar4,(ulong)(uint)fVar5,(ulong)(uint)fVar6,(ulong)(uint)fVar7,pNVar3,
                 pMVar2);
      return;
    }
  }
  return;
}

