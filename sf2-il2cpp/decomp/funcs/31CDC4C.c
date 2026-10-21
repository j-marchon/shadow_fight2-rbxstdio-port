// HCKCBFOGMMJ$$EFCMPBGIEGJ @ RVA 0x31CDC4C

void HCKCBFOGMMJ__EFCMPBGIEGJ
               (HCKCBFOGMMJ_o *__this,IBMLPPNMDCI_o *DBIAAJNKHLH,
               System_Action_LFELBGMCDHD__o *BLMFLPJJMPF,MethodInfo *method)

{
  bool bVar1;
  LFELBGMCDHD_o *pLVar2;
  IBMLPPNMDCI_o *__this_00;
  int64_t iVar3;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  System_Action_LFELBGMCDHD__o *method_00;
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *pGVar4;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar5;
  int index;
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *__this_02;
  
  method_00 = BLMFLPJJMPF;
  if ((DAT_04566c84 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_ContainsKey__);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    DAT_04566c84 = 1;
  }
  pLVar2 = HCKCBFOGMMJ__GCNKHODLPFF(__this,DBIAAJNKHLH,(MethodInfo *)method_00);
  if ((((pLVar2 != (LFELBGMCDHD_o *)0x0) &&
       (pGVar4 = (pLVar2->fields).EHBNKDHKJNI,
       pGVar4 != (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0)) &&
      (DBIAAJNKHLH != (IBMLPPNMDCI_o *)0x0)) &&
     (pGVar5 = (DBIAAJNKHLH->fields).EHBNKDHKJNI,
     pGVar5 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
    if ((pGVar4->fields).count < (pGVar5->fields).count) {
      __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo);
      IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
      pGVar5 = (DBIAAJNKHLH->fields).EHBNKDHKJNI;
      if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
        index = 0;
        do {
          if ((pGVar5->fields).count <= index) {
            HCKCBFOGMMJ__KLNMLOOCAAO(__this,__this_00,BLMFLPJJMPF,method);
            return;
          }
          __this_02 = (__this->fields).CMJNDHHGCBI;
          iVar3 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                            (pGVar5,index,
                             Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
          if (__this_02 == (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) break;
          bVar1 = System_Collections_Generic_Dictionary<long,_object>__ContainsKey
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                             iVar3,
                             Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_ContainsKey__
                            );
          if (!bVar1) {
            if ((__this_00 == (IBMLPPNMDCI_o *)0x0) ||
               (pGVar5 = (__this_00->fields).EHBNKDHKJNI,
               pGVar5 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) break;
            if ((pGVar5->fields).count < 0x95) {
              __this_01 = (DBIAAJNKHLH->fields).EHBNKDHKJNI;
              if (__this_01 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) break;
              iVar3 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                                (__this_01,index,
                                 Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
              Google_Protobuf_Collections_RepeatedField<long>__Add
                        (pGVar5,iVar3,Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
            }
          }
          pGVar5 = (DBIAAJNKHLH->fields).EHBNKDHKJNI;
          index = index + 1;
        } while (pGVar5 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0);
      }
    }
    else if (BLMFLPJJMPF != (System_Action_LFELBGMCDHD__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032cdde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(BLMFLPJJMPF->fields).super.super.invoke_impl)
                ((BLMFLPJJMPF->fields).super.super.method_code,pLVar2,
                 (BLMFLPJJMPF->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

