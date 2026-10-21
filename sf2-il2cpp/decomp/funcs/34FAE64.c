// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_IsClickable @ RVA 0x34FAE64

bool Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsClickable
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  undefined1 uVar1;
  UnityEngine_UI_Graphic_o *pUVar2;
  SFButton_o *pSVar3;
  
  pSVar3 = (__this->fields)._Button;
  if ((pSVar3 != (SFButton_o *)0x0) &&
     (pUVar2 = (pSVar3->fields).super.super.m_TargetGraphic,
     pUVar2 != (UnityEngine_UI_Graphic_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x035fae88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(pUVar2->klass->vtable)._24_get_raycastTarget.methodPtr)
                      (pUVar2,(pUVar2->klass->vtable)._24_get_raycastTarget.method);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

