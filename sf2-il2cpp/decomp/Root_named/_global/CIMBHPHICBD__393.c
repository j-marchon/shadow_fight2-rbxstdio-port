// TypeDefIndex 393
// Namespace: 
// public class CIMBHPHICBD : IEJKLPPLHMO
// Fields:

// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x3480248]
// CIMBHPHICBD$$KCBILPIAPHN @ RVA 0x3480248

int32_t CIMBHPHICBD__KCBILPIAPHN(CIMBHPHICBD_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x3480250]
// CIMBHPHICBD$$DLKKPFHKIPB @ RVA 0x3480250

System_Collections_Generic_IEnumerable_string__o *
CIMBHPHICBD__DLKKPFHKIPB(CIMBHPHICBD_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04568378 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5855);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5856);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04568378 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5855,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5856,(MethodInfo *)0x0);
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


// ===== public void .ctor()  [RVA 0x34803C0]
// CIMBHPHICBD$$.ctor @ RVA 0x34803C0

void CIMBHPHICBD___ctor(CIMBHPHICBD_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x34803C8]
// CIMBHPHICBD$$IGMDDJFPIJL @ RVA 0x34803C8

System_String_o * CIMBHPHICBD__IGMDDJFPIJL(CIMBHPHICBD_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04568379 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5857);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5858);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568379 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5857,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5858,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool ECKDICODLME()  [RVA 0x3480478]
// CIMBHPHICBD$$ECKDICODLME @ RVA 0x3480478

bool CIMBHPHICBD__ECKDICODLME(CIMBHPHICBD_o *__this,MethodInfo *method)

{
  return false;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x3480480]
// CIMBHPHICBD$$AJJLBBCJAAL @ RVA 0x3480480

System_String_o *
CIMBHPHICBD__AJJLBBCJAAL(CIMBHPHICBD_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  System_String_o *str1;
  
  if ((DAT_0456837a & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5859);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5860);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5861);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5862);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5863);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5864);
    __this = (CIMBHPHICBD_o *)FUN_01bab630(&byte___TypeInfo);
    DAT_0456837a = 1;
  }
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    if (OPAEPDIIOEB->max_length == 0) {
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5859,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5860,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      pSVar4 = CIMBHPHICBD__IGMDDJFPIJL((CIMBHPHICBD_o *)pSVar3,method_00);
      pSVar3 = System_String__Concat(pSVar3,pSVar4,(MethodInfo *)0x0);
      return pSVar3;
    }
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((int)OPAEPDIIOEB->max_length != 0) {
      __this = (CIMBHPHICBD_o *)0x0;
      if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03580688;
      Nekki_SF2_Core_Quests_QuestsManager__RunQuestByName_DEBUG
                (__this_00,OPAEPDIIOEB->m_Items[0],(MethodInfo *)0x0);
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5861,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5862,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      if ((int)OPAEPDIIOEB->max_length != 0) {
        str1 = OPAEPDIIOEB->m_Items[0];
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5863,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5864,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        pSVar3 = System_String__Concat(pSVar3,str1,pSVar4,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03580688:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

