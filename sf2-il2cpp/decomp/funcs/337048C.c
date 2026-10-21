// KEFHDOHHHML$$.ctor @ RVA 0x337048C

void KEFHDOHHHML___ctor(KEFHDOHHHML_o *__this,System_String_o *KGLJICLJHEL,
                       Google_Protobuf_IMessage_o *HJEKJFLBKDB,int32_t CEOLOKFCKIG,
                       System_String_o *NONPLOOOOAG,int32_t BMBCPGEOCCJ,Il2CppObject *IMMNELPBGIF,
                       MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_IMessage_o **ppGVar2;
  System_String_o **ppSVar3;
  Il2CppObject **ppIVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  System_String_o *pSVar6;
  System_Object_array *args;
  long lVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_04567b16 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ICOEHFKOMGO_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_2094);
    DAT_04567b16 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._GOBNFBDNIHO_k__BackingField = KGLJICLJHEL;
  thunk_FUN_01c20e04(&__this->fields,KGLJICLJHEL);
  ppGVar2 = &(__this->fields)._KJKKPKOGOHD_k__BackingField;
  *ppGVar2 = HJEKJFLBKDB;
  thunk_FUN_01c20e04(ppGVar2,HJEKJFLBKDB);
  (__this->fields)._JOCIAOOICNM_k__BackingField = CEOLOKFCKIG;
  ppSVar3 = &(__this->fields)._IDFLEFCOAJP_k__BackingField;
  *ppSVar3 = NONPLOOOOAG;
  thunk_FUN_01c20e04(ppSVar3,NONPLOOOOAG);
  ppIVar4 = &(__this->fields)._GOFDPKCMIJO_k__BackingField;
  *ppIVar4 = IMMNELPBGIF;
  (__this->fields)._CNAECKJLKEA_k__BackingField = BMBCPGEOCCJ;
  thunk_FUN_01c20e04(ppIVar4,IMMNELPBGIF);
  if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar5 = ICOEHFKOMGO__BKHDOCFLEPE(KGLJICLJHEL,(MethodInfo *)0x0);
  (__this->fields)._DAOJDNDBECB_k__BackingField = pSVar5;
  thunk_FUN_01c20e04();
  if ((CEOLOKFCKIG == 0) || (bVar1 = KEFHDOHHHML__GCCCNCDNDFM(__this,method_00), bVar1)) {
    return;
  }
  pSVar6 = KEFHDOHHHML__KGHBPJNEKMA(__this,method_01);
  pSVar6 = System_String__Concat(pSVar6,StringLiteral_2094,(MethodInfo *)0x0);
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((KGLJICLJHEL != (System_String_o *)0x0) &&
     (lVar7 = thunk_FUN_01bda71c(KGLJICLJHEL,(((args->obj).klass)->_1).element_class), lVar7 == 0))
  {
LAB_034706d4:
    uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar9,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)KGLJICLJHEL;
    thunk_FUN_01c20e04(args->m_Items,KGLJICLJHEL);
    pSVar8 = KEFHDOHHHML__MMKHHPBIDDN((__this->fields)._JOCIAOOICNM_k__BackingField,method_02);
    if ((pSVar8 != (System_String_o *)0x0) &&
       (lVar7 = thunk_FUN_01bda71c(pSVar8,(((args->obj).klass)->_1).element_class), lVar7 == 0))
    goto LAB_034706d4;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pSVar8;
      thunk_FUN_01c20e04(args->m_Items + 1,pSVar8);
      if ((NONPLOOOOAG != (System_String_o *)0x0) &&
         (lVar7 = thunk_FUN_01bda71c(NONPLOOOOAG,(((args->obj).klass)->_1).element_class),
         lVar7 == 0)) goto LAB_034706d4;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)NONPLOOOOAG;
        thunk_FUN_01c20e04(args->m_Items + 2,NONPLOOOOAG);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(pSVar6,args,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

