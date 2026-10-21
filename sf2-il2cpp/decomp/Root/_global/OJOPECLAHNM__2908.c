// TypeDefIndex 2908
// Namespace: 
// public class OJOPECLAHNM : GJFEBGNFFBA
// Fields:

// ===== public void .ctor()  [RVA 0x3448F2C]
// OJOPECLAHNM$$.ctor @ RVA 0x3448F2C

void OJOPECLAHNM___ctor(OJOPECLAHNM_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 03548f08 with catch @ 03548f2c */
                    /* try { // try from 03548f34 to 03648f3b has its CatchHandler @ 03548f50 */
                    /* try { // try from 03548f3c to 03648f47 has its CatchHandler @ 03548b8c */
                    /* try { // try from 03548f48 to 03648f4f has its CatchHandler @ 03548f50 */
  if ((DAT_04568254 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03548f34 with catch @ 03548f50
                       catch(type#2 @ 00000000) { ... } // from try @ 03548f48 with catch @ 03548f50
                        */
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_04568254 = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string FGBGAKLKONL()  [RVA 0x3448F84]
// OJOPECLAHNM$$FGBGAKLKONL @ RVA 0x3448F84

System_String_o * OJOPECLAHNM__FGBGAKLKONL(OJOPECLAHNM_o *__this,MethodInfo *method)

{
  bool DKCOAMDMOKM;
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str1;
  System_String_array *values;
  MethodInfo *extraout_x1;
  System_String_o *pSVar5;
  FOKJBDHLIMG_o *pFVar6;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  int32_t local_6c;
  undefined8 local_68;
  
  if ((DAT_04568255 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_504/*" null and "*/);
    FUN_01bab630(&StringLiteral_436/*" image null"*/);
    FUN_01bab630(&StringLiteral_3249/*"AutoTestPerksImagesExists Tests processed "*/);
    FUN_01bab630(&StringLiteral_22362/*"{0}/src/GUI/Resources/{1}"*/);
    FUN_01bab630(&StringLiteral_261/*" <color=red>"*/);
    FUN_01bab630(&StringLiteral_491/*" not exists</color>"*/);
    FUN_01bab630(&StringLiteral_509/*" perks"*/);
    FUN_01bab630(&StringLiteral_3248/*"AutoTestPerksImagesExists Tests"*/);
    FUN_01bab630(&StringLiteral_19880/*"no image "*/);
    FUN_01bab630(&StringLiteral_21559/*"total founded perks : "*/);
    FUN_01bab630(&StringLiteral_20194/*"perk "*/);
    FUN_01bab630(&StringLiteral_20167/*"path "*/);
    DAT_04568255 = 1;
    method = extraout_x1;
  }
  local_68 = 0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar6 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
  if ((pFVar6 != (FOKJBDHLIMG_o *)0x0) &&
     (__this_01 = (pFVar6->fields).FLADBMFBNIH,
     __this_01 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
    local_6c = (__this_01->fields)._size;
    pSVar3 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(StringLiteral_21559/*"total founded perks : "*/,pSVar3,(MethodInfo *)0x0);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendLine(__this_00,pSVar3,(MethodInfo *)0x0);
      local_68 = 0;
      if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = UnityEngine_Application__get_dataPath((MethodInfo *)0x0);
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
      }
                    /* try { // try from 035491bc to 036492b7 has its CatchHandler @ 035491bc
                       catch() { ... } // from try @ 035491bc with catch @ 035491bc
                       catch() { ... } // from try @ 03549320 with catch @ 035491bc
                       catch() { ... } // from try @ 035493a4 with catch @ 035491bc
                       catch() { ... } // from try @ 035493d0 with catch @ 035491bc
                       catch() { ... } // from try @ 03549474 with catch @ 035491bc */
      pSVar4 = MGENAMAJALB__CDEFMBKAPPC((MethodInfo *)0x0);
      pSVar3 = System_String__Format
                         (StringLiteral_22362/*"{0}/src/GUI/Resources/{1}"*/,(Il2CppObject *)pSVar3,(Il2CppObject *)pSVar4,
                          (MethodInfo *)0x0);
      pSVar4 = System_String__Concat(StringLiteral_20167/*"path "*/,pSVar3,(MethodInfo *)0x0);
      System_Text_StringBuilder__AppendLine(__this_00,pSVar4,(MethodInfo *)0x0);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_a8,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
      DKCOAMDMOKM = false;
      local_90.fields._index = local_a8.fields._index;
      local_90.fields._version = local_a8.fields._version;
      local_90.fields._list = local_a8.fields._list;
      local_90.fields._current = local_a8.fields._current;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_90,
                           Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                          );
        pIVar1 = local_90.fields._current;
        if (!bVar2) break;
        if (local_90.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(local_90.fields._current[3].monitor,(MethodInfo *)0x0);
        if (bVar2) {
          local_68 = CONCAT44(local_68._4_4_ + 1,(int)local_68);
          pSVar4 = System_String__Concat
                             (StringLiteral_20194/*"perk "*/,(System_String_o *)pIVar1[4].klass,
                              StringLiteral_436/*" image null"*/,(MethodInfo *)0x0);
          System_Text_StringBuilder__AppendLine(__this_00,pSVar4,(MethodInfo *)0x0);
        }
        else {
          pSVar4 = System_String__Concat(pSVar3,pIVar1[3].monitor,(MethodInfo *)0x0);
          bVar2 = NEHNBJKKABI__HALDCNGHJCO(pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 035492b8 to 036492bf has its CatchHandler @ 035493b4 */
          if (!bVar2) {
            local_68 = CONCAT44(local_68._4_4_,(int)local_68 + 1);
                    /* try { // try from 035492d0 to 036492db has its CatchHandler @ 035493ac */
            pSVar4 = System_String__Concat
                               (StringLiteral_20194/*"perk "*/,(System_String_o *)pIVar1[4].klass,
                                (MethodInfo *)0x0);
            System_Text_StringBuilder__AppendLine(__this_00,pSVar4,(MethodInfo *)0x0);
            pSVar4 = System_String__Concat(StringLiteral_19880/*"no image "*/,pIVar1[3].monitor,(MethodInfo *)0x0);
            DKCOAMDMOKM = true;
            System_Text_StringBuilder__AppendLine(__this_00,pSVar4,(MethodInfo *)0x0);
          }
        }
      }
                    /* try { // try from 03549314 to 0364931f has its CatchHandler @ 035493a8 */
                    /* try { // try from 03549320 to 0364939f has its CatchHandler @ 035491bc */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_90,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__)
      ;
      GJFEBGNFFBA__ILHNDPBPGAN
                ((GJFEBGNFFBA_o *)__this,DKCOAMDMOKM,StringLiteral_3248/*"AutoTestPerksImagesExists Tests"*/,__this_00,(MethodInfo *)0x0)
      ;
      local_6c = (__this_01->fields)._size;
      str1 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
      pSVar4 = StringLiteral_3249/*"AutoTestPerksImagesExists Tests processed "*/;
      pSVar3 = StringLiteral_509/*" perks"*/;
      pSVar5 = (System_String_o *)0x0;
      if (!DKCOAMDMOKM) {
LAB_03549470:
                    /* try { // try from 03549474 to 0364947f has its CatchHandler @ 035491bc */
                    /* try { // try from 03549480 to 03649487 has its CatchHandler @ 03549488 */
        pSVar3 = System_String__Concat(pSVar4,str1,pSVar3,pSVar5,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0354946c with catch @ 03549488
                       catch(type#2 @ 00000000) { ... } // from try @ 03549480 with catch @ 03549488
                        */
        return pSVar3;
      }
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
                    /* try { // try from 035493a0 to 036493a3 has its CatchHandler @ 035493b0 */
                    /* try { // try from 035493a4 to 036493cb has its CatchHandler @ 035491bc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03549314 with catch @ 035493a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035492d0 with catch @ 035493ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035493a0 with catch @ 035493b0
                        */
          values->m_Items[0] = StringLiteral_261/*" <color=red>"*/;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035492b8 with catch @ 035493b4
                        */
          thunk_FUN_01c20e04(values->m_Items);
          pSVar5 = System_Int32__ToString((int)&local_68 + 4,(MethodInfo *)0x0);
                    /* try { // try from 035493cc to 036493cf has its CatchHandler @ 0354945c */
                    /* try { // try from 035493d0 to 0364946b has its CatchHandler @ 035491bc */
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = pSVar5;
            thunk_FUN_01c20e04(values->m_Items + 1,pSVar5);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = StringLiteral_504/*" null and "*/;
              thunk_FUN_01c20e04(values->m_Items + 2);
              pSVar5 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = pSVar5;
                thunk_FUN_01c20e04(values->m_Items + 3,pSVar5);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = StringLiteral_491/*" not exists</color>"*/;
                    /* catch() { ... } // from try @ 035493cc with catch @ 0354945c */
                  thunk_FUN_01c20e04();
                  pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
                    /* try { // try from 0354946c to 03649473 has its CatchHandler @ 03549488 */
                  goto LAB_03549470;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

