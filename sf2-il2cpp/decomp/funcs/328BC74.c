// Nekki.SF2.GUI.Dialogs.LotteryDialog$$CIDOGGEGAIN @ RVA 0x328BC74

void Nekki_SF2_GUI_Dialogs_LotteryDialog__CIDOGGEGAIN
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o **ppNVar1;
  bool bVar2;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *pNVar3;
  
  if ((DAT_045672e8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045672e8 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).NAJKNFGDGGI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  ppNVar1 = &(__this->fields).NAJKNFGDGGI;
  pNVar3 = *ppNVar1;
  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0) {
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    if (DAT_0455fa7f == '\0') {
      FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
      DAT_0455fa7f = '\x01';
    }
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (__this_00,
                 (UnityEngine_Vector3_o)
                 (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).fields,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_LotteryDialog__HMBAGCOBBID(__this,method_00);
      (__this->fields).NAJKNFGDGGI = (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0;
      thunk_FUN_01c20e04(ppNVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

