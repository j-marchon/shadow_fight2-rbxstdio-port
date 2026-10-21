// Nekki.SF2.GUI.Map.ZoneScrollItem$$CompareTo @ RVA 0x3348558

int32_t Nekki_SF2_GUI_Map_ZoneScrollItem__CompareTo
                  (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,
                  Nekki_SF2_GUI_Map_ZoneScrollItem_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_o **ppSVar2;
  int32_t iVar3;
  MEJIKMPNBNL_o *pMVar4;
  
  if ((DAT_045679d6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_045679d6 = 1;
  }
  pMVar4 = (__this->fields).IAJBEJGMIMM;
  ppSVar1 = (System_String_o **)&StringLiteral_1;
  if (pMVar4 != (MEJIKMPNBNL_o *)0x0) {
    ppSVar1 = &(pMVar4->fields).DEKCPPOJFEH;
  }
  if ((IBKIPBJJCPG != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) &&
     (*ppSVar1 != (System_String_o *)0x0)) {
    pMVar4 = (IBKIPBJJCPG->fields).IAJBEJGMIMM;
    ppSVar2 = (System_String_o **)&StringLiteral_1;
    if (pMVar4 != (MEJIKMPNBNL_o *)0x0) {
      ppSVar2 = &(pMVar4->fields).DEKCPPOJFEH;
    }
    iVar3 = System_String__CompareTo(*ppSVar1,*ppSVar2,(MethodInfo *)0x0);
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

