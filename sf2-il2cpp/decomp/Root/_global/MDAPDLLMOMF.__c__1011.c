// TypeDefIndex 1011
// Namespace: 
// [Serializable]
// private sealed class MDAPDLLMOMF.<>c
// Fields:
//   public static readonly MDAPDLLMOMF.<>c <>9; // 0x0
//   public static Action<MDAPDLLMOMF.DOPLCEEGPAO> <>9__71_0; // 0x8
//   public static Action<MGNDHCBAPEN<string, ObscuredFloat>> <>9__71_1; // 0x10

// ===== internal void LLGIIKHMILE(MGNDHCBAPEN<string, ObscuredFloat> x)  [RVA 0x30C4A14]
// MDAPDLLMOMF.<>c$$LLGIIKHMILE @ RVA 0x30C4A14

void MDAPDLLMOMF_<>c__LLGIIKHMILE
               (MDAPDLLMOMF___c_o *__this,MGNDHCBAPEN_string__ObscuredFloat__o *x,MethodInfo *method
               )

{
  if (x != (MGNDHCBAPEN_string__ObscuredFloat__o *)0x0) {
                    /* try { // try from 031c4a1c to 032c4a27 has its CatchHandler @ 031c4848 */
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
              (&(x->fields).DOKHHBGJICA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031c4a28 to 032c4a2f has its CatchHandler @ 031c4a30 */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30C4A2C]
// MDAPDLLMOMF.<>c$$.ctor @ RVA 0x30C4A2C

void MDAPDLLMOMF_<>c___ctor(MDAPDLLMOMF___c_o *__this,MethodInfo *method)

{
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031c49f4 with catch @ 031c4a30
                       catch(type#2 @ 00000000) { ... } // from try @ 031c4a28 with catch @ 031c4a30
                        */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void JFCCDKLBFKA(MDAPDLLMOMF.DOPLCEEGPAO x)  [RVA 0x30C4A34]
// MDAPDLLMOMF.<>c$$JFCCDKLBFKA @ RVA 0x30C4A34

void MDAPDLLMOMF_<>c__JFCCDKLBFKA
               (MDAPDLLMOMF___c_o *__this,MDAPDLLMOMF_DOPLCEEGPAO_o *x,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  
  if (x != (MDAPDLLMOMF_DOPLCEEGPAO_o *)0x0) {
    __this_00.fields.fakeValue = 0;
    __this_00.fields.fakeValueActive = false;
    __this_00.fields.inited = false;
    __this_00.fields._14_2_ = 0;
    __this_00.fields._0_8_ = &(x->fields).IELLEFEFFJD;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,method);
    __this_01.fields.fakeValue = 0;
    __this_01.fields.fakeValueActive = false;
    __this_01.fields.inited = false;
    __this_01.fields._14_2_ = 0;
    __this_01.fields._0_8_ = &(x->fields).CMKEIKEBPMN;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x30C4A60]
// MDAPDLLMOMF.<>c$$.cctor @ RVA 0x30C4A60

void MDAPDLLMOMF_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045662a2 & 1) == 0) {
    FUN_01bab630(&MDAPDLLMOMF_<>c_TypeInfo);
    DAT_045662a2 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(MDAPDLLMOMF_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  MDAPDLLMOMF_<>c_TypeInfo->static_fields->__9 = (MDAPDLLMOMF___c_o *)__this;
  thunk_FUN_01c20e04(MDAPDLLMOMF_<>c_TypeInfo->static_fields,__this);
  return;
}

