// DIBOHFIDBEB$$DLKKPFHKIPB @ RVA 0x34A7008

System_Collections_Generic_IEnumerable_string__o *
DIBOHFIDBEB__DLKKPFHKIPB(DIBOHFIDBEB_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 035a7008 to 036a700f has its CatchHandler @ 035a7080 */
                    /* try { // try from 035a7018 to 036a701f has its CatchHandler @ 035a7084 */
                    /* try { // try from 035a7020 to 036a7067 has its CatchHandler @ 035a6ed0 */
  if ((DAT_045684f9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5801);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5802);
                    /* try { // try from 035a7068 to 036a706b has its CatchHandler @ 035a7090 */
                    /* try { // try from 035a706c to 036a706f has its CatchHandler @ 035a708c */
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 035a7070 to 036a7073 has its CatchHandler @ 035a7088 */
                    /* try { // try from 035a7074 to 036a70ab has its CatchHandler @ 035a6ed0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a6fc0 with catch @ 035a7078
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a6fcc with catch @ 035a707c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a7008 with catch @ 035a7080
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a7018 with catch @ 035a7084
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a7070 with catch @ 035a7088
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a706c with catch @ 035a708c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a7068 with catch @ 035a7090
                        */
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a6fa4 with catch @ 035a7094
                        */
    DAT_045684f9 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
                    /* try { // try from 035a70ac to 036a70af has its CatchHandler @ 035a70d8 */
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 035a70b0 to 036a70df has its CatchHandler @ 035a6ed0 */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5801,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 035a70ac with catch @ 035a70d8 */
                    /* try { // try from 035a70e0 to 036a70e7 has its CatchHandler @ 035a70fc */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5802,(MethodInfo *)0x0);
                    /* try { // try from 035a70e8 to 036a70f3 has its CatchHandler @ 035a6ed0 */
                    /* try { // try from 035a70f4 to 036a70fb has its CatchHandler @ 035a70fc */
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a70e0 with catch @ 035a70fc
                       catch(type#2 @ 00000000) { ... } // from try @ 035a70f4 with catch @ 035a70fc
                        */
                    /* try { // try from 035a7108 to 036a71af has its CatchHandler @ 035a7108
                       catch() { ... } // from try @ 035a7108 with catch @ 035a7108
                       catch() { ... } // from try @ 035a71f0 with catch @ 035a7108
                       catch() { ... } // from try @ 035a7244 with catch @ 035a7108
                       catch() { ... } // from try @ 035a7274 with catch @ 035a7108
                       catch() { ... } // from try @ 035a72bc with catch @ 035a7108 */
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

