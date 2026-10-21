// Nekki.SF2.GUI.Map.LampsPanel$$ClearLamps @ RVA 0x32C9800

void Nekki_SF2_GUI_Map_LampsPanel__ClearLamps
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Collections_Generic_List_Button__o *pSVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Collections_Generic_List_ResolutionImage__o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456750a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_GetEnumerator__);
                    /* try { // try from 033c9890 to 034c9953 has its CatchHandler @ 033c9890
                       catch() { ... } // from try @ 033c9890 with catch @ 033c9890
                       catch() { ... } // from try @ 033c99dc with catch @ 033c9890
                       catch() { ... } // from try @ 033c9a1c with catch @ 033c9890
                       catch() { ... } // from try @ 033c9a48 with catch @ 033c9890
                       catch() { ... } // from try @ 033c9a54 with catch @ 033c9890
                       catch() { ... } // from try @ 033c9a7c with catch @ 033c9890
                       catch() { ... } // from try @ 033c9abc with catch @ 033c9890 */
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_GetEnumerator__);
    DAT_0456750a = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).NPKEJHGOGOE;
  if (pSVar3 != (System_Collections_Generic_List_Button__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_90,(System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<Button>_GetEnumerator__);
    local_60.fields._index = local_90.fields._index;
    local_60.fields._version = local_90.fields._version;
    local_60.fields._list = local_90.fields._list;
    local_60.fields._current = local_90.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__),
          bVar2) {
      if ((UnityEngine_Component_o *)local_60.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)local_60.fields._current,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar4,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
    pSVar3 = (__this->fields).NPKEJHGOGOE;
    if (pSVar3 != (System_Collections_Generic_List_Button__o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
                    /* try { // try from 033c9954 to 034c995b has its CatchHandler @ 033c9a60 */
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar5 = (__this->fields).GOAMNFEGHIB;
      if (pSVar5 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
                    /* try { // try from 033c9978 to 034c9983 has its CatchHandler @ 033c9a58 */
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)pSVar5,
                   Method_System_Collections_Generic_List<ResolutionImage>_GetEnumerator__);
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_78,
                                  Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_MoveNext__
                                 ), bVar2) {
          if ((UnityEngine_Component_o *)local_78.fields._current == (UnityEngine_Component_o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)local_78.fields._current,(MethodInfo *)0x0)
          ;
          Util__JODGPLBHHIA(pUVar4,false,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_78,
                   Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_Dispose__);
        pSVar5 = (__this->fields).GOAMNFEGHIB;
        if (pSVar5 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
          iVar1 = (pSVar5->fields)._size;
                    /* try { // try from 033c99d0 to 034c99db has its CatchHandler @ 033c9a54 */
          (pSVar5->fields)._size = 0;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (0 < iVar1) {
                    /* try { // try from 033c99dc to 034c9a13 has its CatchHandler @ 033c9890 */
            System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

