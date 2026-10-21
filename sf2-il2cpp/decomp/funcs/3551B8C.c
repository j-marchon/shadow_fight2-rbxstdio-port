// LEGDPJHPEOB$$IPJIBPNKEIE @ RVA 0x3551B8C

void LEGDPJHPEOB__IPJIBPNKEIE
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *CBIGMIHGDFO,MethodInfo *method)

{
  char cVar1;
  bool bVar2;
  uint32_t uVar3;
  int __this_00;
  System_String_o *KGLJICLJHEL;
  JMDPBFOCHHP_o *pJVar4;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar5;
  JMDPBFOCHHP_FNILDHLJBBJ_o *pJVar6;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_01;
  Il2CppObject *pIVar7;
  int64_t *__this_02;
  System_Object_array *args;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  System_String_o *s;
  System_Enum_o local_50;
  int32_t local_40;
  undefined4 local_34;
  
  if ((DAT_04568b3c & 1) == 0) {
    FUN_01bab630(&DPLBMJODBEK_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10698);
    FUN_01bab630(&StringLiteral_5306);
    FUN_01bab630(&StringLiteral_2761);
    FUN_01bab630(&StringLiteral_10697);
    FUN_01bab630(&StringLiteral_12025);
    FUN_01bab630(&StringLiteral_7346);
    FUN_01bab630(&StringLiteral_5750);
    FUN_01bab630(&StringLiteral_8690);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_8673);
    FUN_01bab630(&StringLiteral_12374);
    FUN_01bab630(&StringLiteral_6717);
    FUN_01bab630(&StringLiteral_2799);
    FUN_01bab630(&StringLiteral_7340);
    FUN_01bab630(&StringLiteral_5410);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_5304);
    FUN_01bab630(&StringLiteral_10580);
    __this = (LEGDPJHPEOB_o *)FUN_01bab630(&StringLiteral_1567);
    DAT_04568b3c = 1;
  }
  local_34 = 0;
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0365229c;
  s = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  KGLJICLJHEL = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  __this = (LEGDPJHPEOB_o *)0x0;
  if (pJVar4 == (JMDPBFOCHHP_o *)0x0) goto LAB_0365229c;
  pJVar5 = JMDPBFOCHHP__DIFLKMKBENA(pJVar4,KGLJICLJHEL,false,(MethodInfo *)0x0);
  if (pJVar5 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    __this = (LEGDPJHPEOB_o *)0x0;
    if (args == (System_Object_array *)0x0) goto LAB_0365229c;
    if ((KGLJICLJHEL != (System_String_o *)0x0) &&
       (lVar8 = thunk_FUN_01bda71c(KGLJICLJHEL,(((args->obj).klass)->_1).element_class), lVar8 == 0)
       ) goto LAB_036522a4;
    if ((int)args->max_length == 0) goto LAB_036522a0;
    args->m_Items[0] = (Il2CppObject *)KGLJICLJHEL;
    thunk_FUN_01c20e04(args->m_Items,KGLJICLJHEL);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar10 = &StringLiteral_10697;
    goto LAB_03652278;
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(s,(MethodInfo *)0x0);
  if (uVar3 < 0x4f780123) {
    if (uVar3 < 0x130e7e1e) {
      if (uVar3 == 0xfe07306) {
        bVar2 = System_String__op_Equality(s,StringLiteral_9327,(MethodInfo *)0x0);
        if (bVar2) {
          __this = (LEGDPJHPEOB_o *)0x1;
          if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
            __this = (LEGDPJHPEOB_o *)(pJVar5->fields).JIJLBFGKNJK;
            goto LAB_036521fc;
          }
          goto LAB_0365229c;
        }
      }
      else if (uVar3 == 0x118c9d61) {
        bVar2 = System_String__op_Equality(s,StringLiteral_12025,(MethodInfo *)0x0);
        if (bVar2) {
          cVar1 = (pJVar5->fields).PCDOKDMDNMB;
LAB_036520c0:
          __this = (LEGDPJHPEOB_o *)0x1;
          puVar10 = &StringLiteral_1567;
          if (cVar1 != '\0') {
            puVar10 = &StringLiteral_1606;
          }
          if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
            __this = (LEGDPJHPEOB_o *)*puVar10;
            goto LAB_036521fc;
          }
          goto LAB_0365229c;
        }
      }
      else if ((uVar3 == 0x130e7e1d) &&
              (bVar2 = System_String__op_Equality(s,StringLiteral_2761,(MethodInfo *)0x0), bVar2)) {
        __this_00 = (int)pJVar5 + 0x3c;
LAB_03652068:
        __this = (LEGDPJHPEOB_o *)System_Int32__ToString(__this_00,(MethodInfo *)0x0);
joined_r0x036521f4:
        if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
LAB_036521fc:
          (CBIGMIHGDFO->fields).HPACPFLKHPK = (System_String_o *)__this;
          thunk_FUN_01c20e04(&CBIGMIHGDFO->fields);
          return;
        }
        goto LAB_0365229c;
      }
    }
    else if (uVar3 < 0x43804cd4) {
      if (uVar3 == 0x22e1f2f7) {
        bVar2 = System_String__op_Equality(s,StringLiteral_2799,(MethodInfo *)0x0);
        if (bVar2) {
          __this = (LEGDPJHPEOB_o *)0x1;
          if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
            __this = (LEGDPJHPEOB_o *)(pJVar5->fields).JMGIACHBIKG;
            goto LAB_036521fc;
          }
          goto LAB_0365229c;
        }
      }
      else if ((uVar3 == 0x43804cd3) &&
              (bVar2 = System_String__op_Equality(s,StringLiteral_5306,(MethodInfo *)0x0), bVar2)) {
        __this = (LEGDPJHPEOB_o *)0x1;
        if (CBIGMIHGDFO == (MMFIDKMDADC_o *)0x0) goto LAB_0365229c;
        __this = (LEGDPJHPEOB_o *)(pJVar5->fields).IEOMJEPNIBB;
        goto LAB_036521fc;
      }
    }
    else if (uVar3 == 0x43cf37cb) {
      bVar2 = System_String__op_Equality(s,StringLiteral_5750,(MethodInfo *)0x0);
      if (bVar2) {
        __this_02 = &(pJVar5->fields).CEGNAMELGID;
LAB_036521ec:
        __this = (LEGDPJHPEOB_o *)System_Int64__ToString((int64_t)__this_02,(MethodInfo *)0x0);
        goto joined_r0x036521f4;
      }
    }
    else if ((uVar3 == 0x4f780122) &&
            (bVar2 = System_String__op_Equality(s,StringLiteral_6717,(MethodInfo *)0x0), bVar2)) {
      __this_00 = (int)pJVar5 + 0x38;
      goto LAB_03652068;
    }
  }
  else if (uVar3 < 0x8a74d38f) {
    if (uVar3 < 0x590ca79b) {
      if (uVar3 == 0x558ae6be) {
        bVar2 = System_String__op_Equality(s,StringLiteral_8690,(MethodInfo *)0x0);
        if (bVar2) {
          local_50.klass = (System_Enum_c *)DPLBMJODBEK_TypeInfo;
          local_50.monitor = (void *)0xffffffffffffffff;
          local_40 = (pJVar5->fields).KMKNJMEDEAH;
          __this = (LEGDPJHPEOB_o *)System_Enum__ToString(&local_50,(MethodInfo *)0x0);
          goto joined_r0x036521f4;
        }
      }
      else if ((uVar3 == 0x590ca79a) &&
              (bVar2 = System_String__op_Equality(s,StringLiteral_7340,(MethodInfo *)0x0), bVar2)) {
        __this = (LEGDPJHPEOB_o *)0x1;
        if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
          __this = (LEGDPJHPEOB_o *)(pJVar5->fields).KPDPJONADPJ;
          goto LAB_036521fc;
        }
        goto LAB_0365229c;
      }
    }
    else if (uVar3 == 0x8a74d38e) {
      bVar2 = System_String__op_Equality(s,StringLiteral_7346,(MethodInfo *)0x0);
      if (bVar2) {
        __this = (LEGDPJHPEOB_o *)0x1;
        if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
          __this = (LEGDPJHPEOB_o *)(pJVar5->fields).IEAEDGLMPPK;
          goto LAB_036521fc;
        }
        goto LAB_0365229c;
      }
    }
    else if ((uVar3 == 0x66de7a09) &&
            (bVar2 = System_String__op_Equality(s,StringLiteral_5304,(MethodInfo *)0x0), bVar2)) {
      __this = (LEGDPJHPEOB_o *)0x1;
      if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
        __this = (LEGDPJHPEOB_o *)(pJVar5->fields).BPCADJLKKGA;
        goto LAB_036521fc;
      }
      goto LAB_0365229c;
    }
  }
  else if (uVar3 < 0xd09a3c90) {
    if (uVar3 == 0xa56bc057) {
      bVar2 = System_String__op_Equality(s,StringLiteral_5410,(MethodInfo *)0x0);
      if (bVar2) {
        __this = (LEGDPJHPEOB_o *)0x1;
        if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
          __this = (LEGDPJHPEOB_o *)(pJVar5->fields).KIDAPFADKEE;
          goto LAB_036521fc;
        }
        goto LAB_0365229c;
      }
    }
    else if ((uVar3 == 0xd09a3c8f) &&
            (bVar2 = System_String__op_Equality(s,StringLiteral_10580,(MethodInfo *)0x0), bVar2)) {
      cVar1 = (pJVar5->fields).AIEJIFADLHH;
      goto LAB_036520c0;
    }
  }
  else if (uVar3 == 0xd6195a6e) {
    bVar2 = System_String__op_Equality(s,StringLiteral_12374,(MethodInfo *)0x0);
    if (bVar2) {
      __this_02 = &(pJVar5->fields).NFKHJPMMNLM;
      goto LAB_036521ec;
    }
  }
  else if ((uVar3 == 0xf53f01eb) &&
          (bVar2 = System_String__op_Equality(s,StringLiteral_8673,(MethodInfo *)0x0), bVar2)) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    __this = (LEGDPJHPEOB_o *)0x0;
    if (pJVar4 == (JMDPBFOCHHP_o *)0x0) goto LAB_0365229c;
    pJVar6 = JMDPBFOCHHP__OJOIAONADNG(pJVar4,(pJVar5->fields).LEJBNEIJJIF,(MethodInfo *)0x0);
    local_34 = 0xffffffff;
    if ((pJVar6 != (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) && ((pJVar6->fields).HNGIBIJJKAP != false)) {
      __this_01 = (pJVar6->fields).GFBNJPMOEKD;
      __this = (LEGDPJHPEOB_o *)0x0;
      if (__this_01 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) goto LAB_0365229c;
      pIVar7 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,0,
                          Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
      __this = (LEGDPJHPEOB_o *)0x0;
      if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0365229c;
      local_34 = *(undefined4 *)&pIVar7[1].monitor;
    }
    __this_00 = (int)&local_34;
    goto LAB_03652068;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  __this = (LEGDPJHPEOB_o *)0x0;
  if (args != (System_Object_array *)0x0) {
    if ((s != (System_String_o *)0x0) &&
       (lVar8 = thunk_FUN_01bda71c(s,(((args->obj).klass)->_1).element_class), lVar8 == 0)) {
LAB_036522a4:
      uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar9,0);
    }
    if ((int)args->max_length == 0) {
LAB_036522a0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = (Il2CppObject *)s;
    thunk_FUN_01c20e04(args->m_Items,s);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar10 = &StringLiteral_10698;
LAB_03652278:
    UnityEngine_Debug__LogErrorFormat((System_String_o *)*puVar10,args,(MethodInfo *)0x0);
    return;
  }
LAB_0365229c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

