// FDGBGINGEBP$$DLKKPFHKIPB @ RVA 0x318CA84

System_Collections_Generic_IEnumerable_string__o *
FDGBGINGEBP__DLKKPFHKIPB(FDGBGINGEBP_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 0328ca84 to 0338ca87 has its CatchHandler @ 0328cab4 */
                    /* try { // try from 0328ca88 to 0338ca8b has its CatchHandler @ 0328c768 */
                    /* try { // try from 0328ca8c to 0338ca8f has its CatchHandler @ 0328ca98 */
                    /* try { // try from 0328ca90 to 0338cac7 has its CatchHandler @ 0328c768 */
                    /* catch() { ... } // from try @ 0328ca8c with catch @ 0328ca98 */
                    /* catch() { ... } // from try @ 0328ca80 with catch @ 0328ca9c */
                    /* catch() { ... } // from try @ 0328c9bc with catch @ 0328caa0 */
                    /* catch() { ... } // from try @ 0328c96c with catch @ 0328caa4 */
                    /* catch() { ... } // from try @ 0328ca74 with catch @ 0328caa8 */
                    /* catch() { ... } // from try @ 0328c8f4 with catch @ 0328caac */
                    /* catch() { ... } // from try @ 0328c898 with catch @ 0328cab0 */
                    /* catch() { ... } // from try @ 0328ca7c with catch @ 0328cab4
                       catch() { ... } // from try @ 0328ca84 with catch @ 0328cab4 */
                    /* catch() { ... } // from try @ 0328c958 with catch @ 0328cab8 */
  if ((DAT_04566a15 & 1) == 0) {
                    /* try { // try from 0328cac8 to 0338cacb has its CatchHandler @ 0328cadc */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4987);
                    /* catch() { ... } // from try @ 0328cac8 with catch @ 0328cadc */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4988);
                    /* try { // try from 0328cae4 to 0338cb4b has its CatchHandler @ 0328cb60 */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566a15 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4987,(MethodInfo *)0x0);
                    /* try { // try from 0328cb4c to 0338cb57 has its CatchHandler @ 0328c768 */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0328cb58 to 0338cb5f has its CatchHandler @ 0328cb60 */
                    /* catch() { ... } // from try @ 0328cae4 with catch @ 0328cb60
                       catch() { ... } // from try @ 0328cb58 with catch @ 0328cb60 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4988,(MethodInfo *)0x0);
                    /* try { // try from 0328cb64 to 0338cc13 has its CatchHandler @ 0328cb64
                       catch() { ... } // from try @ 0328cb64 with catch @ 0328cb64
                       catch() { ... } // from try @ 0328cc38 with catch @ 0328cb64
                       catch() { ... } // from try @ 0328ccb4 with catch @ 0328cb64
                       catch() { ... } // from try @ 0328ccdc with catch @ 0328cb64
                       catch() { ... } // from try @ 0328cd0c with catch @ 0328cb64 */
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

