// ACHLOMELAJE$$OIMBEHKPFIC @ RVA 0x305CEA4

void ACHLOMELAJE__OIMBEHKPFIC
               (ACHLOMELAJE_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,bool FCAEECAAGGA,bool MJDICHGKPGE,
               bool BKMIOJJDPPH,bool NLAAELNFKEI,int32_t GEOFJHKICMD,MethodInfo *method)

{
  ACHLOMELAJE_MDHCBOFHAEL_o *__this_00;
  OLKPEJMEBPJ_o *pOVar1;
  OOMHDDBCBJP_o *pOVar2;
  OOMHDDBCBJP_o **ppOVar3;
  MethodInfo *pMVar4;
  
  pMVar4 = (MethodInfo *)(ulong)FCAEECAAGGA;
  if ((DAT_04565ea1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11424);
    DAT_04565ea1 = 1;
  }
  if (DBIAAJNKHLH == (DNELIPCHKLK_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_11424,(MethodInfo *)0x0);
    return;
  }
  if (!MJDICHGKPGE) {
    ACHLOMELAJE__CIAADMKJGLF(__this,DBIAAJNKHLH,pMVar4);
    return;
  }
  ACHLOMELAJE__BGGEAOHJAJL(__this,DBIAAJNKHLH,pMVar4);
  pMVar4 = (MethodInfo *)0x0;
  CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
  if (FCAEECAAGGA) {
    __this_00 = (__this->fields).KBCAIBPDIKB;
    if (__this_00 == (ACHLOMELAJE_MDHCBOFHAEL_o *)0x0) goto LAB_0315d0c4;
    pOVar1 = ACHLOMELAJE_MDHCBOFHAEL__KNMENIBLFGF(__this_00,DBIAAJNKHLH,pMVar4);
    if (pOVar1 != (OLKPEJMEBPJ_o *)0x0) {
      OLKPEJMEBPJ__PPCDKKPGEGI(pOVar1,DBIAAJNKHLH,(MethodInfo *)0x0);
      OLKPEJMEBPJ__NMPBPALANND(pOVar1,BKMIOJJDPPH,(MethodInfo *)0x0);
      OLKPEJMEBPJ__DPLIHJEANGE(pOVar1,NLAAELNFKEI,(MethodInfo *)0x0);
      OLKPEJMEBPJ__MJDAFBEALIP(pOVar1,GEOFJHKICMD,(MethodInfo *)0x0);
      return;
    }
  }
  pOVar1 = ACHLOMELAJE__HBPLGHPBMGE(__this,DBIAAJNKHLH,pMVar4);
  if (pOVar1 != (OLKPEJMEBPJ_o *)0x0) {
    OLKPEJMEBPJ__NMPBPALANND(pOVar1,BKMIOJJDPPH,(MethodInfo *)0x0);
    OLKPEJMEBPJ__DPLIHJEANGE(pOVar1,NLAAELNFKEI,(MethodInfo *)0x0);
    OLKPEJMEBPJ__MJDAFBEALIP(pOVar1,GEOFJHKICMD,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pOVar2 = NLPJLHOEAOE__JIOEHAPGADN(DBIAAJNKHLH,(MethodInfo *)0x0);
    if (pOVar2 != (OOMHDDBCBJP_o *)0x0) {
      ppOVar3 = &(pOVar1->fields).MIFNFJDIPBL;
      *ppOVar3 = pOVar2;
      thunk_FUN_01c20e04(ppOVar3,pOVar2);
      (pOVar2->fields).LFJPDELEIHG = pOVar1;
      thunk_FUN_01c20e04(&pOVar2->fields,pOVar1);
                    /* WARNING: Could not recover jumptable at 0x0315d0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pOVar2->klass->vtable)._9_GDOLJLANOKC.methodPtr)
                (pOVar2,(pOVar2->klass->vtable)._9_GDOLJLANOKC.method);
      return;
    }
    return;
  }
LAB_0315d0c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

