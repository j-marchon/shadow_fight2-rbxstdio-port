// HAPEALJCNFG$$DLKKPFHKIPB @ RVA 0x356F190

System_Collections_Generic_IEnumerable_string__o *
HAPEALJCNFG__DLKKPFHKIPB(HAPEALJCNFG_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 0366f194 to 0376f19b has its CatchHandler @ 03672a5c */
                    /* try { // try from 0366f1ac to 0376f1b3 has its CatchHandler @ 03672a58 */
                    /* try { // try from 0366f1b4 to 0376f1c7 has its CatchHandler @ 03672a54 */
                    /* try { // try from 0366f1c8 to 0376f1d3 has its CatchHandler @ 03672a50 */
  if ((DAT_04568c50 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5347);
                    /* try { // try from 0366f1e4 to 0376f1eb has its CatchHandler @ 03672a18 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5348);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0366f1fc to 0376f203 has its CatchHandler @ 03672a14 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 0366f210 to 0376f217 has its CatchHandler @ 03672a10 */
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04568c50 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0366f228 to 0376f22f has its CatchHandler @ 03672a0c */
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
                    /* try { // try from 0366f230 to 0376f243 has its CatchHandler @ 03672a08 */
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f244 to 0376f24f has its CatchHandler @ 03672a04 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5347,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f260 to 0376f267 has its CatchHandler @ 036729e8 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5348,(MethodInfo *)0x0);
                    /* try { // try from 0366f278 to 0376f27f has its CatchHandler @ 036729e4 */
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 0366f28c to 0376f293 has its CatchHandler @ 036729e0 */
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
                    /* try { // try from 0366f2a4 to 0376f2ab has its CatchHandler @ 036729dc */
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 0366f2ac to 0376f2bf has its CatchHandler @ 036729d8 */
      if (uVar1 < (uint)pSVar3->max_length) {
                    /* try { // try from 0366f2c0 to 0376f2cb has its CatchHandler @ 036729d4 */
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
                    /* try { // try from 0366f2dc to 0376f2e3 has its CatchHandler @ 036729b4 */
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
                    /* try { // try from 0366f2f4 to 0376f2fb has its CatchHandler @ 036729b0 */
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

