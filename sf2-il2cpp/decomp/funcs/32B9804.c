// NEEBOJENFOL$$DLKKPFHKIPB @ RVA 0x32B9804

System_Collections_Generic_IEnumerable_string__o *
NEEBOJENFOL__DLKKPFHKIPB(NEEBOJENFOL_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 033b9810 to 034b98f3 has its CatchHandler @ 033b9498 */
  if ((DAT_04567479 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4517);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4518);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567479 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4517,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4518,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                    /* try { // try from 033b98f4 to 034b98fb has its CatchHandler @ 033b9924 */
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 033b98fc to 034b990f has its CatchHandler @ 033b9930 */
    pSVar3 = (__this_00->fields)._items;
                    /* try { // try from 033b9910 to 034b9913 has its CatchHandler @ 033b9498 */
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
                    /* try { // try from 033b9914 to 034b9917 has its CatchHandler @ 033b9920 */
    if (pSVar3 != (System_Object_array *)0x0) {
                    /* try { // try from 033b9918 to 034b9943 has its CatchHandler @ 033b9498 */
      uVar1 = (__this_00->fields)._size;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b9914 with catch @ 033b9920
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b98f4 with catch @ 033b9924
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b975c with catch @ 033b9928
                        */
      if (uVar1 < (uint)pSVar3->max_length) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b9700 with catch @ 033b992c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b98fc with catch @ 033b9930
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b97c4 with catch @ 033b9934
                        */
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
                    /* try { // try from 033b9944 to 034b9947 has its CatchHandler @ 033b995c */
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
                    /* catch() { ... } // from try @ 033b9944 with catch @ 033b995c */
                    /* try { // try from 033b9964 to 034b99cb has its CatchHandler @ 033b99e0 */
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

