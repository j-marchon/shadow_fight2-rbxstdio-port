// IENLNOEDCFF$$EPBENPDCBFE @ RVA 0x30F22A0

bool IENLNOEDCFF__EPBENPDCBFE(IENLNOEDCFF_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_04566432 & 1) == 0) {
                    /* try { // try from 031f22d8 to 032f2363 has its CatchHandler @ 031f22d8
                       catch() { ... } // from try @ 031f22d8 with catch @ 031f22d8
                       catch() { ... } // from try @ 031f2384 with catch @ 031f22d8
                       catch() { ... } // from try @ 031f23a8 with catch @ 031f22d8
                       catch() { ... } // from try @ 031f23d0 with catch @ 031f22d8
                       catch() { ... } // from try @ 031f2410 with catch @ 031f22d8 */
    FUN_01bab630(&IENLNOEDCFF_ACAJADECPLB_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_5583);
    DAT_04566432 = 1;
  }
  local_38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                       ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                        (__this->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
  local_48.klass = (System_Enum_c *)IENLNOEDCFF_ACAJADECPLB_TypeInfo;
  local_48.monitor = (void *)0xffffffffffffffff;
  pSVar1 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_5583,pSVar1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 031f2364 to 032f236b has its CatchHandler @ 031f23b4 */
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 031f237c to 032f2383 has its CatchHandler @ 031f23b0 */
  return false;
}

