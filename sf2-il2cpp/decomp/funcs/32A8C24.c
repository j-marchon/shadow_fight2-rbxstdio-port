// Core.Configs.Models.BuildSettingsExtension$$GetSupportUrl @ RVA 0x32A8C24

System_String_o *
Core_Configs_Models_BuildSettingsExtension__GetSupportUrl
          (Core_Configs_Models_InternetSettings_o *settings,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_Generic_Dictionary_string__string__o *dictionary;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *local_38;
  
                    /* try { // try from 033a8c30 to 034a8c33 has its CatchHandler @ 033a8c44 */
  if ((DAT_0456741d & 1) == 0) {
                    /* catch() { ... } // from try @ 033a8c30 with catch @ 033a8c44 */
                    /* try { // try from 033a8c4c to 034a8cb3 has its CatchHandler @ 033a8cc8 */
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_string>__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_0456741d = 1;
  }
  local_38 = (System_String_o *)0x0;
  if (settings != (Core_Configs_Models_InternetSettings_o *)0x0) {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             (settings->fields)._SupportUrl_k__BackingField;
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar7 = pIVar4->klass;
      uVar1._0_1_ = (pIVar7->_2).rank;
      uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
                    /* try { // try from 033a8cb4 to 034a8cbf has its CatchHandler @ 033a88ec */
      if (uVar8 != 0) {
        piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
        do {
                    /* try { // try from 033a8cc0 to 034a8cc7 has its CatchHandler @ 033a8cc8 */
                    /* catch() { ... } // from try @ 033a8c4c with catch @ 033a8cc8
                       catch() { ... } // from try @ 033a8cc0 with catch @ 033a8cc8 */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar5 = pIVar7->vtable + (*piVar9 + 6);
            goto LAB_033a8cf8;
          }
                    /* try { // try from 033a8ccc to 034a8ecf has its CatchHandler @ 033a8ccc
                       catch() { ... } // from try @ 033a8ccc with catch @ 033a8ccc
                       catch() { ... } // from try @ 033a9144 with catch @ 033a8ccc
                       catch() { ... } // from try @ 033a92a4 with catch @ 033a8ccc
                       catch() { ... } // from try @ 033a92ac with catch @ 033a8ccc
                       catch() { ... } // from try @ 033a93a8 with catch @ 033a8ccc */
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,6);
LAB_033a8cf8:
      lVar6 = (*pVVar5->methodPtr)(pIVar4,pVVar5->method);
      if ((lVar6 != 0) && (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)
         ) {
        bVar3 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                          (__this,*(Il2CppObject **)(lVar6 + 0x10),(Il2CppObject **)&local_38,
                           Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__
                          );
        if (!bVar3) {
          dictionary = (settings->fields)._SupportUrl_k__BackingField;
          pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_033a8dd0;
          pIVar7 = pIVar4->klass;
          uVar2._0_1_ = (pIVar7->_2).rank;
          uVar2._1_1_ = (pIVar7->_2).minimumAlignment;
          uVar8 = (ulong)uVar2;
          if (uVar8 != 0) {
            piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar5 = pIVar7->vtable + (*piVar9 + 0xd);
                goto LAB_033a8d98;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xd);
LAB_033a8d98:
          pIVar4 = (Il2CppObject *)(*pVVar5->methodPtr)(pIVar4,pVVar5->method);
          local_38 = (System_String_o *)
                     System_Collections_Generic_CollectionExtensions__GetValueOrDefault<object,_object>
                               ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                                dictionary,pIVar4,
                                Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_string>__
                               );
        }
        return local_38;
      }
    }
  }
LAB_033a8dd0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

