// TypeDefIndex 2334
// Namespace: 
// public class JDEOKJDONFF : NEFKBLNBOAB
// Fields:

// ===== public void .ctor(string HEEJOJAGIKC)  [RVA 0x33202A8]
// JDEOKJDONFF$$.ctor @ RVA 0x33202A8

void JDEOKJDONFF___ctor(JDEOKJDONFF_o *__this,System_String_o *HEEJOJAGIKC,MethodInfo *method)

{
  NEFKBLNBOAB___ctor((NEFKBLNBOAB_o *)__this,HEEJOJAGIKC,true,(MethodInfo *)0x0);
  return;
}


// ===== protected override bool HNIHOIAMDPC(RaidConfig GALCGHPGAIB, XmlDocument LKILNGEECIJ)  [RVA 0x33202B4]
// JDEOKJDONFF$$HNIHOIAMDPC @ RVA 0x33202B4

bool JDEOKJDONFF__HNIHOIAMDPC
               (JDEOKJDONFF_o *__this,RaidConfig_o *GALCGHPGAIB,
               System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  if ((DAT_04567844 & 1) == 0) {
    FUN_01bab630(&AiData_TypeInfo);
    DAT_04567844 = 1;
  }
  NEFKBLNBOAB__HNIHOIAMDPC((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,LKILNGEECIJ,(MethodInfo *)0x0);
  if ((AiData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AiData__BNMKDJBOPFJ(LKILNGEECIJ,(MethodInfo *)0x0);
  return true;
}

