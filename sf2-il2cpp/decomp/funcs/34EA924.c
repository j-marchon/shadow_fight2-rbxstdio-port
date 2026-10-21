// OLKKAIFGGAK$$GMBBOANEBJJ @ RVA 0x34EA924

OLKKAIFGGAK_o *
OLKKAIFGGAK__GMBBOANEBJJ(OLKKAIFGGAK_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  int iVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  OLKKAIFGGAK_o *pOVar4;
  undefined8 uVar5;
  int32_t index;
  MethodInfo *in_x3;
  System_Collections_Generic_List_OIGAJAKPPEO__o *DDMCEGBDIAG;
  int32_t local_24 [9];
  
code_r0x035ea924:
  if ((DAT_045687f1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9160);
    DAT_045687f1 = 1;
  }
  switch(ACCIHBHMFPN) {
  case 1:
    goto switchD_035ea9b4_caseD_1;
  case 2:
    return (__this->fields).BPJMMBGIMNC;
  case 3:
    return (__this->fields).NFMBPIPEKGF;
  case 4:
    DDMCEGBDIAG = (__this->fields).MPLCPGJEHPG;
    if (DDMCEGBDIAG != (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0) {
      iVar1 = (DDMCEGBDIAG->fields)._size;
      if (iVar1 == 0) goto LAB_035eaa90;
      index = iVar1 + -1;
      goto LAB_035ea9e4;
    }
    break;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24[0] = ACCIHBHMFPN;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,local_24);
    if (args != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
        uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar5,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items,pIVar2);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_9160,args,(MethodInfo *)0x0);
      goto LAB_035eaa90;
    }
    break;
  case 6:
    pOVar4 = (__this->fields).NFMBPIPEKGF;
    if (pOVar4 != (OLKKAIFGGAK_o *)0x0) goto code_r0x035eaab0;
    pOVar4 = (__this->fields).BPJMMBGIMNC;
    if (((pOVar4 != (OLKKAIFGGAK_o *)0x0) &&
        (DDMCEGBDIAG = (pOVar4->fields).MPLCPGJEHPG,
        DDMCEGBDIAG != (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0)) &&
       (iVar1 = (DDMCEGBDIAG->fields)._size, 0 < iVar1)) {
      if (iVar1 != 1) {
        pOVar4 = OLKKAIFGGAK__LCKIEKIOJFJ(__this,__this,DDMCEGBDIAG,in_x3);
        return pOVar4;
      }
      index = 0;
LAB_035ea9e4:
      pOVar4 = (OLKKAIFGGAK_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)DDMCEGBDIAG,index,
                          Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Item__);
      return pOVar4;
    }
LAB_035eaa90:
    __this = (OLKKAIFGGAK_o *)0x0;
switchD_035ea9b4_caseD_1:
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
code_r0x035eaab0:
  ACCIHBHMFPN = 6;
  __this = pOVar4;
  goto code_r0x035ea924;
}

