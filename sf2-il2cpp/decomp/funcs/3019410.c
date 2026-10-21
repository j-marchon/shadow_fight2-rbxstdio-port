// ECENNHNBAME$$EKIGLDNIJBC @ RVA 0x3019410

void ECENNHNBAME__EKIGLDNIJBC(ECENNHNBAME_o *__this,System_String_o *OFJJGGANIAE,MethodInfo *method)

{
  int32_t length;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *pSVar1;
  
  if ((DAT_04565beb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    DAT_04565beb = 1;
  }
  pSVar1 = (__this->fields).GMNNFJNKIAN;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (OFJJGGANIAE == (System_String_o *)0x0) {
      return;
    }
    pSVar1 = (__this->fields).GMNNFJNKIAN;
    collection = System_String__Split(OFJJGGANIAE,0x7c,0,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)pSVar1,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 Method_System_Collections_Generic_List<string>_AddRange__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

