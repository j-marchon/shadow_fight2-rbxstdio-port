// Nekki.SF2.GUI.Profile.SealsTableViewCell$$CompareTo @ RVA 0x303B748

int32_t Nekki_SF2_GUI_Profile_SealsTableViewCell__CompareTo
                  (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *__this,
                  Nekki_SF2_GUI_Profile_SealsTableViewCell_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  HOOAAGABMBL_o *pHVar2;
  HOOAAGABMBL_o *pHVar3;
  int32_t value;
  int32_t local_18;
  int32_t local_14;
  
  pHVar2 = (__this->fields)._AHFHJKDMDMO_k__BackingField;
  if (pHVar2 == (HOOAAGABMBL_o *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = (pHVar2->fields)._JDEHPJEIOCI_k__BackingField;
  }
  if (IBKIPBJJCPG != (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *)0x0) {
    pHVar3 = (IBKIPBJJCPG->fields)._AHFHJKDMDMO_k__BackingField;
    if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (pHVar3->fields)._JDEHPJEIOCI_k__BackingField;
    }
    local_18 = 0;
    if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
      local_18 = (pHVar2->fields)._HBPAJOBFMLH_k__BackingField;
    }
    if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
      value = 1;
    }
    else {
      value = (pHVar3->fields)._HBPAJOBFMLH_k__BackingField;
    }
    iVar1 = System_Int32__CompareTo((int32_t)&local_14,iVar1,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      iVar1 = System_Int32__CompareTo((int32_t)&local_18,value,(MethodInfo *)0x0);
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

