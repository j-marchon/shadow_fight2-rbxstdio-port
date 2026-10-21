// TypeDefIndex 789
// Namespace: 
// public abstract class KJPDGEIKFAH : IEJKLPPLHMO
// Fields:

// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x306A818]
// KJPDGEIKFAH$$KCBILPIAPHN @ RVA 0x306A818

int32_t KJPDGEIKFAH__KCBILPIAPHN(KJPDGEIKFAH_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== protected void .ctor()  [RVA 0x306A820]
// KJPDGEIKFAH$$.ctor @ RVA 0x306A820

void KJPDGEIKFAH___ctor(KJPDGEIKFAH_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool ECKDICODLME()  [RVA 0x306A828]
// KJPDGEIKFAH$$ECKDICODLME @ RVA 0x306A828

bool KJPDGEIKFAH__ECKDICODLME(KJPDGEIKFAH_o *__this,MethodInfo *method)

{
  return false;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x306A830]
// KJPDGEIKFAH$$AJJLBBCJAAL @ RVA 0x306A830

System_String_o *
KJPDGEIKFAH__AJJLBBCJAAL(KJPDGEIKFAH_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  System_Text_StringBuilder_o *__this_00;
  undefined8 uVar2;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((DAT_04565f29 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3040);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3041);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316a7dc with catch @ 0316a878
                        */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    DAT_04565f29 = 1;
  }
                    /* try { // try from 0316a890 to 0326a893 has its CatchHandler @ 0316a8a8 */
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
                    /* catch() { ... } // from try @ 0316a890 with catch @ 0316a8a8 */
    if (0 < (int)OPAEPDIIOEB->max_length) {
      uVar5 = 0;
      uVar4 = OPAEPDIIOEB->max_length & 0xffffffff;
      do {
        if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_0316a984;
        System_Text_StringBuilder__Append(__this_00,OPAEPDIIOEB->m_Items[uVar5],(MethodInfo *)0x0);
        uVar1 = (uint)OPAEPDIIOEB->max_length;
        uVar4 = (ulong)uVar1;
                    /* try { // try from 0316a8e0 to 0326a907 has its CatchHandler @ 0316a91c */
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)uVar1);
    }
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
                    /* try { // try from 0316a908 to 0326a913 has its CatchHandler @ 0316a6c4 */
                    /* try { // try from 0316a914 to 0326a91b has its CatchHandler @ 0316a91c */
      uVar2 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._3_ToString.method);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0316a8e0 with catch @ 0316a91c
                       catch(type#2 @ 00000000) { ... } // from try @ 0316a914 with catch @ 0316a91c
                        */
      (*(__this->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                (__this,uVar2,(__this->klass->vtable)._9_HNIHOIAMDPC.method);
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3040,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3041,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
LAB_0316a984:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

