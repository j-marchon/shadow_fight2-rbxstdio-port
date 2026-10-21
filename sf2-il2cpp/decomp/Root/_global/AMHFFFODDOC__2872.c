// TypeDefIndex 2872
// Namespace: 
// public static class AMHFFFODDOC
// Fields:
//   private static readonly Dictionary<string, Sprite[]> IABCHDDPNMF; // 0x0
//   private static readonly bool HEKGKIBPBPI; // 0x8

// ===== public static Sprite[] MMHFNAEHAKC(string PHLFGGGHGAK)  [RVA 0x3438C68]
// AMHFFFODDOC$$MMHFNAEHAKC @ RVA 0x3438C68

UnityEngine_Sprite_array * AMHFFFODDOC__MMHFNAEHAKC(System_String_o *PHLFGGGHGAK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  UnityEngine_Sprite_array *local_28;
  
  if ((DAT_045681db & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_TryGetValue__);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_LoadAll<Sprite>__);
    DAT_045681db = 1;
    method = extraout_x1;
  }
  local_28 = (UnityEngine_Sprite_array *)0x0;
  if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (AMHFFFODDOC_TypeInfo->static_fields->HEKGKIBPBPI == false) {
    local_28 = (UnityEngine_Sprite_array *)
               UnityEngine_ResourcesAndBundles__LoadAll<object>
                         (PHLFGGGHGAK,Method_UnityEngine_ResourcesAndBundles_LoadAll<Sprite>__);
  }
  else {
                    /* try { // try from 03538cec to 03638cf3 has its CatchHandler @ 03538f8c */
    if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo,method);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             AMHFFFODDOC_TypeInfo->static_fields->IABCHDDPNMF;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03538da0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03538d14 to 03638d73 has its CatchHandler @ 03538f90 */
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar2,(Il2CppObject *)PHLFGGGHGAK,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_TryGetValue__)
    ;
    if ((!bVar1) &&
       (local_28 = (UnityEngine_Sprite_array *)
                   UnityEngine_ResourcesAndBundles__LoadAll<object>
                             (PHLFGGGHGAK,Method_UnityEngine_ResourcesAndBundles_LoadAll<Sprite>__),
       local_28 != (UnityEngine_Sprite_array *)0x0)) {
      if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               AMHFFFODDOC_TypeInfo->static_fields->IABCHDDPNMF;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03538da0;
      System_Collections_Generic_Dictionary<object,_object>__Add
                (pSVar2,(Il2CppObject *)PHLFGGGHGAK,&local_28->obj,
                 Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Add__);
    }
  }
  return local_28;
}


// ===== public static void LLMNJNIKDGK(Func<string, bool> IMNBAFCEDMA)  [RVA 0x34370B8]
// AMHFFFODDOC$$LLMNJNIKDGK @ RVA 0x34370B8

