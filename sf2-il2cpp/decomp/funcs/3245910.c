// CHDGOFBHAFI$$FHJKIMLIDMP @ RVA 0x3245910

void CHDGOFBHAFI__FHJKIMLIDMP(CHDGOFBHAFI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  int32_t OILECKFDMDB;
  bool bVar1;
  Il2CppObject *pIVar2;
  CNLGMNIEGFG_o *pCVar3;
  NGOFOPOGBMJ_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  AADKBCFCLKK_o *pAVar4;
  Il2CppClass *method_00;
  MethodInfo *in_x3;
  KDADMJGPAOM_o *pKVar5;
  
  if ((DAT_045670b6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJHLANCHFPC>__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    FUN_01bab630(&StringLiteral_20401);
    FUN_01bab630(&StringLiteral_5869);
    DAT_045670b6 = 1;
  }
  if ((IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) ||
     (bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0), !bVar1)) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_5869,(MethodInfo *)0x0);
    return;
  }
  pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                     (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OJHLANCHFPC>__);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pAVar4 = pIVar2[1].monitor;
    if (pAVar4 == (AADKBCFCLKK_o *)0x0) goto LAB_03345acc;
    if (0 < (pAVar4->fields).AMKHEHFFAKJ) {
      pKVar5 = (pAVar4->fields).LHFLMBNKPHF;
      if (pKVar5 == (KDADMJGPAOM_o *)0x0) {
LAB_03345acc:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      OILECKFDMDB = (pKVar5->fields).IILCHFKCEEH;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pCVar3 = MGNPHCAAEIO__MJDCGINJMOP(OILECKFDMDB,false,(MethodInfo *)0x0);
      if (pCVar3 == (CNLGMNIEGFG_o *)0x0) {
        __this_00 = (NGOFOPOGBMJ_o *)thunk_FUN_01bda818(NGOFOPOGBMJ_TypeInfo);
        NGOFOPOGBMJ___ctor(__this_00,(MethodInfo *)0x0);
        if ((pIVar2[1].monitor != (void *)0x0) && (__this_00 != (NGOFOPOGBMJ_o *)0x0)) {
          (__this_00->fields).GDKPGIBMFPA = *(int64_t *)((long)pIVar2[1].monitor + 0x18);
          __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
          if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
            KDPDBGNOFEN__KLNMLOOCAAO
                      ((KDPDBGNOFEN_o *)__this_01,StringLiteral_20401,
                       (Google_Protobuf_IMessage_o *)__this_00,(System_Action_KEFHDOHHHML__o *)0x0,
                       0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
        goto LAB_03345acc;
      }
      pAVar4 = pIVar2[1].monitor;
    }
    method_00 = pIVar2[2].klass;
    CHDGOFBHAFI__BNPLDAHKIED(__this,pAVar4,(PGICCMFLDPI_o *)method_00,in_x3);
    pAVar4 = (__this->fields).AABMLCNHHPN;
    if (pAVar4 != (AADKBCFCLKK_o *)0x0) {
      CHDGOFBHAFI__BNMEADIMLGA(__this,(pAVar4->fields).AMKHEHFFAKJ,(MethodInfo *)method_00);
      return;
    }
  }
  return;
}

