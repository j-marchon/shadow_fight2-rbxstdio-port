// Nekki.SF2.GUI.Profile.PerksController$$EHPMHOHOPGA @ RVA 0x32D0B40

void Nekki_SF2_GUI_Profile_PerksController__EHPMHOHOPGA
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,
               Nekki_SF2_GUI_TableViewCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Profile_PerksController_MIJHABAAONP_o *__this_00;
  
                    /* catch() { ... } // from try @ 033d0b24 with catch @ 033d0b48 */
                    /* try { // try from 033d0b50 to 034d0b63 has its CatchHandler @ 033d0bc4 */
                    /* catch() { ... } // from try @ 033d0a64 with catch @ 033d0b64
                       try { // try from 033d0b64 to 034d0b7b has its CatchHandler @ 033d0878 */
  if ((DAT_0456754e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 033d0b7c to 034d0b7f has its CatchHandler @ 033d0ba0 */
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo);
                    /* try { // try from 033d0b80 to 034d0ba7 has its CatchHandler @ 033d0878 */
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ProfileCell>_Invoke__);
    DAT_0456754e = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 033d0b7c with catch @ 033d0ba0 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033d0ba8 to 034d0baf has its CatchHandler @ 033d0bc4 */
                    /* try { // try from 033d0bb0 to 034d0bbb has its CatchHandler @ 033d0878 */
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)AHICPBEJIKJ,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
                    /* try { // try from 033d0bbc to 034d0bc3 has its CatchHandler @ 033d0bc4 */
                    /* catch() { ... } // from try @ 033d0abc with catch @ 033d0bc4
                       catch() { ... } // from try @ 033d0b50 with catch @ 033d0bc4
                       catch() { ... } // from try @ 033d0ba8 with catch @ 033d0bc4
                       catch() { ... } // from try @ 033d0bbc with catch @ 033d0bc4 */
    return;
  }
  Nekki_SF2_GUI_Profile_ItemsController__EHPMHOHOPGA
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,AHICPBEJIKJ,(MethodInfo *)0x0);
  if (AHICPBEJIKJ != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo->_2).naturalAligment;
    if (((AHICPBEJIKJ->klass->_2).naturalAligment < bVar1) ||
       ((AHICPBEJIKJ->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(AHICPBEJIKJ);
    }
  }
  __this_00 = (__this->fields)._OnCellSelected;
  if (__this_00 != (Nekki_SF2_GUI_Profile_PerksController_MIJHABAAONP_o *)0x0) {
    UnityEngine_Events_UnityEvent<object>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)AHICPBEJIKJ,
               Method_UnityEngine_Events_UnityEvent<ProfileCell>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

