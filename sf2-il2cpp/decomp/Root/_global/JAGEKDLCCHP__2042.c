// TypeDefIndex 2042
// Namespace: 
// public class JAGEKDLCCHP : IEJKLPPLHMO
// Fields:

// ===== public bool ECKDICODLME()  [RVA 0x32A9E08]
// JAGEKDLCCHP$$ECKDICODLME @ RVA 0x32A9E08

bool JAGEKDLCCHP__ECKDICODLME(JAGEKDLCCHP_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x32A9E10]
// JAGEKDLCCHP$$AJJLBBCJAAL @ RVA 0x32A9E10

System_String_o *
JAGEKDLCCHP__AJJLBBCJAAL(JAGEKDLCCHP_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  System_Nullable_bool__o SVar2;
  System_String_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  BCAEBMNHBAN_o *pBVar7;
  
  if ((DAT_04567426 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5823);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5824);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5825);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5826);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5827);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5828);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    DAT_04567426 = 1;
  }
  pSVar3 = AJAMDCEKAFE__LFCNNAGLPHO(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  SVar2 = AJAMDCEKAFE__FAEBPLENEGK(1,OPAEPDIIOEB,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5823,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5824,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(pSVar3,pSVar6,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5825,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5826,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar3,pSVar6,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar3 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  pBVar7 = BCAEBMNHBAN__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pBVar7 != (BCAEBMNHBAN_o *)0x0) {
    (pBVar7->fields).BGPDJHKBKCD =
         ((ushort)SVar2.fields & 0xff) == 0 || ((ushort)SVar2.fields & 0xff00) != 0;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5827,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5828,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32AA068]
// JAGEKDLCCHP$$.ctor @ RVA 0x32AA068

void JAGEKDLCCHP___ctor(JAGEKDLCCHP_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x32AA070]
// JAGEKDLCCHP$$DLKKPFHKIPB @ RVA 0x32AA070

System_Collections_Generic_IEnumerable_string__o *
JAGEKDLCCHP__DLKKPFHKIPB(JAGEKDLCCHP_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04567427 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5829);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5830);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567427 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5829,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5830,(MethodInfo *)0x0);
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


// ===== public string IGMDDJFPIJL()  [RVA 0x32AA1E0]
// JAGEKDLCCHP$$IGMDDJFPIJL @ RVA 0x32AA1E0

System_String_o * JAGEKDLCCHP__IGMDDJFPIJL(JAGEKDLCCHP_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04567428 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5831);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5832);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567428 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5831,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5832,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x32AA290]
// JAGEKDLCCHP$$KCBILPIAPHN @ RVA 0x32AA290

int32_t JAGEKDLCCHP__KCBILPIAPHN(JAGEKDLCCHP_o *__this,MethodInfo *method)

{
  return 1;
}

