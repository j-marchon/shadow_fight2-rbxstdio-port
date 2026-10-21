// CFEANGJDHEE$$HEGONINDJJG @ RVA 0x30AF268

System_String_o * CFEANGJDHEE__HEGONINDJJG(MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *EHNFGMGKCHO;
  bool bVar2;
  System_Text_StringBuilder_o *__this;
  CFEANGJDHEE_c *method_00;
  CFEANGJDHEE_o *pCVar3;
  System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *__this_00;
  System_String_o *pSVar4;
  System_String_array *values;
  System_String_o *pSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  undefined8 uStack_98;
  System_String_o *local_90;
  undefined8 uStack_88;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  undefined8 uStack_68;
  
  if ((DAT_045661cb & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<CFEANGJDHEE_JNHFDLGPFNI>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<CFEANGJDHEE_JNHFDLGPFNI>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<CFEANGJDHEE_JNHFDLGPFNI>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_GetEnumerator__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 031af2e0 to 032af48f has its CatchHandler @ 031af2e0
                       catch() { ... } // from try @ 031af2e0 with catch @ 031af2e0
                       catch() { ... } // from try @ 031af4ec with catch @ 031af2e0
                       catch() { ... } // from try @ 031af66c with catch @ 031af2e0
                       catch() { ... } // from try @ 031af6f0 with catch @ 031af2e0
                       catch() { ... } // from try @ 031af744 with catch @ 031af2e0
                       catch() { ... } // from try @ 031af998 with catch @ 031af2e0 */
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_2293);
    FUN_01bab630(&StringLiteral_2140);
    FUN_01bab630(&StringLiteral_15034);
    FUN_01bab630(&StringLiteral_2183);
    DAT_045661cb = 1;
  }
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  uStack_68 = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_90 = (System_String_o *)0x0;
  uStack_88 = 0;
  __this = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  method_00 = CFEANGJDHEE_TypeInfo;
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
  }
  pCVar3 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)method_00);
  if ((pCVar3 != (CFEANGJDHEE_o *)0x0) &&
     (__this_00 = (pCVar3->fields).FAMNALIFEHI,
     __this_00 != (System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *)0x0)) {
    System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>__GetEnumerator
              (&local_b0,__this_00,
               Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_GetEnumerator__);
    bVar1 = (byte)&local_90;
    local_80.fields._index = local_b0.fields._index;
    local_80.fields._version = local_b0.fields._version;
    local_80.fields._list = local_b0.fields._list;
    uStack_68 = uStack_98;
    local_80.fields._current = local_b0.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<CFEANGJDHEE_JNHFDLGPFNI>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<CFEANGJDHEE_JNHFDLGPFNI>_MoveNext__
                             ), EHNFGMGKCHO = local_80.fields._current, bVar2) {
      uStack_88 = uStack_68;
      local_90 = (System_String_o *)local_80.fields._current;
      method_01 = extraout_x1;
      if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_01 = extraout_x1_00;
      }
      pSVar4 = CFEANGJDHEE__OBPDBBODFGD((System_String_o *)EHNFGMGKCHO,method_01);
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((int)values->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[0] = StringLiteral_2293;
      thunk_FUN_01c20e04();
      pSVar5 = System_Byte__ToString(bVar1 | 8,StringLiteral_15034,(MethodInfo *)0x0);
      if ((uint)values->max_length < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[1] = pSVar5;
      thunk_FUN_01c20e04();
      pSVar5 = System_Byte__ToString(bVar1 | 9,StringLiteral_15034,(MethodInfo *)0x0);
      if ((uint)values->max_length < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* try { // try from 031af490 to 032af49f has its CatchHandler @ 031af710 */
      values->m_Items[2] = pSVar5;
      thunk_FUN_01c20e04();
      pSVar5 = System_Byte__ToString(bVar1 | 10,StringLiteral_15034,(MethodInfo *)0x0);
                    /* try { // try from 031af4ac to 032af4b3 has its CatchHandler @ 031af70c */
      if ((uint)values->max_length < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[3] = pSVar5;
      thunk_FUN_01c20e04();
      if ((uint)values->max_length < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* try { // try from 031af4d0 to 032af4d7 has its CatchHandler @ 031af704 */
      values->m_Items[4] = StringLiteral_2140;
      thunk_FUN_01c20e04();
                    /* try { // try from 031af4e4 to 032af4eb has its CatchHandler @ 031af714 */
      pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
                    /* try { // try from 031af4ec to 032af5af has its CatchHandler @ 031af2e0 */
      if (__this == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Text_StringBuilder__Append(__this,pSVar5,(MethodInfo *)0x0);
      System_Text_StringBuilder__Append(__this,pSVar4,(MethodInfo *)0x0);
      System_Text_StringBuilder__Append(__this,StringLiteral_2183,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<CFEANGJDHEE_JNHFDLGPFNI>__Dispose
              (&local_80,
               Method_System_Collections_Generic_List_Enumerator<CFEANGJDHEE_JNHFDLGPFNI>_Dispose__)
    ;
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      pSVar4 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

