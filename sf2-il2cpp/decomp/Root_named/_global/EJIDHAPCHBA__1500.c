// TypeDefIndex 1500
// Namespace: 
// public class EJIDHAPCHBA : IEJKLPPLHMO
// Fields:

// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x319AB9C]
// EJIDHAPCHBA$$DLKKPFHKIPB @ RVA 0x319AB9C

System_Collections_Generic_IEnumerable_string__o *
EJIDHAPCHBA__DLKKPFHKIPB(EJIDHAPCHBA_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04566aa9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4786);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4787);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566aa9 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4786,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4787,(MethodInfo *)0x0);
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


// ===== public string IGMDDJFPIJL()  [RVA 0x319AD0C]
// EJIDHAPCHBA$$IGMDDJFPIJL @ RVA 0x319AD0C

System_String_o * EJIDHAPCHBA__IGMDDJFPIJL(EJIDHAPCHBA_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04566aaa & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4788);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4789);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566aaa = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4788,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4789,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x319ADBC]
// EJIDHAPCHBA$$AJJLBBCJAAL @ RVA 0x319ADBC

System_String_o *
EJIDHAPCHBA__AJJLBBCJAAL(EJIDHAPCHBA_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar3;
  Roster_o *__this_00;
  
  if ((DAT_04566aab & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4790);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4791);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566aab = 1;
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
  if (__this_00 != (Roster_o *)0x0) {
    iVar2 = Roster__PJFIPGDIGHD(__this_00,(MethodInfo *)0x0);
    Roster__IGOFELIJIOL
              (__this_00,iVar2 + (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)),(MethodInfo *)0x0);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4790,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4791,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ECKDICODLME()  [RVA 0x319AF0C]
// EJIDHAPCHBA$$ECKDICODLME @ RVA 0x319AF0C

bool EJIDHAPCHBA__ECKDICODLME(EJIDHAPCHBA_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x319AF14]
// EJIDHAPCHBA$$KCBILPIAPHN @ RVA 0x319AF14

int32_t EJIDHAPCHBA__KCBILPIAPHN(EJIDHAPCHBA_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public void .ctor()  [RVA 0x319AF1C]
// EJIDHAPCHBA$$.ctor @ RVA 0x319AF1C

void EJIDHAPCHBA___ctor(EJIDHAPCHBA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

