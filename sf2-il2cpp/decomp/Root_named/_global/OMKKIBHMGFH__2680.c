// TypeDefIndex 2680
// Namespace: 
// public class OMKKIBHMGFH : NEFKBLNBOAB
// Fields:

// ===== protected override bool HNIHOIAMDPC(RaidConfig GALCGHPGAIB, XmlDocument LKILNGEECIJ)  [RVA 0x33C7930]
// OMKKIBHMGFH$$HNIHOIAMDPC @ RVA 0x33C7930

bool OMKKIBHMGFH__HNIHOIAMDPC
               (OMKKIBHMGFH_o *__this,RaidConfig_o *GALCGHPGAIB,
               System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  RaidConfig_JMEJFGKJNEA_o *pJVar1;
  RaidConfig_JMEJFGKJNEA_o **ppJVar2;
  
  NEFKBLNBOAB__HNIHOIAMDPC((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,LKILNGEECIJ,(MethodInfo *)0x0);
  pJVar1 = RaidConfigParser__EAGBBNECKFB(LKILNGEECIJ,(MethodInfo *)0x0);
  if (pJVar1 != (RaidConfig_JMEJFGKJNEA_o *)0x0) {
    if (GALCGHPGAIB == (RaidConfig_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppJVar2 = &(GALCGHPGAIB->fields)._NFFDCNIMBHK_k__BackingField;
    *ppJVar2 = pJVar1;
    thunk_FUN_01c20e04(ppJVar2,pJVar1);
  }
  return pJVar1 != (RaidConfig_JMEJFGKJNEA_o *)0x0;
}


// ===== public void .ctor(string HEEJOJAGIKC)  [RVA 0x33C7988]
// OMKKIBHMGFH$$.ctor @ RVA 0x33C7988

void OMKKIBHMGFH___ctor(OMKKIBHMGFH_o *__this,System_String_o *HEEJOJAGIKC,MethodInfo *method)

{
  NEFKBLNBOAB___ctor((NEFKBLNBOAB_o *)__this,HEEJOJAGIKC,true,(MethodInfo *)0x0);
  return;
}

