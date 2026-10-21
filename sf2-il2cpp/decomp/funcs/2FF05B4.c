// Nekki.SF2.GUI.Fight.EndFightScreen.<>c$$NGIEDLBLNEJ @ RVA 0x2FF05B4

bool Nekki_SF2_GUI_Fight_EndFightScreen_<>c__NGIEDLBLNEJ
               (Nekki_SF2_GUI_Fight_EndFightScreen___c_o *__this,IGPDCHBJAPD_AKGCHFPLJEC_o *item,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  BNKBGIIJNLF_o *pBVar2;
  HBNENINHPGF_o *pHVar3;
  
  if ((DAT_04565a64 & 1) == 0) {
    __this = (Nekki_SF2_GUI_Fight_EndFightScreen___c_o *)FUN_01bab630(&StringLiteral_6545);
    DAT_04565a64 = 1;
  }
  if ((((item != (IGPDCHBJAPD_AKGCHFPLJEC_o *)0x0) &&
       (pBVar2 = (item->fields).MPNDFIPPOPA, pBVar2 != (BNKBGIIJNLF_o *)0x0)) &&
      (pHVar3 = (pBVar2->fields)._GDNLFJIBAAI_k__BackingField, pHVar3 != (HBNENINHPGF_o *)0x0)) &&
     (__this_00 = (pHVar3->fields)._COIPKAKHDFP_k__BackingField,
     __this = (Nekki_SF2_GUI_Fight_EndFightScreen___c_o *)0x0, __this_00 != (System_String_o *)0x0))
  {
    bVar1 = System_String__StartsWith(__this_00,StringLiteral_6545,5,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

