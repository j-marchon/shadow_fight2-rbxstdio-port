// MHGKHENCBFO$$HNIHOIAMDPC @ RVA 0x352F4B8

bool MHGKHENCBFO__HNIHOIAMDPC
               (MHGKHENCBFO_o *__this,JMDPBFOCHHP_o *GALCGHPGAIB,
               System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  JMDPBFOCHHP_EJICJNOEGGE_o *pJVar1;
  JMDPBFOCHHP_EJICJNOEGGE_o **ppJVar2;
  
  NEFKBLNBOAB__HNIHOIAMDPC((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,LKILNGEECIJ,(MethodInfo *)0x0);
  pJVar1 = FCNNPBIIEOK__INOFNLPJAHG(LKILNGEECIJ,(MethodInfo *)0x0);
  if (pJVar1 != (JMDPBFOCHHP_EJICJNOEGGE_o *)0x0) {
    if (GALCGHPGAIB == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppJVar2 = &(GALCGHPGAIB->fields)._LEIIIBPIJGJ_k__BackingField;
    *ppJVar2 = pJVar1;
    thunk_FUN_01c20e04(ppJVar2,pJVar1);
  }
  return pJVar1 != (JMDPBFOCHHP_EJICJNOEGGE_o *)0x0;
}

