// KAHMAJKJMBK$$MBNDHAPLBCC @ RVA 0x34C0DC8

void KAHMAJKJMBK__MBNDHAPLBCC(KAHMAJKJMBK_o *__this,KMFIGBGAKNL_o *GOAHBPBJCKC,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar1;
  
  if (GOAHBPBJCKC != (KMFIGBGAKNL_o *)0x0) {
    switch((GOAHBPBJCKC->fields).NDDGEANDADE) {
    case 0:
      if (DAT_04565c84 == '\0') {
        FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
        DAT_04565c84 = '\x01';
      }
      pNVar1 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
      __this = (KAHMAJKJMBK_o *)0x0;
      if (pNVar1 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) {
        Nekki_SF2_Core_Fights_Controls_GameController__set_IsPunchEnabled
                  (pNVar1,false,(MethodInfo *)0x0);
        return;
      }
      break;
    case 1:
      if (DAT_04565c84 == '\0') {
        FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
        DAT_04565c84 = '\x01';
      }
      pNVar1 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
      __this = (KAHMAJKJMBK_o *)0x0;
      if (pNVar1 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) {
        Nekki_SF2_Core_Fights_Controls_GameController__set_IsKickEnabled
                  (pNVar1,false,(MethodInfo *)0x0);
        return;
      }
      break;
    case 2:
      if (DAT_04565c84 == '\0') {
        FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
        DAT_04565c84 = '\x01';
      }
      pNVar1 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
      __this = (KAHMAJKJMBK_o *)0x0;
      if (pNVar1 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) {
        Nekki_SF2_Core_Fights_Controls_GameController__set_IsRangedEnabled
                  (pNVar1,false,(MethodInfo *)0x0);
        return;
      }
      break;
    case 3:
      if (DAT_04565c84 == '\0') {
        FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
        DAT_04565c84 = '\x01';
      }
      pNVar1 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
      __this = (KAHMAJKJMBK_o *)0x0;
      if (pNVar1 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) {
        Nekki_SF2_Core_Fights_Controls_GameController__set_IsMagicEnabled
                  (pNVar1,false,(MethodInfo *)0x0);
        return;
      }
      break;
    case 4:
      if (DAT_04565c84 == '\0') {
        FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
        DAT_04565c84 = '\x01';
      }
      pNVar1 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
      __this = (KAHMAJKJMBK_o *)0x0;
      if (pNVar1 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) {
        Nekki_SF2_Core_Fights_Controls_GameController__set_IsRaidChargeEnabled
                  (pNVar1,false,(MethodInfo *)0x0);
        return;
      }
      break;
    default:
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

