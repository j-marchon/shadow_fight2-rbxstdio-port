// IIHMKHNLJKD$$BHFGGAKKJKP @ RVA 0x31D1954

void IIHMKHNLJKD__BHFGGAKKJKP
               (IIHMKHNLJKD_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  int64_t iVar4;
  System_Xml_XmlElement_o *pSVar5;
  MethodInfo *pMVar6;
  System_String_o *pSVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *pCVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_02;
  undefined1 local_e0 [40];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_04566cad & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_IIHMKHNLJKD_MGNPEFBKION>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_IIHMKHNLJKD_MGNPEFBKION>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_IIHMKHNLJKD_MGNPEFBKION>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_IIHMKHNLJKD_MGNPEFBKION>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_IIHMKHNLJKD_MGNPEFBKION>_get_Value__
                );
    FUN_01bab630(&StringLiteral_4834);
    FUN_01bab630(&StringLiteral_13814);
    FUN_01bab630(&StringLiteral_4830);
    FUN_01bab630(&StringLiteral_7230);
    DAT_04566cad = 1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    (*(JHMENEKPIBO->klass->vtable)._49_RemoveAll.methodPtr)
              (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._49_RemoveAll.method);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).FODILKIIDCE;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                (&local_b8,__this_00,
                 Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_GetEnumerator__
                );
      local_90.fields._version = local_b8.fields._version;
      local_90.fields._index = local_b8.fields._index;
      local_90.fields._dictionary = local_b8.fields._dictionary;
      local_90.fields._current.fields.value = local_b8.fields._current.fields.value;
      local_90.fields._current.fields.key = local_b8.fields._current.fields.key;
      local_90.fields._getEnumeratorRetType = local_b8.fields._getEnumeratorRetType;
      local_90.fields._36_4_ = local_b8.fields._36_4_;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                          (&local_90,
                           Method_System_Collections_Generic_Dictionary_Enumerator<string,_IIHMKHNLJKD_MGNPEFBKION>_MoveNext__
                          );
        pIVar1 = local_90.fields._current.fields.value;
        pMVar6 = (MethodInfo *)local_90.fields._current.fields.key;
        if (!bVar2) {
          System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                    (&local_90,
                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_IIHMKHNLJKD_MGNPEFBKION>_Dispose__
                    );
          return;
        }
        if (local_90.fields._current.fields.value == (Il2CppObject *)0x0) break;
        pCVar8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                 (local_90.fields._current.fields.value + 2);
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)*pCVar8,
                           (MethodInfo *)0x0);
        if (iVar3 != 0) {
          iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 1),
                             (MethodInfo *)0x0);
          if (iVar3 != 0) {
            local_e0._8_8_ = pIVar1[3].monitor;
            local_e0._0_8_ = pIVar1[3].klass;
            local_e0._24_8_ = pIVar1[4].monitor;
            local_e0._16_8_ = pIVar1[4].klass;
            iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_e0,
                               (MethodInfo *)0x0);
            if (iVar4 != 0) {
              pSVar5 = EIABCPKDEBD__BHPIHHJHELJ(JHMENEKPIBO,StringLiteral_4830,(MethodInfo *)0x0);
              if (pSVar5 == (System_Xml_XmlElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              (*(pSVar5->klass->vtable)._66_SetAttribute.methodPtr)
                        (pSVar5,StringLiteral_7230,pMVar6,
                         (pSVar5->klass->vtable)._66_SetAttribute.method);
              __this_01.fields.fakeValue = 0;
              __this_01.fields.fakeValueActive = false;
              __this_01.fields.inited = false;
              __this_01.fields._14_2_ = 0;
              __this_01.fields._0_8_ =
                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 1);
              pMVar6 = (MethodInfo *)
                       CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(__this_01,pMVar6);
              (*(pSVar5->klass->vtable)._66_SetAttribute.methodPtr)
                        (pSVar5,StringLiteral_4834,pMVar6,
                         (pSVar5->klass->vtable)._66_SetAttribute.method);
              __this_02.fields.fakeValue = 0;
              __this_02.fields.fakeValueActive = false;
              __this_02.fields.inited = false;
              __this_02.fields._14_2_ = 0;
              __this_02.fields._0_8_ = pCVar8;
              pSVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(__this_02,pMVar6);
              (*(pSVar5->klass->vtable)._66_SetAttribute.methodPtr)
                        (pSVar5,StringLiteral_4830,pSVar7,
                         (pSVar5->klass->vtable)._66_SetAttribute.method);
              pSVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ToString
                                 ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)(pIVar1 + 3),
                                  (MethodInfo *)0x0);
              (*(pSVar5->klass->vtable)._66_SetAttribute.methodPtr)
                        (pSVar5,StringLiteral_13814,pSVar7,
                         (pSVar5->klass->vtable)._66_SetAttribute.method);
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

