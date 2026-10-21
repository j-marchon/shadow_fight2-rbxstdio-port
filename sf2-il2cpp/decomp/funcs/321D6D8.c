// Nekki.SF2.GUI.Pvp.PvpScene$$BMLHIMIGOLP @ RVA 0x321D6D8

void Nekki_SF2_GUI_Pvp_PvpScene__BMLHIMIGOLP(NLIDHEAMLMC_o *OCMMDIHLKMH,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  int iVar2;
  undefined8 uVar3;
  
  if (OCMMDIHLKMH == (NLIDHEAMLMC_o *)0x0) {
LAB_0331d76c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar2 = (OCMMDIHLKMH->fields).ELHIGHABJBJ;
  if (iVar2 == 2) {
    iVar2 = (OCMMDIHLKMH->fields).OFFPEKODFPE;
    __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
    if (__this == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) goto LAB_0331d76c;
    iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                      (__this,(MethodInfo *)0x0);
    if (iVar2 < iVar1 + -1) {
      iVar2 = (OCMMDIHLKMH->fields).OFFPEKODFPE + 1;
LAB_0331d740:
      (OCMMDIHLKMH->fields).OFFPEKODFPE = iVar2;
      return;
    }
  }
  else if (iVar2 == 1) {
    iVar2 = (OCMMDIHLKMH->fields).OFFPEKODFPE;
    if (iVar2 == 1) {
      uVar3 = 2;
      goto LAB_0331d750;
    }
    if (iVar2 == 0) {
      iVar2 = 1;
      goto LAB_0331d740;
    }
  }
  uVar3 = 1;
LAB_0331d750:
  (OCMMDIHLKMH->fields).ELHIGHABJBJ = (int)uVar3;
  (OCMMDIHLKMH->fields).OFFPEKODFPE = (int)((ulong)uVar3 >> 0x20);
  return;
}

