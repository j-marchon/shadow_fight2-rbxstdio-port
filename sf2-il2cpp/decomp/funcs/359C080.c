// Nekki.SF2.GUI.Profile.SubItem$$Update @ RVA 0x359C080

void Nekki_SF2_GUI_Profile_SubItem__Update
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568dcf & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
    DAT_04568dcf = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Profile_SubItem_TypeInfo,method);
  }
  if (Nekki_SF2_GUI_Profile_SubItem_TypeInfo->static_fields->EEDBEBPEPJL != false) {
    (*(__this->klass->vtable)._60_BNGDONJEHMH.methodPtr)
              (__this,(__this->klass->vtable)._60_BNGDONJEHMH.method);
  }
  iVar1 = (__this->fields).JDLICGHNBFC + 1;
  (__this->fields).JDLICGHNBFC = iVar1;
  if ((__this->fields).FBJAKHPAFNO < iVar1) {
    (__this->fields).JDLICGHNBFC = 0;
    (__this->fields).FOIKKEEIOBP = (bool_conflict)((__this->fields).FOIKKEEIOBP ^ 1);
  }
  return;
}

