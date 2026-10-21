// IGFGDDANEPE$$OKEGPAKHPDC @ RVA 0x30A274C

void IGFGDDANEPE__OKEGPAKHPDC
               (IGFGDDANEPE_o *__this,System_Collections_Generic_List_PKKLIJLIKGF__o *LDAIPGBJEOG,
               MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  Il2CppObject *pIVar3;
  System_Predicate_T__o *match;
  Il2CppObject *item;
  System_Xml_XmlNode_o *pSVar4;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566151 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&Method_IGFGDDANEPE_GAOEJMFJPEK_LBHBEHKKCFC__);
    FUN_01bab630(&IGFGDDANEPE_GAOEJMFJPEK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Remove__);
    FUN_01bab630(&System_Predicate<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_5703);
    FUN_01bab630(&StringLiteral_10213);
    DAT_04566151 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).DMLGJFCNNJF;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlNode_o *)
             (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar2,StringLiteral_5703,(pSVar2->klass->vtable)._51_get_Item.method);
    if (LDAIPGBJEOG != (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)LDAIPGBJEOG,
                 Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
          return;
        }
        pIVar3 = (Il2CppObject *)thunk_FUN_01bda818(IGFGDDANEPE_GAOEJMFJPEK_TypeInfo);
        System_Object___ctor(pIVar3,(MethodInfo *)0x0);
        if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar3 = pIVar3 + 1;
        pIVar3->klass = (Il2CppClass *)local_80.fields._current;
        thunk_FUN_01c20e04(pIVar3);
        pSVar5 = (__this->fields).PAPANCDPPIF;
        match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HEFOANCOHDC>_TypeInfo);
        System_Predicate<object>___ctor();
        if (pSVar5 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)pSVar5,match,
                          Method_System_Collections_Generic_List<HEFOANCOHDC>_Find__);
        bVar1 = false;
        if (item != (Il2CppObject *)0x0) {
          pSVar5 = (__this->fields).PAPANCDPPIF;
          if (pSVar5 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = System_Collections_Generic_List<object>__Remove
                            ((System_Collections_Generic_List_object__o *)pSVar5,item,
                             Method_System_Collections_Generic_List<HEFOANCOHDC>_Remove__);
        }
        if (pIVar3->klass == (Il2CppClass *)0x0) break;
        pSVar4 = EIABCPKDEBD__MHJPHEMBOLK
                           (pSVar2,StringLiteral_10213,StringLiteral_9327,
                            (System_String_o *)(pIVar3->klass->_1).name,(MethodInfo *)0x0);
        if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
          if (pSVar2 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          (*(pSVar2->klass->vtable)._25_RemoveChild.methodPtr)
                    (pSVar2,pSVar4,(pSVar2->klass->vtable)._25_RemoveChild.method);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(bVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

