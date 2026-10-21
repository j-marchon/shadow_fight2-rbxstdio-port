// BEPJMNAHCAD$$GIENGNEGHPJ @ RVA 0x3189440

void BEPJMNAHCAD__GIENGNEGHPJ(BEPJMNAHCAD_o *__this,NHBBOEHHEKG_o *LBKOHHHPNIP,MethodInfo *method)

{
  MNLIBPAOCLG_o *pMVar1;
  CNDPAJOLKFN_o *CJNHFNHJHPE;
  IEFEBEDLHNN_o *pIVar2;
  UnityEngine_GameObject_o *JJHEGPBBMLG;
  MNLIBPAOCLG_o **ppMVar3;
  NHBBOEHHEKG_o **ppNVar4;
  
  if ((DAT_045669fe & 1) == 0) {
    FUN_01bab630(&MNLIBPAOCLG_TypeInfo);
    DAT_045669fe = 1;
  }
  JJHEGPBBMLG = (__this->fields).LDAKOINICNJ;
  pMVar1 = (MNLIBPAOCLG_o *)thunk_FUN_01bda818(MNLIBPAOCLG_TypeInfo);
  MNLIBPAOCLG___ctor(pMVar1,JJHEGPBBMLG,(MethodInfo *)0x0);
  ppMVar3 = &(__this->fields).LIICCFBEOLC;
  *ppMVar3 = pMVar1;
  thunk_FUN_01c20e04(ppMVar3,pMVar1);
  pIVar2 = (__this->fields).PHILCIHBBCB;
  if (pIVar2 != (IEFEBEDLHNN_o *)0x0) {
    (pIVar2->fields).DDMMFMCNPON = 0.0;
    pIVar2 = (__this->fields).NHAIFIDONLG;
    if (pIVar2 != (IEFEBEDLHNN_o *)0x0) {
      (pIVar2->fields).DDMMFMCNPON = 0.0;
      ppNVar4 = &(__this->fields).CNHHLPPHNCO;
      *ppNVar4 = LBKOHHHPNIP;
      thunk_FUN_01c20e04(ppNVar4,LBKOHHHPNIP);
      pMVar1 = (__this->fields).LIICCFBEOLC;
      if (pMVar1 != (MNLIBPAOCLG_o *)0x0) {
        MNLIBPAOCLG__GIENGNEGHPJ(pMVar1,*ppNVar4,(MethodInfo *)0x0);
        if (*ppNVar4 != (NHBBOEHHEKG_o *)0x0) {
          CJNHFNHJHPE = NHBBOEHHEKG__POHCCECOMPF(*ppNVar4,(MethodInfo *)0x0);
          pIVar2 = (__this->fields).PHILCIHBBCB;
          if (pIVar2 != (IEFEBEDLHNN_o *)0x0) {
            IEFEBEDLHNN__AGOEHONIGBH(pIVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
            pIVar2 = (__this->fields).PHILCIHBBCB;
            if (pIVar2 != (IEFEBEDLHNN_o *)0x0) {
              IEFEBEDLHNN__LCOGNIMMOFL(pIVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
              pIVar2 = (__this->fields).NHAIFIDONLG;
              if (pIVar2 != (IEFEBEDLHNN_o *)0x0) {
                IEFEBEDLHNN__AGOEHONIGBH(pIVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
                pIVar2 = (__this->fields).NHAIFIDONLG;
                if (pIVar2 != (IEFEBEDLHNN_o *)0x0) {
                  IEFEBEDLHNN__LCOGNIMMOFL(pIVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
                  (__this->fields).CDCDGKDNDAL = 0.0;
                  (__this->fields).ANNBPCDGAHJ = false;
                  (__this->fields).NLIBJEPHLNK = 0.0;
                  (__this->fields).MHNMALPDJFL = false;
                  (__this->fields).OFPNGACGGLK = 0;
                  (__this->fields).DLEANEAEAFF = false;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

