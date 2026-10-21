// NOHICBGCIGP$$DLKKPFHKIPB @ RVA 0x3391D30

System_Collections_Generic_IEnumerable_string__o *
NOHICBGCIGP__DLKKPFHKIPB(NOHICBGCIGP_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04567c26 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5125);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5126);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 03491da0 to 03591e2f has its CatchHandler @ 03491da0
                       catch() { ... } // from try @ 03491da0 with catch @ 03491da0
                       catch() { ... } // from try @ 03491e50 with catch @ 03491da0
                       catch() { ... } // from try @ 03491e88 with catch @ 03491da0
                       catch() { ... } // from try @ 03491eb0 with catch @ 03491da0
                       catch() { ... } // from try @ 03491ef8 with catch @ 03491da0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567c26 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5125,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5126,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 03491e30 to 03591e37 has its CatchHandler @ 03491e94 */
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
                    /* try { // try from 03491e44 to 03591e4f has its CatchHandler @ 03491e8c */
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 03491e50 to 03591e83 has its CatchHandler @ 03491da0 */
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
                    /* try { // try from 03491e84 to 03591e87 has its CatchHandler @ 03491e90 */
                    /* try { // try from 03491e88 to 03591eab has its CatchHandler @ 03491da0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03491e44 with catch @ 03491e8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03491e84 with catch @ 03491e90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03491e30 with catch @ 03491e94
                        */
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

