// KJIBPEMIKPJ$$DLKKPFHKIPB @ RVA 0x2FF61E0

System_Collections_Generic_IEnumerable_string__o *
KJIBPEMIKPJ__DLKKPFHKIPB(KJIBPEMIKPJ_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 030f621c to 031f625b has its CatchHandler @ 030f621c
                       catch() { ... } // from try @ 030f621c with catch @ 030f621c
                       catch() { ... } // from try @ 030f6288 with catch @ 030f621c
                       catch() { ... } // from try @ 030f62c0 with catch @ 030f621c
                       catch() { ... } // from try @ 030f6308 with catch @ 030f621c */
  if ((DAT_04565a9f & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6136);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6137);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
                    /* try { // try from 030f625c to 031f626b has its CatchHandler @ 030f62c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04565a9f = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
                    /* try { // try from 030f6280 to 031f6287 has its CatchHandler @ 030f62c0 */
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 030f6288 to 031f62bb has its CatchHandler @ 030f621c */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6136,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 030f62bc to 031f62bf has its CatchHandler @ 030f62c4 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6137,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f6280 with catch @ 030f62c0
                       try { // try from 030f62c0 to 031f62df has its CatchHandler @ 030f621c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f62bc with catch @ 030f62c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f625c with catch @ 030f62c8
                        */
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 030f62e0 to 031f62e3 has its CatchHandler @ 030f62f0 */
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
                    /* catch() { ... } // from try @ 030f62e0 with catch @ 030f62f0 */
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 030f62fc to 031f6307 has its CatchHandler @ 030f631c */
      if (uVar1 < (uint)pSVar3->max_length) {
                    /* try { // try from 030f6308 to 031f6313 has its CatchHandler @ 030f621c */
        (__this_00->fields)._size = uVar1 + 1;
                    /* try { // try from 030f6314 to 031f631b has its CatchHandler @ 030f631c */
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f62fc with catch @ 030f631c
                       catch(type#2 @ 00000000) { ... } // from try @ 030f6314 with catch @ 030f631c
                        */
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

