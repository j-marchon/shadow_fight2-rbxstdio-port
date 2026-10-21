// TypeDefIndex 2974
// Namespace: 
// public class KOCAEDNKMJE : IEJKLPPLHMO
// Fields:

// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x34A0528]
// KOCAEDNKMJE$$DLKKPFHKIPB @ RVA 0x34A0528

System_Collections_Generic_IEnumerable_string__o *
KOCAEDNKMJE__DLKKPFHKIPB(KOCAEDNKMJE_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Object_array *pSVar3;
  
  if ((DAT_04568494 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5813);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5814);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04568494 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5813,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  method_00 = (MethodInfo *)0x0;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5814,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,method_00);
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


// ===== public bool ECKDICODLME()  [RVA 0x34A0694]
// KOCAEDNKMJE$$ECKDICODLME @ RVA 0x34A0694

bool KOCAEDNKMJE__ECKDICODLME(KOCAEDNKMJE_o *__this,MethodInfo *method)

{
  return false;
}


// ===== public void .ctor()  [RVA 0x34A069C]
// KOCAEDNKMJE$$.ctor @ RVA 0x34A069C

void KOCAEDNKMJE___ctor(KOCAEDNKMJE_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x34A06A4]
// KOCAEDNKMJE$$IGMDDJFPIJL @ RVA 0x34A06A4

System_String_o * KOCAEDNKMJE__IGMDDJFPIJL(KOCAEDNKMJE_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  if ((DAT_04568495 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_64);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5815);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568495 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5815,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  method_00 = (MethodInfo *)0x0;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_64,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,method_00);
  return pSVar1;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x34A0750]
// KOCAEDNKMJE$$KCBILPIAPHN @ RVA 0x34A0750

int32_t KOCAEDNKMJE__KCBILPIAPHN(KOCAEDNKMJE_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x34A0758]
// KOCAEDNKMJE$$AJJLBBCJAAL @ RVA 0x34A0758

System_String_o *
KOCAEDNKMJE__AJJLBBCJAAL(KOCAEDNKMJE_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  System_String_o **ppSVar2;
  System_String_StaticFields HBDNGIDONHG;
  
  if ((DAT_04568496 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5816);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5817);
    FUN_01bab630(&byte___TypeInfo);
    __this = (KOCAEDNKMJE_o *)FUN_01bab630(&string_TypeInfo);
    DAT_04568496 = 1;
  }
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    if (OPAEPDIIOEB->max_length == 0) {
      ppSVar2 = &string_TypeInfo->static_fields->Empty;
    }
    else {
      if ((int)OPAEPDIIOEB->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0(__this);
      }
      ppSVar2 = OPAEPDIIOEB->m_Items;
    }
    HBDNGIDONHG.Empty = *ppSVar2;
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__RefreshQuest_Debug
                (__this_00,HBDNGIDONHG.Empty,(MethodInfo *)0x0);
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5816,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      method_00 = (MethodInfo *)0x0;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5817,
                 (MethodInfo *)0x0);
      pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,method_00);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

