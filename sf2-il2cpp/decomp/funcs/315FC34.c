// CGFIAJGHIPL$$JHEONBGNOPE @ RVA 0x315FC34

void CGFIAJGHIPL__JHEONBGNOPE(MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_ModelContainer__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566883 & 1) == 0) {
    FUN_01bab630(&CGFIAJGHIPL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelContainer>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelContainer>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelContainer>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelContainer>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelContainer>_GetEnumerator__);
    DAT_04566883 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((CGFIAJGHIPL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = CGFIAJGHIPL_TypeInfo->static_fields->FMKEOGOICEO;
  if (pSVar2 != (System_Collections_Generic_List_ModelContainer__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<ModelContainer>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<ModelContainer>_MoveNext__
                             ), bVar1) {
      if ((UnityEngine_Component_o *)local_38.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)local_38.fields._current,(MethodInfo *)0x0
                              );
                    /* try { // try from 0325fd14 to 0335fd1b has its CatchHandler @ 0325fd5c */
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
                    /* try { // try from 0325fd1c to 0335fd1f has its CatchHandler @ 0325fd48 */
    }
                    /* try { // try from 0325fd20 to 0335fd23 has its CatchHandler @ 0325fd44 */
                    /* try { // try from 0325fd24 to 0335fd27 has its CatchHandler @ 0325f994 */
                    /* try { // try from 0325fd28 to 0335fd2b has its CatchHandler @ 0325fd38 */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<ModelContainer>_Dispose__
              );
                    /* try { // try from 0325fd2c to 0335fd73 has its CatchHandler @ 0325f994 */
                    /* catch() { ... } // from try @ 0325fc00 with catch @ 0325fd34 */
    if ((CGFIAJGHIPL_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0325fd28 with catch @ 0325fd38 */
      thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 0325fbc0 with catch @ 0325fd3c */
    }
                    /* catch() { ... } // from try @ 0325fbdc with catch @ 0325fd40 */
                    /* catch() { ... } // from try @ 0325fd20 with catch @ 0325fd44 */
    pSVar2 = CGFIAJGHIPL_TypeInfo->static_fields->FMKEOGOICEO;
                    /* catch() { ... } // from try @ 0325fd1c with catch @ 0325fd48 */
    if (pSVar2 != (System_Collections_Generic_List_ModelContainer__o *)0x0) {
                    /* catch() { ... } // from try @ 0325fbd0 with catch @ 0325fd4c */
      length = (pSVar2->fields)._size;
                    /* catch() { ... } // from try @ 0325fbe4 with catch @ 0325fd50 */
                    /* catch() { ... } // from try @ 0325fb58 with catch @ 0325fd54 */
                    /* catch() { ... } // from try @ 0325fafc with catch @ 0325fd58 */
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                    /* catch() { ... } // from try @ 0325fd14 with catch @ 0325fd5c */
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
                    /* try { // try from 0325fd74 to 0335fd77 has its CatchHandler @ 0325fd88 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

