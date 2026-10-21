// TypeDefIndex 947
// Namespace: 
// public class PEDOBKKKDME : GJFEBGNFFBA
// Fields:

// ===== public void .ctor()  [RVA 0x30AA104]
// PEDOBKKKDME$$.ctor @ RVA 0x30AA104

void PEDOBKKKDME___ctor(PEDOBKKKDME_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_0456619b & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_0456619b = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string FGBGAKLKONL()  [RVA 0x30AA15C]
// PEDOBKKKDME$$FGBGAKLKONL @ RVA 0x30AA15C

/* WARNING: Removing unreachable block (ram,0x031aac64) */
/* WARNING: Removing unreachable block (ram,0x031ab134) */

System_String_o * PEDOBKKKDME__FGBGAKLKONL(PEDOBKKKDME_o *__this,MethodInfo *method)

{
  byte bVar1;
  undefined4 uVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  MethodInfo *extraout_x1;
  FOKJBDHLIMG_o *pFVar7;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_01;
  Il2CppClass *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_108;
  undefined4 local_e8;
  System_Collections_Generic_List_Enumerator_T__o local_e0;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  int32_t local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_0456619c & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<NJPBBPOABKP>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&INFNBCBIGJH_TypeInfo);
    FUN_01bab630(&JKCGMMHNCFI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_3252/*"AutoTestPerksTriggers Actions Tests"*/);
    FUN_01bab630(&StringLiteral_3253/*"AutoTestPerksTriggers Actions Tests processed "*/);
    FUN_01bab630(&StringLiteral_543/*" triggers with "*/);
    FUN_01bab630(&StringLiteral_261/*" <color=red>"*/);
    FUN_01bab630(&StringLiteral_552/*" variables"*/);
    FUN_01bab630(&StringLiteral_553/*" vars"*/);
    FUN_01bab630(&StringLiteral_388/*" damages, "*/);
    FUN_01bab630(&StringLiteral_393/*" dmgs"*/);
    FUN_01bab630(&StringLiteral_21559/*"total founded perks : "*/);
    FUN_01bab630(&StringLiteral_424/*" frames, "*/);
    FUN_01bab630(&StringLiteral_426/*" frms"*/);
    FUN_01bab630(&StringLiteral_410/*" errors</color>"*/);
    DAT_0456619c = 1;
    method = extraout_x1;
  }
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  local_7c = 0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  local_c0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c0.fields._index = 0;
  local_c0.fields._version = 0;
  local_c0.fields._current = (Il2CppObject *)0x0;
  local_e0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_e0.fields._index = 0;
  local_e0.fields._version = 0;
  local_e0.fields._current = (Il2CppObject *)0x0;
  local_e8 = 0;
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar7 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
  if ((pFVar7 != (FOKJBDHLIMG_o *)0x0) &&
     (__this_01 = (pFVar7->fields).FLADBMFBNIH,
     __this_01 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
    local_80 = (__this_01->fields)._size;
    pSVar5 = System_Int32__ToString((int32_t)&local_80,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat(StringLiteral_21559/*"total founded perks : "*/,pSVar5,(MethodInfo *)0x0);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendLine(__this_00,pSVar5,(MethodInfo *)0x0);
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      local_7c = 0;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_108,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
      local_a0.fields._index = local_108.fields._index;
      local_a0.fields._version = local_108.fields._version;
      local_a0.fields._list = local_108.fields._list;
      local_a0.fields._current = local_108.fields._current;
      while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_a0,
                                Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                               ), bVar4) {
        if (local_a0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_02 = local_a0.fields._current[0x10].klass;
        bVar4 = DJNBJHPDKDP__OBECCOPBADO<object>
                          ((System_Collections_Generic_List_T__o *)__this_02,
                           Method_DJNBJHPDKDP_OBECCOPBADO<NJPBBPOABKP>__);
        if (!bVar4) {
          if (__this_02 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_108,(System_Collections_Generic_List_object__o *)__this_02,
                     Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
          local_c0.fields._index = local_108.fields._index;
          local_c0.fields._version = local_108.fields._version;
          local_c0.fields._list = local_108.fields._list;
          local_c0.fields._current = local_108.fields._current;
          while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_c0,
                                    Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__
                                   ), bVar4) {
            local_68 = CONCAT44(local_68._4_4_ + 1,(int)local_68);
            if (local_c0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (local_c0.fields._current[3].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_108,
                       (System_Collections_Generic_List_object__o *)
                       local_c0.fields._current[3].klass,
                       Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
            uVar2 = local_e8;
            local_e0.fields._index = local_108.fields._index;
            local_e0.fields._version = local_108.fields._version;
            local_e0.fields._list = local_108.fields._list;
            local_e0.fields._current = local_108.fields._current;
            while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_e0,
                                      Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__
                                     ), pIVar3 = local_e0.fields._current, bVar4) {
              if (local_e0.fields._current == (Il2CppObject *)0x0) {
                local_e8 = uVar2;
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (local_e0.fields._current[5].monitor != (NILLKLHKLHG_o *)0x0) {
                local_68 = CONCAT44(local_68._4_4_,(int)local_68 + 1);
                NILLKLHKLHG__CHKGAHCDFJF
                          (local_e0.fields._current[5].monitor,false,(MethodInfo *)0x0);
              }
              bVar1 = (INFNBCBIGJH_TypeInfo->_2).naturalAligment;
              if ((bVar1 <= (pIVar3->klass->_2).naturalAligment) &&
                 ((pIVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                  (Il2CppClass *)INFNBCBIGJH_TypeInfo)) {
                local_70 = CONCAT44(local_70._4_4_,(int)local_70 + 1);
                if (pIVar3[7].klass != (Il2CppClass *)0x0) {
                  NILLKLHKLHG__CHKGAHCDFJF((NILLKLHKLHG_o *)pIVar3[7].klass,true,(MethodInfo *)0x0);
                }
              }
              bVar1 = (JKCGMMHNCFI_TypeInfo->_2).naturalAligment;
              if ((bVar1 <= (pIVar3->klass->_2).naturalAligment) &&
                 ((pIVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                  (Il2CppClass *)JKCGMMHNCFI_TypeInfo)) {
                local_78 = CONCAT44(local_78._4_4_,(int)local_78 + 1);
                if (pIVar3[6].klass != (Il2CppClass *)0x0) {
                  NILLKLHKLHG__CHKGAHCDFJF((NILLKLHKLHG_o *)pIVar3[6].klass,false,(MethodInfo *)0x0)
                  ;
                }
              }
            }
                    /* try { // try from 031aac44 to 032aac4b has its CatchHandler @ 031aad64 */
                    /* try { // try from 031aac50 to 032aac87 has its CatchHandler @ 031aad6c */
            local_e8 = uVar2;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_e0,
                       Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__);
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_c0,
                     Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__)
      ;
      pSVar6 = (System_String_array *)FUN_01bab718(string___TypeInfo,8);
      pSVar5 = System_Int32__ToString((int)&local_68 + 4,(MethodInfo *)0x0);
      if (pSVar6 != (System_String_array *)0x0) {
        if ((int)pSVar6->max_length != 0) {
          pSVar6->m_Items[0] = pSVar5;
          thunk_FUN_01c20e04(pSVar6->m_Items,pSVar5);
          if (1 < (uint)pSVar6->max_length) {
            pSVar6->m_Items[1] = StringLiteral_543/*" triggers with "*/;
            thunk_FUN_01c20e04(pSVar6->m_Items + 1);
            pSVar5 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
            if (2 < (uint)pSVar6->max_length) {
              pSVar6->m_Items[2] = pSVar5;
              thunk_FUN_01c20e04(pSVar6->m_Items + 2,pSVar5);
              if (3 < (uint)pSVar6->max_length) {
                pSVar6->m_Items[3] = StringLiteral_424/*" frames, "*/;
                thunk_FUN_01c20e04(pSVar6->m_Items + 3);
                pSVar5 = System_Int32__ToString((int32_t)&local_70,(MethodInfo *)0x0);
                if (4 < (uint)pSVar6->max_length) {
                  pSVar6->m_Items[4] = pSVar5;
                  thunk_FUN_01c20e04(pSVar6->m_Items + 4,pSVar5);
                  if (5 < (uint)pSVar6->max_length) {
                    pSVar6->m_Items[5] = StringLiteral_388/*" damages, "*/;
                    thunk_FUN_01c20e04(pSVar6->m_Items + 5);
                    pSVar5 = System_Int32__ToString((int32_t)&local_78,(MethodInfo *)0x0);
                    if (6 < (uint)pSVar6->max_length) {
                      pSVar6->m_Items[6] = pSVar5;
                      thunk_FUN_01c20e04(pSVar6->m_Items + 6,pSVar5);
                      if (7 < (uint)pSVar6->max_length) {
                        pSVar6->m_Items[7] = StringLiteral_552/*" variables"*/;
                        thunk_FUN_01c20e04();
                        pSVar5 = System_String__Concat(pSVar6,(MethodInfo *)0x0);
                        System_Text_StringBuilder__AppendLine(__this_00,pSVar5,(MethodInfo *)0x0);
                        GJFEBGNFFBA__ILHNDPBPGAN
                                  ((GJFEBGNFFBA_o *)__this,false,StringLiteral_3252/*"AutoTestPerksTriggers Actions Tests"*/,__this_00,
                                   (MethodInfo *)0x0);
                        pSVar6 = (System_String_array *)FUN_01bab718(string___TypeInfo,10);
                        if (pSVar6 == (System_String_array *)0x0) goto LAB_031ab618;
                        if ((int)pSVar6->max_length != 0) {
                          pSVar6->m_Items[0] = StringLiteral_3253/*"AutoTestPerksTriggers Actions Tests processed "*/;
                          thunk_FUN_01c20e04(pSVar6->m_Items);
                          pSVar5 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
                          if (1 < (uint)pSVar6->max_length) {
                            pSVar6->m_Items[1] = pSVar5;
                            thunk_FUN_01c20e04(pSVar6->m_Items + 1,pSVar5);
                            if (2 < (uint)pSVar6->max_length) {
                              pSVar6->m_Items[2] = StringLiteral_426/*" frms"*/;
                              thunk_FUN_01c20e04();
                              if (local_70._4_4_ < 1) {
                                pSVar5 = (System_String_o *)0x0;
                              }
                              else {
                                pSVar5 = System_Int32__ToString
                                                   ((int)&local_70 + 4,(MethodInfo *)0x0);
                                pSVar5 = System_String__Concat
                                                   (StringLiteral_261/*" <color=red>"*/,pSVar5,StringLiteral_410/*" errors</color>"*/,
                                                    (MethodInfo *)0x0);
                              }
                              if (3 < (uint)pSVar6->max_length) {
                                pSVar6->m_Items[3] = pSVar5;
                                thunk_FUN_01c20e04(pSVar6->m_Items + 3);
                                pSVar5 = System_Int32__ToString
                                                   ((int32_t)&local_70,(MethodInfo *)0x0);
                                if (4 < (uint)pSVar6->max_length) {
                                  pSVar6->m_Items[4] = pSVar5;
                                  thunk_FUN_01c20e04(pSVar6->m_Items + 4,pSVar5);
                                  if (5 < (uint)pSVar6->max_length) {
                                    pSVar6->m_Items[5] = StringLiteral_393/*" dmgs"*/;
                                    thunk_FUN_01c20e04();
                                    if (local_78._4_4_ < 1) {
                                      pSVar5 = (System_String_o *)0x0;
                                    }
                                    else {
                                      pSVar5 = System_Int32__ToString
                                                         ((int)&local_78 + 4,(MethodInfo *)0x0);
                                      pSVar5 = System_String__Concat
                                                         (StringLiteral_261/*" <color=red>"*/,pSVar5,StringLiteral_410/*" errors</color>"*/
                                                          ,(MethodInfo *)0x0);
                                    }
                                    if (6 < (uint)pSVar6->max_length) {
                                      pSVar6->m_Items[6] = pSVar5;
                                      thunk_FUN_01c20e04(pSVar6->m_Items + 6);
                                      pSVar5 = System_Int32__ToString
                                                         ((int32_t)&local_78,(MethodInfo *)0x0);
                                      if (7 < (uint)pSVar6->max_length) {
                                        pSVar6->m_Items[7] = pSVar5;
                                        thunk_FUN_01c20e04(pSVar6->m_Items + 7,pSVar5);
                                        if (8 < (uint)pSVar6->max_length) {
                                          pSVar6->m_Items[8] = StringLiteral_553/*" vars"*/;
                                          thunk_FUN_01c20e04();
                                          if (local_7c < 1) {
                                            pSVar5 = (System_String_o *)0x0;
                                          }
                                          else {
                                            pSVar5 = System_Int32__ToString
                                                               ((int32_t)&local_7c,(MethodInfo *)0x0
                                                               );
                                            pSVar5 = System_String__Concat
                                                               (StringLiteral_261/*" <color=red>"*/,pSVar5,
                                                                StringLiteral_410/*" errors</color>"*/,(MethodInfo *)0x0)
                                            ;
                                          }
                                          if (9 < (uint)pSVar6->max_length) {
                                            pSVar6->m_Items[9] = pSVar5;
                                            thunk_FUN_01c20e04();
                                            pSVar5 = System_String__Concat(pSVar6,(MethodInfo *)0x0)
                                            ;
                                            return pSVar5;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
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
    }
  }
LAB_031ab618:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

