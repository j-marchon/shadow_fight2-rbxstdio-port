// BEMDKLCAOEI$$DLKKPFHKIPB @ RVA 0x347F9E8

System_Collections_Generic_IEnumerable_string__o *
BEMDKLCAOEI__DLKKPFHKIPB(BEMDKLCAOEI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 0357f9f8 to 0367fa03 has its CatchHandler @ 0357fc78 */
                    /* try { // try from 0357fa04 to 0367fa0f has its CatchHandler @ 0357fc84 */
                    /* try { // try from 0357fa1c to 0367fa1f has its CatchHandler @ 0357fc40 */
  if ((DAT_04568371 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4780);
                    /* try { // try from 0357fa38 to 0367fa3b has its CatchHandler @ 0357fc38 */
                    /* try { // try from 0357fa3c to 0367fa43 has its CatchHandler @ 0357fc44 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4781);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0357fa58 to 0367fa5f has its CatchHandler @ 0357fc68 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 0357fa68 to 0367fa6f has its CatchHandler @ 0357fc50 */
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04568371 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0357fa80 to 0367fa87 has its CatchHandler @ 0357fc6c */
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
                    /* try { // try from 0357fa8c to 0367fa93 has its CatchHandler @ 0357fc54 */
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0357faa4 to 0367faab has its CatchHandler @ 0357fc70 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4780,(MethodInfo *)0x0);
                    /* try { // try from 0357faac to 0367fabf has its CatchHandler @ 0357fc5c */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0357fac4 to 0367facf has its CatchHandler @ 0357fc58 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4781,(MethodInfo *)0x0);
                    /* try { // try from 0357fad0 to 0367fadb has its CatchHandler @ 0357fc64 */
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 0357fae8 to 0367faeb has its CatchHandler @ 0357fc48 */
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 0357fb04 to 0367fb07 has its CatchHandler @ 0357fc3c */
                    /* try { // try from 0357fb08 to 0367fb0f has its CatchHandler @ 0357fc4c */
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
                    /* try { // try from 0357fb24 to 0367fb37 has its CatchHandler @ 0357fc28 */
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
                    /* try { // try from 0357fb50 to 0367fb5b has its CatchHandler @ 0357fc20 */
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

