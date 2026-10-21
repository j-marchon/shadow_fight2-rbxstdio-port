// DFFNJKLBMEG$$DLKKPFHKIPB @ RVA 0x30988D8

System_Collections_Generic_IEnumerable_string__o *
DFFNJKLBMEG__DLKKPFHKIPB(DFFNJKLBMEG_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar6;
  
                    /* try { // try from 031988ec to 032988ef has its CatchHandler @ 03198d50 */
                    /* try { // try from 031988f4 to 032988fb has its CatchHandler @ 03198d6c */
  if ((DAT_04566105 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5366);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5367);
                    /* try { // try from 0319893c to 03298943 has its CatchHandler @ 03198d58 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5368);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5369);
                    /* try { // try from 03198954 to 0329895f has its CatchHandler @ 03198d68 */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 03198978 to 0329897b has its CatchHandler @ 03198d34 */
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566105 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03198988 to 0329898f has its CatchHandler @ 03198d4c */
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5366,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5367,(MethodInfo *)0x0);
                    /* try { // try from 031989d0 to 032989d7 has its CatchHandler @ 03198d3c */
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 031989e8 to 032989f3 has its CatchHandler @ 03198d58 */
    pSVar6 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar6 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 03198a14 to 03298a17 has its CatchHandler @ 03198d1c */
                    /* try { // try from 03198a24 to 03298a2b has its CatchHandler @ 03198d2c */
      if (uVar1 < (uint)pSVar6->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)pSVar5;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)pSVar5,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03198a6c to 03298a73 has its CatchHandler @ 03198d20 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5368,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03198a84 to 03298a8f has its CatchHandler @ 03198d3c */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5369,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                    /* try { // try from 03198aa0 to 03298aab has its CatchHandler @ 03198d20 */
      pSVar6 = (__this_00->fields)._items;
                    /* try { // try from 03198aac to 03298cd7 has its CatchHandler @ 0319814c */
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar6->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)pSVar5;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,(Il2CppObject *)pSVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

