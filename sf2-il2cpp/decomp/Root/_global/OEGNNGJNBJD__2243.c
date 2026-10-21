// TypeDefIndex 2243
// Namespace: 
// public class OEGNNGJNBJD : NEFKBLNBOAB
// Fields:

// ===== public void .ctor(string HEEJOJAGIKC)  [RVA 0x32FB4B0]
// OEGNNGJNBJD$$.ctor @ RVA 0x32FB4B0

void OEGNNGJNBJD___ctor(OEGNNGJNBJD_o *__this,System_String_o *HEEJOJAGIKC,MethodInfo *method)

{
  NEFKBLNBOAB___ctor((NEFKBLNBOAB_o *)__this,HEEJOJAGIKC,false,(MethodInfo *)0x0);
  return;
}


// ===== protected override bool HNIHOIAMDPC(JMDPBFOCHHP GALCGHPGAIB, XmlDocument LKILNGEECIJ)  [RVA 0x32FB4BC]
// OEGNNGJNBJD$$HNIHOIAMDPC @ RVA 0x32FB4BC

bool OEGNNGJNBJD__HNIHOIAMDPC
               (OEGNNGJNBJD_o *__this,JMDPBFOCHHP_o *GALCGHPGAIB,
               System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  JMDPBFOCHHP_AEJBILHMFDB_o *pJVar1;
  JMDPBFOCHHP_AEJBILHMFDB_o **ppJVar2;
  
                    /* try { // try from 033fb4c0 to 034fb4cb has its CatchHandler @ 033fb6a4 */
                    /* try { // try from 033fb4d0 to 034fb4e3 has its CatchHandler @ 033fb6cc */
  NEFKBLNBOAB__HNIHOIAMDPC((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,LKILNGEECIJ,(MethodInfo *)0x0);
  pJVar1 = FCNNPBIIEOK__OHMHMHLIHEO(LKILNGEECIJ,(MethodInfo *)0x0);
  if (pJVar1 != (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0) {
    if (GALCGHPGAIB == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033fb510 to 034fb517 has its CatchHandler @ 033fb6b8 */
      FUN_01bab8c8();
    }
    ppJVar2 = &(GALCGHPGAIB->fields)._JMEOCLFDHMM_k__BackingField;
    *ppJVar2 = pJVar1;
                    /* try { // try from 033fb4f8 to 034fb4ff has its CatchHandler @ 033fb6c8 */
    thunk_FUN_01c20e04(ppJVar2,pJVar1);
  }
  return pJVar1 != (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0;
}

