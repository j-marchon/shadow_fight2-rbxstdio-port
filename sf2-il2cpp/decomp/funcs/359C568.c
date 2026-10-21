// Nekki.Utils.RaidBetaLogger$$EIBCHPKDODE @ RVA 0x359C568

bool Nekki_Utils_RaidBetaLogger__EIBCHPKDODE
               (Nekki_Utils_RaidBetaLogger_o *__this,System_String_o *GBCNHHFAECF,
               System_String_o *BMEDCFOKBDH,int32_t NMCDMCKINPM,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  
  if ((DAT_04568dd3 & 1) == 0) {
    __this = (Nekki_Utils_RaidBetaLogger_o *)FUN_01bab630(&StringLiteral_597);
    DAT_04568dd3 = 1;
  }
  if (GBCNHHFAECF != (System_String_o *)0x0) {
    uVar1 = System_String__IndexOf(GBCNHHFAECF,BMEDCFOKBDH,(MethodInfo *)0x0);
    __this = (Nekki_Utils_RaidBetaLogger_o *)(ulong)uVar1;
    if (-1 < (int)uVar1) {
      if (BMEDCFOKBDH == (System_String_o *)0x0) goto LAB_0369c60c;
      uVar1 = (BMEDCFOKBDH->fields)._stringLength + uVar1;
      iVar2 = System_String__IndexOf(GBCNHHFAECF,StringLiteral_597,uVar1 + 2,(MethodInfo *)0x0);
      if (-1 < iVar2) {
        return NMCDMCKINPM < (int)(iVar2 + ~uVar1);
      }
    }
    return false;
  }
LAB_0369c60c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

