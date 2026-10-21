// TypeDefIndex 1676
// Namespace: 
// public class KECOALKGCOI : NEFKBLNBOAB
// Fields:

// ===== public void .ctor(string HEEJOJAGIKC)  [RVA 0x31CCF5C]
// KECOALKGCOI$$.ctor @ RVA 0x31CCF5C

void KECOALKGCOI___ctor(KECOALKGCOI_o *__this,System_String_o *HEEJOJAGIKC,MethodInfo *method)

{
  NEFKBLNBOAB___ctor((NEFKBLNBOAB_o *)__this,HEEJOJAGIKC,false,(MethodInfo *)0x0);
  return;
}


// ===== protected override bool HNIHOIAMDPC(RaidConfig GALCGHPGAIB, XmlDocument LKILNGEECIJ)  [RVA 0x31CCF68]
// KECOALKGCOI$$HNIHOIAMDPC @ RVA 0x31CCF68

bool KECOALKGCOI__HNIHOIAMDPC
               (KECOALKGCOI_o *__this,RaidConfig_o *GALCGHPGAIB,
               System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  RaidConfig_EMDEPOFJFEF_o *pJVar1;
  RaidConfig_EMDEPOFJFEF_o **ppJVar2;
  
  NEFKBLNBOAB__HNIHOIAMDPC((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,LKILNGEECIJ,(MethodInfo *)0x0);
                    /* try { // try from 032ccf88 to 033cd757 has its CatchHandler @ 032ccf88
                       catch() { ... } // from try @ 032ccf88 with catch @ 032ccf88
                       catch() { ... } // from try @ 032cd810 with catch @ 032ccf88
                       catch() { ... } // from try @ 032ce838 with catch @ 032ccf88
                       catch() { ... } // from try @ 032ce8e4 with catch @ 032ccf88 */
  pJVar1 = RaidConfigParser__NCNIIIGPJEO(LKILNGEECIJ,(MethodInfo *)0x0);
  if (pJVar1 != (RaidConfig_EMDEPOFJFEF_o *)0x0) {
    if (GALCGHPGAIB == (RaidConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppJVar2 = &(GALCGHPGAIB->fields)._GJCMAADAOHD_k__BackingField;
    *ppJVar2 = pJVar1;
    thunk_FUN_01c20e04(ppJVar2,pJVar1);
  }
  return pJVar1 != (RaidConfig_EMDEPOFJFEF_o *)0x0;
}

