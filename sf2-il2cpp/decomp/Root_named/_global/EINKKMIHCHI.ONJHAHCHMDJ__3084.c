// TypeDefIndex 3084
// Namespace: 
// [CompilerGenerated]
// private sealed class EINKKMIHCHI.ONJHAHCHMDJ
// Fields:
//   public ISavedGameMetadata metadata; // 0x10
//   public EINKKMIHCHI.IDCCBIDEPFC CS$<>8__locals1; // 0x18

// ===== public void .ctor()  [RVA 0x34C87CC]
// EINKKMIHCHI.ONJHAHCHMDJ$$.ctor @ RVA 0x34C87CC

void EINKKMIHCHI_ONJHAHCHMDJ___ctor(EINKKMIHCHI_ONJHAHCHMDJ_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 035c87a8 with catch @ 035c87cc */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void KJKHDAEAINK(SavedGameRequestStatus loadStatus, byte[] loadData)  [RVA 0x34C87D4]
// EINKKMIHCHI.ONJHAHCHMDJ$$KJKHDAEAINK @ RVA 0x34C87D4

void EINKKMIHCHI_ONJHAHCHMDJ__KJKHDAEAINK
               (EINKKMIHCHI_ONJHAHCHMDJ_o *__this,int32_t loadStatus,System_Byte_array *loadData,
               MethodInfo *method)

{
  MethodInfo *in_x4;
  EINKKMIHCHI_IDCCBIDEPFC_o *pEVar1;
  EINKKMIHCHI_o *__this_00;
  
                    /* try { // try from 035c87d4 to 036c87db has its CatchHandler @ 035c87f0 */
  pEVar1 = (__this->fields).CS___8__locals1;
                    /* try { // try from 035c87dc to 036c87e7 has its CatchHandler @ 035c7cb4 */
  if ((pEVar1 != (EINKKMIHCHI_IDCCBIDEPFC_o *)0x0) &&
     (__this_00 = (pEVar1->fields).__4__this, __this_00 != (EINKKMIHCHI_o *)0x0)) {
                    /* try { // try from 035c87e8 to 036c87ef has its CatchHandler @ 035c87f0 */
                    /* catch() { ... } // from try @ 035c8620 with catch @ 035c87f0
                       catch() { ... } // from try @ 035c8654 with catch @ 035c87f0
                       catch() { ... } // from try @ 035c86f4 with catch @ 035c87f0
                       catch() { ... } // from try @ 035c8760 with catch @ 035c87f0
                       catch() { ... } // from try @ 035c87d4 with catch @ 035c87f0
                       catch() { ... } // from try @ 035c87e8 with catch @ 035c87f0 */
    EINKKMIHCHI__EBHHFBBIJEK(__this_00,loadStatus,(__this->fields).metadata,loadData,in_x4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

