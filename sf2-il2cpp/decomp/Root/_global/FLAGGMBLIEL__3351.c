// TypeDefIndex 3351
// Namespace: 
// public class FLAGGMBLIEL : NEFKBLNBOAB
// Fields:

// ===== public void .ctor(string HEEJOJAGIKC)  [RVA 0x35360D4]
// FLAGGMBLIEL$$.ctor @ RVA 0x35360D4

void FLAGGMBLIEL___ctor(FLAGGMBLIEL_o *__this,System_String_o *HEEJOJAGIKC,MethodInfo *method)

{
  NEFKBLNBOAB___ctor((NEFKBLNBOAB_o *)__this,HEEJOJAGIKC,false,(MethodInfo *)0x0);
  return;
}


// ===== protected override bool HNIHOIAMDPC(JMDPBFOCHHP GALCGHPGAIB, XmlDocument LKILNGEECIJ)  [RVA 0x35360E0]
// FLAGGMBLIEL$$HNIHOIAMDPC @ RVA 0x35360E0

bool FLAGGMBLIEL__HNIHOIAMDPC
               (FLAGGMBLIEL_o *__this,JMDPBFOCHHP_o *GALCGHPGAIB,
               System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  JMDPBFOCHHP_NMAJABPDEPE_o *pJVar1;
  JMDPBFOCHHP_NMAJABPDEPE_o **ppJVar2;
  
  NEFKBLNBOAB__HNIHOIAMDPC((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,LKILNGEECIJ,(MethodInfo *)0x0);
  pJVar1 = FCNNPBIIEOK__DGBHJEPOFIE(LKILNGEECIJ,(MethodInfo *)0x0);
  if (pJVar1 != (JMDPBFOCHHP_NMAJABPDEPE_o *)0x0) {
    if (GALCGHPGAIB == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppJVar2 = &(GALCGHPGAIB->fields)._IGLEEEJGEEJ_k__BackingField;
    *ppJVar2 = pJVar1;
    thunk_FUN_01c20e04(ppJVar2,pJVar1);
  }
  return pJVar1 != (JMDPBFOCHHP_NMAJABPDEPE_o *)0x0;
}

