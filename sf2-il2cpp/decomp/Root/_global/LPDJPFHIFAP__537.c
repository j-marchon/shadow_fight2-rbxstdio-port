// TypeDefIndex 537
// Namespace: 
// public class LPDJPFHIFAP : IEJKLPPLHMO
// Fields:

// ===== public void .ctor()  [RVA 0x359A950]
// LPDJPFHIFAP$$.ctor @ RVA 0x359A950

void LPDJPFHIFAP___ctor(LPDJPFHIFAP_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x359A958]
// LPDJPFHIFAP$$AJJLBBCJAAL @ RVA 0x359A958

System_String_o *
LPDJPFHIFAP__AJJLBBCJAAL(LPDJPFHIFAP_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar3;
  ACHLOMELAJE_o *__this_00;
  
  if ((DAT_04568dbe & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4774);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4775);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568dbe = 1;
  }
  uVar1 = AJAMDCEKAFE__NFNFHEFOLDI(OPAEPDIIOEB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar2 = ACHLOMELAJE__HMGDGJOPLKB(__this_00,(MethodInfo *)0x0);
    ACHLOMELAJE__CFFOFKPDGEH
              (__this_00,iVar2 + (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)),(MethodInfo *)0x0);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4774,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4775,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x359AAA8]
// LPDJPFHIFAP$$DLKKPFHKIPB @ RVA 0x359AAA8

System_Collections_Generic_IEnumerable_string__o *
LPDJPFHIFAP__DLKKPFHKIPB(LPDJPFHIFAP_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04568dbf & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4776);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4777);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04568dbf = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4776,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4777,(MethodInfo *)0x0);
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
  FUN_01bab8c8();
}


// ===== public bool ECKDICODLME()  [RVA 0x359AC18]
// LPDJPFHIFAP$$ECKDICODLME @ RVA 0x359AC18

bool LPDJPFHIFAP__ECKDICODLME(LPDJPFHIFAP_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x359AC20]
// LPDJPFHIFAP$$KCBILPIAPHN @ RVA 0x359AC20

int32_t LPDJPFHIFAP__KCBILPIAPHN(LPDJPFHIFAP_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x359AC28]
// LPDJPFHIFAP$$IGMDDJFPIJL @ RVA 0x359AC28

System_String_o * LPDJPFHIFAP__IGMDDJFPIJL(LPDJPFHIFAP_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 0369ac44 to 0379ac47 has its CatchHandler @ 0369ac64 */
                    /* try { // try from 0369ac48 to 0379ac4b has its CatchHandler @ 0369ac60 */
                    /* try { // try from 0369ac4c to 0379ac4f has its CatchHandler @ 0369ac5c */
                    /* try { // try from 0369ac50 to 0379ac53 has its CatchHandler @ 0369ac54 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369ac50 with catch @ 0369ac54
                       try { // try from 0369ac54 to 0379ac83 has its CatchHandler @ 0369a494 */
  if ((DAT_04568dc0 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369a73c with catch @ 0369ac58
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369ac4c with catch @ 0369ac5c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369ac48 with catch @ 0369ac60
                        */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4778);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369ac44 with catch @ 0369ac64
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369a6fc with catch @ 0369ac68
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369a6e0 with catch @ 0369ac6c
                        */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4779);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568dc0 = 1;
  }
                    /* try { // try from 0369ac84 to 0379ac87 has its CatchHandler @ 0369acb0 */
                    /* try { // try from 0369ac88 to 0379acbf has its CatchHandler @ 0369a494 */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4778,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0369ac84 with catch @ 0369acb0 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4779,(MethodInfo *)0x0);
                    /* try { // try from 0369acc0 to 0379acc7 has its CatchHandler @ 0369acdc */
                    /* try { // try from 0369acc8 to 0379acd3 has its CatchHandler @ 0369a494 */
                    /* try { // try from 0369acd4 to 0379acdb has its CatchHandler @ 0369acdc */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

