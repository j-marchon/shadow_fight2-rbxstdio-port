// IHNONPFHALL$$DLKKPFHKIPB @ RVA 0x337A8A4

System_Collections_Generic_IEnumerable_string__o *
IHNONPFHALL__DLKKPFHKIPB(IHNONPFHALL_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 0347a8a4 to 0357a8ab has its CatchHandler @ 0347acf0 */
                    /* try { // try from 0347a8bc to 0357a8c3 has its CatchHandler @ 0347acd0 */
                    /* try { // try from 0347a8c4 to 0357a8cf has its CatchHandler @ 0347acfc */
                    /* try { // try from 0347a8e0 to 0357a8e7 has its CatchHandler @ 0347acf4 */
  if ((DAT_04567b7e & 1) == 0) {
                    /* try { // try from 0347a8f0 to 0357a8f7 has its CatchHandler @ 0347accc */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6133);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6134);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0347a90c to 0357a957 has its CatchHandler @ 0347ad04 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567b7e = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0347a964 to 0357a96b has its CatchHandler @ 0347ace0 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6133,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0347a97c to 0357a983 has its CatchHandler @ 0347acec */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6134,(MethodInfo *)0x0);
                    /* try { // try from 0347a984 to 0357a993 has its CatchHandler @ 0347acf8 */
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
                    /* try { // try from 0347a9d4 to 0357a9d7 has its CatchHandler @ 0347acdc */
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
                    /* try { // try from 0347a9e0 to 0357a9e7 has its CatchHandler @ 0347ace4 */
      }
      else {
                    /* try { // try from 0347a9f4 to 0357aa5b has its CatchHandler @ 0347ad20 */
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