void AMHFFFODDOC__LLMNJNIKDGK(System_Func_string__bool__o *IMNBAFCEDMA,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  ulong uVar6;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar7;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_d0;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
                    /* try { // try from 035370f0 to 036370f7 has its CatchHandler @ 0353719c */
                    /* try { // try from 035370f8 to 036370fb has its CatchHandler @ 0353718c */
  if ((DAT_045681dc & 1) == 0) {
                    /* try { // try from 035370fc to 036370ff has its CatchHandler @ 03537188 */
                    /* try { // try from 03537100 to 03637103 has its CatchHandler @ 03537184 */
                    /* try { // try from 03537104 to 03637107 has its CatchHandler @ 03537180 */
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
                    /* try { // try from 03537108 to 0363710b has its CatchHandler @ 03537164 */
                    /* try { // try from 0353710c to 03637113 has its CatchHandler @ 035371a8 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_GetEnumerator__);
                    /* try { // try from 03537114 to 03637117 has its CatchHandler @ 03537160 */
                    /* try { // try from 03537118 to 0363711b has its CatchHandler @ 035367a8 */
                    /* try { // try from 0353711c to 0363711f has its CatchHandler @ 03537138 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Remove__);
                    /* try { // try from 03537120 to 03637123 has its CatchHandler @ 03537134 */
                    /* try { // try from 03537124 to 036371cf has its CatchHandler @ 035367a8 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Sprite[]>_Dispose__
                );
                    /* catch() { ... } // from try @ 03537120 with catch @ 03537134 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
                    /* catch() { ... } // from try @ 0353711c with catch @ 03537138 */
                    /* catch() { ... } // from try @ 03536f6c with catch @ 0353713c */
                    /* catch() { ... } // from try @ 03536f64 with catch @ 03537140 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Sprite[]>_MoveNext__
                );
                    /* catch() { ... } // from try @ 03536f54 with catch @ 03537144 */
                    /* catch() { ... } // from try @ 03536f3c with catch @ 03537148 */
                    /* catch() { ... } // from try @ 03536fd4 with catch @ 0353714c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
                    /* catch() { ... } // from try @ 03536f08 with catch @ 03537150 */
                    /* catch() { ... } // from try @ 03536f14 with catch @ 03537154 */
                    /* catch() { ... } // from try @ 03536ef0 with catch @ 03537158 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
                    /* catch() { ... } // from try @ 03536ec0 with catch @ 0353715c */
                    /* catch() { ... } // from try @ 03537114 with catch @ 03537160 */
                    /* catch() { ... } // from try @ 03537108 with catch @ 03537164 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Sprite[]>_get_Current__
                );
                    /* catch() { ... } // from try @ 03536f00 with catch @ 03537168 */
                    /* catch() { ... } // from try @ 03536f2c with catch @ 0353716c */
                    /* catch() { ... } // from try @ 03536eb4 with catch @ 03537170 */
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_Sprite[]>_get_Key__);
                    /* catch() { ... } // from try @ 03536e54 with catch @ 03537174 */
                    /* catch() { ... } // from try @ 03536e60 with catch @ 03537178 */
                    /* catch() { ... } // from try @ 03536e9c with catch @ 0353717c */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
                    /* catch() { ... } // from try @ 03537104 with catch @ 03537180 */
                    /* catch() { ... } // from try @ 03537100 with catch @ 03537184 */
                    /* catch() { ... } // from try @ 035370fc with catch @ 03537188 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
                    /* catch() { ... } // from try @ 035370f8 with catch @ 0353718c */
                    /* catch() { ... } // from try @ 03536e4c with catch @ 03537190 */
                    /* catch() { ... } // from try @ 03536e3c with catch @ 03537194 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* catch() { ... } // from try @ 03536eac with catch @ 03537198 */
                    /* catch() { ... } // from try @ 035370f0 with catch @ 0353719c */
                    /* catch() { ... } // from try @ 03536db0 with catch @ 035371a0 */
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
                    /* catch() { ... } // from try @ 03536d54 with catch @ 035371a4 */
                    /* catch() { ... } // from try @ 0353710c with catch @ 035371a8 */
    DAT_045681dc = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03536e1c with catch @ 035371ac */
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a8.fields._index = 0;
  local_a8.fields._version = 0;
  local_a8.fields._current = (Il2CppObject *)0x0;
  __this = (System_Collections_Generic_List_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
                    /* try { // try from 035371d0 to 036371d3 has its CatchHandler @ 035371e4 */
  System_Collections_Generic_List<object>___ctor
            (__this,8,Method_System_Collections_Generic_List<string>__ctor__);
  if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 035371d0 with catch @ 035371e4 */
    thunk_FUN_01ba7564();
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           AMHFFFODDOC_TypeInfo->static_fields->IABCHDDPNMF;
                    /* try { // try from 035371f4 to 03637263 has its CatchHandler @ 03537278 */
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_d0,pSVar5,
               Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_GetEnumerator__);
    local_90.fields._version = local_d0.fields._version;
    local_90.fields._index = local_d0.fields._index;
    local_90.fields._dictionary = local_d0.fields._dictionary;
    local_90.fields._current.fields.value = local_d0.fields._current.fields.value;
    local_90.fields._current.fields.key = local_d0.fields._current.fields.key;
    local_90.fields._getEnumeratorRetType = local_d0.fields._getEnumeratorRetType;
    local_90.fields._36_4_ = local_d0.fields._36_4_;
    while( true ) {
      bVar4 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_Sprite[]>_MoveNext__
                        );
      pIVar3 = local_90.fields._current.fields.key;
      if (!bVar4) break;
                    /* try { // try from 03537264 to 0363726f has its CatchHandler @ 035367a8 */
      if (IMNBAFCEDMA == (System_Func_string__bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03537270 to 03637277 has its CatchHandler @ 03537278 */
                    /* catch() { ... } // from try @ 035371f4 with catch @ 03537278
                       catch() { ... } // from try @ 03537270 with catch @ 03537278 */
      uVar6 = (*(code *)(IMNBAFCEDMA->fields).super.super.invoke_impl)
                        ((IMNBAFCEDMA->fields).super.super.method_code,
                         local_90.fields._current.fields.key,
                         (IMNBAFCEDMA->fields).super.super.method);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if ((uVar6 & 1) != 0) {
        if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this->fields)._size;
        if (uVar1 < (uint)pSVar7->max_length) {
          (__this->fields)._size = uVar1 + 1;
          pSVar7->m_Items[(int)uVar1] = pIVar3;
          thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar1,pIVar3);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,pIVar3,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_Sprite[]>_Dispose__);
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_a8,__this,Method_System_Collections_Generic_List<string>_GetEnumerator__);
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_a8,
                           Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
        pIVar3 = local_a8.fields._current;
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_a8,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
          return;
        }
        if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                 AMHFFFODDOC_TypeInfo->static_fields->IABCHDDPNMF;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary<object,_object>__Remove
                  (pSVar5,pIVar3,
                   Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Remove__);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x343BDC0]
