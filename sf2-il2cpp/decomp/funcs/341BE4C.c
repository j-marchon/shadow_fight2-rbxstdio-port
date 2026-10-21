// HEFOANCOHDC$$FBEOHCOEMKH @ RVA 0x341BE4C

System_String_o *
HEFOANCOHDC__FBEOHCOEMKH(HEFOANCOHDC_o *__this,System_String_o *DOBODIEOBBL,MethodInfo *method)

{
  Il2CppObject *KGLJICLJHEL;
  bool bVar1;
  uint16_t uVar2;
  uint index;
  int32_t iVar3;
  uint uVar4;
  System_Text_StringBuilder_o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar5;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_01;
  LEGDPJHPEOB_o *__this_02;
  System_String_o *pSVar6;
  System_String_o *value;
  NILLKLHKLHG_o *__this_03;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *pSVar7;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o **ppSVar8;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  MMFIDKMDADC_o *pMVar9;
  PKHMIGFEJCL_o *pPVar10;
  PKHMIGFEJCL_o **ppPVar11;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_045680ef & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_get_Current__
                );
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredString>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredString>_get_Value__
                );
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045680ef = 1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  if (DOBODIEOBBL != (System_String_o *)0x0) {
    index = System_String__IndexOf(DOBODIEOBBL,0x7b,(MethodInfo *)0x0);
    if ((index == 0xffffffff) ||
       (iVar3 = System_String__LastIndexOf(DOBODIEOBBL,0x7d,(MethodInfo *)0x0), iVar3 == -1)) {
      return DOBODIEOBBL;
    }
    __this_00 = (System_Text_StringBuilder_o *)
                thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append(__this_00,DOBODIEOBBL,(MethodInfo *)0x0);
      pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar5 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        pPVar10 = (pNVar5->fields).QuestParameters;
        __this_01 = (EILGGBOIMGE_FMFDKGKCBBG_o *)
                    thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
        EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_01,(MethodInfo *)0x0);
        __this_02 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
        LEGDPJHPEOB___ctor(__this_02,(MethodInfo *)0x0);
        if (__this_02 != (LEGDPJHPEOB_o *)0x0) {
          ppPVar11 = &(__this_02->fields).AAJBIMFNMBB;
          *ppPVar11 = pPVar10;
          thunk_FUN_01c20e04(ppPVar11,pPVar10);
          pSVar6 = StringLiteral_1;
          do {
            StringLiteral_1 = pSVar6;
            if (iVar3 < (int)index) {
              pSVar6 = (System_String_o *)
                       (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                                 (__this_00,(__this_00->klass->vtable)._3_ToString.method);
              return pSVar6;
            }
                    /* try { // try from 0351c054 to 0361c247 has its CatchHandler @ 0351c054
                       catch() { ... } // from try @ 0351c054 with catch @ 0351c054
                       catch() { ... } // from try @ 0351c280 with catch @ 0351c054
                       catch() { ... } // from try @ 0351c2b8 with catch @ 0351c054
                       catch() { ... } // from try @ 0351c2e4 with catch @ 0351c054
                       catch() { ... } // from try @ 0351c324 with catch @ 0351c054 */
            uVar2 = System_String__get_Chars(DOBODIEOBBL,index,(MethodInfo *)0x0);
            uVar4 = index;
            if (uVar2 == 0x7b) {
              uVar4 = System_String__IndexOf(DOBODIEOBBL,0x7d,index,(MethodInfo *)0x0);
              value = System_String__Substring
                                (DOBODIEOBBL,index + 1,uVar4 + ~index,(MethodInfo *)0x0);
              bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
              if (!bVar1) {
                __this_03 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
                NILLKLHKLHG___ctor(__this_03,(MethodInfo *)0x0);
                pSVar7 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                         thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                System_Action<object>___ctor();
                if (__this_03 == (NILLKLHKLHG_o *)0x0) break;
                (__this_03->fields)._PGFJLBODEHE_k__BackingField = pSVar7;
                thunk_FUN_01c20e04(&__this_03->fields,pSVar7);
                pSVar7 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                         thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                System_Action<object>___ctor();
                ppSVar8 = &(__this_03->fields)._KFMEPBBGDFG_k__BackingField;
                *ppSVar8 = pSVar7;
                thunk_FUN_01c20e04(ppSVar8,pSVar7);
                __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)
                            (__this->fields).NBOMAJCMIIL;
                if (__this_04 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                break;
                System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                          (&local_b8,__this_04,
                           Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_GetEnumerator__
                          );
                local_90.fields._version = local_b8.fields._version;
                local_90.fields._index = local_b8.fields._index;
                local_90.fields._dictionary = local_b8.fields._dictionary;
                local_90.fields._current.fields.value = local_b8.fields._current.fields.value;
                local_90.fields._current.fields.key = local_b8.fields._current.fields.key;
                local_90.fields._getEnumeratorRetType = local_b8.fields._getEnumeratorRetType;
                local_90.fields._36_4_ = local_b8.fields._36_4_;
                while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                                         (&local_90,
                                          Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_MoveNext__
                                         ), KGLJICLJHEL = local_90.fields._current.fields.key, bVar1
                      ) {
                  pSVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                                     ((CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)
                                      local_90.fields._current.fields.value,(MethodInfo *)0x0);
                  NILLKLHKLHG__HEMDIAFAMAO
                            (__this_03,(System_String_o *)KGLJICLJHEL,pSVar6,(MethodInfo *)0x0);
                }
                System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                          (&local_90,
                           Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredString>_Dispose__
                          );
                NILLKLHKLHG__HNIHOIAMDPC(__this_03,value,(MethodInfo *)0x0);
                pMVar9 = NILLKLHKLHG__CHKGAHCDFJF(__this_03,false,(MethodInfo *)0x0);
                if (pMVar9 == (MMFIDKMDADC_o *)0x0) break;
                pSVar6 = (pMVar9->fields).HPACPFLKHPK;
              }
              System_Text_StringBuilder__Replace(__this_00,value,pSVar6,(MethodInfo *)0x0);
            }
            index = uVar4 + 1;
            pSVar6 = StringLiteral_1;
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

