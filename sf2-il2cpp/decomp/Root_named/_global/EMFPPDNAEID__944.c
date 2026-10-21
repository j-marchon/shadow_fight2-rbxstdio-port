// TypeDefIndex 944
// Namespace: 
// public class EMFPPDNAEID : IEJKLPPLHMO
// Fields:

// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x30A9614]
// EMFPPDNAEID$$DLKKPFHKIPB @ RVA 0x30A9614

System_Collections_Generic_IEnumerable_string__o *
EMFPPDNAEID__DLKKPFHKIPB(EMFPPDNAEID_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_0456618e & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4531);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4532);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
                    /* try { // try from 031a9688 to 032a968f has its CatchHandler @ 031a97d4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 031a969c to 032a96b7 has its CatchHandler @ 031a97d0 */
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_0456618e = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
                    /* try { // try from 031a96b8 to 032a97a3 has its CatchHandler @ 031a8db8 */
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4531,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4532,(MethodInfo *)0x0);
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


// ===== public bool ECKDICODLME()  [RVA 0x30A9784]
// EMFPPDNAEID$$ECKDICODLME @ RVA 0x30A9784

bool EMFPPDNAEID__ECKDICODLME(EMFPPDNAEID_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x30A978C]
// EMFPPDNAEID$$IGMDDJFPIJL @ RVA 0x30A978C

System_String_o * EMFPPDNAEID__IGMDDJFPIJL(EMFPPDNAEID_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 031a97a4 to 032a97b3 has its CatchHandler @ 031a97bc */
                    /* try { // try from 031a97b4 to 032a97c3 has its CatchHandler @ 031a8db8 */
  if ((DAT_0456618f & 1) == 0) {
                    /* catch() { ... } // from try @ 031a97a4 with catch @ 031a97bc */
                    /* catch() { ... } // from try @ 031a95b0 with catch @ 031a97c0 */
                    /* try { // try from 031a97c4 to 032a97c7 has its CatchHandler @ 031a983c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4533);
                    /* try { // try from 031a97c8 to 032a97eb has its CatchHandler @ 031a8db8 */
                    /* catch() { ... } // from try @ 031a969c with catch @ 031a97d0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4534);
                    /* catch() { ... } // from try @ 031a9688 with catch @ 031a97d4 */
    FUN_01bab630(&byte___TypeInfo);
    DAT_0456618f = 1;
  }
                    /* try { // try from 031a97ec to 032a97ef has its CatchHandler @ 031a9818 */
                    /* try { // try from 031a97f0 to 032a9827 has its CatchHandler @ 031a8db8 */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4533,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 031a97ec with catch @ 031a9818 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4534,(MethodInfo *)0x0);
                    /* try { // try from 031a9828 to 032a983b has its CatchHandler @ 031a983c */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x30A983C]
// EMFPPDNAEID$$KCBILPIAPHN @ RVA 0x30A983C

int32_t EMFPPDNAEID__KCBILPIAPHN(EMFPPDNAEID_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 031a97c4 with catch @ 031a983c
                       catch() { ... } // from try @ 031a9828 with catch @ 031a983c */
  return 1;
}


// ===== public void .ctor()  [RVA 0x30A9844]
// EMFPPDNAEID$$.ctor @ RVA 0x30A9844

void EMFPPDNAEID___ctor(EMFPPDNAEID_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x30A984C]
// EMFPPDNAEID$$AJJLBBCJAAL @ RVA 0x30A984C

System_String_o *
EMFPPDNAEID__AJJLBBCJAAL(EMFPPDNAEID_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  OGNCMFBMBMB_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04566190 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4535);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4536);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566190 = 1;
  }
  __this_00 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (OGNCMFBMBMB_o *)0x0) {
    OGNCMFBMBMB__IFIEMIIMCKM(__this_00,(MethodInfo *)0x0);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4535,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4536,(MethodInfo *)0x0)
    ;
    pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

