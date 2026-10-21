// TypeDefIndex 716
// Namespace: 
// public class KKICACIIOBD : IEJKLPPLHMO
// Fields:

// ===== public string IGMDDJFPIJL()  [RVA 0x303C7E8]
// KKICACIIOBD$$IGMDDJFPIJL @ RVA 0x303C7E8

System_String_o * KKICACIIOBD__IGMDDJFPIJL(KKICACIIOBD_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04565d93 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_80);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6458);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565d93 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6458,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_80,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x303C898]
// KKICACIIOBD$$DLKKPFHKIPB @ RVA 0x303C898

System_Collections_Generic_IEnumerable_string__o *
KKICACIIOBD__DLKKPFHKIPB(KKICACIIOBD_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04565d94 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6459);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6460);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0313c904 to 0323ca03 has its CatchHandler @ 0313c904
                       catch() { ... } // from try @ 0313c904 with catch @ 0313c904
                       catch() { ... } // from try @ 0313cac0 with catch @ 0313c904
                       catch() { ... } // from try @ 0313cb24 with catch @ 0313c904
                       catch() { ... } // from try @ 0313cb68 with catch @ 0313c904
                       catch() { ... } // from try @ 0313cc0c with catch @ 0313c904 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04565d94 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6459,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6460,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
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
                    /* try { // try from 0313ca04 to 0323ca13 has its CatchHandler @ 0313cb48 */
  FUN_01bab8c8();
}


// ===== public bool ECKDICODLME()  [RVA 0x303CA08]
// KKICACIIOBD$$ECKDICODLME @ RVA 0x303CA08

bool KKICACIIOBD__ECKDICODLME(KKICACIIOBD_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x303CA10]
// KKICACIIOBD$$KCBILPIAPHN @ RVA 0x303CA10

int32_t KKICACIIOBD__KCBILPIAPHN(KKICACIIOBD_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public void .ctor()  [RVA 0x303CA18]
// KKICACIIOBD$$.ctor @ RVA 0x303CA18

void KKICACIIOBD___ctor(KKICACIIOBD_o *__this,MethodInfo *method)

{
                    /* try { // try from 0313ca18 to 0323ca1b has its CatchHandler @ 0313cb44 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x303CA20]
// KKICACIIOBD$$AJJLBBCJAAL @ RVA 0x303CA20

System_String_o *
KKICACIIOBD__AJJLBBCJAAL(KKICACIIOBD_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  MainSettings_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  System_String_array *extraout_x1;
  System_String_array *extraout_x1_00;
  System_String_array *extraout_x1_01;
  
                    /* try { // try from 0313ca28 to 0323ca2b has its CatchHandler @ 0313cb3c */
                    /* try { // try from 0313ca30 to 0323ca33 has its CatchHandler @ 0313cb34 */
  if ((DAT_04565d95 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6461);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6462);
                    /* try { // try from 0313ca54 to 0323ca67 has its CatchHandler @ 0313cb4c */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565d95 = 1;
    OPAEPDIIOEB = extraout_x1;
  }
                    /* try { // try from 0313ca74 to 0323ca77 has its CatchHandler @ 0313cb28 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,OPAEPDIIOEB);
    OPAEPDIIOEB = extraout_x1_00;
  }
  if (DAT_04565e59 == '\0') {
                    /* try { // try from 0313ca90 to 0323ca97 has its CatchHandler @ 0313cb40 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e59 = '\x01';
    OPAEPDIIOEB = extraout_x1_01;
  }
                    /* try { // try from 0313caa8 to 0323caab has its CatchHandler @ 0313cb38 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,OPAEPDIIOEB);
                    /* try { // try from 0313cab4 to 0323cabf has its CatchHandler @ 0313cb30 */
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
                    /* try { // try from 0313cac0 to 0323cb07 has its CatchHandler @ 0313c904 */
  if (__this_00 != (MainSettings_o *)0x0) {
    MainSettings__GEEFPKCAMNE(__this_00,(MethodInfo *)0x0);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6461,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0313cb08 to 0323cb0b has its CatchHandler @ 0313cb2c */
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0313cb10 to 0323cb13 has its CatchHandler @ 0313cb4c */
                    /* try { // try from 0313cb18 to 0323cb23 has its CatchHandler @ 0313cb40 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6462,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0313cb24 to 0323cb63 has its CatchHandler @ 0313c904 */
                    /* catch() { ... } // from try @ 0313ca74 with catch @ 0313cb28 */
                    /* catch() { ... } // from try @ 0313cb08 with catch @ 0313cb2c */
                    /* catch() { ... } // from try @ 0313cab4 with catch @ 0313cb30 */
    pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0313ca30 with catch @ 0313cb34 */
  FUN_01bab8c8();
}

