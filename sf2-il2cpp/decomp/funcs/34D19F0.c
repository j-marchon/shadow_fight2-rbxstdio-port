// BBBBKBBFNOG$$HNIHOIAMDPC @ RVA 0x34D19F0

void BBBBKBBFNOG__HNIHOIAMDPC
               (System_Collections_Generic_List_XmlNode__o *EBLEDKMJMJN,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  BBBBKBBFNOG_BENGKNHAMMA_o item;
  BBBBKBBFNOG_BENGKNHAMMA_o *pBVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_BBBBKBBFNOG_BENGKNHAMMA__o *pSVar8;
  BBBBKBBFNOG_BENGKNHAMMA_array *pBVar9;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_String_o *local_80;
  undefined4 local_78;
  float local_74;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045686ba & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<XmlNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<XmlNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<XmlNode>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_9253);
    FUN_01bab630(&StringLiteral_15308);
    FUN_01bab630(&StringLiteral_12067);
    DAT_045686ba = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_80 = (System_String_o *)0x0;
  local_78 = 0;
  local_74 = 0.0;
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BBBBKBBFNOG_TypeInfo,method);
  }
  pSVar8 = BBBBKBBFNOG_TypeInfo->static_fields->IPLLKLOKOFL;
  if (pSVar8 == (System_Collections_Generic_List_BBBBKBBFNOG_BENGKNHAMMA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  length = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
  }
  if (EBLEDKMJMJN != (System_Collections_Generic_List_XmlNode__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)EBLEDKMJMJN,
               Method_System_Collections_Generic_List<XmlNode>_GetEnumerator__);
    local_70.fields._index = local_98.fields._index;
    local_70.fields._version = local_98.fields._version;
    local_70.fields._list = local_98.fields._list;
    local_70.fields._current = local_98.fields._current;
    while (bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<XmlNode>_MoveNext__)
          , pIVar4 = local_70.fields._current, bVar5) {
      if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar8 = BBBBKBBFNOG_TypeInfo->static_fields->IPLLKLOKOFL;
      local_80 = (System_String_o *)0x0;
      local_78 = 0;
      local_74 = 0.0;
      if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar6 = (System_Xml_XmlAttributeCollection_o *)
               (*pIVar4->klass->vtable[0x10].methodPtr)(pIVar4,pIVar4->klass->vtable[0x10].method);
      if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar6,StringLiteral_15308,(MethodInfo *)0x0);
      local_80 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
      thunk_FUN_01c20e04(&local_80);
      pSVar6 = (System_Xml_XmlAttributeCollection_o *)
               (*pIVar4->klass->vtable[0x10].methodPtr)(pIVar4,pIVar4->klass->vtable[0x10].method);
      if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar6,StringLiteral_12067,(MethodInfo *)0x0);
      bVar5 = EIABCPKDEBD__FMBMNDIGLIG(pSVar7,false,(MethodInfo *)0x0);
      local_78 = CONCAT31(local_78._1_3_,bVar5);
      pSVar6 = (System_Xml_XmlAttributeCollection_o *)
               (*pIVar4->klass->vtable[0x10].methodPtr)(pIVar4,pIVar4->klass->vtable[0x10].method);
      if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar6,StringLiteral_9253,(MethodInfo *)0x0);
      local_74 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,1.0,(MethodInfo *)0x0);
      lVar3 = Method_System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>_Add__;
      if (pSVar8 == (System_Collections_Generic_List_BBBBKBBFNOG_BENGKNHAMMA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      item.fields._8_4_ = local_78;
      item.fields.IMAHKPGAIAB = local_80;
      item.fields.CJOICFODKMF = local_74;
      pBVar9 = (pSVar8->fields)._items;
      (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
      if (pBVar9 == (BBBBKBBFNOG_BENGKNHAMMA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (pSVar8->fields)._size;
      if (uVar1 < (uint)pBVar9->max_length) {
        (pSVar8->fields)._size = uVar1 + 1;
        pBVar9->m_Items[(int)uVar1].fields.IMAHKPGAIAB = local_80;
        pBVar2 = pBVar9->m_Items + (int)uVar1;
        (pBVar2->fields).BFCCEGGDJEF = (bool_conflict)(char)local_78;
        *(int3 *)&(pBVar2->fields).field_0x9 = (int3)((uint)local_78 >> 8);
        (pBVar2->fields).CJOICFODKMF = local_74;
        thunk_FUN_01c20e04(pBVar9->m_Items + (int)uVar1,0);
      }
      else {
        System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>__AddWithResize
                  (pSVar8,item,
                   *(MethodInfo_2768408 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<XmlNode>_Dispose__);
  }
  return;
}

