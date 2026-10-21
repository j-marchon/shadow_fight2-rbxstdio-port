// Nekki.SF2.GUI.Fight.EndRaidRoundFightScreen$$Init @ RVA 0x32311C8

void Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen__Init
               (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *__this,IGPDCHBJAPD_o *PNPKEKHEMCD,
               MethodInfo *method)

{
  IGPDCHBJAPD_o *pIVar1;
  
  Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__Init
            ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,PNPKEKHEMCD,(MethodInfo *)0x0);
  pIVar1 = (__this->fields).super.KNEAEEIMDGH;
  if (pIVar1 != (IGPDCHBJAPD_o *)0x0) {
    (__this->fields).ILMKKGNDFLB = (uint)((pIVar1->fields).BLKENLJGDIE != 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

