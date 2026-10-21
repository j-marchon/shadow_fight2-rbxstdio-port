// Nekki.SF2.GUI.Map.RaidKey$$GetApproxWidth @ RVA 0x31B3FC4

float Nekki_SF2_GUI_Map_RaidKey__GetApproxWidth(NPKKNCCEIND_o *MCAGDLCJMEG,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  float fVar3;
  
  if (MCAGDLCJMEG != (NPKKNCCEIND_o *)0x0) {
    uVar1 = (MCAGDLCJMEG->fields).JAICMIMBIOA;
    if ((int)uVar1 < 1) {
      fVar3 = 0.0;
    }
    else {
      iVar2 = Util__JPFMDIGLLHB((ulong)uVar1,(MethodInfo *)0x0);
      fVar3 = (float)(iVar2 * 0x32 + 100);
    }
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

