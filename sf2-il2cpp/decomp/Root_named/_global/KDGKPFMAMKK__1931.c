// TypeDefIndex 1931
// Namespace: 
// public class KDGKPFMAMKK : NEFKBLNBOAB
// Fields:

// ===== public void .ctor(string HEEJOJAGIKC)  [RVA 0x326C450]
// KDGKPFMAMKK$$.ctor @ RVA 0x326C450

void KDGKPFMAMKK___ctor(KDGKPFMAMKK_o *__this,System_String_o *HEEJOJAGIKC,MethodInfo *method)

{
  NEFKBLNBOAB___ctor((NEFKBLNBOAB_o *)__this,HEEJOJAGIKC,false,(MethodInfo *)0x0);
  return;
}


// ===== protected override bool HNIHOIAMDPC(RaidConfig GALCGHPGAIB, XmlDocument LKILNGEECIJ)  [RVA 0x326C45C]
// KDGKPFMAMKK$$HNIHOIAMDPC @ RVA 0x326C45C

bool KDGKPFMAMKK__HNIHOIAMDPC
               (KDGKPFMAMKK_o *__this,RaidConfig_o *GALCGHPGAIB,
               System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  LHOMEBJDFLD_o *__this_00;
  RaidConfig_NOPCEDPNNKO_o *CJNHFNHJHPE;
  Item_o *__this_01;
  
  if ((DAT_045671ef & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045671ef = 1;
  }
  NEFKBLNBOAB__HNIHOIAMDPC((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,LKILNGEECIJ,(MethodInfo *)0x0);
  __this_00 = SFRequestSender__HCJABMIHNNA((MethodInfo *)0x0);
  if (__this_00 != (LHOMEBJDFLD_o *)0x0) {
    LHOMEBJDFLD__DGLJCGNHLIG(__this_00,(MethodInfo *)0x0);
    CJNHFNHJHPE = RaidConfigParser__FEGPANCOLOL(LKILNGEECIJ,(MethodInfo *)0x0);
    if (CJNHFNHJHPE == (RaidConfig_NOPCEDPNNKO_o *)0x0) {
LAB_0336c544:
      return CJNHFNHJHPE != (RaidConfig_NOPCEDPNNKO_o *)0x0;
    }
    if (GALCGHPGAIB != (RaidConfig_o *)0x0) {
      RaidConfig__OKPNEHLBHFK(GALCGHPGAIB,CJNHFNHJHPE,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if (__this_01 != (Item_o *)0x0) {
        Item__GOPAGALDKPE(__this_01,(MethodInfo *)0x0);
        goto LAB_0336c544;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

