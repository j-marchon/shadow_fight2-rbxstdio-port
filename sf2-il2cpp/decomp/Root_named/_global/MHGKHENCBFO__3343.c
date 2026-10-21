// TypeDefIndex 3343
// Namespace: 
// public class MHGKHENCBFO : NEFKBLNBOAB
// Fields:

// ===== public void .ctor(string HEEJOJAGIKC)  [RVA 0x352F4AC]
// MHGKHENCBFO$$.ctor @ RVA 0x352F4AC

void MHGKHENCBFO___ctor(MHGKHENCBFO_o *__this,System_String_o *HEEJOJAGIKC,MethodInfo *method)

{
  NEFKBLNBOAB___ctor((NEFKBLNBOAB_o *)__this,HEEJOJAGIKC,false,(MethodInfo *)0x0);
  return;
}


// ===== protected override bool HNIHOIAMDPC(RaidConfig GALCGHPGAIB, XmlDocument LKILNGEECIJ)  [RVA 0x352F4B8]
// MHGKHENCBFO$$HNIHOIAMDPC @ RVA 0x352F4B8

bool MHGKHENCBFO__HNIHOIAMDPC
               (MHGKHENCBFO_o *__this,RaidConfig_o *GALCGHPGAIB,
               System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  RaidConfig_EJICJNOEGGE_o *pJVar1;
  RaidConfig_EJICJNOEGGE_o **ppJVar2;
  
  NEFKBLNBOAB__HNIHOIAMDPC((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,LKILNGEECIJ,(MethodInfo *)0x0);
  pJVar1 = RaidConfigParser__INOFNLPJAHG(LKILNGEECIJ,(MethodInfo *)0x0);
  if (pJVar1 != (RaidConfig_EJICJNOEGGE_o *)0x0) {
    if (GALCGHPGAIB == (RaidConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppJVar2 = &(GALCGHPGAIB->fields)._LEIIIBPIJGJ_k__BackingField;
    *ppJVar2 = pJVar1;
    thunk_FUN_01c20e04(ppJVar2,pJVar1);
  }
  return pJVar1 != (RaidConfig_EJICJNOEGGE_o *)0x0;
}

