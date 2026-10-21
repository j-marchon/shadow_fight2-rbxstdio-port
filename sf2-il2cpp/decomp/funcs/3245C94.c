// CHDGOFBHAFI$$BNMEADIMLGA @ RVA 0x3245C94

void CHDGOFBHAFI__BNMEADIMLGA(CHDGOFBHAFI_o *__this,int64_t ONDIKKMLEDD,MethodInfo *method)

{
  bool bVar1;
  AADKBCFCLKK_o *IHODMKCBNKJ;
  System_Action_object__o *IELDNEAAPBE;
  NGOFOPOGBMJ_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *in_x4;
  
  if ((DAT_045670ba & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_APJEPMMMMOJ__);
    FUN_01bab630(&Method_CHDGOFBHAFI_FHJKIMLIDMP__);
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    FUN_01bab630(&StringLiteral_20400);
    FUN_01bab630(&StringLiteral_18199);
    FUN_01bab630(&StringLiteral_16973);
    DAT_045670ba = 1;
  }
  IHODMKCBNKJ = (__this->fields).AABMLCNHHPN;
  if (IHODMKCBNKJ == (AADKBCFCLKK_o *)0x0) {
    if (ONDIKKMLEDD != 0) {
      __this_00 = (NGOFOPOGBMJ_o *)thunk_FUN_01bda818(NGOFOPOGBMJ_TypeInfo);
      NGOFOPOGBMJ___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (NGOFOPOGBMJ_o *)0x0) {
        (__this_00->fields).GDKPGIBMFPA = ONDIKKMLEDD;
        __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this_01,StringLiteral_20400,
                     (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                     (MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  else {
    bVar1 = OOBBAGLCFPF__FLMDOPMDKID(IHODMKCBNKJ,(MethodInfo *)0x0);
    if (!bVar1) {
      IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      CHDGOFBHAFI__JBFJCBGGOOP(__this,StringLiteral_16973,StringLiteral_18199,IELDNEAAPBE,in_x4);
      return;
    }
  }
  return;
}

