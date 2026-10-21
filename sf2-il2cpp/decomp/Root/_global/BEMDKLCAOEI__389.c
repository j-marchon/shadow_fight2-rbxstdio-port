// TypeDefIndex 389
// Namespace: 
// public class BEMDKLCAOEI : IEJKLPPLHMO
// Fields:

// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x347F9E8]
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


// ===== public string IGMDDJFPIJL()  [RVA 0x347FB58]
// BEMDKLCAOEI$$IGMDDJFPIJL @ RVA 0x347FB58

System_String_o * BEMDKLCAOEI__IGMDDJFPIJL(BEMDKLCAOEI_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 0357fb5c to 0367fbf3 has its CatchHandler @ 0357f5a0 */
  if ((DAT_04568372 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4782);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4783);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568372 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4782,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4783,(MethodInfo *)0x0);
                    /* try { // try from 0357fbf4 to 0367fbf7 has its CatchHandler @ 0357fcb4 */
                    /* try { // try from 0357fbf8 to 0367fbfb has its CatchHandler @ 0357fcb0 */
                    /* try { // try from 0357fbfc to 0367fbff has its CatchHandler @ 0357fc94 */
                    /* try { // try from 0357fc00 to 0367fc03 has its CatchHandler @ 0357fc60 */
                    /* try { // try from 0357fc04 to 0367fc07 has its CatchHandler @ 0357fc2c */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool ECKDICODLME()  [RVA 0x347FC08]
// BEMDKLCAOEI$$ECKDICODLME @ RVA 0x347FC08

bool BEMDKLCAOEI__ECKDICODLME(BEMDKLCAOEI_o *__this,MethodInfo *method)

{
                    /* try { // try from 0357fc08 to 0367fc13 has its CatchHandler @ 0357f5a0 */
  return true;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x347FC10]
// BEMDKLCAOEI$$AJJLBBCJAAL @ RVA 0x347FC10

System_String_o *
BEMDKLCAOEI__AJJLBBCJAAL(BEMDKLCAOEI_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar3;
  ACHLOMELAJE_o *__this_00;
  
                    /* try { // try from 0357fc14 to 0367fc17 has its CatchHandler @ 0357fc24 */
                    /* try { // try from 0357fc18 to 0367fc1b has its CatchHandler @ 0357fc1c */
                    /* catch() { ... } // from try @ 0357fc18 with catch @ 0357fc1c
                       try { // try from 0357fc1c to 0367fce7 has its CatchHandler @ 0357f5a0 */
                    /* catch() { ... } // from try @ 0357fb50 with catch @ 0357fc20 */
                    /* catch() { ... } // from try @ 0357fc14 with catch @ 0357fc24 */
                    /* catch() { ... } // from try @ 0357fb24 with catch @ 0357fc28 */
                    /* catch() { ... } // from try @ 0357fc04 with catch @ 0357fc2c */
  if ((DAT_04568373 & 1) == 0) {
                    /* catch() { ... } // from try @ 0357fa38 with catch @ 0357fc38 */
                    /* catch() { ... } // from try @ 0357fb04 with catch @ 0357fc3c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4784);
                    /* catch() { ... } // from try @ 0357fa1c with catch @ 0357fc40 */
                    /* catch() { ... } // from try @ 0357fa3c with catch @ 0357fc44 */
                    /* catch() { ... } // from try @ 0357fae8 with catch @ 0357fc48 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4785);
                    /* catch() { ... } // from try @ 0357fb08 with catch @ 0357fc4c */
                    /* catch() { ... } // from try @ 0357fa68 with catch @ 0357fc50 */
                    /* catch() { ... } // from try @ 0357fa8c with catch @ 0357fc54 */
    FUN_01bab630(&byte___TypeInfo);
                    /* catch() { ... } // from try @ 0357fac4 with catch @ 0357fc58 */
                    /* catch() { ... } // from try @ 0357faac with catch @ 0357fc5c */
                    /* catch() { ... } // from try @ 0357fc00 with catch @ 0357fc60 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 0357fad0 with catch @ 0357fc64 */
                    /* catch() { ... } // from try @ 0357fa58 with catch @ 0357fc68 */
    DAT_04568373 = 1;
  }
                    /* catch() { ... } // from try @ 0357fa80 with catch @ 0357fc6c */
                    /* catch() { ... } // from try @ 0357faa4 with catch @ 0357fc70 */
                    /* catch() { ... } // from try @ 0357f96c with catch @ 0357fc74 */
  uVar1 = AJAMDCEKAFE__NFNFHEFOLDI(OPAEPDIIOEB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0357f9f8 with catch @ 0357fc78 */
                    /* catch() { ... } // from try @ 0357f9e0 with catch @ 0357fc7c */
                    /* catch() { ... } // from try @ 0357f9c0 with catch @ 0357fc80 */
                    /* catch() { ... } // from try @ 0357fa04 with catch @ 0357fc84 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0357f98c with catch @ 0357fc88 */
                    /* catch() { ... } // from try @ 0357f9d8 with catch @ 0357fc8c */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
                    /* catch() { ... } // from try @ 0357f9b4 with catch @ 0357fc90 */
                    /* catch() { ... } // from try @ 0357fbfc with catch @ 0357fc94 */
                    /* catch() { ... } // from try @ 0357f99c with catch @ 0357fc98 */
  if (DAT_04565b7d == '\0') {
                    /* catch() { ... } // from try @ 0357f91c with catch @ 0357fc9c */
                    /* catch() { ... } // from try @ 0357f8e0 with catch @ 0357fca0 */
                    /* catch() { ... } // from try @ 0357f90c with catch @ 0357fca4 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 0357f948 with catch @ 0357fca8 */
                    /* catch() { ... } // from try @ 0357f924 with catch @ 0357fcac */
    DAT_04565b7d = '\x01';
  }
                    /* catch() { ... } // from try @ 0357fbf8 with catch @ 0357fcb0 */
                    /* catch() { ... } // from try @ 0357fbf4 with catch @ 0357fcb4 */
                    /* catch() { ... } // from try @ 0357f970 with catch @ 0357fcb8 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0357f8f0 with catch @ 0357fcbc */
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 0357f900 with catch @ 0357fcc0 */
  }
                    /* catch() { ... } // from try @ 0357f93c with catch @ 0357fcc4 */
                    /* catch() { ... } // from try @ 0357f8a4 with catch @ 0357fcc8 */
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch() { ... } // from try @ 0357f848 with catch @ 0357fccc */
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 0357fce8 to 0367fceb has its CatchHandler @ 0357fcf8 */
    iVar2 = ACHLOMELAJE__DHOOAGDPAMN(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0357fce8 with catch @ 0357fcf8 */
    ACHLOMELAJE__BKIIAAJJPOE
              (__this_00,iVar2 + (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)),(MethodInfo *)0x0);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4784,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0357fd38 to 0367fd5f has its CatchHandler @ 0357fd74 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4785,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x347FD60]
// BEMDKLCAOEI$$.ctor @ RVA 0x347FD60

void BEMDKLCAOEI___ctor(BEMDKLCAOEI_o *__this,MethodInfo *method)

{
                    /* try { // try from 0357fd60 to 0367fd6b has its CatchHandler @ 0357f5a0 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x347FD68]
// BEMDKLCAOEI$$KCBILPIAPHN @ RVA 0x347FD68

int32_t BEMDKLCAOEI__KCBILPIAPHN(BEMDKLCAOEI_o *__this,MethodInfo *method)

{
                    /* try { // try from 0357fd6c to 0367fd73 has its CatchHandler @ 0357fd74 */
  return 0;
}

