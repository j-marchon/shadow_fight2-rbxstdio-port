// LJBBDFJMELD$$DLKKPFHKIPB @ RVA 0x357166C

System_Collections_Generic_IEnumerable_string__o *
LJBBDFJMELD__DLKKPFHKIPB(LJBBDFJMELD_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 0367167c to 0377167f has its CatchHandler @ 03673344 */
                    /* try { // try from 03671680 to 0377169f has its CatchHandler @ 036733fc */
                    /* try { // try from 036716ac to 037716b3 has its CatchHandler @ 03673354 */
  if ((DAT_04568c65 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5151);
                    /* try { // try from 036716c4 to 037716cb has its CatchHandler @ 03673348 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5152);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 036716d8 to 037716df has its CatchHandler @ 03673358 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 036716f0 to 037716f7 has its CatchHandler @ 0367334c */
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
                    /* try { // try from 036716f8 to 03771707 has its CatchHandler @ 0367335c */
    DAT_04568c65 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
                    /* try { // try from 0367170c to 0377172f has its CatchHandler @ 03673400 */
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5151,(MethodInfo *)0x0);
                    /* try { // try from 03671730 to 03771733 has its CatchHandler @ 03673350 */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5152,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 03671764 to 0377176f has its CatchHandler @ 0367371c */
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 03671788 to 0377178b has its CatchHandler @ 03673524 */
                    /* try { // try from 0367178c to 03771793 has its CatchHandler @ 03673724 */
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
                    /* try { // try from 036717a0 to 037717a7 has its CatchHandler @ 03673674 */
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
                    /* try { // try from 036717b8 to 037717bf has its CatchHandler @ 03673688 */
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
                    /* try { // try from 036717cc to 037717d3 has its CatchHandler @ 03673678 */
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

