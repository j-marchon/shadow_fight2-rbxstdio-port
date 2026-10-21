// Nekki.SF2.GUI.Dialogs.StrangerDialog$$OALFHNKDIHC @ RVA 0x3179E5C

int32_t Nekki_SF2_GUI_Dialogs_StrangerDialog__OALFHNKDIHC
                  (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).DHJBABHLNFP,(MethodInfo *)0x0);
                    /* try { // try from 03279e78 to 03379ebb has its CatchHandler @ 0327a1a0 */
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).IIGDDBBHJEN,(MethodInfo *)0x0);
  uVar4 = 1;
  if (!bVar2) {
    uVar4 = 2;
  }
  uVar1 = ~(uint)bVar2 & 1;
  if (!bVar3) {
    uVar1 = uVar4;
  }
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).FAAJIPNANGB,(MethodInfo *)0x0);
  return uVar1 + (~(uint)bVar2 & 1);
}

