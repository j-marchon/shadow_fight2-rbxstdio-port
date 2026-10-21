// BEPJMNAHCAD$$FNKPNLPLDLI @ RVA 0x318A8E8

void BEPJMNAHCAD__FNKPNLPLDLI
               (BEPJMNAHCAD_o *__this,MGNPHCAAEIO_FNHCJBGGHLH_o *OOHHJAFGPII,MethodInfo *method)

{
  MNLIBPAOCLG_o *pMVar1;
  MGNPHCAAEIO_FNHCJBGGHLH_o **ppMVar2;
  MGNPHCAAEIO_FNHCJBGGHLH_o *pMVar3;
  float fVar4;
  
  if (OOHHJAFGPII == (MGNPHCAAEIO_FNHCJBGGHLH_o *)0x0) {
    return;
  }
  ppMVar2 = &(__this->fields).FGINMCCJOLH;
  *ppMVar2 = OOHHJAFGPII;
  (__this->fields).DLEANEAEAFF = true;
  thunk_FUN_01c20e04(ppMVar2);
  pMVar1 = (__this->fields).LIICCFBEOLC;
  if (pMVar1 != (MNLIBPAOCLG_o *)0x0) {
    fVar4 = MNLIBPAOCLG__IIFIHKHDNCM(pMVar1,(MethodInfo *)0x0);
    pMVar3 = *ppMVar2;
    if (pMVar3 != (MGNPHCAAEIO_FNHCJBGGHLH_o *)0x0) {
      if ((pMVar3->fields).NMBDLKFCIPG < fVar4) {
        (pMVar3->fields).NMBDLKFCIPG = fVar4;
      }
      pMVar1 = (__this->fields).LIICCFBEOLC;
      if (pMVar1 != (MNLIBPAOCLG_o *)0x0) {
        fVar4 = MNLIBPAOCLG__EPJCHCHDJCE(pMVar1,(MethodInfo *)0x0);
        (pMVar3->fields).INNAIENKFPP = fVar4;
        pMVar3 = *ppMVar2;
        if (pMVar3 != (MGNPHCAAEIO_FNHCJBGGHLH_o *)0x0) {
          (pMVar3->fields).ELDLAOMMHEJ = 0;
          (pMVar3->fields).GHIDOLCAFAE = (pMVar3->fields).INNAIENKFPP;
          (__this->fields).OFPNGACGGLK = (pMVar3->fields).EOOHODKJDHH;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

