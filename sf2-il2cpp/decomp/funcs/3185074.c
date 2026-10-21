// CAJHCLGOFMJ$$MDGJPBHDFHN @ RVA 0x3185074

void CAJHCLGOFMJ__MDGJPBHDFHN
               (CAJHCLGOFMJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Xml_XmlElement_o *JHMENEKPIBO;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  CAJHCLGOFMJ_Fields *pCVar6;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b0;
  undefined4 local_84;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_045669d5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Value__);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_14864);
    FUN_01bab630(&StringLiteral_14785);
    DAT_045669d5 = 1;
  }
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  local_84 = 0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  pCVar6 = &__this->fields;
  pCVar6->HJKLIDCAEOE = AHDGNOJPPIB;
  thunk_FUN_01c20e04(pCVar6,AHDGNOJPPIB);
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).OCFIONIBFOF;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_int>__GetEnumerator
              (&local_b0,__this_00,
               Method_System_Collections_Generic_Dictionary<string,_int>_GetEnumerator__);
    local_80.fields._version = local_b0.fields._version;
    local_80.fields._index = local_b0.fields._index;
    local_80.fields._dictionary = local_b0.fields._dictionary;
    local_80.fields._current.fields.value = local_b0.fields._current.fields.value;
    local_80.fields._current.fields.key = local_b0.fields._current.fields.key;
    local_80.fields._getEnumeratorRetType = local_b0.fields._getEnumeratorRetType;
    local_80.fields._36_4_ = local_b0.fields._36_4_;
    while( true ) {
      bVar3 = System_Collections_Generic_Dictionary_Enumerator<object,_int>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_MoveNext__
                        );
      pIVar2 = local_80.fields._current.fields.value;
      pIVar1 = local_80.fields._current.fields.key;
      if (!bVar3) {
        System_Collections_Generic_Dictionary_Enumerator<object,_int>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_Dispose__);
        return;
      }
      JHMENEKPIBO = EIABCPKDEBD__BHPIHHJHELJ
                              (pCVar6->HJKLIDCAEOE,StringLiteral_14785,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                         ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_9327,(MethodInfo *)0x0);
      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) break;
      (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                (pSVar4,pIVar1,(pSVar4->klass->vtable)._10_set_Value.method);
      pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                         ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_14864,(MethodInfo *)0x0)
      ;
      local_84 = SUB84(pIVar2,0);
      pSVar5 = System_Int32__ToString((int32_t)&local_84,(MethodInfo *)0x0);
      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8(pSVar5,pSVar5);
      }
      (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                (pSVar4,pSVar5,(pSVar4->klass->vtable)._10_set_Value.method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

