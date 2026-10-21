// OOODKCJANAD$$HNIHOIAMDPC @ RVA 0x31CECA8

bool OOODKCJANAD__HNIHOIAMDPC
               (OOODKCJANAD_o *__this,JMDPBFOCHHP_o *GALCGHPGAIB,
               System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  bool bVar1;
  POLAJNLKPAK_o *pPVar2;
  
  bVar1 = NEFKBLNBOAB__HNIHOIAMDPC
                    ((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,LKILNGEECIJ,(MethodInfo *)0x0);
  if ((GALCGHPGAIB != (JMDPBFOCHHP_o *)0x0) &&
     (pPVar2 = (GALCGHPGAIB->fields).FMPOOGLPALN, bVar1 = false, pPVar2 != (POLAJNLKPAK_o *)0x0)) {
    POLAJNLKPAK__NDNPGAKJLHM(pPVar2,(MethodInfo *)0x0);
    pPVar2 = (GALCGHPGAIB->fields).FMPOOGLPALN;
    bVar1 = false;
    if (pPVar2 != (POLAJNLKPAK_o *)0x0) {
      bVar1 = POLAJNLKPAK__HNIHOIAMDPC(pPVar2,LKILNGEECIJ,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(bVar1);
}

