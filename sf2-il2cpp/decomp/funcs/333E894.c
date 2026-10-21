// AFFHKININGD$$CILPNDAAJGF @ RVA 0x333E894

JBCGDIEHOHH_o *
AFFHKININGD__CILPNDAAJGF(AFFHKININGD_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_List_JBCGDIEHOHH__o *pSVar1;
  JBCGDIEHOHH_o *pJVar2;
  System_String_array *values;
  System_String_o *pSVar3;
  int32_t local_28;
  int32_t local_24;
  
  local_24 = DPJIDNBJIBG;
  if ((DAT_04567983 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_6349);
    FUN_01bab630(&StringLiteral_7155);
    FUN_01bab630(&StringLiteral_226);
    FUN_01bab630(&StringLiteral_427);
    DAT_04567983 = 1;
  }
  local_28 = 0;
  pSVar1 = (__this->fields).FGAENDJJOGN;
  if (pSVar1 != (System_Collections_Generic_List_JBCGDIEHOHH__o *)0x0) {
    if (DPJIDNBJIBG < (pSVar1->fields)._size) {
      pJVar2 = (JBCGDIEHOHH_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,DPJIDNBJIBG,
                          Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
      return pJVar2;
    }
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = StringLiteral_6349;
        thunk_FUN_01c20e04(values->m_Items);
        pSVar3 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = pSVar3;
          thunk_FUN_01c20e04(values->m_Items + 1,pSVar3);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = StringLiteral_427;
            thunk_FUN_01c20e04();
            pSVar1 = (__this->fields).FGAENDJJOGN;
            if (pSVar1 == (System_Collections_Generic_List_JBCGDIEHOHH__o *)0x0) goto LAB_0343eaa4;
            local_28 = (pSVar1->fields)._size;
            pSVar3 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = pSVar3;
              thunk_FUN_01c20e04(values->m_Items + 3,pSVar3);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = StringLiteral_226;
                thunk_FUN_01c20e04();
                pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                }
                UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
                UnityEngine_Debug__Log(StringLiteral_7155,(MethodInfo *)0x0);
                return (JBCGDIEHOHH_o *)0x0;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_0343eaa4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

