// TypeDefIndex 2813
// Namespace: 
// public class GPEBLILEBPK : IEJKLPPLHMO
// Fields:

// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x3423104]
// GPEBLILEBPK$$DLKKPFHKIPB @ RVA 0x3423104

System_Collections_Generic_IEnumerable_string__o *
GPEBLILEBPK__DLKKPFHKIPB(GPEBLILEBPK_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_045680f1 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5906);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5907);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045680f1 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5906,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5907,(MethodInfo *)0x0);
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


// ===== public void .ctor()  [RVA 0x3423274]
// GPEBLILEBPK$$.ctor @ RVA 0x3423274

void GPEBLILEBPK___ctor(GPEBLILEBPK_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x342327C]
// GPEBLILEBPK$$KCBILPIAPHN @ RVA 0x342327C

int32_t GPEBLILEBPK__KCBILPIAPHN(GPEBLILEBPK_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== public bool ECKDICODLME()  [RVA 0x3423284]
// GPEBLILEBPK$$ECKDICODLME @ RVA 0x3423284

bool GPEBLILEBPK__ECKDICODLME(GPEBLILEBPK_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x342328C]
// GPEBLILEBPK$$IGMDDJFPIJL @ RVA 0x342328C

System_String_o * GPEBLILEBPK__IGMDDJFPIJL(GPEBLILEBPK_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_045680f2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5908);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5909);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045680f2 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5908,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5909,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x342333C]
// GPEBLILEBPK$$AJJLBBCJAAL @ RVA 0x342333C

System_String_o *
GPEBLILEBPK__AJJLBBCJAAL(GPEBLILEBPK_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  int32_t width;
  System_String_array *values;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  int32_t local_38;
  int32_t local_34;
  
  if ((DAT_045680f3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5910);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5911);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5912);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5913);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5914);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5915);
    FUN_01bab630(&byte___TypeInfo);
    __this = (GPEBLILEBPK_o *)FUN_01bab630(&string___TypeInfo);
    DAT_045680f3 = 1;
  }
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    if ((int)OPAEPDIIOEB->max_length != 0) {
      width = System_Int32__Parse(OPAEPDIIOEB->m_Items[0],(MethodInfo *)0x0);
      local_34 = width;
      if (1 < (uint)OPAEPDIIOEB->max_length) {
        local_38 = System_Int32__Parse(OPAEPDIIOEB->m_Items[1],(MethodInfo *)0x0);
        UnityEngine_Screen__SetResolution(width,local_38,true,(MethodInfo *)0x0);
        values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5910,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5911,
                   (MethodInfo *)0x0);
        __this = (GPEBLILEBPK_o *)OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        if (values == (System_String_array *)0x0) goto LAB_03523618;
        if ((int)values->max_length != 0) {
          values->m_Items[0] = (System_String_o *)__this;
          thunk_FUN_01c20e04(values->m_Items,__this);
          pSVar3 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = pSVar3;
            thunk_FUN_01c20e04(values->m_Items + 1,pSVar3);
            pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar1,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5912,
                       (MethodInfo *)0x0);
            pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar2,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5913,
                       (MethodInfo *)0x0);
            pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = pSVar3;
              thunk_FUN_01c20e04(values->m_Items + 2,pSVar3);
              pSVar3 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = pSVar3;
                thunk_FUN_01c20e04(values->m_Items + 3,pSVar3);
                pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar1,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5914,
                           (MethodInfo *)0x0);
                pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar2,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5915,
                           (MethodInfo *)0x0);
                pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = pSVar3;
                  thunk_FUN_01c20e04();
                  pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
                  return pSVar3;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03523618:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

