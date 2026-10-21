// JHHFDBLANPH$$IOBDPIBFLPL @ RVA 0x316D31C

void JHHFDBLANPH__IOBDPIBFLPL(JHHFDBLANPH_o *__this,MethodInfo *method)

{
  int iVar1;
  int index;
  int32_t iVar2;
  System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *pSVar3;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  int32_t index_00;
  int local_54;
  
  if ((DAT_04566905 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_Insert__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__);
    FUN_01bab630(&StringLiteral_15862);
    DAT_04566905 = 1;
  }
  local_54 = 0;
  pSVar3 = (__this->fields).EJNOBBDDBDO;
  if (pSVar3 != (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) {
    index_00 = 0;
    while( true ) {
      if ((pSVar3->fields)._size <= index_00) {
        return;
      }
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index_00,
                          Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__
                         );
      if (pIVar4 == (Il2CppObject *)0x0) break;
      pIVar6 = pIVar4[1].klass;
      iVar1 = index_00 + 1;
      local_54 = iVar1;
      pSVar5 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(StringLiteral_15862,pSVar5,(MethodInfo *)0x0);
      if (pIVar6 == (Il2CppClass *)0x0) break;
      System_String__LastIndexOf((System_String_o *)pIVar6,pSVar5,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).EJNOBBDDBDO;
      if ((pSVar3 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) ||
         (pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index_00,
                              Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__
                             ), pIVar4 == (Il2CppObject *)0x0)) break;
      pIVar6 = pIVar4[1].klass;
      local_54 = iVar1;
      pSVar5 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(StringLiteral_15862,pSVar5,(MethodInfo *)0x0);
      if (pIVar6 == (Il2CppClass *)0x0) break;
      iVar2 = System_String__LastIndexOf((System_String_o *)pIVar6,pSVar5,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).EJNOBBDDBDO;
      if (((pSVar3 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) ||
          (pIVar4 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,index_00,
                               Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__
                              ), pIVar4 == (Il2CppObject *)0x0)) ||
         (pIVar4[1].klass == (Il2CppClass *)0x0)) break;
      if (iVar2 < *(int *)&((pIVar4[1].klass)->_1).name + -2) {
        pSVar3 = (__this->fields).EJNOBBDDBDO;
        index = index_00;
        while( true ) {
          if (pSVar3 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0)
          goto LAB_0326d5a0;
          if ((pSVar3->fields)._size <= index) goto LAB_0326d598;
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__
                             );
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0326d5a0;
          pIVar6 = pIVar4[1].klass;
          local_54 = iVar1;
          pSVar5 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat(StringLiteral_15862,pSVar5,(MethodInfo *)0x0);
          if (pIVar6 == (Il2CppClass *)0x0) goto LAB_0326d5a0;
          iVar2 = System_String__LastIndexOf((System_String_o *)pIVar6,pSVar5,(MethodInfo *)0x0);
          pSVar3 = (__this->fields).EJNOBBDDBDO;
          if (((pSVar3 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) ||
              (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                   Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__
                                  ), pIVar4 == (Il2CppObject *)0x0)) ||
             (pIVar4[1].klass == (Il2CppClass *)0x0)) goto LAB_0326d5a0;
          if (*(int *)&((pIVar4[1].klass)->_1).name + -2 <= iVar2) break;
          pSVar3 = (__this->fields).EJNOBBDDBDO;
          index = index + 1;
        }
        pSVar3 = (__this->fields).EJNOBBDDBDO;
        if (pSVar3 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) break;
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,index,
                            Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_get_Item__
                           );
        pSVar3 = (__this->fields).EJNOBBDDBDO;
        if (pSVar3 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) break;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar3,index,
                   Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_RemoveAt__);
        pSVar3 = (__this->fields).EJNOBBDDBDO;
        if (pSVar3 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) break;
        System_Collections_Generic_List<object>__Insert
                  ((System_Collections_Generic_List_object__o *)pSVar3,index_00,pIVar4,
                   Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_Insert__);
      }
LAB_0326d598:
      pSVar3 = (__this->fields).EJNOBBDDBDO;
      index_00 = iVar1;
      if (pSVar3 == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) break;
    }
  }
LAB_0326d5a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

