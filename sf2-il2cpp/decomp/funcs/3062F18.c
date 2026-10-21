// ACHLOMELAJE$$PMBLNPNAHEM @ RVA 0x3062F18

void ACHLOMELAJE__PMBLNPNAHEM
               (ACHLOMELAJE_o *__this,System_Xml_XmlNode_o *MJFIBNNINOD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *IJONCLJPNDO;
  bool bVar3;
  int32_t JCIDLNABHMN;
  System_Collections_Generic_List_HBNENINHPGF__o *__this_00;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  BNKBGIIJNLF_o *__this_02;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_03;
  MGNPHCAAEIO_HLAKGGFFNAO_o *pMVar4;
  BNKBGIIJNLF_array *pBVar5;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04565ee1 & 1) == 0) {
    FUN_01bab630(&BNKBGIIJNLF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565ee1 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar4 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
  if ((pMVar4 == (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) ||
     (__this_00 = (pMVar4->fields).DIELINNGEBJ,
     __this_00 == (System_Collections_Generic_List_HBNENINHPGF__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__);
    IJONCLJPNDO = local_70.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__)
      ;
      return;
    }
    if (MJFIBNNINOD == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (*(MJFIBNNINOD->klass->vtable)._16_get_Attributes.methodPtr)
                          (MJFIBNNINOD,(MJFIBNNINOD->klass->vtable)._16_get_Attributes.method);
    if ((HBNENINHPGF_o *)IJONCLJPNDO == (HBNENINHPGF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (__this_01 == (System_Xml_XmlAttributeCollection_o *)0x0) break;
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_01,
                             ((HBNENINHPGF_Fields *)((long)IJONCLJPNDO + 0x10))->
                             _COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    JCIDLNABHMN = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
    __this_02 = (BNKBGIIJNLF_o *)thunk_FUN_01bda818(BNKBGIIJNLF_TypeInfo);
    BNKBGIIJNLF___ctor(__this_02,(HBNENINHPGF_o *)IJONCLJPNDO,JCIDLNABHMN,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<BNKBGIIJNLF>_Add__;
    __this_03 = (__this->fields).DIELINNGEBJ;
    if (__this_03 == (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pBVar5 = (__this_03->fields)._items;
    (__this_03->fields)._version = (__this_03->fields)._version + 1;
    if (pBVar5 == (BNKBGIIJNLF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_03->fields)._size;
    if (uVar1 < (uint)pBVar5->max_length) {
      (__this_03->fields)._size = uVar1 + 1;
      pBVar5->m_Items[(int)uVar1] = __this_02;
      thunk_FUN_01c20e04(pBVar5->m_Items + (int)uVar1,__this_02);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)__this_02,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

