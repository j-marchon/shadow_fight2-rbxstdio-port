// MDAPDLLMOMF.DOPLCEEGPAO$$.ctor @ RVA 0x30C4978

void MDAPDLLMOMF_DOPLCEEGPAO___ctor(MDAPDLLMOMF_DOPLCEEGPAO_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
                    /* try { // try from 031c4980 to 032c4983 has its CatchHandler @ 031c4984 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c4980 with catch @ 031c4984
                       try { // try from 031c4984 to 032c49a3 has its CatchHandler @ 031c4848 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c48dc with catch @ 031c4988
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c48f8 with catch @ 031c498c
                        */
  if ((DAT_045662a0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 031c49a4 to 032c49a7 has its CatchHandler @ 031c49bc */
    DAT_045662a0 = 1;
  }
  (__this->fields).JIJLBFGKNJK = StringLiteral_1;
  thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 031c49a4 with catch @ 031c49bc */
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(-1,(MethodInfo *)0x0);
  (__this->fields).IELLEFEFFJD.fields = CVar1;
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(-1,(MethodInfo *)0x0);
  (__this->fields).CMKEIKEBPMN.fields = CVar1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

