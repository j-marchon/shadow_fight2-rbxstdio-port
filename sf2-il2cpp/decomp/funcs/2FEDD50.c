// KCJMBDCBIIF$$DAGCABNOONJ @ RVA 0x2FEDD50

void KCJMBDCBIIF__DAGCABNOONJ
               (KCJMBDCBIIF_o *__this,OJKCDJCBOBL_o *DBIAAJNKHLH,
               System_Action_DLOALGNBPNL__o *BLMFLPJJMPF,MethodInfo *method)

{
  bool bVar1;
  DLOALGNBPNL_o *pDVar2;
  OJKCDJCBOBL_o *__this_00;
  int64_t iVar3;
  System_Action_DLOALGNBPNL__o *method_00;
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *pGVar4;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar5;
  int index;
  System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_02;
  
  method_00 = BLMFLPJJMPF;
  if ((DAT_04565a47 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_ContainsKey__);
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    DAT_04565a47 = 1;
  }
  pDVar2 = KCJMBDCBIIF__JJOJLFCDCJO(__this,DBIAAJNKHLH,(MethodInfo *)method_00);
  if ((((pDVar2 != (DLOALGNBPNL_o *)0x0) &&
       (pGVar4 = (pDVar2->fields).EHBNKDHKJNI,
       pGVar4 != (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0)) &&
      (DBIAAJNKHLH != (OJKCDJCBOBL_o *)0x0)) &&
     (pGVar5 = (DBIAAJNKHLH->fields).OHMDCKEDOGH,
     pGVar5 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
    if ((pGVar5->fields).count <= (pGVar4->fields).count) {
      if (BLMFLPJJMPF != (System_Action_DLOALGNBPNL__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x030ededc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(BLMFLPJJMPF->fields).super.super.invoke_impl)
                  ((BLMFLPJJMPF->fields).super.super.method_code,pDVar2,
                   (BLMFLPJJMPF->fields).super.super.method);
        return;
      }
      return;
    }
    __this_00 = (OJKCDJCBOBL_o *)thunk_FUN_01bda818(OJKCDJCBOBL_TypeInfo);
    OJKCDJCBOBL___ctor(__this_00,(MethodInfo *)0x0);
    pGVar5 = (DBIAAJNKHLH->fields).OHMDCKEDOGH;
    if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
      index = 0;
      do {
        if ((pGVar5->fields).count <= index) {
          KCJMBDCBIIF__KLNMLOOCAAO(__this,__this_00,BLMFLPJJMPF,method);
          return;
        }
        __this_01 = (__this->fields).CMJNDHHGCBI;
        iVar3 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                          (pGVar5,index,
                           Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
        if (__this_01 == (System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *)0x0) break;
        bVar1 = System_Collections_Generic_Dictionary<long,_object>__ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,iVar3,
                           Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_ContainsKey__
                          );
        if (!bVar1) {
          if ((__this_00 == (OJKCDJCBOBL_o *)0x0) ||
             (pGVar5 = (DBIAAJNKHLH->fields).OHMDCKEDOGH,
             pGVar5 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) break;
          __this_02 = (__this_00->fields).OHMDCKEDOGH;
          iVar3 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                            (pGVar5,index,
                             Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
          if (__this_02 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) break;
          Google_Protobuf_Collections_RepeatedField<long>__Add
                    (__this_02,iVar3,Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
        }
        pGVar5 = (DBIAAJNKHLH->fields).OHMDCKEDOGH;
        index = index + 1;
      } while (pGVar5 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

