// Core.Configs.Models.BuildSettingsExtension$$GetEULAUrl @ RVA 0x32A8DD4

System_String_o *
Core_Configs_Models_BuildSettingsExtension__GetEULAUrl
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
  
  if ((DAT_0456741e & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_string>__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_0456741e = 1;
  }
  local_38 = (System_String_o *)0x0;
  if (settings != (Core_Configs_Models_InternetSettings_o *)0x0) {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             (settings->fields)._EULAUrl_k__BackingField;
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar7 = pIVar4->klass;
      uVar1._0_1_ = (pIVar7->_2).rank;
      uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar5 = pIVar7->vtable + (*piVar9 + 6);
            goto LAB_033a8ea8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,6);
LAB_033a8ea8:
      lVar6 = (*pVVar5->methodPtr)(pIVar4,pVVar5->method);
      if ((lVar6 != 0) && (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)
         ) {
                    /* try { // try from 033a8ed0 to 034a8ef7 has its CatchHandler @ 033a9308 */
        bVar3 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                          (__this,*(Il2CppObject **)(lVar6 + 0x10),(Il2CppObject **)&local_38,
                           Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__
                          );
        if (!bVar3) {
          dictionary = (settings->fields)._EULAUrl_k__BackingField;
          pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_033a8f80;
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
                goto LAB_033a8f48;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
                    /* try { // try from 033a8f2c to 034a8f57 has its CatchHandler @ 033a9304 */
          pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xd);
LAB_033a8f48:
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
LAB_033a8f80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

