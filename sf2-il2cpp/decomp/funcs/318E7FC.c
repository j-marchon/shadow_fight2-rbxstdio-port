// Nekki.SF2.GUI.Profile.ItemsSelectionManager$$RestoreSelection @ RVA 0x318E7FC

void Nekki_SF2_GUI_Profile_ItemsSelectionManager__RestoreSelection
               (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *__this,bool OFKBEIFPFMN,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_SubItem_o *x;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  method_00 = (MethodInfo *)(ulong)OFKBEIFPFMN;
  if ((DAT_04566a30 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566a30 = 1;
    method_00 = extraout_x1;
  }
  if (OFKBEIFPFMN) {
    EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  x = Nekki_SF2_GUI_Profile_ItemsSelectionManager__get_SelectedSubItem(__this,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x != (Nekki_SF2_GUI_Profile_SubItem_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0328e894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(x->klass->vtable)._59_Choose.methodPtr)(x,(x->klass->vtable)._59_Choose.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

