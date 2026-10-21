// Nekki.SF2.GUI.Common.Hints.HintGroup$$BEBGOPNMHON @ RVA 0x34FC5A0

void Nekki_SF2_GUI_Common_Hints_HintGroup__BEBGOPNMHON
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  SFButton_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  MethodInfo *method_00;
  
                    /* try { // try from 035fc5ac to 036fc5b7 has its CatchHandler @ 035fc5cc */
                    /* try { // try from 035fc5b8 to 036fc5e7 has its CatchHandler @ 035fc378 */
                    /* catch() { ... } // from try @ 035fc524 with catch @ 035fc5bc */
                    /* catch() { ... } // from try @ 035fc528 with catch @ 035fc5c0 */
                    /* catch() { ... } // from try @ 035fc56c with catch @ 035fc5c4 */
                    /* catch() { ... } // from try @ 035fc508 with catch @ 035fc5c8 */
                    /* catch() { ... } // from try @ 035fc5ac with catch @ 035fc5cc */
  if ((((__this->fields)._IsAnimationAvailable != false) &&
      (((iVar2 = Nekki_SF2_GUI_Common_Hints_HintGroup__IMIMOLCJELD
                           (__this,(MethodInfo *)(ulong)(uint)NAIJBCMHBFK), iVar2 == -1 ||
        (iVar2 == OPHMGAKOJLP)) && ((__this->fields).BBDACLMINDN == false)))) &&
     (bVar1 = Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsHintsPressed(__this,method_00), bVar1)) {
    __this_00 = (__this->fields)._Button;
                    /* try { // try from 035fc5e8 to 036fc5eb has its CatchHandler @ 035fc654 */
    (__this->fields).BBDACLMINDN = true;
                    /* try { // try from 035fc5ec to 036fc627 has its CatchHandler @ 035fc378 */
    if (__this_00 != (SFButton_o *)0x0) {
      SFButton__SetStatePressed(__this_00,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._OnHintDown;
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

