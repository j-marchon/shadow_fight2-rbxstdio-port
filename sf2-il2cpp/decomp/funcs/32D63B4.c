// AGCDKMOOJGI$$EKFNBHMNHFA @ RVA 0x32D63B4

void AGCDKMOOJGI__EKFNBHMNHFA(AGCDKMOOJGI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *pSVar2;
  AJNNHGGLGIF_o **ppAVar3;
  
  if ((DAT_04567591 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Clear__);
    DAT_04567591 = 1;
  }
  pSVar2 = (__this->fields).LGIIIFNKHHO;
  if (pSVar2 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).LGIIIFNKHHO;
      if (pSVar2 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) goto LAB_033d6478;
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar2,
               (System_Collections_Generic_IEnumerable_T__o *)(__this->fields).LJNCACBBIBD,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_AddRange__);
    pSVar2 = (__this->fields).IDNEPDGAJCK;
    if (pSVar2 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      ppAVar3 = &(__this->fields).EOKBEEIMNAF;
      *ppAVar3 = (AJNNHGGLGIF_o *)0x0;
      thunk_FUN_01c20e04(ppAVar3,0);
      return;
    }
  }
LAB_033d6478:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

