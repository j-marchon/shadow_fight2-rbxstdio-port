// CocosAnimation$$SetFramesRange @ RVA 0x33F7E84

void CocosAnimation__SetFramesRange
               (CocosAnimation_o *__this,int32_t PEOMJHJICCM,int32_t GKBCJOEFFCP,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_String_array *values;
  System_String_o *pSVar3;
  System_Collections_Generic_List_Sprite__o *pSVar4;
  int32_t local_34;
  int local_28;
  int32_t iStack_24;
  
  local_28 = GKBCJOEFFCP;
  iStack_24 = PEOMJHJICCM;
  if ((DAT_04567f9b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>_get_Count__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_255);
    FUN_01bab630(&StringLiteral_4449);
    FUN_01bab630(&StringLiteral_228);
    DAT_04567f9b = 1;
  }
  pSVar3 = StringLiteral_4449;
  local_34 = 0;
  iVar1 = GKBCJOEFFCP;
  iVar2 = local_28;
  if (GKBCJOEFFCP < 0) {
    pSVar4 = (__this->fields).HKCNDNBLAHI;
    if (pSVar4 == (System_Collections_Generic_List_Sprite__o *)0x0) goto LAB_034f80cc;
    iVar1 = (pSVar4->fields)._size + -1;
    iVar2 = iVar1;
  }
  local_28 = iVar1;
  if ((-1 < PEOMJHJICCM) && (PEOMJHJICCM <= local_28)) {
    pSVar4 = (__this->fields).HKCNDNBLAHI;
    if (pSVar4 == (System_Collections_Generic_List_Sprite__o *)0x0) goto LAB_034f80cc;
    if (local_28 < (pSVar4->fields)._size) goto LAB_034f80a0;
  }
  local_28 = iVar2;
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
  iVar2 = local_28;
  if (values == (System_String_array *)0x0) {
LAB_034f80cc:
    local_28 = iVar2;
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = pSVar3;
    thunk_FUN_01c20e04(values->m_Items,pSVar3);
    pSVar3 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = pSVar3;
      thunk_FUN_01c20e04(values->m_Items + 1,pSVar3);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = StringLiteral_255;
        thunk_FUN_01c20e04(values->m_Items + 2);
        pSVar3 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = pSVar3;
          thunk_FUN_01c20e04(values->m_Items + 3,pSVar3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = StringLiteral_228;
            thunk_FUN_01c20e04();
            pSVar4 = (__this->fields).HKCNDNBLAHI;
            iVar2 = local_28;
            if (pSVar4 == (System_Collections_Generic_List_Sprite__o *)0x0) goto LAB_034f80cc;
            local_34 = (pSVar4->fields)._size;
            pSVar3 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = pSVar3;
              thunk_FUN_01c20e04();
              pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
              }
              UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
              PEOMJHJICCM = iStack_24;
LAB_034f80a0:
              (__this->fields).PAGAGEMKILK = PEOMJHJICCM;
              (__this->fields).OFNNCOJAFJB = local_28;
              (__this->fields)._BNKDPKMAPPM_k__BackingField = (local_28 - PEOMJHJICCM) + 1;
              (__this->fields).BJIKPLGMOMI = 0.0;
              (__this->fields).FJJPFEGPEFA = PEOMJHJICCM;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

