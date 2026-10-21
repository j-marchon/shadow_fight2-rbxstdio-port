// Nekki.SF2.GUI.Dialogs.BaseDialog$$UpdateHeaderPosition @ RVA 0x33AF944

void Nekki_SF2_GUI_Dialogs_BaseDialog__UpdateHeaderPosition
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_Transform_o *transform;
  float fVar1;
  
                    /* catch() { ... } // from try @ 034aece0 with catch @ 034af944 */
                    /* catch() { ... } // from try @ 034af4a0 with catch @ 034af948 */
                    /* catch() { ... } // from try @ 034aed4c with catch @ 034af94c */
                    /* catch() { ... } // from try @ 034aebd8 with catch @ 034af950 */
  __this_00 = (__this->fields)._header;
                    /* catch() { ... } // from try @ 034af848 with catch @ 034af954 */
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* catch() { ... } // from try @ 034aeb78 with catch @ 034af958 */
                    /* catch() { ... } // from try @ 034aeb1c with catch @ 034af95c */
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    fVar1 = (float)(*(__this->klass->vtable)._10_OFGMFNANEGD.methodPtr)
                             (__this,(__this->klass->vtable)._10_OFGMFNANEGD.method);
                    /* try { // try from 034af984 to 035af987 has its CatchHandler @ 034af994 */
    UnityEngine_TransformExtensions__SetLocalPositionY(transform,fVar1 + 64.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034af984 with catch @ 034af994 */
  FUN_01bab8c8();
}

