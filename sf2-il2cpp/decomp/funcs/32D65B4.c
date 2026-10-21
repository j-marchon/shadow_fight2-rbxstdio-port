// AGCDKMOOJGI$$HNIHOIAMDPC @ RVA 0x32D65B4

void AGCDKMOOJGI__HNIHOIAMDPC
               (AGCDKMOOJGI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *a;
  int32_t iVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  
  if ((DAT_04567593 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_5612);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_9532);
    FUN_01bab630(&StringLiteral_5613);
    FUN_01bab630(&StringLiteral_11150);
    DAT_04567593 = 1;
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  FCFEFEBAILK__FAEKHJHILGP(AHDGNOJPPIB,(__this->fields).LJNCACBBIBD,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).LGIIIFNKHHO;
  if (pSVar2 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    iVar5 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar5) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar5,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).LGIIIFNKHHO;
      if (pSVar2 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) goto LAB_033d6810;
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar2,
               (System_Collections_Generic_IEnumerable_T__o *)(__this->fields).LJNCACBBIBD,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_AddRange__);
    pSVar2 = (__this->fields).LJNCACBBIBD;
    if (pSVar2 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_68,
                           Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__
                          );
        if (!bVar1) break;
        if (local_68.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        *(undefined1 *)((long)&local_68.fields._current[3].monitor + 6) = 1;
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_68,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__)
      ;
      if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_9532,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
          (__this->fields).DEMMDPCLLKF = bVar1;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_11150,(MethodInfo *)0x0);
            a = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
            bVar1 = System_String__op_Equality(a,StringLiteral_5613,(MethodInfo *)0x0);
            if (bVar1) {
              iVar5 = 2;
            }
            else {
              System_String__op_Equality(a,StringLiteral_5612,(MethodInfo *)0x0);
              iVar5 = 1;
            }
            (__this->fields).EIMDJHJAHKK = iVar5;
            return;
          }
        }
      }
    }
  }
LAB_033d6810:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

