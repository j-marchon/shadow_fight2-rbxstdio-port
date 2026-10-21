// LGICOANJJLI$$DLKKPFHKIPB @ RVA 0x31A42CC

System_Collections_Generic_IEnumerable_string__o *
LGICOANJJLI__DLKKPFHKIPB(LGICOANJJLI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar6;
  
  if ((DAT_04566afb & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4721);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4722);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4723);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4724);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566afb = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4721,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4722,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 032a43d8 to 033a43df has its CatchHandler @ 032a48cc */
    pSVar6 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
                    /* try { // try from 032a43f4 to 033a43f7 has its CatchHandler @ 032a4830 */
    if (pSVar6 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 032a4410 to 033a4413 has its CatchHandler @ 032a48c8 */
                    /* try { // try from 032a4414 to 033a4573 has its CatchHandler @ 032a4244 */
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
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4723,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4724,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar6 = (__this_00->fields)._items;
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

