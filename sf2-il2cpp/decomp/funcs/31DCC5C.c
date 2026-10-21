// KHIBJFLBJNH$$MAHFCKJGBPP @ RVA 0x31DCC5C

void KHIBJFLBJNH__MAHFCKJGBPP(KHIBJFLBJNH_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int32_t iVar1;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  PKHMIGFEJCL_o **ppPVar2;
  MethodInfo *method_00;
  KKLJIDJBFEI_o *__this_02;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  Il2CppObject *pIVar3;
  
  if ((DAT_04566d20 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_KHIBJFLBJNH_FLEFGBHOBHP__);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_StringValue_TypeInfo);
    FUN_01bab630(&StringLiteral_20462);
    DAT_04566d20 = 1;
  }
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (LEGDPJHPEOB_o *)0x0) {
    ppPVar2 = &(__this_01->fields).AAJBIMFNMBB;
    *ppPVar2 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar2,AAJBIMFNMBB);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_01,(__this->fields).KBMOPEKFNNN,__this_00,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)
                thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_StringValue_TypeInfo);
    Google_Protobuf_WellKnownTypes_StringValue___ctor
              ((Google_Protobuf_WellKnownTypes_StringValue_o *)method_00,(MethodInfo *)0x0);
    if ((__this_00 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) && (method_00 != (MethodInfo *)0x0)) {
      Google_Protobuf_WellKnownTypes_StringValue__set_Value
                ((Google_Protobuf_WellKnownTypes_StringValue_o *)method_00,
                 (__this_00->fields).DFJBJLBLBGB,(MethodInfo *)0x0);
      __this_02 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>
                         (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
      if ((pIVar3 != (Il2CppObject *)0x0) && (__this_02 != (KKLJIDJBFEI_o *)0x0)) {
        iVar1 = KDPDBGNOFEN__KLNMLOOCAAO
                          ((KDPDBGNOFEN_o *)__this_02,StringLiteral_20462,
                           (Google_Protobuf_IMessage_o *)method_00,BLMFLPJJMPF,
                           (float)*(int *)&pIVar3[4].monitor,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (-1 < iVar1) {
          return;
        }
        KHIBJFLBJNH__FLEFGBHOBHP(__this,(KEFHDOHHHML_o *)0x0,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

