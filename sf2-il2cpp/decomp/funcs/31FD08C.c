// NLPJLHOEAOE$$PBGBOLODIPO @ RVA 0x31FD08C

void NLPJLHOEAOE__PBGBOLODIPO
               (NLPJLHOEAOE_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Collections_Generic_List_LEGDPJHPEOB__o *HPACPFLKHPK;
  System_Xml_XmlNode_o *IIBFFEPEHPF;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *__this_01;
  System_String_array *pSVar4;
  System_String_o *EKOABHFOJFK;
  MethodInfo *method_00;
  ulong uVar5;
  ulong uVar6;
  PKHMIGFEJCL_o *AAJBIMFNMBB;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566df8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<LEGDPJHPEOB>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_4577);
    FUN_01bab630(&StringLiteral_6381);
    FUN_01bab630(&StringLiteral_8485);
    FUN_01bab630(&StringLiteral_7435);
    DAT_04566df8 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  HPACPFLKHPK = (System_Collections_Generic_List_LEGDPJHPEOB__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<LEGDPJHPEOB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,
             Method_System_Collections_Generic_List<LEGDPJHPEOB>__ctor__);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    IIBFFEPEHPF = (System_Xml_XmlNode_o *)
                  (*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                            (JHMENEKPIBO,StringLiteral_4577,
                             (JHMENEKPIBO->klass->vtable)._51_get_Item.method);
    FPPKHNNABAD__MLJDPILPJDE(IIBFFEPEHPF,HPACPFLKHPK,(MethodInfo *)0x0);
    if (HPACPFLKHPK != (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
      if (0 < (HPACPFLKHPK->fields)._size) {
        pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar3 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_032fd340;
        AAJBIMFNMBB = (pNVar3->fields).QuestParameters;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_68,(System_Collections_Generic_List_object__o *)HPACPFLKHPK,
                   Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
        local_50.fields._index = local_68.fields._index;
        local_50.fields._version = local_68.fields._version;
        local_50.fields._list = local_68.fields._list;
        local_50.fields._current = local_68.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_50,
                                  Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__
                                 ), bVar2) {
          if ((LEGDPJHPEOB_o *)local_50.fields._current == (LEGDPJHPEOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = LEGDPJHPEOB__DGCODECJJCC
                            ((LEGDPJHPEOB_o *)local_50.fields._current,AAJBIMFNMBB,(MethodInfo *)0x0
                            );
          if (!bVar2) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
            return;
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
      }
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                            (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_00,StringLiteral_6381,(MethodInfo *)0x0);
        __this_01 = EIABCPKDEBD__JPKEHIBGOEM
                              (LBJNDMNEJJB,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        if (__this_01 != (System_String_o *)0x0) {
          EKOABHFOJFK = (System_String_o *)0x0;
          method_00 = (MethodInfo *)0x0;
          pSVar4 = System_String__Split(__this_01,0x7c,0,(MethodInfo *)0x0);
          if ((pSVar4 != (System_String_array *)0x0) && (uVar5 = pSVar4->max_length, uVar5 != 0)) {
            if ((int)uVar5 < 1) {
              return;
            }
            uVar6 = 0;
            do {
              if ((uVar5 & 0xffffffff) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              NLPJLHOEAOE__KFOBDALBBMM(__this,pSVar4->m_Items[uVar6],EKOABHFOJFK,method_00);
              uVar1 = (uint)pSVar4->max_length;
              uVar5 = (ulong)uVar1;
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)(int)uVar1);
            return;
          }
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_8485,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_032fd340:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

