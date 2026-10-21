// TypeDefIndex 1681
// Namespace: 
// public class OOODKCJANAD : NEFKBLNBOAB
// Fields:

// ===== public void .ctor(string HEEJOJAGIKC)  [RVA 0x31CEC9C]
// OOODKCJANAD$$.ctor @ RVA 0x31CEC9C

void OOODKCJANAD___ctor(OOODKCJANAD_o *__this,System_String_o *HEEJOJAGIKC,MethodInfo *method)

{
  NEFKBLNBOAB___ctor((NEFKBLNBOAB_o *)__this,HEEJOJAGIKC,false,(MethodInfo *)0x0);
  return;
}


// ===== protected override bool HNIHOIAMDPC(RaidConfig GALCGHPGAIB, XmlDocument LKILNGEECIJ)  [RVA 0x31CECA8]
// OOODKCJANAD$$HNIHOIAMDPC @ RVA 0x31CECA8

bool OOODKCJANAD__HNIHOIAMDPC
               (OOODKCJANAD_o *__this,RaidConfig_o *GALCGHPGAIB,
               System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  bool bVar1;
  POLAJNLKPAK_o *pPVar2;
  
  bVar1 = NEFKBLNBOAB__HNIHOIAMDPC
                    ((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,LKILNGEECIJ,(MethodInfo *)0x0);
  if ((GALCGHPGAIB != (RaidConfig_o *)0x0) &&
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

