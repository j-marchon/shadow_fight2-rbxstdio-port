// NGKBNOEJLPH$$PKNDAFAACIK @ RVA 0x349C628

int32_t NGKBNOEJLPH__PKNDAFAACIK
                  (NGKBNOEJLPH_o *__this,System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD
                  ,System_Collections_Generic_List_int__o *KGDBBFLAHIE,bool KANCKNHJFAL,
                  MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t value;
  ECENNHNBAME_o *NLEBDPHNIDI;
  Il2CppObject *pIVar3;
  MethodInfo *method_00;
  OLKKAIFGGAK_o *pOVar4;
  NJPBHDMCLIN_o *pNVar5;
  Il2CppClass *pIVar6;
  int index;
  int index_00;
  
  if ((DAT_0456846e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_LJCDLMMMOGD<ECENNHNBAME>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_LJCDLMMMOGD<int>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_set_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_set_Item__);
    FUN_01bab630(&StringLiteral_19732);
    DAT_0456846e = 1;
  }
  pOVar4 = (__this->fields).KOHECBJAFKG;
  if ((pOVar4 != (OLKKAIFGGAK_o *)0x0) &&
     (ELAGKBMJCOD != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0)) {
    pNVar5 = (pOVar4->fields).FNEAAHOOHAA;
    if (pNVar5 == (NJPBHDMCLIN_o *)0x0) {
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>
                         (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
      if (((pIVar3 == (Il2CppObject *)0x0) || (pIVar3[9].klass == (Il2CppClass *)0x0)) ||
         (pIVar6 = ((pIVar3[9].klass)->_1).element_class, pIVar6 == (Il2CppClass *)0x0))
      goto LAB_0359c890;
      if (*(char *)&(pIVar6->_1).name != '\0') {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_19732,(MethodInfo *)0x0);
      }
      index = 0;
    }
    else {
      iVar1 = (ELAGKBMJCOD->fields)._size;
      index = 0;
      (pNVar5->fields).BPEIPGJNCLC = false;
      if (0 < iVar1) {
        index_00 = 0;
        do {
          method_00 = Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__;
          NLEBDPHNIDI = (ECENNHNBAME_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,index_00
                                   ,(MethodInfo_26E4ADC *)
                                    Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
          if (NLEBDPHNIDI != (ECENNHNBAME_o *)0x0) {
            if (KANCKNHJFAL) {
              bVar2 = NGKBNOEJLPH__KALBMKHEFAC(__this,NLEBDPHNIDI,method_00);
              if (bVar2) {
LAB_0359c768:
                pIVar3 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,
                                    index_00,(MethodInfo_26E4ADC *)
                                             Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__
                                   );
                System_Collections_Generic_List<object>__set_Item
                          ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,index,pIVar3,
                           Method_System_Collections_Generic_List<ECENNHNBAME>_set_Item__);
                if (KGDBBFLAHIE != (System_Collections_Generic_List_int__o *)0x0) {
                  value = System_Collections_Generic_List<int>__get_Item
                                    (KGDBBFLAHIE,index_00,
                                     Method_System_Collections_Generic_List<int>_get_Item__);
                  System_Collections_Generic_List<int>__set_Item
                            (KGDBBFLAHIE,index,value,
                             Method_System_Collections_Generic_List<int>_set_Item__);
                }
                index = index + 1;
              }
            }
            else {
              bVar2 = NGKBNOEJLPH__POOHKPDCICO(__this,NLEBDPHNIDI,method_00);
              if (bVar2) goto LAB_0359c768;
            }
          }
          index_00 = index_00 + 1;
        } while (iVar1 != index_00);
      }
      DJNBJHPDKDP__LJCDLMMMOGD<object>
                ((System_Collections_Generic_List_T__o *)ELAGKBMJCOD,index,
                 Method_DJNBJHPDKDP_LJCDLMMMOGD<ECENNHNBAME>__);
      if (KGDBBFLAHIE != (System_Collections_Generic_List_int__o *)0x0) {
        DJNBJHPDKDP__LJCDLMMMOGD<int>
                  ((System_Collections_Generic_List_T__o *)KGDBBFLAHIE,index,
                   Method_DJNBJHPDKDP_LJCDLMMMOGD<int>__);
      }
    }
    return index;
  }
LAB_0359c890:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

