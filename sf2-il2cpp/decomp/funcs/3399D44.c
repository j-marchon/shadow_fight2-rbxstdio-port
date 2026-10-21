// MMDPNDAECII$$IELLEFEFFJD @ RVA 0x3399D44

void MMDPNDAECII__IELLEFEFFJD
               (MMDPNDAECII_o *__this,System_Collections_Generic_List_string__o *FPEHEJBLCAO,
               MethodInfo *method)

{
  int32_t length;
  GBJGJEGPHKD_o *__this_00;
  System_Collections_Generic_List_string__o *pSVar1;
  
  if ((DAT_04567c6e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    DAT_04567c6e = 1;
  }
  pSVar1 = (__this->fields).MJBOGDFFGKL;
  (__this->fields).BNHJIKJAHHF = true;
  (__this->fields).AGHCNFGKHCH = 0;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (FPEHEJBLCAO != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar1 = (__this->fields).MJBOGDFFGKL;
      if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03499df0;
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)pSVar1,
                 (System_Collections_Generic_IEnumerable_T__o *)FPEHEJBLCAO,
                 Method_System_Collections_Generic_List<string>_AddRange__);
    }
    __this_00 = (__this->fields).HMIAFJALFCJ;
    if (__this_00 != (GBJGJEGPHKD_o *)0x0) {
      GBJGJEGPHKD__GLMFAHPICHD(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03499df0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

