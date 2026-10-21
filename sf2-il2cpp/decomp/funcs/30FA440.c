// CEGBGLPICEM$$DCIBEJLDPHL @ RVA 0x30FA440

System_Collections_Generic_List_PKKLIJLIKGF__o *
CEGBGLPICEM__DCIBEJLDPHL
          (CEGBGLPICEM_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,System_String_o *LMPMHKIABOM,
          MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_01;
  PKKLIJLIKGF_array *pPVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* try { // try from 031fa468 to 032fa473 has its CatchHandler @ 031f9cc0 */
  if ((DAT_04566492 & 1) == 0) {
                    /* try { // try from 031fa474 to 032fa47b has its CatchHandler @ 031fa47c */
                    /* catch() { ... } // from try @ 031fa3f8 with catch @ 031fa47c
                       catch() { ... } // from try @ 031fa474 with catch @ 031fa47c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
                    /* try { // try from 031fa480 to 032fa843 has its CatchHandler @ 031fa480
                       catch() { ... } // from try @ 031fa480 with catch @ 031fa480
                       catch() { ... } // from try @ 031faa2c with catch @ 031fa480
                       catch() { ... } // from try @ 031faae8 with catch @ 031fa480
                       catch() { ... } // from try @ 031faaf0 with catch @ 031fa480
                       catch() { ... } // from try @ 031fabd4 with catch @ 031fa480 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
    DAT_04566492 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_PKKLIJLIKGF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
  if ((IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) ||
     (__this_01 = (IKKAMAMLIKA->fields)._LCJBEIKDDNA_k__BackingField,
     __this_01 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    item = local_50.fields._current;
    if (!bVar3) goto LAB_031fa5c0;
    if ((PKKLIJLIKGF_o *)local_50.fields._current == (PKKLIJLIKGF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = System_String__op_Inequality
                      (((PKKLIJLIKGF_Fields *)((long)local_50.fields._current + 0x10))->DEKCPPOJFEH,
                       LMPMHKIABOM,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__;
  } while (bVar3);
  if (__this_00 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = (__this_00->fields)._items;
  (__this_00->fields)._version = (__this_00->fields)._version + 1;
  if (pPVar4 == (PKKLIJLIKGF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (__this_00->fields)._size;
  if (uVar1 < (uint)pPVar4->max_length) {
    (__this_00->fields)._size = uVar1 + 1;
    pPVar4->m_Items[(int)uVar1] = (PKKLIJLIKGF_o *)item;
    thunk_FUN_01c20e04(pPVar4->m_Items + (int)uVar1,item);
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_00,item,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
  }
LAB_031fa5c0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
  return __this_00;
}

