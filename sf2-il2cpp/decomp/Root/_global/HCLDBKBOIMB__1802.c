// TypeDefIndex 1802
// Namespace: 
// public class HCLDBKBOIMB : GJFEBGNFFBA
// Fields:

// ===== public void .ctor()  [RVA 0x3213420]
// HCLDBKBOIMB$$.ctor @ RVA 0x3213420

void HCLDBKBOIMB___ctor(HCLDBKBOIMB_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ea7 & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_04566ea7 = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string FGBGAKLKONL()  [RVA 0x3213478]
// HCLDBKBOIMB$$FGBGAKLKONL @ RVA 0x3213478

/* WARNING: Removing unreachable block (ram,0x03313a84) */
/* WARNING: Removing unreachable block (ram,0x03313c3c) */

System_String_o * HCLDBKBOIMB__FGBGAKLKONL(HCLDBKBOIMB_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_String_o *str0;
  undefined4 uVar2;
  bool bVar3;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar4;
  System_Collections_Generic_List_object__o *__this_01;
  NILLKLHKLHG_o *__this_02;
  System_String_array *values;
  System_String_o *str1;
  System_String_o *pSVar5;
  MethodInfo *extraout_x1;
  FOKJBDHLIMG_o *pFVar6;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_03;
  MANCHAFDGGG_c *__this_04;
  System_Collections_Generic_List_Enumerator_T__o local_f8;
  undefined4 local_d8;
  System_Collections_Generic_List_Enumerator_T__o local_d0;
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  int32_t local_74;
  undefined8 local_70;
  int local_68;
  int local_64;
  
  if ((DAT_04566ea8 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<NJPBBPOABKP>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ILGLOCBJFEG>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&MANCHAFDGGG_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_543/*" triggers with "*/);
    FUN_01bab630(&StringLiteral_413/*" extensions"*/);
    FUN_01bab630(&StringLiteral_261/*" <color=red>"*/);
    FUN_01bab630(&StringLiteral_3254/*"AutoTestPerksTriggers Conditions Tests"*/);
    FUN_01bab630(&StringLiteral_379/*" conditions  and "*/);
    FUN_01bab630(&StringLiteral_21559/*"total founded perks : "*/);
    FUN_01bab630(&StringLiteral_3255/*"AutoTestPerksTriggers Conditions Tests processed "*/);
    FUN_01bab630(&StringLiteral_410/*" errors</color>"*/);
    DAT_04566ea8 = 1;
    method = extraout_x1;
  }
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  local_b0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b0.fields._index = 0;
  local_b0.fields._version = 0;
  local_b0.fields._current = (Il2CppObject *)0x0;
  local_d0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d0.fields._index = 0;
  local_d0.fields._version = 0;
  local_d0.fields._current = (Il2CppObject *)0x0;
  local_d8 = 0;
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar6 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
  if ((pFVar6 != (FOKJBDHLIMG_o *)0x0) &&
     (__this_03 = (pFVar6->fields).FLADBMFBNIH,
     __this_03 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
    local_74 = (__this_03->fields)._size;
    pSVar4 = System_Int32__ToString((int32_t)&local_74,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat(StringLiteral_21559/*"total founded perks : "*/,pSVar4,(MethodInfo *)0x0);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendLine(__this_00,pSVar4,(MethodInfo *)0x0);
      local_70 = 0;
      local_68 = 0;
      local_64 = 0;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_f8,(System_Collections_Generic_List_object__o *)__this_03,
                 Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
      local_90.fields._index = local_f8.fields._index;
      local_90.fields._version = local_f8.fields._version;
      local_90.fields._list = local_f8.fields._list;
      local_90.fields._current = local_f8.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_90,
                                Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                               ), bVar3) {
        if ((MANCHAFDGGG_o *)local_90.fields._current == (MANCHAFDGGG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_04 = ((MANCHAFDGGG_o *)((long)local_90.fields._current + 0x100))->klass;
        bVar3 = DJNBJHPDKDP__OBECCOPBADO<object>
                          ((System_Collections_Generic_List_T__o *)__this_04,
                           Method_DJNBJHPDKDP_OBECCOPBADO<NJPBBPOABKP>__);
        if (!bVar3) {
          if (__this_04 == (MANCHAFDGGG_c *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_f8,(System_Collections_Generic_List_object__o *)__this_04,
                     Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
          local_b0.fields._index = local_f8.fields._index;
          local_b0.fields._version = local_f8.fields._version;
          local_b0.fields._list = local_f8.fields._list;
          local_b0.fields._current = local_f8.fields._current;
          while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_b0,
                                    Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__
                                   ), bVar3) {
            local_64 = local_64 + 1;
            if ((MANCHAFDGGG_o *)local_b0.fields._current == (MANCHAFDGGG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            __this_01 = *(System_Collections_Generic_List_object__o **)
                         &(((MANCHAFDGGG_Fields *)((long)local_b0.fields._current + 0x10))->super).
                          JDNKKGPNHPB.fields;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_f8,__this_01,
                       Method_System_Collections_Generic_List<ILGLOCBJFEG>_GetEnumerator__);
            uVar2 = local_d8;
            local_d0.fields._index = local_f8.fields._index;
            local_d0.fields._version = local_f8.fields._version;
            local_d0.fields._list = local_f8.fields._list;
            local_d0.fields._current = local_f8.fields._current;
            while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_d0,
                                      Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_MoveNext__
                                     ), bVar3) {
              local_68 = local_68 + 1;
              if ((MANCHAFDGGG_o *)local_d0.fields._current != (MANCHAFDGGG_o *)0x0) {
                bVar1 = (MANCHAFDGGG_TypeInfo->_2).naturalAligment;
                if ((bVar1 <= (((MANCHAFDGGG_c *)(local_d0.fields._current)->klass)->_2).
                              naturalAligment) &&
                   ((((MANCHAFDGGG_c *)(local_d0.fields._current)->klass)->_2).typeHierarchy
                    [(ulong)bVar1 - 1] == (Il2CppClass *)MANCHAFDGGG_TypeInfo)) {
                  local_70 = CONCAT44(local_70._4_4_ + 1,(int)local_70);
                  __this_02 = MANCHAFDGGG__BBIHHKLKLLK
                                        ((MANCHAFDGGG_o *)local_d0.fields._current,(MethodInfo *)0x0
                                        );
                  if (__this_02 == (NILLKLHKLHG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  NILLKLHKLHG__CHKGAHCDFJF(__this_02,true,(MethodInfo *)0x0);
                }
              }
            }
            local_d8 = uVar2;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_d0,
                       Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_Dispose__);
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_b0,
                     Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_90,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__)
      ;
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
      pSVar4 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = pSVar4;
          thunk_FUN_01c20e04(values->m_Items,pSVar4);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = StringLiteral_543/*" triggers with "*/;
            thunk_FUN_01c20e04(values->m_Items + 1);
            pSVar4 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = pSVar4;
              thunk_FUN_01c20e04(values->m_Items + 2,pSVar4);
              if (3 < (uint)values->max_length) {
                values->m_Items[3] = StringLiteral_379/*" conditions  and "*/;
                thunk_FUN_01c20e04(values->m_Items + 3);
                pSVar4 = System_Int32__ToString((int)&local_70 + 4,(MethodInfo *)0x0);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = pSVar4;
                  thunk_FUN_01c20e04(values->m_Items + 4,pSVar4);
                  if (5 < (uint)values->max_length) {
                    values->m_Items[5] = StringLiteral_413/*" extensions"*/;
                    thunk_FUN_01c20e04();
                    pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
                    System_Text_StringBuilder__AppendLine(__this_00,pSVar4,(MethodInfo *)0x0);
                    GJFEBGNFFBA__ILHNDPBPGAN
                              ((GJFEBGNFFBA_o *)__this,false,StringLiteral_3254/*"AutoTestPerksTriggers Conditions Tests"*/,__this_00,
                               (MethodInfo *)0x0);
                    str1 = System_Int32__ToString((int)&local_70 + 4,(MethodInfo *)0x0);
                    str0 = StringLiteral_3255/*"AutoTestPerksTriggers Conditions Tests processed "*/;
                    pSVar4 = StringLiteral_413/*" extensions"*/;
                    if ((int)local_70 < 1) {
                      pSVar5 = (System_String_o *)0x0;
                    }
                    else {
                      pSVar5 = System_Int32__ToString((int32_t)&local_70,(MethodInfo *)0x0);
                      pSVar5 = System_String__Concat
                                         (StringLiteral_261/*" <color=red>"*/,pSVar5,StringLiteral_410/*" errors</color>"*/,
                                          (MethodInfo *)0x0);
                    }
                    pSVar4 = System_String__Concat(str0,str1,pSVar4,pSVar5,(MethodInfo *)0x0);
                    return pSVar4;
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

