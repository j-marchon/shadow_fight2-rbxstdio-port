// KDPDBGNOFEN$$LIENGHMEECH @ RVA 0x34AFC64

void KDPDBGNOFEN__LIENGHMEECH(KDPDBGNOFEN_o *__this,int32_t BMBCPGEOCCJ,MethodInfo *method)

{
  bool bVar1;
  ACAEKBNCODE_o *pAVar2;
  ONPHBGJDFBM_o *__this_00;
  System_Object_array *args;
  long lVar3;
  Il2CppObject *pIVar4;
  MOEEMFAHGPL_PEDENGEGDNI__o *__this_01;
  KEFHDOHHHML_o *JPLEIGKMFDA;
  undefined8 uVar5;
  MethodInfo *method_00;
  System_Action_int__o *pSVar6;
  System_String_o *pSVar7;
  int32_t local_34;
  
  if ((DAT_04568550 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_11266);
    FUN_01bab630(&StringLiteral_11549);
    DAT_04568550 = 1;
  }
  pAVar2 = (__this->fields).PGDGCNKLKMN;
  if (pAVar2 != (ACAEKBNCODE_o *)0x0) {
    __this_00 = ACAEKBNCODE__AOPEMKAGCCD(pAVar2,BMBCPGEOCCJ,(MethodInfo *)0x0);
    if (__this_00 == (ONPHBGJDFBM_o *)0x0) {
      return;
    }
    pAVar2 = (__this->fields).PGDGCNKLKMN;
    if (pAVar2 != (ACAEKBNCODE_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      ACAEKBNCODE__MELCGNHNCDA(pAVar2,BMBCPGEOCCJ,false,(MethodInfo *)0x0);
      NFNBHPOJFNJ__KCBJCLNBGAO((__this_00->fields).LKMJHMMBNAO,(MethodInfo *)0x0);
      bVar1 = KDPDBGNOFEN__DNHGHLJMHHH(__this,(__this_00->fields).LKMJHMMBNAO,method_00);
      if (!bVar1) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
        if (args == (System_Object_array *)0x0) goto LAB_035afe74;
        pSVar7 = (__this_00->fields).LKMJHMMBNAO;
        if ((pSVar7 != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pSVar7,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        {
LAB_035afe7c:
          uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar5,0);
        }
        if ((int)args->max_length == 0) {
LAB_035afe78:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        args->m_Items[0] = (Il2CppObject *)pSVar7;
        thunk_FUN_01c20e04(args->m_Items,pSVar7);
        local_34 = BMBCPGEOCCJ;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        goto LAB_035afe7c;
        if ((uint)args->max_length < 2) goto LAB_035afe78;
        args->m_Items[1] = pIVar4;
        thunk_FUN_01c20e04(args->m_Items + 1,pIVar4);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_11266,args,(MethodInfo *)0x0);
      }
      __this_01 = (__this->fields).DDBFMMHDCBK;
      if (__this_01 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
        JGGEJJLPMNL<object,_Int32Enum>__FLOAPDCEIDB
                  ((JGGEJJLPMNL_TArgs__TEventType__o *)__this_01,9,(Il2CppObject *)0x0,
                   Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
        JPLEIGKMFDA = KEFHDOHHHML__LDKCIHHCHCE
                                ((__this_00->fields).LKMJHMMBNAO,BMBCPGEOCCJ,
                                 (__this_00->fields).KOANCCDDBDA,StringLiteral_11549,
                                 (MethodInfo *)0x0);
        ONPHBGJDFBM__HCBAKFNPGDN(__this_00,JPLEIGKMFDA,(MethodInfo *)0x0);
        pSVar6 = (__this->fields).NDNBEBJGGPF;
        if (pSVar6 != (System_Action_int__o *)0x0) {
          (*(code *)(pSVar6->fields).super.super.invoke_impl)
                    ((pSVar6->fields).super.super.method_code,BMBCPGEOCCJ,
                     (pSVar6->fields).super.super.method);
          return;
        }
      }
    }
  }
LAB_035afe74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

