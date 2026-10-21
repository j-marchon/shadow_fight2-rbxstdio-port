// PLIIGOCLJDL$$PDEBCPPCEJP @ RVA 0x351754C

JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *
PLIIGOCLJDL__PDEBCPPCEJP(PLIIGOCLJDL_o *__this,int64_t BIIMFIDNPJP,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *pSVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *__this_00;
  PLIIGOCLJDL_o *__this_01;
  JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *pJVar5;
  MethodInfo *method_00;
  int32_t BKNFBGIKLNC;
  int index;
  int iVar6;
  
  if ((DAT_04568949 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_get_Item__)
    ;
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__);
    DAT_04568949 = 1;
  }
  pSVar3 = (__this->fields).FONCNGHPHDG;
  if (pSVar3 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,1,
                       Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_ContainsKey__
                      );
    if (!bVar2) {
      return (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0;
    }
    pSVar3 = (__this->fields).FONCNGHPHDG;
    if (pSVar3 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
      pIVar4 = System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,1,
                          Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_get_Item__
                         );
      if (pIVar4 == (Il2CppObject *)0x0) {
        return (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0;
      }
      __this_00 = pIVar4[2].klass;
      if (__this_00 != (Il2CppClass *)0x0) {
        BKNFBGIKLNC = 0;
        index = 0;
        iVar6 = -1;
        do {
          if (*(int *)&(__this_00->_1).namespaze <= index) {
            return (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0;
          }
          method_00 = Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__;
          __this_01 = (PLIIGOCLJDL_o *)
                      Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                                 (MethodInfo_295F6AC *)
                                 Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__
                                );
          if (__this_01 == (PLIIGOCLJDL_o *)0x0) break;
          iVar1 = *(int *)&(__this_01->fields).MNAFCHADIDC;
          if (iVar1 != iVar6) {
            BKNFBGIKLNC = index + 1;
          }
          if ((__this_01->fields).DAHKCOIPIBD == (System_Action_JCFJFJCKLKG__o *)BIIMFIDNPJP) {
            if (iVar1 < 1) {
              return (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0;
            }
            pJVar5 = PLIIGOCLJDL__LPCLGCOCEEA(__this_01,BKNFBGIKLNC,method_00);
            return pJVar5;
          }
          __this_00 = pIVar4[2].klass;
          index = index + 1;
          iVar6 = iVar1;
        } while (__this_00 != (Il2CppClass *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

