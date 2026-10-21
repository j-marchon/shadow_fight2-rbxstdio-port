// OLFMHJKAHPK$$DLKKPFHKIPB @ RVA 0x326BF50

System_Collections_Generic_IEnumerable_string__o *
OLFMHJKAHPK__DLKKPFHKIPB(OLFMHJKAHPK_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 0336bf5c to 0346bf63 has its CatchHandler @ 0336bf8c */
                    /* try { // try from 0336bf64 to 0346bf67 has its CatchHandler @ 0336bf84 */
                    /* try { // try from 0336bf68 to 0346bf6b has its CatchHandler @ 0336baa4 */
                    /* try { // try from 0336bf6c to 0346bf6f has its CatchHandler @ 0336bf78 */
                    /* try { // try from 0336bf70 to 0346bfaf has its CatchHandler @ 0336baa4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0336bf6c with catch @ 0336bf78
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0336bf64 with catch @ 0336bf84
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0336bdf0 with catch @ 0336bf88
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0336bf5c with catch @ 0336bf8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0336bd74 with catch @ 0336bf90
                        */
  if ((DAT_045671e9 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0336bd18 with catch @ 0336bf94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0336bda8 with catch @ 0336bf98
                        */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6453);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6454);
                    /* try { // try from 0336bfb0 to 0346bfb3 has its CatchHandler @ 0336bfc4 */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
                    /* catch() { ... } // from try @ 0336bfb0 with catch @ 0336bfc4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 0336bfd4 to 0346c03b has its CatchHandler @ 0336c050 */
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045671e9 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6453,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6454,(MethodInfo *)0x0);
                    /* try { // try from 0336c03c to 0346c047 has its CatchHandler @ 0336baa4 */
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 0336c048 to 0346c04f has its CatchHandler @ 0336c050 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0336bfd4 with catch @ 0336c050
                       catch(type#2 @ 00000000) { ... } // from try @ 0336c048 with catch @ 0336c050
                        */
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

