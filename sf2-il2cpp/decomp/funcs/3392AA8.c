// MEHKKHFBNLM$$BDHAMOEKNNK @ RVA 0x3392AA8

void MEHKKHFBNLM__BDHAMOEKNNK(MEHKKHFBNLM_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  int index;
  
  if ((DAT_04567c32 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567c32 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).KMPEKADHGMM == false) {
    MEHKKHFBNLM__IELLEFEFFJD(__this,method);
  }
  __this_00 = (__this->fields).KPLKFOJFEMF;
  if (__this_00 != (System_Collections_Generic_List_GMGALNFPLPA__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<GMGALNFPLPA>_get_Item__);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      iVar2 = MGNPHCAAEIO__PCJHAMFGJLP((MethodInfo *)0x0);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      (*pIVar3->klass->vtable[5].methodPtr)
                (1.0 / (float)iVar2,pIVar3,pIVar3->klass->vtable[5].method);
      index = index + 1;
      if (iVar1 == index) {
        return;
      }
      __this_00 = (__this->fields).KPLKFOJFEMF;
    } while (__this_00 != (System_Collections_Generic_List_GMGALNFPLPA__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

