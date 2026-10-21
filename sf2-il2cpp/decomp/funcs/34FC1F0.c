// Nekki.SF2.GUI.Common.Hints.HintGroup$$GKHAKLDEIJI @ RVA 0x34FC1F0

void Nekki_SF2_GUI_Common_Hints_HintGroup__GKHAKLDEIJI
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  SFButton_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  MethodInfo *method_00;
  
  if ((((__this->fields)._IsAnimationAvailable != false) &&
      (((iVar2 = Nekki_SF2_GUI_Common_Hints_HintGroup__IMIMOLCJELD
                           (__this,(MethodInfo *)(ulong)(uint)NAIJBCMHBFK), iVar2 == -1 ||
        (iVar2 == OPHMGAKOJLP)) && ((__this->fields).BBDACLMINDN != false)))) &&
     (bVar1 = Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsHintsReleased(__this,method_00), bVar1)) {
    __this_00 = (__this->fields)._Button;
    (__this->fields).BBDACLMINDN = false;
    if (__this_00 != (SFButton_o *)0x0) {
      SFButton__SetStateNormal(__this_00,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._OnHintUp;
      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__Invoke(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

