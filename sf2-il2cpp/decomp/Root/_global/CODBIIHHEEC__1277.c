// TypeDefIndex 1277
// Namespace: 
// public class CODBIIHHEEC : NEFKBLNBOAB
// Fields:

// ===== public void .ctor(string HEEJOJAGIKC)  [RVA 0x314EE7C]
// CODBIIHHEEC$$.ctor @ RVA 0x314EE7C

void CODBIIHHEEC___ctor(CODBIIHHEEC_o *__this,System_String_o *HEEJOJAGIKC,MethodInfo *method)

{
  NEFKBLNBOAB___ctor((NEFKBLNBOAB_o *)__this,HEEJOJAGIKC,false,(MethodInfo *)0x0);
  return;
}


// ===== protected override bool HNIHOIAMDPC(JMDPBFOCHHP GALCGHPGAIB, XmlDocument LKILNGEECIJ)  [RVA 0x314EE88]
// CODBIIHHEEC$$HNIHOIAMDPC @ RVA 0x314EE88

bool CODBIIHHEEC__HNIHOIAMDPC
               (CODBIIHHEEC_o *__this,JMDPBFOCHHP_o *GALCGHPGAIB,
               System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar1;
  JMDPBFOCHHP_DBNJFPILODG_o **ppJVar2;
  
  NEFKBLNBOAB__HNIHOIAMDPC((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,LKILNGEECIJ,(MethodInfo *)0x0);
  pJVar1 = FCNNPBIIEOK__JKIIABCPGPH(LKILNGEECIJ,(MethodInfo *)0x0);
  if (pJVar1 != (JMDPBFOCHHP_DBNJFPILODG_o *)0x0) {
    if (GALCGHPGAIB == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppJVar2 = &(GALCGHPGAIB->fields)._LGFNDLOCGPB_k__BackingField;
    *ppJVar2 = pJVar1;
    thunk_FUN_01c20e04(ppJVar2,pJVar1);
  }
  return pJVar1 != (JMDPBFOCHHP_DBNJFPILODG_o *)0x0;
}

