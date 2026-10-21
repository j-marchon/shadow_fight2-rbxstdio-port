// COADHFKEKDD$$DLKKPFHKIPB @ RVA 0x350531C

System_Collections_Generic_IEnumerable_string__o *
COADHFKEKDD__DLKKPFHKIPB(COADHFKEKDD_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04568893 & 1) == 0) {
                    /* try { // try from 03605368 to 0370538b has its CatchHandler @ 03605454 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4718);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4719);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0360538c to 03705427 has its CatchHandler @ 0360509c */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04568893 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4718,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4719,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
                    /* try { // try from 03605428 to 0370542f has its CatchHandler @ 03605488 */
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
                    /* try { // try from 03605430 to 03705433 has its CatchHandler @ 03605478 */
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 03605434 to 03705437 has its CatchHandler @ 03605474 */
                    /* try { // try from 03605438 to 0370543b has its CatchHandler @ 0360546c */
                    /* try { // try from 0360543c to 03705447 has its CatchHandler @ 0360509c */
      if (uVar1 < (uint)pSVar3->max_length) {
                    /* try { // try from 03605448 to 0370544b has its CatchHandler @ 03605464 */
                    /* try { // try from 0360544c to 0370544f has its CatchHandler @ 03605458 */
        (__this_00->fields)._size = uVar1 + 1;
                    /* try { // try from 03605450 to 03705453 has its CatchHandler @ 03605464 */
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
                    /* catch() { ... } // from try @ 03605368 with catch @ 03605454
                       try { // try from 03605454 to 03705497 has its CatchHandler @ 0360509c */
        thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 0360544c with catch @ 03605458 */
      }
      else {
                    /* catch() { ... } // from try @ 03605300 with catch @ 0360545c */
                    /* catch() { ... } // from try @ 036052ec with catch @ 03605460 */
                    /* catch() { ... } // from try @ 03605448 with catch @ 03605464
                       catch() { ... } // from try @ 03605450 with catch @ 03605464 */
                    /* catch() { ... } // from try @ 036052dc with catch @ 03605468 */
                    /* catch() { ... } // from try @ 03605438 with catch @ 0360546c */
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
                    /* catch() { ... } // from try @ 036052cc with catch @ 03605470 */
                    /* catch() { ... } // from try @ 03605434 with catch @ 03605474 */
                    /* catch() { ... } // from try @ 03605430 with catch @ 03605478 */
                    /* catch() { ... } // from try @ 03605268 with catch @ 03605480 */
                    /* catch() { ... } // from try @ 0360520c with catch @ 03605484 */
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03605428 with catch @ 03605488 */
  FUN_01bab8c8();
}

