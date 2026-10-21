// TypeDefIndex 1010
// Namespace: 
// public class MDAPDLLMOMF.DOPLCEEGPAO
// Fields:
//   public string JIJLBFGKNJK; // 0x10
//   public ObscuredInt IELLEFEFFJD; // 0x18
//   public ObscuredInt CMKEIKEBPMN; // 0x28

// ===== public void .ctor()  [RVA 0x30C4978]
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
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 031c49a4 to 032c49a7 has its CatchHandler @ 031c49bc */
    DAT_045662a0 = 1;
  }
  (__this->fields).JIJLBFGKNJK = StringLiteral_1/*""*/;
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


// ===== public void .ctor(string DEKCPPOJFEH, int GCCDHHLPMIG, int EIIHABBFIKD)  [RVA 0x30C3A4C]
// MDAPDLLMOMF.DOPLCEEGPAO$$.ctor @ RVA 0x30C3A4C

void MDAPDLLMOMF_DOPLCEEGPAO___ctor
               (MDAPDLLMOMF_DOPLCEEGPAO_o *__this,System_String_o *DEKCPPOJFEH,int32_t GCCDHHLPMIG,
               int32_t EIIHABBFIKD,MethodInfo *method)

{
  MDAPDLLMOMF_DOPLCEEGPAO_Fields *pMVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar2;
  
  if ((DAT_045662a1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045662a1 = 1;
  }
  pMVar1 = &__this->fields;
  pMVar1->JIJLBFGKNJK = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(pMVar1);
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(-1,(MethodInfo *)0x0);
  (__this->fields).IELLEFEFFJD.fields = CVar2;
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(-1,(MethodInfo *)0x0);
  (__this->fields).CMKEIKEBPMN.fields = CVar2;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pMVar1->JIJLBFGKNJK = DEKCPPOJFEH;
  thunk_FUN_01c20e04(pMVar1,DEKCPPOJFEH);
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(GCCDHHLPMIG,(MethodInfo *)0x0);
  (__this->fields).IELLEFEFFJD.fields = CVar2;
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(EIIHABBFIKD,(MethodInfo *)0x0);
  (__this->fields).CMKEIKEBPMN.fields = CVar2;
  return;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x30C49F0]
// MDAPDLLMOMF.DOPLCEEGPAO$$RandomizeObscuredVars @ RVA 0x30C49F0

void MDAPDLLMOMF_DOPLCEEGPAO__RandomizeObscuredVars
               (MDAPDLLMOMF_DOPLCEEGPAO_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  
                    /* try { // try from 031c49f4 to 032c4a1b has its CatchHandler @ 031c4a30 */
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &(__this->fields).IELLEFEFFJD;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  __this_01.fields.fakeValue = 0;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields.inited = false;
  __this_01.fields._14_2_ = 0;
  __this_01.fields._0_8_ = &(__this->fields).CMKEIKEBPMN;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
  return;
}

