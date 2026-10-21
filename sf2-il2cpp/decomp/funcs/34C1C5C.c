// KAHMAJKJMBK$$BKBHKFCCKDO @ RVA 0x34C1C5C

void KAHMAJKJMBK__BKBHKFCCKDO
               (KAHMAJKJMBK_o *__this,int32_t ELCBIMMGAFJ,int32_t HEHMPFLAEGE,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this_00;
  ulong uVar3;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_CNIGOFCKBGI__o **ppSVar7;
  System_Collections_Generic_List_CNIGOFCKBGI__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  int32_t local_34;
  
  if ((DAT_0456860c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNIGOFCKBGI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNIGOFCKBGI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<CNIGOFCKBGI>_TypeInfo);
    FUN_01bab630(&OHFNEFFMKIA_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5842);
    DAT_0456860c = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 035c1d14 to 036c1d1b has its CatchHandler @ 035c214c */
  if ((__this->fields).JIKKMEONEDH == false) {
    return;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<CNIGOFCKBGI>_TypeInfo);
                    /* try { // try from 035c1d34 to 036c1d3b has its CatchHandler @ 035c2138 */
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<CNIGOFCKBGI>__ctor__);
                    /* try { // try from 035c1d48 to 036c1d4b has its CatchHandler @ 035c2148 */
  switch(ELCBIMMGAFJ) {
  case 1:
    __this_01 = (__this->fields).AJIJMKENBMO;
    KAHMAJKJMBK__JHIKFGHPAOF(__this,method_00);
    goto LAB_035c1dc0;
  case 2:
    ppSVar7 = &(__this->fields).CKMPEMHHNCI;
    break;
  default:
                    /* try { // try from 035c1e7c to 036c1e83 has its CatchHandler @ 035c2028 */
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
                    /* try { // try from 035c1e8c to 036c1e97 has its CatchHandler @ 035c2010 */
    local_34 = ELCBIMMGAFJ;
                    /* try { // try from 035c1e9c to 036c1eab has its CatchHandler @ 035c200c */
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(OHFNEFFMKIA_TypeInfo,&local_34);
    if (args != (System_Object_array *)0x0) {
                    /* try { // try from 035c1ebc to 036c1f47 has its CatchHandler @ 035c2008 */
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0)) {
        uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar6,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = pIVar4;
        thunk_FUN_01c20e04(args->m_Items,pIVar4);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_5842,args,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    goto LAB_035c1f14;
  case 4:
    ppSVar7 = &(__this->fields).PKMNBFPALAM;
    break;
  case 5:
    ppSVar7 = &(__this->fields).FBHMGCAMFKN;
    break;
  case 6:
    ppSVar7 = &(__this->fields).JDILFKPDENK;
    break;
  case 7:
    ppSVar7 = &(__this->fields).CFCENPHNNAB;
                    /* try { // try from 035c1d84 to 036c1dab has its CatchHandler @ 035c2030 */
    break;
  case 8:
    ppSVar7 = &(__this->fields).EJPFDNLPLNG;
    break;
  case 9:
  case 0xd:
    ppSVar7 = &(__this->fields).JJNMICKPIFL;
    break;
  case 10:
    ppSVar7 = &(__this->fields).AJOJJAMODCB;
    break;
  case 0xb:
    ppSVar7 = &(__this->fields).ENDAHIICPMO;
    break;
  case 0xc:
    ppSVar7 = &(__this->fields).LKNFJJLFJFD;
  }
  __this_01 = *ppSVar7;
LAB_035c1dc0:
  if (__this_01 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
                    /* try { // try from 035c1de0 to 036c1e0b has its CatchHandler @ 035c202c */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<CNIGOFCKBGI>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_MoveNext__);
      pIVar4 = local_58.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_Dispose__);
                    /* try { // try from 035c1e60 to 036c1e67 has its CatchHandler @ 035c2020 */
                    /* try { // try from 035c1e70 to 036c1e77 has its CatchHandler @ 035c2024 */
        return;
      }
      if ((CNIGOFCKBGI_o *)local_58.fields._current == (CNIGOFCKBGI_o *)0x0) break;
      if (((((CNIGOFCKBGI_Fields *)((long)local_58.fields._current + 0x10))->super).
           _BDDBFNHFMBC_k__BackingField != false) &&
         (((iVar1 = ((CNIGOFCKBGI_Fields *)((long)local_58.fields._current + 0x10))->JGJNBILDCHK,
           iVar1 == HEHMPFLAEGE || (HEHMPFLAEGE == 3)) || (iVar1 == 3)))) {
        method_01 = (((CNIGOFCKBGI_c *)(local_58.fields._current)->klass)->vtable)._10_DGCODECJJCC.
                    method;
        uVar3 = (*(((CNIGOFCKBGI_c *)(local_58.fields._current)->klass)->vtable)._10_DGCODECJJCC.
                  methodPtr)(local_58.fields._current,IMMNELPBGIF);
        if ((uVar3 & 1) != 0) {
                    /* try { // try from 035c1e48 to 036c1e4f has its CatchHandler @ 035c201c */
          KAHMAJKJMBK__MPKILCKIELF(__this,(CNIGOFCKBGI_o *)pIVar4,method_01);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_035c1f14:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

