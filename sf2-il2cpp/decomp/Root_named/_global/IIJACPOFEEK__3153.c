// TypeDefIndex 3153
// Namespace: 
// public class IIJACPOFEEK : NEFKBLNBOAB
// Fields:

// ===== public void .ctor(string HEEJOJAGIKC)  [RVA 0x34D9DB0]
// IIJACPOFEEK$$.ctor @ RVA 0x34D9DB0

void IIJACPOFEEK___ctor(IIJACPOFEEK_o *__this,System_String_o *HEEJOJAGIKC,MethodInfo *method)

{
  NEFKBLNBOAB___ctor((NEFKBLNBOAB_o *)__this,HEEJOJAGIKC,false,(MethodInfo *)0x0);
  return;
}


// ===== protected override bool HNIHOIAMDPC(RaidConfig GALCGHPGAIB, XmlDocument LKILNGEECIJ)  [RVA 0x34D9DBC]
// IIJACPOFEEK$$HNIHOIAMDPC @ RVA 0x34D9DBC

bool IIJACPOFEEK__HNIHOIAMDPC
               (IIJACPOFEEK_o *__this,RaidConfig_o *GALCGHPGAIB,
               System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  RaidConfig_KJLILNPHJHI_o *pJVar1;
  RaidConfig_KJLILNPHJHI_o **ppJVar2;
  
  NEFKBLNBOAB__HNIHOIAMDPC((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,LKILNGEECIJ,(MethodInfo *)0x0);
  pJVar1 = RaidConfigParser__FKKLOIFLEOG(LKILNGEECIJ,(MethodInfo *)0x0);
  if (pJVar1 != (RaidConfig_KJLILNPHJHI_o *)0x0) {
    if (GALCGHPGAIB == (RaidConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppJVar2 = &(GALCGHPGAIB->fields).OGPANCKIAED;
    *ppJVar2 = pJVar1;
    thunk_FUN_01c20e04(ppJVar2,pJVar1);
  }
  return pJVar1 != (RaidConfig_KJLILNPHJHI_o *)0x0;
}

