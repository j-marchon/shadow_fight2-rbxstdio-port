// KKLJIDJBFEI$$LCMKFDELMBB @ RVA 0x31479A8

void KKLJIDJBFEI__LCMKFDELMBB
               (KKLJIDJBFEI_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_InputDialog_HJDIKOKAGJF_o *DHJJPNMOKKP,MethodInfo *method
               )

{
  int32_t CBFBKNECBMP;
  NDPMLPGANCI_o *__this_00;
  BFLFFPLIIFM_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  EKCGNICFDEO_o *JLICGPAEBHN;
  MethodInfo *in_x5;
  ELBBEAGGAOH_o *pEVar1;
  KAMBBJFPLGM_o *pKVar2;
  EOLFEKNCPLM_o *pEVar3;
  GKLPDMLELJF_o *pGVar4;
  
  if ((DAT_0456678e & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&BFLFFPLIIFM_TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_ICFDKPCNHEM__);
    FUN_01bab630(&StringLiteral_19448);
    DAT_0456678e = 1;
  }
  (__this->fields).MIPDMFDHHAP = false;
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    JLICGPAEBHN = (EKCGNICFDEO_o *)0x0;
    NDPMLPGANCI__MMMJCENBINB(__this_00,true,(MethodInfo *)0x0);
    if (DHJJPNMOKKP != (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_HJDIKOKAGJF_o *)0x0) {
      if ((DHJJPNMOKKP->fields).NFGJABFNGHJ == false) {
        __this_01 = (BFLFFPLIIFM_o *)thunk_FUN_01bda818(BFLFFPLIIFM_TypeInfo);
        BFLFFPLIIFM___ctor(__this_01,(MethodInfo *)0x0);
        pEVar1 = (DHJJPNMOKKP->fields).OGFMJIABHHI;
        if ((((pEVar1 != (ELBBEAGGAOH_o *)0x0) &&
             (pKVar2 = (pEVar1->fields).IFDHENIKFKC, pKVar2 != (KAMBBJFPLGM_o *)0x0)) &&
            (pEVar3 = (pKVar2->fields).FLAFELDNABC, pEVar3 != (EOLFEKNCPLM_o *)0x0)) &&
           ((pGVar4 = (pEVar3->fields).MCOPPCNPAHF, pGVar4 != (GKLPDMLELJF_o *)0x0 &&
            (__this_01 != (BFLFFPLIIFM_o *)0x0)))) {
          (__this_01->fields).POLEIDMHDNP = (pGVar4->fields).ANAJGHJEEOC;
          BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                        thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
          System_Action<object>___ctor();
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this,StringLiteral_19448,
                     (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                     (MethodInfo *)0x0);
          return;
        }
      }
      else {
        pEVar1 = (DHJJPNMOKKP->fields).OGFMJIABHHI;
        if (pEVar1 != (ELBBEAGGAOH_o *)0x0) {
          CBFBKNECBMP = (pEVar1->fields).EMNNAEAIMNH;
          if (CBFBKNECBMP == 0) {
            CBFBKNECBMP = -1;
          }
          KKLJIDJBFEI__BCOMIMBOGIM
                    (__this,(pEVar1->fields).CBHDCHDBFGB,JLICGPAEBHN,(pEVar1->fields).KEIBPDJHHBB,
                     CBFBKNECBMP,in_x5);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

