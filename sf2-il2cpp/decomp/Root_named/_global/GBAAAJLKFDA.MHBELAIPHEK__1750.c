// TypeDefIndex 1750
// Namespace: 
// [CompilerGenerated]
// private sealed class GBAAAJLKFDA.MHBELAIPHEK
// Fields:
//   public int startIndex; // 0x10
//   public List<ValueTuple<int, string>> zones; // 0x18
//   public GBAAAJLKFDA <>4__this; // 0x20
//   public OJJLPLHNGBP parameters; // 0x28

// ===== public void .ctor()  [RVA 0x31E1F1C]
// GBAAAJLKFDA.MHBELAIPHEK$$.ctor @ RVA 0x31E1F1C

void GBAAAJLKFDA_MHBELAIPHEK___ctor(GBAAAJLKFDA_MHBELAIPHEK_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void GPFEGDLLACA(int attempt)  [RVA 0x31E1F24]
// GBAAAJLKFDA.MHBELAIPHEK$$GPFEGDLLACA @ RVA 0x31E1F24

void GBAAAJLKFDA_MHBELAIPHEK__GPFEGDLLACA
               (GBAAAJLKFDA_MHBELAIPHEK_o *__this,int32_t attempt,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04566d4e & 1) == 0) {
    FUN_01bab630(&System_Action<GPBHNPOEFDO>_TypeInfo);
    FUN_01bab630(&System_Action<NIEPOJOIFNE>_TypeInfo);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_BHOHLODBJPE__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_IDIJAFLLLJG__);
    FUN_01bab630(&Method_GBAAAJLKFDA_LHMNKODEOEC_EPCDDCNGMFG__);
    FUN_01bab630(&Method_GBAAAJLKFDA_LHMNKODEOEC_GHEBCNBHOFM__);
    FUN_01bab630(&GBAAAJLKFDA_LHMNKODEOEC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<int,_string>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<int,_string>>_get_Item__);
    DAT_04566d4e = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(GBAAAJLKFDA_LHMNKODEOEC_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    thunk_FUN_01c20e04(&__this_00[2].monitor,__this);
    *(int32_t *)((long)&__this_00[2].klass + 4) = attempt;
    if ((__this->fields).zones != (System_Collections_Generic_List_ValueTuple_int__string___o *)0x0)
    {
      FUN_03f93a00((__this->fields).startIndex);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

