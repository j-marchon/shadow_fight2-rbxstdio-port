// TypeDefIndex 1700
// Namespace: 
// public class FLKONHPKDBC : KJPDGEIKFAH
// Fields:

// ===== public void .ctor()  [RVA 0x31D35B8]
// FLKONHPKDBC$$.ctor @ RVA 0x31D35B8

void FLKONHPKDBC___ctor(FLKONHPKDBC_o *__this,MethodInfo *method)

{
  KJPDGEIKFAH___ctor((KJPDGEIKFAH_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void JAJNKMGCEAJ(string AOJIIDGCBEC)  [RVA 0x31D35C0]
// FLKONHPKDBC$$JAJNKMGCEAJ @ RVA 0x31D35C0

void FLKONHPKDBC__JAJNKMGCEAJ(FLKONHPKDBC_o *__this,System_String_o *AOJIIDGCBEC,MethodInfo *method)

{
  if ((DAT_04566cc2 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566cc2 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 032d360c to 033d362b has its CatchHandler @ 032d40cc */
  NLPJLHOEAOE__IPFBEDIBGIJ(AOJIIDGCBEC,false,true,(MethodInfo *)0x0);
  return;
}


// ===== public override IEnumerable<string> DLKKPFHKIPB()  [RVA 0x31D3620]
// FLKONHPKDBC$$DLKKPFHKIPB @ RVA 0x31D3620

System_Collections_Generic_IEnumerable_string__o *
FLKONHPKDBC__DLKKPFHKIPB(FLKONHPKDBC_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 032d3640 to 033d364b has its CatchHandler @ 032d40b4 */
                    /* try { // try from 032d3660 to 033d367b has its CatchHandler @ 032d40e4 */
  if ((DAT_04566cc3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3046);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3047);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 032d3688 to 033d36af has its CatchHandler @ 032d406c */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566cc3 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3046,(MethodInfo *)0x0);
                    /* try { // try from 032d36e4 to 033d36eb has its CatchHandler @ 032d3fe8 */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 032d36f8 to 033d371b has its CatchHandler @ 032d4014 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3047,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 032d373c to 033d3747 has its CatchHandler @ 032d402c */
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


// ===== public override string IGMDDJFPIJL()  [RVA 0x31D3790]
// FLKONHPKDBC$$IGMDDJFPIJL @ RVA 0x31D3790

System_String_o * FLKONHPKDBC__IGMDDJFPIJL(FLKONHPKDBC_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 032d3790 to 033d3797 has its CatchHandler @ 032d4028 */
                    /* try { // try from 032d37a8 to 033d37b3 has its CatchHandler @ 032d4030 */
  if ((DAT_04566cc4 & 1) == 0) {
                    /* try { // try from 032d37c0 to 033d37cb has its CatchHandler @ 032d3ff4 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3048);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3049);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 032d37e4 to 033d37e7 has its CatchHandler @ 032d4164 */
    DAT_04566cc4 = 1;
  }
                    /* try { // try from 032d37f4 to 033d3817 has its CatchHandler @ 032d401c */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3048,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3049,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

