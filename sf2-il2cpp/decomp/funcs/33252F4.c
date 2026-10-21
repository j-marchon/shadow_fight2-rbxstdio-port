// PNLFHHJGDLI$$EOHAEHCEKDG @ RVA 0x33252F4

void PNLFHHJGDLI__EOHAEHCEKDG(System_String_o *AAIHDEKMIJG,uint32_t OGPGLGPMEPD,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_KeyValuePair_object__uint__o item;
  long lVar2;
  MethodInfo_263A6EC *in_x4;
  System_Collections_Generic_KeyValuePair_string__uint__array *pSVar3;
  System_Collections_Generic_List_KeyValuePair_string__uint___o *pSVar4;
  System_Collections_Generic_KeyValuePair_object__uint__o SVar5;
  Il2CppObject local_40;
  
  if ((DAT_04567870 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_uint>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_get_Item__);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567870 = 1;
  }
  local_40.klass = (Il2CppClass *)0x0;
  local_40.monitor = (void *)0x0;
  SVar5.fields._8_8_ = AAIHDEKMIJG;
  SVar5.fields.key = &local_40;
  System_Collections_Generic_KeyValuePair<object,_uint>___ctor
            (SVar5,(Il2CppObject *)(ulong)OGPGLGPMEPD,
             (uint32_t)Method_System_Collections_Generic_KeyValuePair<string,_uint>__ctor__,in_x4);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = PNLFHHJGDLI_TypeInfo->static_fields->CPHHBNFBJGP;
  if (pSVar4 != (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
    if ((long)(pSVar4->fields)._size == (ulong)PNLFHHJGDLI_TypeInfo->static_fields->BLMPLPPHAGO) {
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pSVar4 = PNLFHHJGDLI_TypeInfo->static_fields->CPHHBNFBJGP;
        if (pSVar4 == (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0)
        goto LAB_034254b4;
      }
      SVar5 = System_Collections_Generic_List<KeyValuePair<object,_uint>>__get_Item
                        ((System_Collections_Generic_List_T__o *)pSVar4,0,
                         Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_get_Item__
                        );
      System_Collections_Generic_List<KeyValuePair<object,_uint>>__Remove
                ((System_Collections_Generic_List_T__o *)pSVar4,SVar5,
                 Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Remove__);
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar2 = Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Add__;
    pSVar4 = PNLFHHJGDLI_TypeInfo->static_fields->CPHHBNFBJGP;
    if (pSVar4 != (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
      item.fields._8_8_ = local_40.monitor;
      item.fields.key = (Il2CppObject *)local_40.klass;
      pSVar3 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pSVar3 != (System_Collections_Generic_KeyValuePair_string__uint__array *)0x0) {
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pSVar3->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pSVar3->m_Items[(int)uVar1].fields.key = (System_String_o *)local_40.klass;
          *(void **)&pSVar3->m_Items[(int)uVar1].fields.value = local_40.monitor;
          thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,0);
        }
        else {
          System_Collections_Generic_List<KeyValuePair<object,_uint>>__AddWithResize
                    ((System_Collections_Generic_List_T__o *)pSVar4,item,
                     *(MethodInfo_2672960 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        return;
      }
    }
  }
LAB_034254b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