// AMHFFFODDOC$$.cctor @ RVA 0x343BDC0

void AMHFFFODDOC___cctor(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if ((DAT_045681dd & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_Sprite[]>_TypeInfo);
    DAT_045681dd = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_Sprite[]>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<string,_Sprite[]>__ctor__);
  AMHFFFODDOC_TypeInfo->static_fields->IABCHDDPNMF =
       (System_Collections_Generic_Dictionary_string__Sprite____o *)__this;
  thunk_FUN_01c20e04(AMHFFFODDOC_TypeInfo->static_fields,__this);
  bVar1 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  AMHFFFODDOC_TypeInfo->static_fields->HEKGKIBPBPI = (bool_conflict)(~bVar1 & 1);
  return;
}


// ===== public static Sprite EOLACNMEFKC(string PHLFGGGHGAK, string DMCFDIBHCPD)  [RVA 0x343BE78]
// AMHFFFODDOC$$EOLACNMEFKC @ RVA 0x343BE78

UnityEngine_Sprite_o *
AMHFFFODDOC__EOLACNMEFKC
          (System_String_o *PHLFGGGHGAK,System_String_o *DMCFDIBHCPD,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  UnityEngine_Sprite_array *pUVar4;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar5;
  System_Object_array *args;
  long lVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  ulong uVar8;
  UnityEngine_Object_o *x;
  ulong uVar9;
  
  method_00 = (MethodInfo *)DMCFDIBHCPD;
  if ((DAT_045681de & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_6);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1532);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045681de = 1;
    method_00 = extraout_x1;
  }
  if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pUVar4 = AMHFFFODDOC__MMHFNAEHAKC(PHLFGGGHGAK,method_00);
                    /* try { // try from 0353bf1c to 0363bf43 has its CatchHandler @ 0353c094 */
  if ((pUVar4 != (UnityEngine_Sprite_array *)0x0) && (0 < (int)pUVar4->max_length)) {
    uVar9 = 0;
    bVar2 = false;
    uVar8 = pUVar4->max_length & 0xffffffff;
    do {
      if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      x = (UnityEngine_Object_o *)pUVar4->m_Items[uVar9];
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
                    /* try { // try from 0353bf78 to 0363bfa3 has its CatchHandler @ 0353c090 */
        bVar2 = true;
      }
      else {
        if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
        bVar3 = System_String__op_Equality(pSVar5,DMCFDIBHCPD,(MethodInfo *)0x0);
        if (bVar3) {
          return (UnityEngine_Sprite_o *)x;
        }
      }
      uVar1 = (uint)pUVar4->max_length;
      uVar8 = (ulong)uVar1;
      uVar9 = uVar9 + 1;
                    /* try { // try from 0353bfac to 0363bfb3 has its CatchHandler @ 0353c08c */
    } while ((long)uVar9 < (long)(int)uVar1);
    if (bVar2) {
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1532,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_6,(MethodInfo *)0x0)
      ;
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((DMCFDIBHCPD != (System_String_o *)0x0) &&
         (lVar6 = thunk_FUN_01bda71c(DMCFDIBHCPD,(((args->obj).klass)->_1).element_class),
         lVar6 == 0)) {
        uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0353c104 to 0363c12b has its CatchHandler @ 0353c140 */
        FUN_01bab798(uVar7,0);
      }
                    /* try { // try from 0353c070 to 0363c073 has its CatchHandler @ 0353c088 */
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* try { // try from 0353c074 to 0363c077 has its CatchHandler @ 0353bd1c */
                    /* try { // try from 0353c078 to 0363c07b has its CatchHandler @ 0353c084 */
      args->m_Items[0] = (Il2CppObject *)DMCFDIBHCPD;
                    /* try { // try from 0353c07c to 0363c0ab has its CatchHandler @ 0353bd1c */
      thunk_FUN_01c20e04(args->m_Items,DMCFDIBHCPD);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353c078 with catch @ 0353c084
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353c070 with catch @ 0353c088
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353bfac with catch @ 0353c08c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353bf78 with catch @ 0353c090
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353bf1c with catch @ 0353c094
                        */
      if ((PHLFGGGHGAK != (System_String_o *)0x0) &&
         (lVar6 = thunk_FUN_01bda71c(PHLFGGGHGAK,(((args->obj).klass)->_1).element_class),
         lVar6 == 0)) {
        uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar7,0);
      }
      if (1 < (uint)args->max_length) {
                    /* try { // try from 0353c0ac to 0363c0af has its CatchHandler @ 0353c0c4 */
        args->m_Items[1] = (Il2CppObject *)PHLFGGGHGAK;
        thunk_FUN_01c20e04(args->m_Items + 1,PHLFGGGHGAK);
                    /* catch() { ... } // from try @ 0353c0ac with catch @ 0353c0c4 */
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(pSVar5,args,(MethodInfo *)0x0);
        return (UnityEngine_Sprite_o *)0x0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* try { // try from 0353bfb4 to 0363c06f has its CatchHandler @ 0353bd1c */
  return (UnityEngine_Sprite_o *)0x0;
}


// ===== public static void NDNPGAKJLHM()  [RVA 0x343C330]
// AMHFFFODDOC$$NDNPGAKJLHM @ RVA 0x343C330

void AMHFFFODDOC__NDNPGAKJLHM(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if ((DAT_045681df & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Clear__);
    DAT_045681df = 1;
  }
  if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           AMHFFFODDOC_TypeInfo->static_fields->IABCHDDPNMF;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this,Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int GMAJCILJMAN(Func<string, bool> IMNBAFCEDMA)  [RVA 0x343C3A8]
// AMHFFFODDOC$$GMAJCILJMAN @ RVA 0x343C3A8

int32_t AMHFFFODDOC__GMAJCILJMAN(System_Func_string__bool__o *IMNBAFCEDMA,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *extraout_x1;
  int iVar3;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_045681e0 & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Sprite[]>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Sprite[]>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Sprite[]>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_Sprite[]>_get_Key__);
    DAT_045681e0 = 1;
    method = extraout_x1;
  }
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AMHFFFODDOC_TypeInfo,method);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           AMHFFFODDOC_TypeInfo->static_fields->IABCHDDPNMF;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_60,__this,
               Method_System_Collections_Generic_Dictionary<string,_Sprite[]>_GetEnumerator__);
    iVar3 = 0;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_Sprite[]>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_Sprite[]>_Dispose__
                  );
        return iVar3;
      }
      if (IMNBAFCEDMA == (System_Func_string__bool__o *)0x0) break;
      uVar2 = (*(code *)(IMNBAFCEDMA->fields).super.super.invoke_impl)
                        ((IMNBAFCEDMA->fields).super.super.method_code,
                         local_60.fields._current.fields.key,
                         (IMNBAFCEDMA->fields).super.super.method);
      iVar3 = iVar3 + (uVar2 & 1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

