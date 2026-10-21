// KKLJIDJBFEI$$HAGMEEKBHFF @ RVA 0x3147800

void KKLJIDJBFEI__HAGMEEKBHFF
               (KKLJIDJBFEI_o *__this,int32_t MAOLKFCJGLD,int32_t HPPAGNLEOEJ,
               PIADCKMDDAK_o *GFPLANGLAKN,int32_t HPACPFLKHPK,
               System_Collections_Generic_List_IHMIMECHIAN__o *OBLIJEFDJGN,
               System_Collections_Generic_List_BJEFHIBMHEJ__o *GJBLBEALOBO,bool EOLGPJMKFNA,
               int32_t FNLILHMAONM,MethodInfo *method)

{
  KJNCNBJIJPC_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *__this_02;
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *__this_03;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_0456678d & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_IHDGMKMILJM__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_AddRange__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_AddRange__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    FUN_01bab630(&StringLiteral_20398);
    DAT_0456678d = 1;
  }
  __this_00 = (KJNCNBJIJPC_o *)thunk_FUN_01bda818(KJNCNBJIJPC_TypeInfo);
  KJNCNBJIJPC___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (KJNCNBJIJPC_o *)0x0) {
    (__this_00->fields).OLGJBKMCGIC = MAOLKFCJGLD;
    (__this_00->fields).OJBIFDEEBNO = HPPAGNLEOEJ;
    if (GFPLANGLAKN != (PIADCKMDDAK_o *)0x0) {
      if (0 < (GFPLANGLAKN->fields).GDKPGIBMFPA) {
        __this_01 = (__this_00->fields).DDEAFMPDPBJ;
        if (__this_01 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
        goto LAB_032479a4;
        Google_Protobuf_Collections_RepeatedField<object>__Add
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                   (Il2CppObject *)GFPLANGLAKN,
                   Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
      }
      __this_02 = (__this_00->fields).EACBGCPPLBO;
      if (__this_02 != (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0) {
        Google_Protobuf_Collections_RepeatedField<object>__AddRange
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,
                   (System_Collections_Generic_IEnumerable_T__o *)OBLIJEFDJGN,
                   Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_AddRange__);
        __this_03 = (__this_00->fields).KELNJLBBHEC;
        if (__this_03 != (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)0x0) {
          Google_Protobuf_Collections_RepeatedField<object>__AddRange
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_03,
                     (System_Collections_Generic_IEnumerable_T__o *)GJBLBEALOBO,
                     Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_AddRange__);
          (__this_00->fields).HFNMLHEEAJM = EOLGPJMKFNA;
          (__this_00->fields).GAGJCDGEGBL = FNLILHMAONM;
          BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                        thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
          System_Action<object>___ctor();
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this,StringLiteral_20398,
                     (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_032479a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

