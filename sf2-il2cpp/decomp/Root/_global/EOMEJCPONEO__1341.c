// TypeDefIndex 1341
// Namespace: 
// public class EOMEJCPONEO : IEJKLPPLHMO
// Fields:

// ===== public void .ctor()  [RVA 0x3160368]
// EOMEJCPONEO$$.ctor @ RVA 0x3160368

void EOMEJCPONEO___ctor(EOMEJCPONEO_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x3160370]
// EOMEJCPONEO$$KCBILPIAPHN @ RVA 0x3160370

int32_t EOMEJCPONEO__KCBILPIAPHN(EOMEJCPONEO_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x3160378]
// EOMEJCPONEO$$AJJLBBCJAAL @ RVA 0x3160378

System_String_o *
EOMEJCPONEO__AJJLBBCJAAL(EOMEJCPONEO_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  ACHLOMELAJE_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  
  if ((DAT_04566886 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5115);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5116);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566886 = 1;
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
    ACHLOMELAJE__CEICBEHCCDA
              (__this_00,(ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)),false,(MethodInfo *)0x0
              );
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5115,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5116,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x31604B8]
// EOMEJCPONEO$$DLKKPFHKIPB @ RVA 0x31604B8

System_Collections_Generic_IEnumerable_string__o *
EOMEJCPONEO__DLKKPFHKIPB(EOMEJCPONEO_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04566887 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5117);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5118);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566887 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5117,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5118,(MethodInfo *)0x0);
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


// ===== public string IGMDDJFPIJL()  [RVA 0x3160628]
// EOMEJCPONEO$$IGMDDJFPIJL @ RVA 0x3160628

System_String_o * EOMEJCPONEO__IGMDDJFPIJL(EOMEJCPONEO_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04566888 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5119);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5120);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566888 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03260698 to 03360797 has its CatchHandler @ 03260698
                       catch() { ... } // from try @ 03260698 with catch @ 03260698
                       catch() { ... } // from try @ 03260828 with catch @ 03260698
                       catch() { ... } // from try @ 03260864 with catch @ 03260698
                       catch() { ... } // from try @ 03260898 with catch @ 03260698
                       catch() { ... } // from try @ 032608c8 with catch @ 03260698 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5119,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5120,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool ECKDICODLME()  [RVA 0x31606D8]
// EOMEJCPONEO$$ECKDICODLME @ RVA 0x31606D8

bool EOMEJCPONEO__ECKDICODLME(EOMEJCPONEO_o *__this,MethodInfo *method)

{
  return true;
}

