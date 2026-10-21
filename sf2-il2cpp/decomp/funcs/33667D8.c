// CJFBGEEIPBA$$JHMPJEBHKMP @ RVA 0x33667D8

void CJFBGEEIPBA__JHMPJEBHKMP
               (CJFBGEEIPBA_o *__this,int32_t MOLGLNLBAIB,System_Action_NLFLMJPNOLF__o *IELDNEAAPBE,
               MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  NLFLMJPNOLF_o *pNVar3;
  EEOMEMBBGNA_o *__this_00;
  int64_t PEJIFIIDFMM;
  MGDJPGGPDJI_o *pMVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  VirtualInvokeData *pVVar7;
  Google_Protobuf_WellKnownTypes_Int32Value_o *__this_01;
  KKLJIDJBFEI_o *__this_02;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  System_Action_object__o *IELDNEAAPBE_00;
  System_Action_NLFLMJPNOLF__o *method_00;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_03;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_String_o *pSVar11;
  
  method_00 = IELDNEAAPBE;
  if ((DAT_04567abf & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_CJFBGEEIPBA_ABOIIKKDKCC__);
    FUN_01bab630(&Method_CJFBGEEIPBA_DBLCCGALPLM__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int32Value_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_16735);
    FUN_01bab630(&StringLiteral_17820);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_17037);
    DAT_04567abf = 1;
  }
  pNVar3 = CJFBGEEIPBA__OOPDPBAIFCJ(__this,MOLGLNLBAIB,(MethodInfo *)method_00);
  if (pNVar3 == (NLFLMJPNOLF_o *)0x0) {
    __this_01 = (Google_Protobuf_WellKnownTypes_Int32Value_o *)
                thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int32Value_TypeInfo);
    Google_Protobuf_WellKnownTypes_Int32Value___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Google_Protobuf_WellKnownTypes_Int32Value_o *)0x0) {
      (__this_01->fields).value_ = MOLGLNLBAIB;
      __this_02 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (KKLJIDJBFEI_o *)0x0) {
        KDPDBGNOFEN__KLNMLOOCAAO
                  ((KDPDBGNOFEN_o *)__this_02,StringLiteral_17037,
                   (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,0.0,
                   (Il2CppObject *)IELDNEAAPBE,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    __this_03 = (pNVar3->fields).MABPCBMOECE;
    if (((__this_03 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) &&
        (PEJIFIIDFMM = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                                 (__this_03,0,
                                  Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__)
        , __this_00 != (EEOMEMBBGNA_o *)0x0)) &&
       (pMVar4 = EEOMEMBBGNA__MPCGKMBAHHO(__this_00,PEJIFIIDFMM,(MethodInfo *)0x0),
       pMVar4 != (MGDJPGGPDJI_o *)0x0)) {
      pSVar11 = (pMVar4->fields).LLBEKLPKDHK;
      pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar6 = FUN_01bab718(string___TypeInfo,1);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        *(undefined8 *)(lVar6 + 0x20) = pSVar11;
        thunk_FUN_01c20e04((undefined8 *)(lVar6 + 0x20),pSVar11);
        uVar2 = StringLiteral_17820;
        if (pIVar5 != (Il2CppObject *)0x0) {
          pIVar8 = pIVar5->klass;
          uVar1._0_1_ = (pIVar8->_2).rank;
          uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
          uVar9 = (ulong)uVar1;
          if (uVar9 != 0) {
            piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar7 = pIVar8->vtable + (*piVar10 + 0xc);
                goto LAB_03466ad4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03466ad4:
          pSVar11 = (System_String_o *)(*pVVar7->methodPtr)(pIVar5,uVar2,lVar6,pVVar7->method);
          IELDNEAAPBE_00 =
               (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          JJPNLEPEAFM__JNDPLPKDPCP
                    (StringLiteral_17850,pSVar11,StringLiteral_16735,StringLiteral_3640,
                     IELDNEAAPBE_00,1,0,false,false,StringLiteral_1,false,true,true,true,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

