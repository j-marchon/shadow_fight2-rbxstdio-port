// MGNPHCAAEIO$$DGJACOJNPBB @ RVA 0x340E938

int32_t MGNPHCAAEIO__DGJACOJNPBB(MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  CNKPEGNHNGO_o *pCVar4;
  System_Collections_Generic_List_MGNDHCBAPEN_int__uint___o *pSVar5;
  
  if ((DAT_04568066 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_uint>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_uint>>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568066 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar4 = MGNPHCAAEIO_TypeInfo->static_fields->DLPAONNJNMA;
  if ((pCVar4 != (CNKPEGNHNGO_o *)0x0) &&
     (pSVar5 = (pCVar4->fields).HLIELGNFGLF,
     pSVar5 != (System_Collections_Generic_List_MGNDHCBAPEN_int__uint___o *)0x0)) {
    iVar1 = (pSVar5->fields)._size;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pCVar4 = MGNPHCAAEIO_TypeInfo->static_fields->DLPAONNJNMA;
        if (pCVar4 == (CNKPEGNHNGO_o *)0x0) goto LAB_0350ea04;
      }
      pSVar5 = (pCVar4->fields).HLIELGNFGLF;
      if ((pSVar5 == (System_Collections_Generic_List_MGNDHCBAPEN_int__uint___o *)0x0) ||
         (pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar5,iVar1 + -1,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_uint>>_get_Item__
                             ), pIVar3 == (Il2CppObject *)0x0)) goto LAB_0350ea04;
      iVar2 = *(int32_t *)&pIVar3[1].klass;
    }
    return iVar2;
  }
LAB_0350ea04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

