// TypeDefIndex 114
// Namespace: 
// [CompilerGenerated]
// private sealed class BPAIEBPNHEM.JIAKPCKBFOJ
// Fields:
//   public FightList fightList; // 0x10

// ===== public void .ctor()  [RVA 0x3010688]
// BPAIEBPNHEM.JIAKPCKBFOJ$$.ctor @ RVA 0x3010688

void BPAIEBPNHEM_JIAKPCKBFOJ___ctor(BPAIEBPNHEM_JIAKPCKBFOJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void IMEDHACBLGP()  [RVA 0x3010748]
// BPAIEBPNHEM.JIAKPCKBFOJ$$IMEDHACBLGP @ RVA 0x3010748

void BPAIEBPNHEM_JIAKPCKBFOJ__IMEDHACBLGP(BPAIEBPNHEM_JIAKPCKBFOJ_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  FightList_o *FBFPLEFCDOK;
  
  if ((DAT_04565ba5 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04565ba5 = 1;
    method = extraout_x1;
  }
  FBFPLEFCDOK = (__this->fields).fightList;
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
  }
                    /* try { // try from 031107b4 to 032107b7 has its CatchHandler @ 031107cc */
  GameUtils__EEGOPNGLBMJ
            (FBFPLEFCDOK,false,(OOMHDDBCBJP_o *)0x0,true,false,false,(MethodInfo *)0x0);
  return;
}

