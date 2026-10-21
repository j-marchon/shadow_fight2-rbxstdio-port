// OLKKAIFGGAK$$CBGCMJCJJKP @ RVA 0x34F5F84

bool OLKKAIFGGAK__CBGCMJCJJKP
               (OLKKAIFGGAK_o *__this,ECENNHNBAME_o *OCFNILDEHHP,int32_t OAFGMHOFEKM,
               bool LGJEEEFEAKB,int32_t KGJLIPJNNKB,MethodInfo *method)

{
  bool bVar1;
  MCIBPLJEFLJ_o *__this_00;
  PJKHAJKEHEL_o *pPVar2;
  MMDPNDAECII_o *pMVar3;
  OPNFCOGALLI_o *pOVar4;
  
  pPVar2 = (__this->fields).FAPMJJBOFEF;
  if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
    if ((pPVar2->fields).KBMOPPJOMKC == false) {
      return false;
    }
    pMVar3 = (__this->fields).GJLEPEPAOKD;
    if (pMVar3 != (MMDPNDAECII_o *)0x0) {
      if ((pMVar3->fields).BNHJIKJAHHF != false) {
        return false;
      }
      if (OAFGMHOFEKM == 0) {
        pOVar4 = (__this->fields).OAKOFJJIOFF;
        if (pOVar4 == (OPNFCOGALLI_o *)0x0) {
          OAFGMHOFEKM = 1;
        }
        else {
          OAFGMHOFEKM = (pOVar4->fields).DMJAJGGGHPF;
        }
      }
      __this_00 = (__this->fields).NKOKFFDMNJF;
      if (((__this_00 != (MCIBPLJEFLJ_o *)0x0) &&
          (MCIBPLJEFLJ__HINGLOIAMHJ(__this_00,(MethodInfo *)0x0),
          OCFNILDEHHP != (ECENNHNBAME_o *)0x0)) &&
         (pOVar4 = (__this->fields).OAKOFJJIOFF, pOVar4 != (OPNFCOGALLI_o *)0x0)) {
        bVar1 = OPNFCOGALLI__NAFDIFCGJBK
                          (pOVar4,OCFNILDEHHP,OAFGMHOFEKM,(OCFNILDEHHP->fields).HEFBBDINLMN == false
                           ,LGJEEEFEAKB,KGJLIPJNNKB,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

