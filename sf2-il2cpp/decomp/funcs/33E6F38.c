// FCJBEKHDLAF$$MDDOJIAMIEG @ RVA 0x33E6F38

void FCJBEKHDLAF__MDDOJIAMIEG
               (System_Collections_Generic_List_string__o *HABKNEDEFGO,
               System_Collections_Generic_List_string__o *LABGHCCHPDJ,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_string__o *pSVar1;
  
  if ((DAT_04567ed1 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    DAT_04567ed1 = 1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = FCJBEKHDLAF_TypeInfo->static_fields->ACDNJGLOIMC;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      pSVar1 = FCJBEKHDLAF_TypeInfo->static_fields->ACDNJGLOIMC;
      if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_034e701c;
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar1,
               (System_Collections_Generic_IEnumerable_T__o *)HABKNEDEFGO,
               Method_System_Collections_Generic_List<string>_AddRange__);
                    /* try { // try from 034e6ff8 to 035e6fff has its CatchHandler @ 034e7064 */
    pSVar1 = FCJBEKHDLAF_TypeInfo->static_fields->ACDNJGLOIMC;
                    /* try { // try from 034e7000 to 035e704f has its CatchHandler @ 034e6f30 */
    if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)pSVar1,
                 (System_Collections_Generic_IEnumerable_T__o *)LABGHCCHPDJ,
                 Method_System_Collections_Generic_List<string>_AddRange__);
      return;
    }
  }
LAB_034e701c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

