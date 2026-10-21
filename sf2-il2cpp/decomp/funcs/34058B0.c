// MGNPHCAAEIO$$JDFOFOAEAKD @ RVA 0x34058B0

int32_t MGNPHCAAEIO__JDFOFOAEAKD(MethodInfo *method)

{
  bool bVar1;
  MGNPHCAAEIO_c *pMVar2;
  KKLJIDJBFEI_o *pKVar3;
  int32_t iVar4;
  
  if ((DAT_04568017 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568017 = 1;
  }
  iVar4 = 1;
  bVar1 = IEICNBBBNEJ__KDAGDFGJGKN(true,(MethodInfo *)0x0);
  if (bVar1) {
    pMVar2 = MGNPHCAAEIO_TypeInfo;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      pMVar2 = (MGNPHCAAEIO_c *)thunk_FUN_01ba7564();
    }
    bVar1 = MGNPHCAAEIO__MPGHOPABJNB((MethodInfo *)pMVar2);
    if (bVar1) {
      pMVar2 = MGNPHCAAEIO_TypeInfo;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        pMVar2 = (MGNPHCAAEIO_c *)thunk_FUN_01ba7564();
      }
      bVar1 = MGNPHCAAEIO__PKNDHONBNIF((MethodInfo *)pMVar2);
      if (bVar1) {
        pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar3 == (KKLJIDJBFEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar4 = 3;
        if ((pKVar3->fields).super._MGGBEPKMPCF_k__BackingField != false) {
          iVar4 = 0;
        }
      }
      else {
        iVar4 = 3;
      }
    }
    else {
      iVar4 = 2;
    }
  }
  return iVar4;
}

