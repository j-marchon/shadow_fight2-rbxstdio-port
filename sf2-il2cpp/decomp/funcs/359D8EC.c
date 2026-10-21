// Nekki.Utils.RaidBetaLogger$$FMHCAONPDDN @ RVA 0x359D8EC

void Nekki_Utils_RaidBetaLogger__FMHCAONPDDN
               (Nekki_Utils_RaidBetaLogger_o *__this,System_String_o *NIPCCKMNCGF,
               System_String_o *GNLGLGHFLDD,bool *CILFGIEDHIM,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  System_Collections_Generic_List_GDCFAOAEIMA__o *__this_01;
  UnityEngine_Coroutine_o **ppUVar7;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 0369d8f4 to 0379d98b has its CatchHandler @ 0369d8f4
                       catch() { ... } // from try @ 0369d8f4 with catch @ 0369d8f4
                       catch() { ... } // from try @ 0369d9ac with catch @ 0369d8f4
                       catch() { ... } // from try @ 0369d9ec with catch @ 0369d8f4
                       catch() { ... } // from try @ 0369da14 with catch @ 0369d8f4
                       catch() { ... } // from try @ 0369da60 with catch @ 0369d8f4 */
  pMVar6 = (MethodInfo *)NIPCCKMNCGF;
  if ((DAT_04568ddc & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1276);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1277);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1278);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1279);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GDCFAOAEIMA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GDCFAOAEIMA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GDCFAOAEIMA>_get_Current__);
                    /* try { // try from 0369d98c to 0379d993 has its CatchHandler @ 0369d9f8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<GDCFAOAEIMA>_GetEnumerator__);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
                    /* try { // try from 0369d9a4 to 0379d9ab has its CatchHandler @ 0369d9f0 */
    DAT_04568ddc = 1;
    pMVar6 = extraout_x1;
  }
                    /* try { // try from 0369d9ac to 0379d9e7 has its CatchHandler @ 0369d8f4 */
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar6 = extraout_x1_00;
  }
  __this_00 = Nekki_Utils_RaidBetaLogger__GetExceptionName(NIPCCKMNCGF,pMVar6);
  __this_01 = (__this->fields).LMDCMDDCBKA;
  if (__this_01 != (System_Collections_Generic_List_GDCFAOAEIMA__o *)0x0) {
                    /* try { // try from 0369d9e8 to 0379d9eb has its CatchHandler @ 0369d9f4 */
                    /* try { // try from 0369d9ec to 0379da0f has its CatchHandler @ 0369d8f4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369d9a4 with catch @ 0369d9f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369d9e8 with catch @ 0369d9f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369d98c with catch @ 0369d9f8
                        */
                    /* try { // try from 0369da10 to 0379da13 has its CatchHandler @ 0369da48 */
                    /* try { // try from 0369da14 to 0379da57 has its CatchHandler @ 0369d8f4 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<GDCFAOAEIMA>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<GDCFAOAEIMA>_MoveNext__
                             ), bVar1) {
      if ((GDCFAOAEIMA_o *)local_80.fields._current == (GDCFAOAEIMA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* catch() { ... } // from try @ 0369da10 with catch @ 0369da48 */
      bVar1 = GDCFAOAEIMA__PFLEIMCKGPE
                        ((GDCFAOAEIMA_o *)local_80.fields._current,NIPCCKMNCGF,GNLGLGHFLDD,
                         (MethodInfo *)0x0);
      *CILFGIEDHIM = bVar1;
                    /* try { // try from 0369da58 to 0379da5f has its CatchHandler @ 0369da74 */
      if (bVar1) {
                    /* try { // try from 0369da60 to 0379da6b has its CatchHandler @ 0369d8f4 */
        (__this->fields).LHFCFFHCAEK = (__this->fields).LHFCFFHCAEK + 1;
                    /* try { // try from 0369da6c to 0379da73 has its CatchHandler @ 0369da74 */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<GDCFAOAEIMA>_Dispose__);
        return;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0369da58 with catch @ 0369da74
                       catch(type#2 @ 00000000) { ... } // from try @ 0369da6c with catch @ 0369da74
                        */
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<GDCFAOAEIMA>_Dispose__);
    *CILFGIEDHIM = false;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1276,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1277,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    if (__this_00 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(__this_00,pSVar4,5,(MethodInfo *)0x0);
      if (bVar1) {
        (__this->fields).ICAEKHCKLCN = (__this->fields).ICAEKHCKLCN + 1;
        pMVar6 = extraout_x1_01;
      }
      else {
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1278,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1279,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        bVar1 = System_String__Contains(__this_00,pSVar4,5,(MethodInfo *)0x0);
        pMVar6 = extraout_x1_02;
        if (bVar1) {
          (__this->fields).GNHCAHAGKAO = (__this->fields).GNHCAHAGKAO + 1;
        }
        else {
          (__this->fields).EPHJKJKOHCC = (__this->fields).EPHJKJKOHCC + 1;
        }
      }
      ppUVar7 = &(__this->fields).DGAAOFBMABD;
      if (*ppUVar7 != (UnityEngine_Coroutine_o *)0x0) {
        return;
      }
      if ((__this->fields)._NOEPHKDKPNJ_k__BackingField != false) {
        return;
      }
      if ((__this->fields)._GCJCDAIIAJF_k__BackingField != false) {
        return;
      }
      bVar1 = Nekki_Utils_RaidBetaLogger__EFIKJMNBLOI(__this,pMVar6);
      if (!bVar1) {
        return;
      }
      routine = Nekki_Utils_RaidBetaLogger__PNMENEDEGOP(__this,method_00);
      pUVar5 = UnityEngine_MonoBehaviour__StartCoroutine
                         ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      (__this->fields).DGAAOFBMABD = pUVar5;
      thunk_FUN_01c20e04(ppUVar7,pUVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

