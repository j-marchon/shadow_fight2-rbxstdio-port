// Nekki.SF2.GUI.Fight.EndFightContent.<>c$$COIHDLLGDLJ @ RVA 0x309D01C

bool Nekki_SF2_GUI_Fight_EndFightContent_<>c__COIHDLLGDLJ
               (Nekki_SF2_GUI_Fight_EndFightContent___c_o *__this,BNKBGIIJNLF_o *c,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  HBNENINHPGF_o *pHVar2;
  
  if ((DAT_04566126 & 1) == 0) {
    __this = (Nekki_SF2_GUI_Fight_EndFightContent___c_o *)FUN_01bab630(&StringLiteral_6545);
    DAT_04566126 = 1;
  }
  if (((c != (BNKBGIIJNLF_o *)0x0) &&
      (pHVar2 = (c->fields)._GDNLFJIBAAI_k__BackingField, pHVar2 != (HBNENINHPGF_o *)0x0)) &&
     (__this_00 = (pHVar2->fields)._COIPKAKHDFP_k__BackingField,
     __this = (Nekki_SF2_GUI_Fight_EndFightContent___c_o *)0x0, __this_00 != (System_String_o *)0x0)
     ) {
    bVar1 = System_String__StartsWith(__this_00,StringLiteral_6545,5,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

