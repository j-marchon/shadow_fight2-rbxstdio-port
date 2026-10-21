// KCJBHAFMPDP$$DLKKPFHKIPB @ RVA 0x31AACFC

System_Collections_Generic_IEnumerable_string__o *
KCJBHAFMPDP__DLKKPFHKIPB(KCJBHAFMPDP_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 032aad14 to 033aad17 has its CatchHandler @ 032ab0ec */
                    /* try { // try from 032aad24 to 033aad27 has its CatchHandler @ 032ab088 */
                    /* try { // try from 032aad34 to 033aad37 has its CatchHandler @ 032ab0ec */
  if ((DAT_04566b34 & 1) == 0) {
                    /* try { // try from 032aad44 to 033aad47 has its CatchHandler @ 032ab078 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5055);
                    /* try { // try from 032aad54 to 033aad57 has its CatchHandler @ 032ab074 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5056);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 032aad64 to 033aad67 has its CatchHandler @ 032ab0ec */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
                    /* try { // try from 032aad74 to 033aad77 has its CatchHandler @ 032ab05c */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 032aad84 to 033aad87 has its CatchHandler @ 032ab03c */
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566b34 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032aad94 to 033aad97 has its CatchHandler @ 032ab034 */
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 032aada4 to 033aada7 has its CatchHandler @ 032ab028 */
                    /* try { // try from 032aada8 to 033aadc3 has its CatchHandler @ 032aa15c */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5055,(MethodInfo *)0x0);
                    /* try { // try from 032aadc4 to 033aadd3 has its CatchHandler @ 032ab01c */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5056,(MethodInfo *)0x0);
                    /* try { // try from 032aade0 to 033aade3 has its CatchHandler @ 032ab000 */
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 032aadf0 to 033aadf3 has its CatchHandler @ 032aaffc */
    pSVar3 = (__this_00->fields)._items;
                    /* try { // try from 032aae00 to 033aae03 has its CatchHandler @ 032aaff8 */
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
                    /* try { // try from 032aae10 to 033aae13 has its CatchHandler @ 032aaff0 */
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 032aae20 to 033aae23 has its CatchHandler @ 032aafe4 */
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
                    /* try { // try from 032aae30 to 033aae33 has its CatchHandler @ 032aafdc */
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
                    /* try { // try from 032aae40 to 033aae43 has its CatchHandler @ 032aafd4 */
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
                    /* try { // try from 032aae50 to 033aae53 has its CatchHandler @ 032aafd0 */
                    /* try { // try from 032aae60 to 033aae63 has its CatchHandler @ 032ab0ec */
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

