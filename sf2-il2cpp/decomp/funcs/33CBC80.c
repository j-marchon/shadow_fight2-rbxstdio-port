// DBHEKFDNJKG$$ODPOCCDKKOP @ RVA 0x33CBC80

void DBHEKFDNJKG__ODPOCCDKKOP
               (System_Xml_XmlNode_o *KENFFDHLNDA,System_Xml_XmlNode_o *JGHIJMJNJLE,
               System_Collections_Generic_List_string__o *LJBHPKFCENK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *__this_00;
  System_String_array *pSVar5;
  System_Xml_XmlNode_o *pSVar6;
  System_Xml_XmlDocument_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567e2e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_HAFJHBOPINH<string>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&StringLiteral_12864);
    DAT_04567e2e = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (System_Collections_Generic_List_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (pSVar4,Method_System_Collections_Generic_List<string>__ctor__);
  if ((KENFFDHLNDA != (System_Xml_XmlNode_o *)0x0) &&
     (__this = (System_Xml_XmlAttributeCollection_o *)
               (*(KENFFDHLNDA->klass->vtable)._16_get_Attributes.methodPtr)
                         (KENFFDHLNDA,(KENFFDHLNDA->klass->vtable)._16_get_Attributes.method),
     __this != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this,StringLiteral_12864,(MethodInfo *)0x0);
    if (LBJNDMNEJJB == (System_Xml_XmlAttribute_o *)0x0) {
      return;
    }
    __this_00 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
    if (__this_00 != (System_String_o *)0x0) {
      method_01 = (MethodInfo *)0x0;
      pSVar5 = System_String__Split(__this_00,0x7c,0,(MethodInfo *)0x0);
      if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
        method_00 = Method_System_Collections_Generic_List<string>_AddRange__;
        System_Collections_Generic_List<object>__AddRange
                  (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)pSVar5,
                   (MethodInfo_26E4FB8 *)Method_System_Collections_Generic_List<string>_AddRange__);
        pSVar4 = (System_Collections_Generic_List_object__o *)
                 DJNBJHPDKDP__HAFJHBOPINH<object>
                           ((System_Collections_Generic_List_T__o *)pSVar4,
                            Method_DJNBJHPDKDP_HAFJHBOPINH<string>__);
        if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_98,pSVar4,Method_System_Collections_Generic_List<string>_GetEnumerator__
                    );
          local_80.fields._index = local_98.fields._index;
          local_80.fields._version = local_98.fields._version;
          local_80.fields._list = local_98.fields._list;
          local_80.fields._current = local_98.fields._current;
          while( true ) {
            bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_80,
                               Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__)
            ;
            item = local_80.fields._current;
            if (!bVar3) {
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
              return;
            }
            pSVar6 = DBHEKFDNJKG__DIPCNFGOHKJ
                               (JGHIJMJNJLE,(System_String_o *)local_80.fields._current,method_00);
            if (pSVar6 != (System_Xml_XmlNode_o *)0x0) {
              __this_01 = (System_Xml_XmlDocument_o *)
                          thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
              System_Xml_XmlDocument___ctor(__this_01,(MethodInfo *)0x0);
              pSVar6 = EIABCPKDEBD__DGPOFACHGMP
                                 ((System_Xml_XmlNode_o *)__this_01,pSVar6,(MethodInfo *)0x0);
              method_00 = (MethodInfo *)LJBHPKFCENK;
              DBHEKFDNJKG__ODPOCCDKKOP(pSVar6,JGHIJMJNJLE,LJBHPKFCENK,method_01);
              DBHEKFDNJKG__INFAEBPFJFC(KENFFDHLNDA,pSVar6,method_00);
              DBHEKFDNJKG__IGKCKMGGGFM(KENFFDHLNDA,pSVar6,method_00);
            }
            lVar2 = Method_System_Collections_Generic_List<string>_Add__;
            if (LJBHPKFCENK == (System_Collections_Generic_List_string__o *)0x0) break;
            pSVar5 = (LJBHPKFCENK->fields)._items;
            (LJBHPKFCENK->fields)._version = (LJBHPKFCENK->fields)._version + 1;
            if (pSVar5 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (LJBHPKFCENK->fields)._size;
            if (uVar1 < (uint)pSVar5->max_length) {
              (LJBHPKFCENK->fields)._size = uVar1 + 1;
              pSVar5->m_Items[(int)uVar1] = (System_String_o *)item;
              thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1,item);
            }
            else {
              method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)LJBHPKFCENK,item,
                         (MethodInfo_26E4DAC *)method_00);
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

