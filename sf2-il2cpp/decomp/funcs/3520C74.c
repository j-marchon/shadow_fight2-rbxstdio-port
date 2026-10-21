// Nekki.SF2.GUI.Scripts.CheckBox$$set_interactable @ RVA 0x3520C74

void Nekki_SF2_GUI_Scripts_CheckBox__set_interactable
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Color_o *pUVar3;
  bool bVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  UnityEngine_Color_o *pUVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((DAT_045689bc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045689bc = 1;
  }
  UnityEngine_UI_Selectable__set_interactable
            ((UnityEngine_UI_Selectable_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((__this->fields).super.super.super.m_Interactable == false) {
    pUVar6 = &(__this->fields)._disabledColor;
    pUVar1 = &(__this->fields)._disabledColor;
    pUVar2 = &(__this->fields)._disabledColor;
    pUVar3 = &(__this->fields)._disabledColor;
  }
  else {
    pUVar6 = &(__this->fields)._enabledColor;
    pUVar1 = &(__this->fields)._enabledColor;
    pUVar2 = &(__this->fields)._enabledColor;
    pUVar3 = &(__this->fields)._enabledColor;
  }
  pNVar5 = (__this->fields)._backgndImage;
  if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    uVar7 = (ulong)(uint)(pUVar3->fields).a;
    uVar8 = (ulong)(uint)(pUVar2->fields).b;
    uVar9 = (ulong)(uint)(pUVar1->fields).g;
    uVar10 = (ulong)(uint)(pUVar6->fields).r;
    (*(pNVar5->klass->vtable)._23_set_color.methodPtr)
              (uVar10,uVar9,uVar8,uVar7,pNVar5,(pNVar5->klass->vtable)._23_set_color.method);
    pNVar5 = (__this->fields)._checkedSprite;
    if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      (*(pNVar5->klass->vtable)._23_set_color.methodPtr)
                (uVar10,uVar9,uVar8,uVar7,pNVar5,(pNVar5->klass->vtable)._23_set_color.method);
      pNVar5 = (__this->fields)._uncheckedSprite;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      pNVar5 = (__this->fields)._uncheckedSprite;
      if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03620dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar5->klass->vtable)._23_set_color.methodPtr)
                  (uVar10,uVar9,uVar8,uVar7,pNVar5,(pNVar5->klass->vtable)._23_set_color.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

