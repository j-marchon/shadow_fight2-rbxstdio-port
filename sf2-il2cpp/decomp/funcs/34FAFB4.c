// Nekki.SF2.GUI.Common.Hints.HintGroup$$HPFLNMEJPEF @ RVA 0x34FAFB4

void Nekki_SF2_GUI_Common_Hints_HintGroup__HPFLNMEJPEF
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Graphic_o *pUVar1;
  SFButton_o *pSVar2;
  
  pSVar2 = (__this->fields)._Button;
  if ((pSVar2 != (SFButton_o *)0x0) &&
     (pUVar1 = (pSVar2->fields).super.super.m_TargetGraphic,
     pUVar1 != (UnityEngine_UI_Graphic_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x035fafdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pUVar1,(ulong)CJNHFNHJHPE,(pUVar1->klass->vtable)._25_set_raycastTarget.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

