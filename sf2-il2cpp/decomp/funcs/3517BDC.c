// PLIIGOCLJDL$$GBPMMOFJJLJ @ RVA 0x3517BDC

void PLIIGOCLJDL__GBPMMOFJJLJ
               (PLIIGOCLJDL_o *__this,System_Nullable_int__o PIGHOGKKKDN,MethodInfo *method)

{
  ushort uVar1;
  int32_t PIGHOGKKKDN_00;
  JMDPBFOCHHP_o *pJVar2;
  System_Collections_IEnumerator_o *pSVar3;
  PBAKFOBIHEG_o *pPVar4;
  VirtualInvokeData *pVVar5;
  System_Nullable_int__Fields extraout_x1;
  System_Nullable_int__Fields method_00;
  JMDPBFOCHHP_AEJBILHMFDB_o *pJVar6;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  System_Nullable_int__Fields local_28;
  
  method_00 = PIGHOGKKKDN.fields;
  local_28 = PIGHOGKKKDN.fields;
  if ((DAT_0456894d & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456894d = 1;
    method_00 = extraout_x1;
  }
  PLIIGOCLJDL__HENKNGNOKPE(__this,(MethodInfo *)method_00);
  if (((ulong)PIGHOGKKKDN.fields & 0xff) == 0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((pJVar2 == (JMDPBFOCHHP_o *)0x0) ||
       (pJVar6 = (pJVar2->fields)._JMEOCLFDHMM_k__BackingField,
       pJVar6 == (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0)) goto LAB_03617d54;
    method = Method_System_Nullable<int>__ctor__;
    System_Nullable<int>___ctor
              ((System_Nullable_int__o)&local_28,(pJVar6->fields).EKAPEBDBNPO,
               (MethodInfo_27F7F6C *)Method_System_Nullable<int>__ctor__);
  }
  PIGHOGKKKDN_00 =
       System_Nullable<int>__get_Value
                 ((System_Nullable_int__o)&local_28,Method_System_Nullable<int>_get_Value__);
  pSVar3 = PLIIGOCLJDL__AJGLGPOGNBM(__this,PIGHOGKKKDN_00,method);
  ppSVar10 = &(__this->fields).JGOFLJJKCPA;
  *ppSVar10 = pSVar3;
  thunk_FUN_01c20e04(ppSVar10,pSVar3);
  pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
    pPVar7 = pPVar4->klass;
    pSVar3 = *ppSVar10;
    uVar1._0_1_ = (pPVar7->_2).rank;
    uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar5 = pPVar7->vtable + *piVar9;
          goto LAB_03617d30;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,0);
LAB_03617d30:
    (*pVVar5->methodPtr)(pPVar4,pSVar3,1,pVVar5->method);
    return;
  }
LAB_03617d54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

