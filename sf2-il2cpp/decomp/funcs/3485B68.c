// BAJEMIOPBCE$$DLKKPFHKIPB @ RVA 0x3485B68

System_Collections_Generic_IEnumerable_string__o *
BAJEMIOPBCE__DLKKPFHKIPB(BAJEMIOPBCE_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 03585b68 to 03685b6b has its CatchHandler @ 03585b74 */
                    /* try { // try from 03585b6c to 03685c13 has its CatchHandler @ 035856e4 */
                    /* catch() { ... } // from try @ 03585b68 with catch @ 03585b74 */
                    /* catch() { ... } // from try @ 035859b4 with catch @ 03585b78 */
                    /* catch() { ... } // from try @ 03585a3c with catch @ 03585b7c */
                    /* catch() { ... } // from try @ 03585a58 with catch @ 03585b80 */
                    /* catch() { ... } // from try @ 035859f8 with catch @ 03585b84 */
                    /* catch() { ... } // from try @ 03585b60 with catch @ 03585b88 */
                    /* catch() { ... } // from try @ 035859a8 with catch @ 03585b8c */
                    /* catch() { ... } // from try @ 03585b5c with catch @ 03585b90 */
                    /* catch() { ... } // from try @ 03585b58 with catch @ 03585b94 */
                    /* catch() { ... } // from try @ 03585a14 with catch @ 03585b98 */
                    /* catch() { ... } // from try @ 035859ec with catch @ 03585b9c */
                    /* catch() { ... } // from try @ 03585a24 with catch @ 03585ba0 */
                    /* catch() { ... } // from try @ 03585a78 with catch @ 03585ba4 */
                    /* catch() { ... } // from try @ 035859cc with catch @ 03585ba8 */
  if ((DAT_045683aa & 1) == 0) {
                    /* catch() { ... } // from try @ 03585a60 with catch @ 03585bac */
                    /* catch() { ... } // from try @ 03585a48 with catch @ 03585bb0 */
                    /* catch() { ... } // from try @ 035859d4 with catch @ 03585bb4 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4766);
                    /* catch() { ... } // from try @ 03585980 with catch @ 03585bb8 */
                    /* catch() { ... } // from try @ 03585914 with catch @ 03585bbc */
                    /* catch() { ... } // from try @ 03585958 with catch @ 03585bc0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4767);
                    /* catch() { ... } // from try @ 03585964 with catch @ 03585bc4 */
                    /* catch() { ... } // from try @ 035858fc with catch @ 03585bc8 */
                    /* catch() { ... } // from try @ 035858ec with catch @ 03585bcc */
    FUN_01bab630(&byte___TypeInfo);
                    /* catch() { ... } // from try @ 03585920 with catch @ 03585bd0 */
                    /* catch() { ... } // from try @ 03585990 with catch @ 03585bd4 */
                    /* catch() { ... } // from try @ 03585b54 with catch @ 03585bd8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
                    /* catch() { ... } // from try @ 03585b50 with catch @ 03585bdc */
                    /* catch() { ... } // from try @ 03585940 with catch @ 03585be0 */
                    /* catch() { ... } // from try @ 03585938 with catch @ 03585be4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* catch() { ... } // from try @ 03585874 with catch @ 03585be8 */
                    /* catch() { ... } // from try @ 03585818 with catch @ 03585bec */
                    /* catch() { ... } // from try @ 03585a84 with catch @ 03585bf0 */
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
                    /* catch() { ... } // from try @ 03585b48 with catch @ 03585bf4 */
    DAT_045683aa = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 03585c14 to 03685c17 has its CatchHandler @ 03585c24 */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 03585c14 with catch @ 03585c24 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4766,(MethodInfo *)0x0);
                    /* try { // try from 03585c34 to 03685ca3 has its CatchHandler @ 03585cb8 */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4767,(MethodInfo *)0x0);
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
                    /* try { // try from 03585ca4 to 03685caf has its CatchHandler @ 035856e4 */
      }
      else {
                    /* try { // try from 03585cb0 to 03685cb7 has its CatchHandler @ 03585cb8 */
                    /* catch() { ... } // from try @ 03585c34 with catch @ 03585cb8
                       catch() { ... } // from try @ 03585cb0 with catch @ 03585cb8 */
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
                    /* try { // try from 03585cbc to 036861a7 has its CatchHandler @ 03585cbc
                       catch() { ... } // from try @ 03585cbc with catch @ 03585cbc
                       catch() { ... } // from try @ 03586318 with catch @ 03585cbc
                       catch() { ... } // from try @ 035864a4 with catch @ 03585cbc
                       catch() { ... } // from try @ 035864ac with catch @ 03585cbc
                       catch() { ... } // from try @ 03586584 with catch @ 03585cbc */
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

