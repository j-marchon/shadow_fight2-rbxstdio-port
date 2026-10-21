// TypeDefIndex 3083
// Namespace: 
// [CompilerGenerated]
// private sealed class EINKKMIHCHI.IDCCBIDEPFC
// Fields:
//   public EINKKMIHCHI <>4__this; // 0x10
//   public SelectUIStatus status; // 0x18

// ===== internal void EHMAAPAFAOF(SavedGameRequestStatus requestStatus, ISavedGameMetadata metadata)  [RVA 0x34C85CC]
// EINKKMIHCHI.IDCCBIDEPFC$$EHMAAPAFAOF @ RVA 0x34C85CC

void EINKKMIHCHI_IDCCBIDEPFC__EHMAAPAFAOF
               (EINKKMIHCHI_IDCCBIDEPFC_o *__this,int32_t requestStatus,
               GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_o *metadata,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *__this_00;
  GooglePlayGames_PlayGamesPlatform_o *__this_01;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *pGVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_c *pGVar6;
  ulong uVar7;
  int32_t *piVar8;
  Il2CppClass *pIVar9;
  EINKKMIHCHI_o *__this_02;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_04568651 & 1) == 0) {
    FUN_01bab630(&System_Action<SavedGameRequestStatus,_byte[]>_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo);
    FUN_01bab630(&Method_EINKKMIHCHI_ONJHAHCHMDJ_KJKHDAEAINK__);
                    /* try { // try from 035c8620 to 036c863b has its CatchHandler @ 035c87f0 */
    FUN_01bab630(&EINKKMIHCHI_ONJHAHCHMDJ_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_SelectUIStatus_TypeInfo);
                    /* try { // try from 035c863c to 036c863f has its CatchHandler @ 035c7cb4 */
                    /* try { // try from 035c8640 to 036c8647 has its CatchHandler @ 035c8778 */
    FUN_01bab630(&StringLiteral_5888/*"Error opening dump: "*/);
                    /* try { // try from 035c8648 to 036c864b has its CatchHandler @ 035c8774 */
    DAT_04568651 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(EINKKMIHCHI_ONJHAHCHMDJ_TypeInfo);
                    /* try { // try from 035c8654 to 036c8667 has its CatchHandler @ 035c87f0 */
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
                    /* try { // try from 035c8668 to 036c866b has its CatchHandler @ 035c8690 */
    __this_00[1].monitor = __this;
                    /* try { // try from 035c866c to 036c8673 has its CatchHandler @ 035c868c */
    thunk_FUN_01c20e04(&__this_00[1].monitor,__this);
                    /* catch() { ... } // from try @ 035c85ac with catch @ 035c8674
                       try { // try from 035c8674 to 036c86b7 has its CatchHandler @ 035c7cb4 */
    __this_00[1].klass = (Il2CppClass *)metadata;
                    /* catch() { ... } // from try @ 035c80d8 with catch @ 035c8680 */
    thunk_FUN_01c20e04(__this_00 + 1,metadata);
    __this_02 = (__this->fields).__4__this;
                    /* catch() { ... } // from try @ 035c866c with catch @ 035c868c */
    if (requestStatus == 1) {
                    /* catch() { ... } // from try @ 035c8668 with catch @ 035c8690 */
                    /* catch() { ... } // from try @ 035c8568 with catch @ 035c8694 */
                    /* catch() { ... } // from try @ 035c8524 with catch @ 035c8698 */
      if ((__this_02 != (EINKKMIHCHI_o *)0x0) &&
         (__this_01 = (__this_02->fields).GJOCPBIBFCD,
         __this_01 != (GooglePlayGames_PlayGamesPlatform_o *)0x0)) {
                    /* catch() { ... } // from try @ 035c850c with catch @ 035c869c */
        pGVar2 = GooglePlayGames_PlayGamesPlatform__get_SavedGame(__this_01,(MethodInfo *)0x0);
        pIVar9 = __this_00[1].klass;
                    /* try { // try from 035c86b8 to 036c86bb has its CatchHandler @ 035c86e4 */
                    /* try { // try from 035c86bc to 036c86f3 has its CatchHandler @ 035c7cb4 */
        uVar3 = thunk_FUN_01bda818(System_Action<SavedGameRequestStatus,_byte[]>_TypeInfo);
        System_Action<Int32Enum,_object>___ctor();
        if (pGVar2 != (GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *)0x0) {
                    /* catch() { ... } // from try @ 035c86b8 with catch @ 035c86e4 */
          pGVar6 = pGVar2->klass;
          uVar1._0_1_ = (pGVar6->_2).rank;
          uVar1._1_1_ = (pGVar6->_2).minimumAlignment;
          uVar7 = (ulong)uVar1;
                    /* try { // try from 035c86f4 to 036c8707 has its CatchHandler @ 035c87f0 */
          if (uVar7 != 0) {
            piVar8 = &((pGVar6->_1).interfaceOffsets)->offset;
            do {
                    /* catch() { ... } // from try @ 035c8480 with catch @ 035c8708
                       try { // try from 035c8708 to 036c8723 has its CatchHandler @ 035c7cb4 */
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                  (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo) {
                pVVar4 = pGVar6->vtable + (*piVar8 + 2);
                goto LAB_035c87a4;
              }
                    /* catch() { ... } // from try @ 035c8464 with catch @ 035c870c */
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          pVVar4 = (VirtualInvokeData *)
                   FUN_01b81914(pGVar2,GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo,
                                2);
                    /* try { // try from 035c8724 to 036c8727 has its CatchHandler @ 035c8750 */
LAB_035c87a4:
                    /* try { // try from 035c87a8 to 036c87ab has its CatchHandler @ 035c87cc */
                    /* try { // try from 035c87ac to 036c87d3 has its CatchHandler @ 035c7cb4 */
                    /* WARNING: Could not recover jumptable at 0x035c87c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar4->methodPtr)(pGVar2,pIVar9,uVar3,pVVar4->method);
          return;
        }
      }
    }
    else {
                    /* try { // try from 035c8728 to 036c875f has its CatchHandler @ 035c7cb4 */
      local_48.klass = (System_Enum_c *)GooglePlayGames_BasicApi_SavedGame_SelectUIStatus_TypeInfo;
      local_48.monitor = (void *)0xffffffffffffffff;
      local_38 = (__this->fields).status;
      pSVar5 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035c8724 with catch @ 035c8750 */
                    /* try { // try from 035c8760 to 036c8773 has its CatchHandler @ 035c87f0 */
      pSVar5 = System_String__Concat(StringLiteral_5888/*"Error opening dump: "*/,pSVar5,(MethodInfo *)0x0);
      if (__this_02 != (EINKKMIHCHI_o *)0x0) {
                    /* catch() { ... } // from try @ 035c8648 with catch @ 035c8774
                       try { // try from 035c8774 to 036c87a7 has its CatchHandler @ 035c7cb4 */
                    /* catch() { ... } // from try @ 035c8640 with catch @ 035c8778 */
                    /* catch() { ... } // from try @ 035c8094 with catch @ 035c877c */
        NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this_02,pSVar5,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035c8004 with catch @ 035c8780 */
                    /* catch() { ... } // from try @ 035c7fec with catch @ 035c8784 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34C6ED4]
// EINKKMIHCHI.IDCCBIDEPFC$$.ctor @ RVA 0x34C6ED4

void EINKKMIHCHI_IDCCBIDEPFC___ctor(EINKKMIHCHI_IDCCBIDEPFC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

