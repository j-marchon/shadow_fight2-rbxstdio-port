// EINKKMIHCHI$$OPAJGJEKAPD @ RVA 0x34C806C

void EINKKMIHCHI__OPAJGJEKAPD
               (EINKKMIHCHI_o *__this,System_String_o *OGPGLGPMEPD,bool HLJOHNIDBDM,
               MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  Il2CppObject *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  GooglePlayGames_PlayGamesPlatform_o *__this_01;
  UnityEngine_SocialPlatforms_IAchievement_o *pUVar6;
  VirtualInvokeData *pVVar7;
  undefined8 uVar8;
  System_String_o *pSVar9;
  undefined8 *puVar10;
  UnityEngine_SocialPlatforms_IAchievement_c *pUVar11;
  ulong uVar12;
  int32_t *piVar13;
  void *pvVar14;
  void **ppvVar15;
  
                    /* try { // try from 035c806c to 036c8087 has its CatchHandler @ 035c80b4 */
                    /* try { // try from 035c8094 to 036c809b has its CatchHandler @ 035c877c */
  if ((DAT_0456864d & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
                    /* try { // try from 035c80a4 to 036c80af has its CatchHandler @ 035c80bc */
    FUN_01bab630(&Method_EINKKMIHCHI_HALGHBGIAKH_HIMDMFDBBLM__);
                    /* try { // try from 035c80b0 to 036c80d7 has its CatchHandler @ 035c7cb4 */
                    /* catch() { ... } // from try @ 035c806c with catch @ 035c80b4 */
                    /* catch() { ... } // from try @ 035c8020 with catch @ 035c80b8 */
    FUN_01bab630(&EINKKMIHCHI_HALGHBGIAKH_TypeInfo);
                    /* catch() { ... } // from try @ 035c80a4 with catch @ 035c80bc */
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    FUN_01bab630(&UnityEngine_SocialPlatforms_IAchievement_TypeInfo);
                    /* try { // try from 035c80d8 to 036c80db has its CatchHandler @ 035c8680 */
                    /* try { // try from 035c80dc to 036c8463 has its CatchHandler @ 035c7cb4 */
    FUN_01bab630(&StringLiteral_15605);
    FUN_01bab630(&StringLiteral_15606);
    DAT_0456864d = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(EINKKMIHCHI_HALGHBGIAKH_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    ppvVar15 = &__this_00[1].monitor;
    *ppvVar15 = OGPGLGPMEPD;
    thunk_FUN_01c20e04(ppvVar15,OGPGLGPMEPD);
    pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).LKNFEOLNJKH;
    if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar4 = System_Collections_Generic_HashSet<object>__Contains
                        (pSVar5,*ppvVar15,
                         Method_System_Collections_Generic_HashSet<string>_Contains__);
      if (!bVar4) {
        pSVar9 = *ppvVar15;
        puVar10 = &StringLiteral_15606;
LAB_035c8188:
        pSVar9 = System_String__Concat((System_String_o *)*puVar10,pSVar9,(MethodInfo *)0x0);
        NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar9,(MethodInfo *)0x0);
        return;
      }
      pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FEKDPAPKONP;
      if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar4 = System_Collections_Generic_HashSet<object>__Contains
                          (pSVar5,*ppvVar15,
                           Method_System_Collections_Generic_HashSet<string>_Contains__);
        if (bVar4) {
          if (!HLJOHNIDBDM) {
            return;
          }
          pSVar9 = *ppvVar15;
          puVar10 = &StringLiteral_15605;
          goto LAB_035c8188;
        }
        __this_01 = (__this->fields).GJOCPBIBFCD;
        if ((__this_01 != (GooglePlayGames_PlayGamesPlatform_o *)0x0) &&
           (pUVar6 = GooglePlayGames_PlayGamesPlatform__CreateAchievement
                               (__this_01,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_SocialPlatforms_IAchievement_o *)0x0)) {
          pUVar11 = pUVar6->klass;
          pvVar14 = *ppvVar15;
          uVar1._0_1_ = (pUVar11->_2).rank;
          uVar1._1_1_ = (pUVar11->_2).minimumAlignment;
          uVar12 = (ulong)uVar1;
          if (uVar12 != 0) {
            piVar13 = &((pUVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                  (Il2CppClass *)UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                pVVar7 = pUVar11->vtable + (*piVar13 + 2);
                goto LAB_035c8234;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          pVVar7 = (VirtualInvokeData *)
                   FUN_01b81914(pUVar6,UnityEngine_SocialPlatforms_IAchievement_TypeInfo,2);
LAB_035c8234:
          (*pVVar7->methodPtr)(pUVar6,pvVar14,pVVar7->method);
          pUVar11 = pUVar6->klass;
          uVar2._0_1_ = (pUVar11->_2).rank;
          uVar2._1_1_ = (pUVar11->_2).minimumAlignment;
          uVar12 = (ulong)uVar2;
          if (uVar12 != 0) {
            piVar13 = &((pUVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                  (Il2CppClass *)UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                pVVar7 = pUVar11->vtable + (*piVar13 + 3);
                goto LAB_035c8294;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          pVVar7 = (VirtualInvokeData *)
                   FUN_01b81914(pUVar6,UnityEngine_SocialPlatforms_IAchievement_TypeInfo,3);
LAB_035c8294:
          (*pVVar7->methodPtr)(0x4059000000000000,pUVar6,pVVar7->method);
          uVar8 = thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
          System_Action<bool>___ctor();
          pUVar11 = pUVar6->klass;
          uVar3._0_1_ = (pUVar11->_2).rank;
          uVar3._1_1_ = (pUVar11->_2).minimumAlignment;
          uVar12 = (ulong)uVar3;
          if (uVar12 != 0) {
            piVar13 = &((pUVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                  (Il2CppClass *)UnityEngine_SocialPlatforms_IAchievement_TypeInfo) {
                pVVar7 = pUVar11->vtable + *piVar13;
                goto LAB_035c8320;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          pVVar7 = (VirtualInvokeData *)
                   FUN_01b81914(pUVar6,UnityEngine_SocialPlatforms_IAchievement_TypeInfo,0);
LAB_035c8320:
                    /* WARNING: Could not recover jumptable at 0x035c8338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar7->methodPtr)(pUVar6,uVar8,pVVar7->method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

