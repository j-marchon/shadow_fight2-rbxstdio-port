// NGKBNOEJLPH$$PKNDAFAACIK @ RVA 0x34989AC

int32_t NGKBNOEJLPH__PKNDAFAACIK
                  (NGKBNOEJLPH_o *__this,
                  System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *LFCKNHGNHHJ,
                  MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  OLKKAIFGGAK_o *pOVar4;
  NJPBHDMCLIN_o *pNVar5;
  Il2CppClass *pIVar6;
  int index;
  int index_00;
  
  if ((DAT_04568457 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_LJCDLMMMOGD<NGKBNOEJLPH_LNKLGCHOEBF>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_set_Item__);
    FUN_01bab630(&StringLiteral_19732);
    DAT_04568457 = 1;
  }
  pOVar4 = (__this->fields).KOHECBJAFKG;
  if ((pOVar4 != (OLKKAIFGGAK_o *)0x0) &&
     (LFCKNHGNHHJ != (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0)) {
    pNVar5 = (pOVar4->fields).FNEAAHOOHAA;
    if (pNVar5 == (NJPBHDMCLIN_o *)0x0) {
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>
                         (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
      if (((pIVar3 == (Il2CppObject *)0x0) || (pIVar3[9].klass == (Il2CppClass *)0x0)) ||
         (pIVar6 = ((pIVar3[9].klass)->_1).element_class, pIVar6 == (Il2CppClass *)0x0))
      goto LAB_03598b78;
      if (*(char *)&(pIVar6->_1).name != '\0') {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_19732,(MethodInfo *)0x0);
      }
      index = 0;
    }
    else {
      iVar1 = (LFCKNHGNHHJ->fields)._size;
      index = 0;
      (pNVar5->fields).BPEIPGJNCLC = false;
      if (0 < iVar1) {
        index_00 = 0;
        do {
          method_00 = Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Item__;
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)LFCKNHGNHHJ,index_00,
                              (MethodInfo_26E4ADC *)
                              Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Item__
                             );
          if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03598b78;
          if ((pIVar3[1].klass == (Il2CppClass *)0x0) ||
             (bVar2 = NGKBNOEJLPH__POOHKPDCICO(__this,(ECENNHNBAME_o *)pIVar3[1].klass,method_00),
             bVar2)) {
            pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)LFCKNHGNHHJ,index_00,
                                (MethodInfo_26E4ADC *)
                                Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Item__
                               );
            System_Collections_Generic_List<object>__set_Item
                      ((System_Collections_Generic_List_object__o *)LFCKNHGNHHJ,index,pIVar3,
                       Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_set_Item__);
            index = index + 1;
          }
          index_00 = index_00 + 1;
        } while (iVar1 != index_00);
      }
      DJNBJHPDKDP__LJCDLMMMOGD<object>
                ((System_Collections_Generic_List_T__o *)LFCKNHGNHHJ,index,
                 Method_DJNBJHPDKDP_LJCDLMMMOGD<NGKBNOEJLPH_LNKLGCHOEBF>__);
    }
    return index;
  }
LAB_03598b78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

