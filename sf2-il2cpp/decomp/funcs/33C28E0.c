// HFLNADKHFLG$$AAJAEHMJCPM @ RVA 0x33C28E0

void HFLNADKHFLG__AAJAEHMJCPM
               (System_Xml_XmlNode_o *NMONNKBNOCM,System_Xml_XmlNode_o *BALEHOBMFNN,
               System_Collections_Generic_List_MGNDHCBAPEN_string__XmlNode___o *PHOLAJOMLEL,
               System_Collections_Generic_List_string__o *FHOOAEFKILG,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar5;
  int index;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567ddc & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_XmlNode>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_XmlNode>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_XmlNode>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_Clear__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Item__);
    FUN_01bab630(&StringLiteral_22485);
    FUN_01bab630(&StringLiteral_12864);
                    /* try { // try from 034c2980 to 035c2c83 has its CatchHandler @ 034c2980
                       catch() { ... } // from try @ 034c2980 with catch @ 034c2980
                       catch() { ... } // from try @ 034c2d68 with catch @ 034c2980
                       catch() { ... } // from try @ 034c2ffc with catch @ 034c2980
                       catch() { ... } // from try @ 034c3098 with catch @ 034c2980
                       catch() { ... } // from try @ 034c30a0 with catch @ 034c2980
                       catch() { ... } // from try @ 034c30ac with catch @ 034c2980
                       catch() { ... } // from try @ 034c3184 with catch @ 034c2980
                       catch() { ... } // from try @ 034c3218 with catch @ 034c2980 */
    FUN_01bab630(&StringLiteral_1);
    DAT_04567ddc = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (PHOLAJOMLEL != (System_Collections_Generic_List_MGNDHCBAPEN_string__XmlNode___o *)0x0) {
    length = (PHOLAJOMLEL->fields)._size;
    (PHOLAJOMLEL->fields)._size = 0;
    (PHOLAJOMLEL->fields)._version = (PHOLAJOMLEL->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(PHOLAJOMLEL->fields)._items,0,length,(MethodInfo *)0x0)
      ;
    }
    HFLNADKHFLG__HNOMDBJEICP(NMONNKBNOCM,BALEHOBMFNN,PHOLAJOMLEL,FHOOAEFKILG,method);
    pMVar5 = extraout_x1;
    if (0 < (PHOLAJOMLEL->fields)._size) {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)PHOLAJOMLEL,index,
                            Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_get_Item__
                           );
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_034c2b54;
        HFLNADKHFLG__HNOMDBJEICP(pIVar2[1].monitor,BALEHOBMFNN,PHOLAJOMLEL,FHOOAEFKILG,method);
        index = index + 1;
        pMVar5 = extraout_x1_00;
      } while (index < (PHOLAJOMLEL->fields)._size);
    }
    HFLNADKHFLG__DNKBNOPCLII(PHOLAJOMLEL,pMVar5);
    pSVar3 = StringLiteral_1;
    if ((PHOLAJOMLEL->fields)._size == 0) {
      return;
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)PHOLAJOMLEL,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_XmlNode>>_GetEnumerator__)
    ;
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_XmlNode>>_MoveNext__
                             ), pIVar2 = local_70.fields._current, bVar1) {
      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pMVar5 = StringLiteral_22485;
      pSVar3 = System_String__Concat
                         (pSVar3,(System_String_o *)local_70.fields._current[1].klass,
                          (System_String_o *)StringLiteral_22485,(MethodInfo *)0x0);
      HFLNADKHFLG__FJAGBCICPJJ(NMONNKBNOCM,pIVar2[1].monitor,pMVar5);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,
               Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_XmlNode>>_Dispose__
              );
    if ((((pSVar3 != (System_String_o *)0x0) &&
         (pSVar3 = System_String__Substring
                             (pSVar3,0,(pSVar3->fields)._stringLength + -1,(MethodInfo *)0x0),
         NMONNKBNOCM != (System_Xml_XmlNode_o *)0x0)) &&
        (__this = (System_Xml_XmlAttributeCollection_o *)
                  (*(NMONNKBNOCM->klass->vtable)._16_get_Attributes.methodPtr)
                            (NMONNKBNOCM,(NMONNKBNOCM->klass->vtable)._16_get_Attributes.method),
        __this != (System_Xml_XmlAttributeCollection_o *)0x0)) &&
       (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (__this,StringLiteral_12864,(MethodInfo *)0x0),
       pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
      (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                (pSVar4,pSVar3,(pSVar4->klass->vtable)._10_set_Value.method);
      return;
    }
  }
LAB_034c2b54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

