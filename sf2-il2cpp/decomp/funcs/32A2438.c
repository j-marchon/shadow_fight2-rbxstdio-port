// IGJEEGBBNFC$$IBGCECJALBB @ RVA 0x32A2438

void IGJEEGBBNFC__IBGCECJALBB(IGJEEGBBNFC_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_string__o *pSVar1;
  FCJBEKHDLAF_o *pFVar2;
  MMDDDDFHOLG_o *pMVar3;
  
  if ((DAT_045673cb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&StringLiteral_9146);
    DAT_045673cb = 1;
  }
  pSVar1 = (__this->fields).PGJECFOEEEL;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar2 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
    if (pFVar2 == (FCJBEKHDLAF_o *)0x0) {
      return;
    }
    pMVar3 = (pFVar2->fields).POEGCOJFMDB;
    if ((pMVar3 != (MMDDDDFHOLG_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (pMVar3->fields).KECADJKAJNG,
       __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      System_Collections_Generic_Dictionary<object,_object>__set_Item
                (__this_00,StringLiteral_9146,(Il2CppObject *)0x0,
                 Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

