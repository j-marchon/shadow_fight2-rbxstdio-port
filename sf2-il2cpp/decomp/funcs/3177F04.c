// Nekki.SF2.GUI.Pvp.SelectModule$$HCKMKFBGPIM @ RVA 0x3177F04

void Nekki_SF2_GUI_Pvp_SelectModule__HCKMKFBGPIM
               (Nekki_SF2_GUI_Pvp_SelectModule_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  
  __this_00 = (__this->fields)._selectTable;
  (__this->fields).FPFGDOBNLCP = false;
  (__this->fields).FODJGPABKLP = false;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
    Nekki_SF2_GUI_Pvp_PlayersSelectTable__Init
              (__this_00,(__this->fields).LDJBDDJCPBO,(__this->fields).HKGKJIAPLPO,
               (__this->fields).PCNNFNFPJNH,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._13_BHOPECNMJAC.methodPtr)
              (__this,0,0,0,0,(__this->klass->vtable)._13_BHOPECNMJAC.method);
    (*(__this->klass->vtable)._13_BHOPECNMJAC.methodPtr)
              (__this,1,0,0,0,(__this->klass->vtable)._13_BHOPECNMJAC.method);
    (__this->fields).NKIKDJEPECM = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

