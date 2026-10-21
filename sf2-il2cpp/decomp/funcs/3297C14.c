// HNFFPPPDKDK$$FAPGKEAKOKA @ RVA 0x3297C14

void HNFFPPPDKDK__FAPGKEAKOKA
               (HNFFPPPDKDK_o *__this,
               System_Collections_Generic_Dictionary_string__string__o *KKMIDEOIMHK,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Xml_XmlNode_o *pSVar4;
  long lVar5;
  System_Xml_XmlElement_o *JHMENEKPIBO;
  System_Xml_XmlAttribute_o *pSVar6;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_04567376 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_Dispose__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__);
    FUN_01bab630(&StringLiteral_11876);
    DAT_04567376 = 1;
  }
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields).HJKLIDCAEOE;
  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
    lVar5 = (*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                      (pSVar4,StringLiteral_11876,(pSVar4->klass->vtable)._51_get_Item.method);
    if (lVar5 != 0) {
      pSVar4 = (__this->fields).HJKLIDCAEOE;
      if (pSVar4 == (System_Xml_XmlNode_o *)0x0) goto LAB_03397da4;
      (*(pSVar4->klass->vtable)._25_RemoveChild.methodPtr)
                (pSVar4,lVar5,(pSVar4->klass->vtable)._25_RemoveChild.method);
    }
    if (KKMIDEOIMHK != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      iVar3 = System_Collections_Generic_Dictionary<object,_object>__get_Count
                        ((System_Collections_Generic_Dictionary_object__object__o *)KKMIDEOIMHK,
                         Method_System_Collections_Generic_Dictionary<string,_string>_get_Count__);
      if (iVar3 != 0) {
        JHMENEKPIBO = EIABCPKDEBD__BHPIHHJHELJ
                                ((__this->fields).HJKLIDCAEOE,StringLiteral_11876,(MethodInfo *)0x0)
        ;
        System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                  (&local_60,(System_Collections_Generic_Dictionary_object__object__o *)KKMIDEOIMHK,
                   Method_System_Collections_Generic_Dictionary<string,_string>_GetEnumerator__);
        while (bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                                 (&local_60,
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_MoveNext__
                                 ), pIVar1 = local_60.fields._current.fields.value, bVar2) {
          pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                             ((System_Xml_XmlNode_o *)JHMENEKPIBO,
                              (System_String_o *)local_60.fields._current.fields.key,
                              (MethodInfo *)0x0);
          if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar6,pIVar1,(pSVar6->klass->vtable)._10_set_Value.method);
        }
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_Dispose__
                  );
      }
      return;
    }
  }
LAB_03397da4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

