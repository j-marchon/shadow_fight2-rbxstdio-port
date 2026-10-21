// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$EAEOCPNBDME @ RVA 0x34DC17C

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__EAEOCPNBDME
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *pKVar1;
  int32_t iVar2;
  
  Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__MFGPEJCIEEE(__this,method);
  pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (pKVar1 == (KKLJIDJBFEI_o *)0x0) {
LAB_035dc1e0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pKVar1->fields)._CPLKKCAJOJJ_k__BackingField == false) {
    pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar1 == (KKLJIDJBFEI_o *)0x0) goto LAB_035dc1e0;
    if ((pKVar1->fields).super._MGGBEPKMPCF_k__BackingField != false) {
      iVar2 = 2;
      goto LAB_035dc1bc;
    }
    pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar1 == (KKLJIDJBFEI_o *)0x0) goto LAB_035dc1e0;
    KKLJIDJBFEI__CDKAPIKLDJI(pKVar1,(MethodInfo *)0x0);
  }
  iVar2 = 1;
LAB_035dc1bc:
  (__this->fields).IAAABJBDEMK = iVar2;
  return;
}

